void __fastcall sub_4CB300(__m128i *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  v2 = (__int64 *)a1[8].m128i_i64[0];
  *a1 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C4F2E0), (__m128i)(unsigned __int64)off_1C4F1A0);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[7].m128i_i64[1];
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (__int64 *)a1[8].m128i_i64[0];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = a1[7].m128i_i64[0];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[6].m128i_i64[1];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = (void *)a1[5].m128i_i64[0];
  if ( v9 )
    sub_186B220(v9);
  v10 = a1[4].m128i_i64[0];
  if ( v10 )
  {
    v11 = a1[4].m128i_i64[1];
    v6 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v11, v10);
  }
  v12 = a1[1].m128i_i64[1];
  a1->m128i_i64[1] = (__int64)qword_1C65E98;
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[1].m128i_i64[0];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  operator delete(a1, 0x88u);
}

