__int64 __fastcall sub_788500(__m128i *a1, const char *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  size_t v6; // r12
  void *v7; // r13
  __int16 v8; // r14
  __int32 v9; // r12d
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rdi
  __int64 v13; // rdi
  void *v15; // rdi
  __m128i si128; // xmm2
  __int8 v17; // al
  __m128i v18; // xmm0
  __m128i v19[3]; // [rsp+0h] [rbp-78h] BYREF
  __int8 v20; // [rsp+30h] [rbp-48h]
  __m128i v21; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-30h]

  v2 = a1[6].m128i_i64[1];
  v22 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = a1[6].m128i_i64[0];
    v5 = v4 + 56 * v2 - 56;
    v6 = *(_QWORD *)(v5 + 8);
    v19[0] = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
    if ( v6 )
    {
      v7 = (void *)qalloc_or_throw(v6, a2);
      memcpy(v7, *(const void **)v5, v6);
      v2 = a1[6].m128i_i64[1];
      v8 = *(_WORD *)(v5 + 24);
      v20 = *(_BYTE *)(v5 + 32);
      v9 = *(_DWORD *)(v5 + 28);
      v21 = _mm_loadu_si128((const __m128i *)(v5 + 40));
      if ( !v2 )
      {
LABEL_10:
        v15 = (void *)a1[2].m128i_i64[1];
        if ( v15 )
        {
          a1[3].m128i_i64[0] = 0;
          qfree(v15);
        }
        si128 = _mm_load_si128(v19);
        v17 = v20;
        a1[2].m128i_i64[1] = (__int64)v7;
        v18 = _mm_loadu_si128(&v21);
        a1[4].m128i_i16[0] = v8;
        a1[4].m128i_i32[1] = v9;
        a1[4].m128i_i8[8] = v17;
        a1[3] = si128;
        a1[5] = v18;
        return 0;
      }
      v4 = a1[6].m128i_i64[0];
    }
    else
    {
      v7 = nullptr;
      v8 = *(_WORD *)(v5 + 24);
      v9 = *(_DWORD *)(v5 + 28);
      v20 = *(_BYTE *)(v5 + 32);
      v21 = _mm_loadu_si128((const __m128i *)(v5 + 40));
    }
    v10 = v2 - 1;
    a1[6].m128i_i64[1] = v10;
    v11 = v4 + 56 * v10;
    v12 = *(void **)v11;
    if ( *(_QWORD *)v11 )
    {
      *(_QWORD *)(v11 + 8) = 0;
      qfree(v12);
    }
    goto LABEL_10;
  }
  v13 = a1[7].m128i_i64[1];
  if ( !(unsigned int)lex_get_token(v13) )
    return 0;
  return get_qerrno(v13);
}

