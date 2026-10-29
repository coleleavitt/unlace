__int64 __fastcall sub_17B3E80(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        int a7)
{
  char v9; // al
  int v10; // r15d
  unsigned int v11; // r13d
  __int64 v13; // r15
  unsigned __int8 v14; // al
  unsigned int v15; // eax
  unsigned __int8 v16; // cl
  __int64 v17; // rax
  unsigned __int8 v18[4]; // [rsp+0h] [rbp-184h] BYREF
  __int64 v19; // [rsp+4h] [rbp-180h] BYREF
  _BYTE v20[144]; // [rsp+Ch] [rbp-178h] BYREF
  __int64 v21; // [rsp+9Ch] [rbp-E8h] BYREF
  _QWORD *v22; // [rsp+A4h] [rbp-E0h]
  __int64 v23; // [rsp+ACh] [rbp-D8h]
  _OWORD v24[5]; // [rsp+B4h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+104h] [rbp-80h]
  __int64 v26; // [rsp+10Ch] [rbp-78h]
  __int64 v27; // [rsp+114h] [rbp-70h]
  unsigned int v28; // [rsp+11Ch] [rbp-68h]
  _QWORD v29[2]; // [rsp+124h] [rbp-60h] BYREF
  int v30; // [rsp+134h] [rbp-50h]
  int v31; // [rsp+138h] [rbp-4Ch]
  __int64 v32; // [rsp+13Ch] [rbp-48h]

  v9 = *(_BYTE *)(a3 + 8);
  v26 = a1;
  v19 = a4;
  v27 = a4;
  v28 = a5;
  v22 = v24;
  v18[0] = a6;
  v10 = ((v9 + 70) & 0x7Fu) < 4 ? 3 : 0;
  v23 = 0x800000000LL;
  v24[4] = 0;
  v21 = 0;
  v25 = 0;
  sub_B85890(v29, a4);
  v30 = v10;
  v29[1] = 0;
  v31 = 0;
  v32 = 65537;
  sub_1A395A0(&v21);
  if ( !(unsigned __int8)sub_1A49A10(a1, &v21, a2, 0, 0) )
    goto LABEL_2;
  v13 = *v22 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = *(_BYTE *)(v13 + 28) & 0x7F;
  if ( (unsigned int)v14 - 53 <= 1 || ((v14 + 52) & 0x7Fu) <= 1 )
    v13 = sub_B72ED0(*v22 & 0xFFFFFFFFFFFFFFF8LL);
  LOBYTE(v15) = sub_15C11F0(a1 + 2608, v13, a3, a2, 0);
  v11 = v15;
  if ( !(_BYTE)v15 )
    goto LABEL_2;
  if ( a7 || !sub_B72A20(v13, *(_QWORD *)(a1 + 232)) )
    goto LABEL_14;
  v16 = *(_BYTE *)(a3 + 8) & 0x7F;
  if ( v16 <= 0x12u )
  {
    if ( ((1LL << v16) & 0x40182) == 0 )
      goto LABEL_14;
LABEL_16:
    sub_183B540(a1, a5);
    goto LABEL_2;
  }
  if ( v16 <= 0x21u )
  {
LABEL_14:
    sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), a5, 0xBBAu, 0);
    v17 = sub_15890D0((__int64)v20, v18);
    sub_17B3DD0(v17, &v19);
    sub_15F7200(v20);
    sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), *(_DWORD *)(v13 + 24), 0x70u, 0);
    sub_15F7200(v20);
    goto LABEL_3;
  }
  if ( v16 <= 0x27u )
    goto LABEL_16;
  if ( ((v16 + 70) & 0x7Fu) > 3 )
    goto LABEL_14;
LABEL_2:
  v11 = 0;
LABEL_3:
  sub_169D230((__int64)&v21);
  return v11;
}
