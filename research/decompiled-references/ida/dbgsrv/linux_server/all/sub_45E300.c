/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E300
// Address: 0x000000000045E300

//----- (000000000045E300) ----------------------------------------------------
__int64 __fastcall sub_45E300(__int64 a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  void *v5; // rax
  __int64 v6; // rbp
  void *v7; // rdi
  void *v8; // rdi
  __int64 v9; // rax
  signed __int64 v10; // r12
  void *v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  void *v15; // rdi
  void *v16; // rdi

  v2 = *(_QWORD *)(a1 + 232);
  v3 = v2 + 72LL * *(_QWORD *)(a1 + 240);
  if ( !(72LL * *(_QWORD *)(a1 + 240)) )
    return 0;
  while ( 1 )
  {
    v5 = *(void **)(v2 + 56);
    v6 = v2;
    v2 += 72;
    if ( v5 == a2 )
      break;
    if ( v2 == v3 )
      return 0;
  }
  v7 = *(void **)(v6 + 24);
  if ( v7 )
  {
    *(_QWORD *)(v6 + 32) = 0;
    j__free(v7);
  }
  v8 = *(void **)v6;
  if ( *(_QWORD *)v6 )
  {
    *(_QWORD *)(v6 + 8) = 0;
    j__free(v8);
  }
  v9 = *(_QWORD *)(a1 + 240);
  v10 = 0x8E38E38E38E38E39LL * ((*(_QWORD *)(a1 + 232) + 72 * v9 - v6) >> 3) - 2;
  if ( v10 >= 0 )
  {
    do
    {
      v11 = *(void **)v2;
      v12 = _mm_loadu_si128((const __m128i *)(v2 + 8));
      *(_QWORD *)v2 = 0;
      *(_OWORD *)(v2 + 8) = 0;
      *(_QWORD *)v6 = v11;
      *(__m128i *)(v6 + 8) = v12;
      v13 = *(_QWORD *)(v2 + 24);
      v14 = _mm_loadu_si128((const __m128i *)(v2 + 32));
      *(_QWORD *)(v2 + 24) = 0;
      *(_QWORD *)(v6 + 24) = v13;
      *(__m128i *)(v6 + 32) = v14;
      LODWORD(v13) = *(_DWORD *)(v2 + 48);
      *(_QWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v6 + 48) = v13;
      *(_QWORD *)(v6 + 56) = *(_QWORD *)(v2 + 56);
      *(_QWORD *)(v6 + 64) = *(_QWORD *)(v2 + 64);
      v15 = *(void **)(v2 + 24);
      if ( v15 )
      {
        *(_QWORD *)(v2 + 32) = 0;
        j__free(v15);
      }
      v16 = *(void **)v2;
      if ( *(_QWORD *)v2 )
      {
        *(_QWORD *)(v2 + 8) = 0;
        j__free(v16);
      }
      v2 += 72;
      v6 += 72;
    }
    while ( v10-- != 0 );
    v9 = *(_QWORD *)(a1 + 240);
  }
  *(_QWORD *)(a1 + 240) = v9 - 1;
  j__free(a2);
  return 1;
}
