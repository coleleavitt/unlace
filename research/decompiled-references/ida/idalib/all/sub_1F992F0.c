void __fastcall sub_1F992F0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9)
{
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int8 v14; // bp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-60h]
  char v21; // [rsp+Ch] [rbp-5Ch]
  void *v22; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-50h]

  v9 = a7 & 0x7FFFFFFF;
  sub_9B9C90(a1[2], v9);
  switch ( v9 )
  {
    case 0LL:
      return;
    case 1LL:
    case 3LL:
      goto LABEL_3;
    case 2LL:
      sub_1F952B0((__int64)a1, a9);
LABEL_3:
      sub_1F85840(a1[1], *a1, (__int64)a8, (_QWORD *)a1[2], v10, v11);
      goto LABEL_4;
    case 4LL:
      v13 = HIDWORD(a7) & 0x7FFFFFFF;
      v14 = HIBYTE(a7) >> 7;
      if ( (unsigned int)v13 > 0x40 )
      {
        sub_2205600(&v22, v13, a8, ((unsigned __int64)(unsigned int)v13 + 63) >> 6);
        v21 = v14;
        v20 = v23;
        v19 = v22;
      }
      else
      {
        v20 = HIDWORD(a7) & 0x7FFFFFFF;
        v19 = a8;
        v21 = HIBYTE(a7) >> 7;
      }
      sub_9B9C90(a1[2], v14);
      sub_1F70270((__int64)a1, (__int64)&v19);
      sub_1F85840(a1[1], *a1, a9, (_QWORD *)a1[2], v15, v16);
      sub_9B9C90(a1[2], BYTE3(a7) >> 7);
      if ( v20 > 0x40 )
      {
        if ( v19 )
          operator delete[](v19);
      }
      return;
    case 5LL:
      sub_A53C40((__int64)&v22, (int *)a8);
      sub_1F986C0(a1, (unsigned int *)&v22);
      sub_1F85840(a1[1], *a1, a9, (_QWORD *)a1[2], v17, v18);
      sub_9B9C90(a1[2], BYTE3(a7) >> 7);
      if ( (unsigned int)v22 > 1 )
        sub_A4F8E0((int *)&v22);
      return;
    case 6LL:
      sub_F22A90(&v22, (__int64)a8);
      sub_1F995C0(a1, v22);
      goto LABEL_4;
    case 7LL:
      sub_F22A90(&v22, (__int64)a8);
      sub_1F995C0(a1, v22);
      v12 = (unsigned int)sub_F1D600((__int64)&a7);
      goto LABEL_8;
    case 8LL:
      sub_183F100((__int64)(a1 + 3), (__int64)a8);
      v12 = BYTE4(a7) & 1;
LABEL_8:
      sub_9B9C90(a1[2], v12);
LABEL_4:
      sub_9B9C90(a1[2], BYTE3(a7) >> 7);
      break;
    case 9LL:
      sub_1F99560(a1, a8, HIDWORD(a7));
      break;
  }
}
