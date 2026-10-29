double __fastcall sub_29BBD0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int64 i; // rbp
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rax
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // r12
  char *v22; // rbp
  int v23; // r14d
  __int64 v24; // rax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rax
  char v32; // [rsp+0h] [rbp-48h]
  const char *v33; // [rsp+8h] [rbp-40h]

  for ( i = 0; ; ++i )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v11 == interactive_graph_t__::vfunc_7 )
    {
      if ( i >= *(int *)(a1 + 184) )
        goto LABEL_7;
    }
    else if ( i >= (int)v11(a1) )
    {
LABEL_7:
      v12 = ea2node(*(_QWORD *)(a1 + 72));
      netnode_delblob(v12, 0x8000, 83);
      return *(double *)a3.m128_u64;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 104) + (int)i) & 1) != 0 )
      break;
  }
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v13 == interactive_graph_t__::vfunc_7 )
    v14 = *(_DWORD *)(a1 + 184);
  else
    v14 = v13(a1);
  v33 = (const char *)qalloc(6LL * (int)v14 + 5);
  if ( !v33 )
    sub_22DB40((int)"set_graph_groups", a2, v15, v16, v17, v18, a3, a4, a5, a6, v19, v20, a9, a10, v32);
  v21 = &v33[6 * v14 + 5];
  v22 = (char *)pack_dd(v33, v21, v14);
  if ( v14 )
  {
    v23 = 0;
    v24 = 0;
    do
    {
      v25 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4 * v24) - v23++;
      v22 = (char *)pack_dd(v22, v21, v25 & 0x7FFFFFFF);
      v24 = v23;
    }
    while ( v23 < (unsigned __int64)(int)v14 );
  }
  v26 = 0;
  v27 = 0;
  v28 = 0;
  while ( 1 )
  {
    if ( v27 == 8 )
    {
      if ( v22 < v21 )
        *v22++ = v28;
      if ( v26 == v14 )
        goto LABEL_26;
      v29 = v26++;
      v27 = 1;
      v28 = *(int *)(*(_QWORD *)(a1 + 80) + 4 * v29) < 0;
    }
    if ( v14 == v26 )
      break;
    if ( *(int *)(*(_QWORD *)(a1 + 80) + 4LL * v26) < 0 )
      v28 |= 1 << v27;
    ++v26;
    ++v27;
  }
  if ( v22 < v21 )
    *v22++ = v28;
LABEL_26:
  v30 = ea2node(*(_QWORD *)(a1 + 72));
  netnode_setblob(v30, v33, v22 - v33, 0x8000, 83);
  *(double *)a3.m128_u64 = qfree(v33, v33);
  return *(double *)a3.m128_u64;
}
