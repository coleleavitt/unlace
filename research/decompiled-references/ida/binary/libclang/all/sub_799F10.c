void __fastcall sub_799F10(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  const __m128i *v4; // rbp
  int v5; // r9d
  unsigned int v6; // edx
  __int64 *v7; // rbx
  __int64 v8; // rdi
  void **v9; // rax
  __m128i v10; // xmm1
  char v11; // al
  const __m128i *v13; // rdi

  v11 = *(_BYTE *)(a1 + 29);
  if ( (v11 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 29) = v11 & 0xFE;
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
      v13 = *(const __m128i **)(sub_793320(a1) + 88);
    else
      v13 = *(const __m128i **)(a1 + 88);
    v1 = v13[102].m128i_u32[2];
    v2 = a1;
    v3 = v13[101].m128i_i64[1];
    if ( (_DWORD)v1 )
    {
      v4 = v13;
      v5 = 1;
      v6 = (v1 - 1) & (((unsigned int)v2 >> 9) ^ ((unsigned int)v2 >> 4));
      v7 = (__int64 *)(v3 + 16LL * v6);
      v8 = *v7;
      if ( v2 == *v7 )
      {
LABEL_8:
        if ( v7 != (__int64 *)(v3 + 16 * v1) )
        {
          v9 = (void **)v7[1];
          if ( *v9 != v9 + 2 )
            free(*v9);
          v10 = _mm_loadl_epi64((const __m128i *)&qword_3C86F78);
          *v7 = -8192;
          v4[102].m128i_i64[0] = _mm_add_epi32(_mm_loadl_epi64(v4 + 102), v10).m128i_u64[0];
        }
      }
      else
      {
        while ( v8 != -4096 )
        {
          v6 = (v1 - 1) & (v5 + v6);
          v7 = (__int64 *)(v3 + 16LL * v6);
          v8 = *v7;
          if ( v2 == *v7 )
            goto LABEL_8;
          ++v5;
        }
      }
    }
    else
    {
      nullsub_705();
    }
  }
}

