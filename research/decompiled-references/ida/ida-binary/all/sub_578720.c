__m128i *__fastcall sub_578720(__m128i *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 **v9; // rcx
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 **v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0

  v3 = *(_DWORD *)(a2 + 16);
  v4 = v3 - 2;
  if ( (int)(v3 - 2) < 0 )
  {
    v17 = 0;
    v10 = nullptr;
    v7 = 0;
  }
  else
  {
    v5 = (int)v4;
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)a2;
    v8 = 4LL * (int)v4;
    v9 = (__int64 **)(v6 + v8 * 8);
    v10 = *(__int64 **)(v6 + v8 * 8);
    if ( v3 == 2 )
    {
LABEL_10:
      v16 = 0;
    }
    else
    {
      v11 = 32LL * v3;
      v12 = (__int64 **)(v6 + 32 * (v5 - 1));
      v13 = v6 + v11 - 128 - 32LL * (v3 - 3);
      while ( 1 )
      {
        if ( *(_WORD *)(*(&v12[v11 / 0xFFFFFFFFFFFFFFF8LL])[v8 + 8] + 66) )
        {
          v14 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 128LL)
                                    + 2LL
                                    * (*(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 36LL)
                                     * (unsigned int)*(unsigned __int16 *)(*(&v12[v11 / 0xFFFFFFFFFFFFFFF8LL])[v8 + 8]
                                                                         + 66)
                                     + *((_DWORD *)v9 + 6)));
          if ( (_WORD)v14 )
            break;
        }
        v10 = *v9;
        v15 = **v9;
        if ( (v15 & 1) != 0 )
        {
          if ( (v15 & 2) != 0 )
            goto LABEL_10;
        }
        else if ( (*(_BYTE *)(v15 + 44) & 1) != 0 )
        {
          goto LABEL_10;
        }
        v9 = v12;
        v12 -= 4;
        if ( (__int64 **)v13 == v12 )
        {
          v10 = *v9;
          v16 = 0;
          goto LABEL_11;
        }
      }
      v10 = *v9;
      v16 = _mm_cvtsi32_si128(v14);
    }
LABEL_11:
    v17 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD *)v9 + 2)), _mm_cvtsi32_si128(*((_DWORD *)v9 + 3))),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD *)v9 + 4)), v16));
  }
  a1[1].m128i_i64[1] = v7;
  a1[1].m128i_i64[0] = (__int64)v10;
  *a1 = v17;
  return a1;
}
