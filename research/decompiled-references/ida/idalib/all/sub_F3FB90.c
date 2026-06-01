void __fastcall sub_F3FB90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 *v10; // rbp
  unsigned __int64 *v11; // rbx
  __int128 v12; // [rsp-20h] [rbp-78h]
  __int128 v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  void *v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&v13 = a1;
  v14 = a1;
  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE **)(v2 + 32);
  if ( (unsigned __int64)v3 >= *(_QWORD *)(v2 + 24) )
  {
    v2 = sub_227BA10(*(_QWORD *)(a1 + 1096), 32);
  }
  else
  {
    *(_QWORD *)(v2 + 32) = v3 + 1;
    *v3 = 32;
  }
  sub_FEEE60(&v15, *(_QWORD *)(a2 + 40), 0);
  sub_227BF10(v2, v15, v16);
  if ( v15 != &v17 )
    operator delete(v15);
  v4 = sub_B8C330(a2);
  v5 = sub_A842A0(v4, *(_QWORD *)(a2 + 40));
  v10 = (unsigned __int64 *)(v5 + 8 * v9);
  if ( v10 != (unsigned __int64 *)v5 )
  {
    v11 = (unsigned __int64 *)v5;
    do
    {
      if ( *v11 )
      {
        *(_QWORD *)&v13 = *v11;
        v15 = "initializer";
        v16 = 11;
        v13 = (__int128)_mm_loadh_ps((const double *)&v13);
        v17 = v13;
        *((_QWORD *)&v12 + 1) = 11;
        *(_QWORD *)&v12 = "initializer";
        sub_F3F2B0(v14, (__int64)&byte_22F0C30, 0, v6, v7, v8, v12, v13);
      }
      ++v11;
    }
    while ( v10 != v11 );
  }
}
