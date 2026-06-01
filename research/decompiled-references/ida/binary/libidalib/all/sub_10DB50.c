__int64 __fastcall sub_10DB50(__int64 a1, unsigned int *a2)
{
  __m128i *v3; // rax
  __m128i *v4; // rbx
  __int64 *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 *v9; // rdx

  v3 = (__m128i *)qalloc_or_throw();
  v3[1].m128i_i64[0] = 0;
  v4 = v3;
  *v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
  do
  {
    while ( 1 )
    {
      v6 = (_QWORD *)qalloc_or_throw();
      v6[2] = a1;
      *v6 = v4;
      v7 = (_QWORD *)v4->m128i_i64[1];
      v6[1] = v7;
      *v7 = v6;
      v4->m128i_i64[1] = (__int64)v6;
      ++v4[1].m128i_i64[0];
      v8 = *a2;
      if ( *a2 > 0x2F )
        break;
      v5 = (__int64 *)(*((_QWORD *)a2 + 2) + v8);
      *a2 = v8 + 8;
      a1 = *v5;
      if ( !*v5 )
        return sub_175F80(TProgram::application + 136LL, v4);
    }
    v9 = *((__int64 **)a2 + 1);
    *((_QWORD *)a2 + 1) = v9 + 1;
    a1 = *v9;
  }
  while ( *v9 );
  return sub_175F80(TProgram::application + 136LL, v4);
}

