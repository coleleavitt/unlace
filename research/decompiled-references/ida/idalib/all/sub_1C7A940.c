__int64 __fastcall sub_1C7A940(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int8 a7)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  _BYTE *v20; // r12
  unsigned __int8 v21; // al
  unsigned int v22; // ebp
  unsigned __int8 v23; // r14
  unsigned __int64 v24; // r15
  __int64 v26; // [rsp+18h] [rbp-60h] BYREF
  __int64 v27[11]; // [rsp+20h] [rbp-58h] BYREF

  v26 = a3;
  v9 = sub_F22F50(&v26);
  v10 = v9;
  if ( v9 )
  {
    v27[0] = *(_QWORD *)(v9 + 16);
    v11 = sub_F22BD0(v27, 0);
    v12 = sub_1C7A830((__int64)a1, v11);
    if ( v12 )
    {
      v13 = *(_QWORD *)(*a1 + 248);
      v14 = *(__int64 *)(v10 + 8) >> 2;
      sub_F22AA0((unsigned __int64 *)v27, v12);
      return sub_A80CA0(v13, *(_QWORD *)(a2 + 8), v14 & 1, v27[0]);
    }
    return 0;
  }
  v16 = sub_F22F70(&v26);
  if ( v16 )
  {
    if ( *(_QWORD *)(a2 + 8) )
      a5 = 0;
    else
      LODWORD(v10) = a6;
    return sub_1C738A0(a1, a2, a4, *(_QWORD *)(v16 + 8), a4, a5, v10, a7);
  }
  else
  {
    v17 = sub_F22BD0(&v26, 0);
    if ( v17 )
    {
      v18 = sub_1C7A830((__int64)a1, v17);
      if ( !v18 )
        return 0;
      v19 = *(_QWORD *)(*a1 + 248);
      sub_F22AA0((unsigned __int64 *)v27, v18);
      return sub_A80CA0(v19, *(_QWORD *)(a2 + 8), 0, v27[0]);
    }
    else
    {
      v20 = sub_F22F10(&v26);
      v21 = sub_F227A0((__int64)v20);
      v22 = *(_DWORD *)v20;
      v23 = v21;
      v24 = sub_F22790((__int64)v20);
      sub_F22160((__int64)v27, (__int64)v20);
      return sub_A80A10(*(_QWORD *)(*a1 + 248), (__int64)v27, v24, (v22 >> 3) & 0x3FFF, v23);
    }
  }
}
