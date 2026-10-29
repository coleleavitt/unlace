__int64 __fastcall sub_C92610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 *v12; // rax
  unsigned int v13; // eax
  __int64 *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // ebp
  bool v20; // al
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rax
  void *v25; // rbp
  bool v26; // bp
  unsigned __int8 v27; // [rsp+Fh] [rbp-79h]
  unsigned __int8 v28; // [rsp+Fh] [rbp-79h]
  __int64 v29; // [rsp+18h] [rbp-70h] BYREF
  void *v30; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-60h]
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-50h]
  void *v34; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-40h]
  bool v36; // [rsp+4Ch] [rbp-3Ch]
  unsigned int v37; // [rsp+50h] [rbp-38h]

  v7 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) == 7
    || (v8 = a3, a3 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(a3 + 16) == 7)
    && (v7 = sub_F3F310(v7, a2, a3, a4)) != 0 )
  {
    v8 = *(_QWORD *)(v7 + 32);
  }
  switch ( (int)a2 )
  {
    case 0:
      v34 = (void *)(a4 | 4);
      return sub_CE49F0(a1, &v34);
    case 1:
      v34 = (void *)(a4 | 4);
      return sub_CE4A40(a1, &v34);
    case 2:
      v34 = (void *)(a4 | 4);
      return sub_CE4A90(a1, &v34);
    case 3:
      v34 = (void *)(a4 | 4);
      return sub_CE4AE0(a1, &v34);
    case 4:
      v34 = (void *)(a4 | 4);
      return sub_CE4B30(a1, &v34);
    case 5:
      v34 = (void *)(a4 | 4);
      return sub_CE4B80(a1, &v34);
    case 6:
      v34 = (void *)(a4 | 4);
      return sub_CE4BD0(a1, &v34);
    case 7:
      v34 = (void *)(a4 | 4);
      return sub_CE4C20(a1, &v34);
    case 8:
      v12 = *(__int64 **)(a1 + 1264);
      v34 = (void *)(a4 | 4);
      v13 = sub_A884B0(*v12, v8, a3, a4 | 4, a5);
      return sub_D22240(a1, v13, &v34);
    case 9:
      v14 = *(__int64 **)(a1 + 1264);
      v34 = (void *)(a4 | 4);
      v15 = sub_A884B0(*v14, v8, a3, a4 | 4, a5);
      return sub_D21510(a1, v15, &v34);
    case 10:
      v34 = (void *)(a4 | 4);
      return sub_CE4C70(a1, &v34);
    case 11:
      v16 = sub_A8A3C0(**(_QWORD **)(a1 + 1264), *(_QWORD *)(a4 + 8), a3, a4);
      v17 = (unsigned __int16)v16;
      v18 = v16;
      v29 = a4 | 4;
      v19 = HIBYTE(v16);
      v31 = (unsigned __int16)v16;
      if ( (unsigned __int16)v16 <= 0x40u )
      {
        v30 = nullptr;
        v20 = (v16 & 0x20000000) == 0;
LABEL_23:
        v35 = v17;
        v36 = v20;
        v34 = v30;
        v37 = v18;
        goto LABEL_24;
      }
      sub_21E1730(&v30, 0, (v16 >> 29) & 1);
      v17 = v31;
      v26 = (v19 & 0x20) == 0;
      v20 = v26;
      v33 = v31;
      if ( v31 <= 0x40 )
        goto LABEL_23;
      sub_21E17D0(&v32);
      v36 = v26;
      v37 = v18;
      v35 = v33;
      v34 = v32;
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
LABEL_24:
      result = sub_D11FC0(a1, &v34, &v29);
      if ( v35 > 0x40 )
      {
        if ( v34 )
        {
          v27 = result;
          operator delete[](v34);
          return v27;
        }
      }
      return result;
    case 12:
      v21 = *(_QWORD *)(a1 + 1264);
      v22 = sub_CC2920(v21, v8);
      v24 = sub_21D5390(v21, v8, v23);
      v25 = (void *)v24;
      if ( v22 == v24 )
        sub_21DBF00(&v34, v24, 0);
      else
        sub_21D94B0(&v34, v22, 0);
      if ( v34 == v25 )
        sub_21DC510(&v34, 0);
      else
        sub_21D7C60(&v34, 0);
      v28 = sub_C922B0(a1, &v34, a4);
      sub_971860(&v34);
      return v28;
    case 13:
      v9 = *(__int64 **)(a1 + 1264);
      v34 = (void *)(a4 | 4);
      v10 = sub_A444C0(*v9, v8, a3, a4 | 4, a5);
      return sub_CE3560(a1, v10, 0, &v34);
    case 14:
      v34 = (void *)(a4 | 4);
      return sub_CE35D0(a1, 0, 0, &v34);
  }
}

