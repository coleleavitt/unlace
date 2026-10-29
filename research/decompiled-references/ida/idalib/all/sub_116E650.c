void __fastcall sub_116E650(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  const __m128i *v4; // r13
  const __m128i *v5; // rbx
  __int128 v6; // xmm0
  bool v7; // zf
  const __m128i *v8; // rax
  const __m128i *v9; // rbp
  unsigned __int64 v10; // rbx
  void *v11; // rdi

  v2 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
  if ( *(_QWORD *)a1 != v2 )
  {
    v4 = (const __m128i *)(v2 + 48);
    v5 = (const __m128i *)(*(_QWORD *)a1 + 48LL);
    v6 = 0;
    do
    {
      while ( 1 )
      {
        *(_OWORD *)(a2 + 8) = v6;
        v7 = v5[-3].m128i_i64[1] == 0;
        *(_QWORD *)a2 = a2 + 24;
        if ( !v7 )
        {
          sub_9C3C90((char **)a2, (char **)&v5[-3]);
          v6 = 0;
        }
        *(_BYTE *)(a2 + 24) = v5[-2].m128i_i8[8];
        *(_QWORD *)(a2 + 32) = a2 + 48;
        v8 = (const __m128i *)v5[-1].m128i_i64[0];
        if ( v8 == v5 )
          break;
        *(_QWORD *)(a2 + 32) = v8;
        a2 += 64;
        *(_QWORD *)(a2 - 16) = v5->m128i_i64[0];
        *(_QWORD *)(a2 - 24) = v5[-1].m128i_i64[1];
        v5[-1].m128i_i64[0] = (__int64)v5;
        v5 += 4;
        v5[-5].m128i_i64[1] = 0;
        v5[-4].m128i_i8[0] = 0;
        if ( v5 == v4 )
          goto LABEL_7;
      }
      a2 += 64;
      *(__m128i *)(a2 - 16) = _mm_loadu_si128(v5);
      *(_QWORD *)(a2 - 24) = v5[-1].m128i_i64[1];
      v5[-1].m128i_i64[0] = (__int64)v5;
      v5 += 4;
      v5[-5].m128i_i64[1] = 0;
      v5[-4].m128i_i8[0] = 0;
    }
    while ( v4 != v5 );
LABEL_7:
    v9 = *(const __m128i **)a1;
    v10 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
    while ( v9 != (const __m128i *)v10 )
    {
      while ( 1 )
      {
        v10 -= 64LL;
        v11 = *(void **)(v10 + 32);
        if ( v11 != (void *)(v10 + 48) )
          operator delete(v11);
        if ( *(_QWORD *)v10 == v10 + 24 )
          break;
        free(*(void **)v10);
        if ( v9 == (const __m128i *)v10 )
          return;
      }
    }
  }
}
