void __fastcall sub_1581530(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        __int64 a6,
        double a7,
        __int64 a8)
{
  __int64 v8; // r13
  unsigned int v11; // r12d
  _BYTE *v12; // rdi
  unsigned int v15; // eax
  _BYTE *v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // r13d
  unsigned int v19; // eax
  unsigned int v20; // [rsp+Ch] [rbp-7Ch]
  void *v21; // [rsp+28h] [rbp-60h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h]
  _BYTE v23[16]; // [rsp+38h] [rbp-50h] BYREF
  char v24; // [rsp+48h] [rbp-40h]

  v8 = a6 + 24;
  if ( a5 )
  {
    v20 = sub_EEB7E0(a3, a2, a7);
    v15 = sub_EEB7E0(a2, a2, a7);
    *(_BYTE *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 12) = 0;
    *(_QWORD *)a6 = __PAIR64__(v20, v15);
    *(_BYTE *)(a6 + 20) = 0;
    v21 = v23;
    v22 = 0;
    v23[0] = 0;
    v24 = 0;
    sub_A0AAD0(v8, &v21);
    v16 = v21;
    *(_BYTE *)(a6 + 56) = v24;
    if ( v16 != v23 )
      operator delete(v16);
    if ( a4 )
    {
      v17 = sub_EEC140(a3);
      v18 = sub_15F0EF0(a1, v17, 0);
      v19 = sub_EEC140(a4);
      *(_BYTE *)(a8 + 8) = 1;
      *(_QWORD *)a8 = __PAIR64__(v19, v18);
      *(_QWORD *)(a8 + 12) = 0;
      *(_BYTE *)(a8 + 20) = 0;
      v21 = v23;
      v22 = 0;
      v23[0] = 0;
      v24 = 0;
      sub_A0AAD0(a8 + 24, &v21);
      v12 = v21;
      *(_BYTE *)(a8 + 56) = v24;
      if ( v12 != v23 )
        goto LABEL_5;
    }
  }
  else
  {
    if ( a4 )
    {
      v11 = sub_EEB7E0(a4, a2, a7);
      v21 = v23;
      v22 = 0;
      v23[0] = 0;
      v24 = 0;
      *(_QWORD *)a6 = __PAIR64__(v11, sub_EEB7E0(a2, a2, a7));
      *(_BYTE *)(a6 + 8) = 0;
    }
    else
    {
      v21 = v23;
      v22 = 0;
      v23[0] = 0;
      v24 = 0;
      *(_QWORD *)a6 = sub_EEC8C0(a2, a2, a7);
      *(_BYTE *)(a6 + 8) = 1;
    }
    *(_QWORD *)(a6 + 12) = 0;
    *(_BYTE *)(a6 + 20) = 0;
    sub_A0AAD0(v8, &v21);
    *(_BYTE *)(a6 + 56) = v24;
    v12 = v21;
    if ( v21 != v23 )
LABEL_5:
      operator delete(v12);
  }
}
