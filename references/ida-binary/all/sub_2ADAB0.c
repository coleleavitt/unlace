__int64 __fastcall user_graph_place_t__::vfunc_11(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        _BYTE *a4,
        double a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 v8; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  size_t v24; // rbp
  void *v25; // r12
  __int64 v26; // rax
  __int64 v28; // [rsp+8h] [rbp-40h]
  unsigned int v29; // [rsp+50h] [rbp+8h]

  v8 = *(_QWORD *)(a7 + 256);
  if ( !v8 )
    return 0;
  if ( (unsigned int)sub_1EB590(v8, (__int64)a2, (__int64)a3, (__int64)a4, a5) != 2
    || (v14 = *(_QWORD *)(v8 + 896)) == 0 )
  {
    if ( (unsigned int)sub_1EB590(v8, (__int64)a2, v11, v12, a5) != 3 )
      return 0;
    v14 = *(_QWORD *)(v8 + 904);
    if ( !v14 )
      return 0;
  }
  v15 = *(_QWORD *)(v14 + 440);
  if ( (unsigned __int64)*(int *)(a1 + 12) >= *(_QWORD *)(v15 + 24) )
    return 0;
  *a4 = 1;
  *a3 = 0;
  v16 = (_QWORD *)(*(_QWORD *)(v15 + 16) + 24LL * *(int *)(a1 + 12));
  v17 = v16[1];
  if ( a8 < v17 )
    LODWORD(v17) = a8;
  v18 = 0;
  v19 = 0;
  v29 = v17;
  if ( (int)v17 > 0 )
  {
    do
    {
      v23 = v18 + *v16;
      if ( *(_BYTE *)(v23 + 40) )
        *a3 = v19;
      v24 = *(_QWORD *)(v23 + 16);
      v25 = nullptr;
      if ( v24 )
      {
        v28 = v23;
        v25 = (void *)qalloc_or_throw(*(_QWORD *)(v23 + 16));
        memcpy(v25, *(const void **)(v28 + 8), v24);
      }
      v20 = a2[1];
      v21 = *a2;
      if ( a2[2] < (unsigned __int64)(v20 + 1) )
      {
        v26 = qvector_reserve(a2, v21, v20 + 1, 24);
        *a2 = v26;
        v20 = a2[1];
        v21 = v26;
      }
      ++v19;
      v18 += 272;
      v22 = v21 + 24 * v20;
      *(_QWORD *)v22 = v25;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      ++a2[1];
    }
    while ( v29 != v19 );
  }
  return v29;
}
