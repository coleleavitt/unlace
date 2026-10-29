bool __fastcall sub_5CA8C0(__m128i *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  char *v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  size_t v9; // r12
  void *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  void *v13; // rdi
  const char *v15; // r14
  void *v16; // rax

  v2 = a1[29].m128i_i64[0];
  if ( v2 )
  {
    v4 = a1[28].m128i_i64[1];
    v5 = &a1[2].m128i_i8[8];
    v6 = v4 + (v2 << 6) - 64;
    if ( (char *)v6 != v5 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 > 1 )
      {
        v15 = *(const char **)v6;
        v16 = (void *)a1[2].m128i_i64[1];
        if ( a1[3].m128i_i64[1] < v7 )
        {
          v16 = (void *)qvector_reserve(v5, a1[2].m128i_i64[1], *(_QWORD *)(v6 + 8), 1);
          a1[2].m128i_i64[1] = (__int64)v16;
        }
        a1[3].m128i_i64[0] = v7;
        a2 = v15;
        memmove(v16, v15, v7 - 1);
        *(_BYTE *)(a1[2].m128i_i64[1] + v7 - 1) = 0;
        v2 = a1[29].m128i_i64[0];
        v4 = a1[28].m128i_i64[1];
        v8 = v4 + (v2 << 6) - 64;
LABEL_6:
        a1[4].m128i_i16[0] = *(_WORD *)(v6 + 24);
        a1[4].m128i_i32[1] = *(_DWORD *)(v6 + 28);
        a1[4].m128i_i8[8] = *(_BYTE *)(v6 + 32);
        a1[5] = _mm_loadu_si128((const __m128i *)(v6 + 40));
        a1[30].m128i_i32[0] = *(_DWORD *)(v6 + 56);
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
        {
          v10 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8), a2);
          memcpy(v10, *(const void **)v8, v9);
          v2 = a1[29].m128i_i64[0];
          if ( !v2 )
          {
LABEL_11:
            if ( v10 )
              qfree(v10);
            return 1;
          }
          v4 = a1[28].m128i_i64[1];
        }
        else
        {
          if ( !v2 )
            return 1;
          v10 = nullptr;
        }
        v11 = v2 - 1;
        a1[29].m128i_i64[0] = v11;
        v12 = (v11 << 6) + v4;
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *(_QWORD *)(v12 + 8) = 0;
          qfree(v13);
        }
        goto LABEL_11;
      }
      a1[3].m128i_i64[0] = 0;
    }
    v8 = v4 + (v2 << 6) - 64;
    goto LABEL_6;
  }
  return (unsigned int)lex_get_token(a1[14].m128i_i64[1]) == 0;
}

