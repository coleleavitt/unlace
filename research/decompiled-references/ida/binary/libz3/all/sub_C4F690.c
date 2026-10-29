__int64 __fastcall sub_C4F690(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm0
  unsigned __int64 v4; // rbp
  __m128 v5; // kr00_16
  unsigned __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r12
  __m128 v20; // [rsp+0h] [rbp-58h] BYREF
  __m128 v21[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = _mm_loadh_ps((const double *)a1);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v20 = v3;
  v21[0] = v3;
  sub_C4F590(a1, (__int64 *)&v20, (__int64 *)v21);
  v4 = v20.m128_u64[0];
  v5 = v21[0];
  v6 = v20.m128_u64[1];
  v10 = sub_C4F2A0(a1, 1, v20.m128_i64[0], v7, v8, v9);
  v14 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  if ( v4 )
  {
    v15 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v6, v4);
  }
  v16 = sub_C4F2A0(a1, 1, v5.m128_i64[0], v11, v12, v13);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  if ( v5.m128_u64[0] )
  {
    v15 = (*(_DWORD *)(v5.m128_u64[0] + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v5.m128_u64[1], v5.m128_u64[0]);
  }
  v18 = sub_15E1B70(*(_QWORD *)(a1 + 32));
  if ( v17 )
  {
    v15 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v5.m128_u64[1], v17);
  }
  if ( v14 )
  {
    v15 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v6, v14);
  }
  return v18;
}

