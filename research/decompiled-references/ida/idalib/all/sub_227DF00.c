__int64 __fastcall sub_227DF00(const char **a1, int a2)
{
  char *v2; // rcx
  const char *v3; // r13
  char *v4; // rdx
  __int64 v5; // rax
  const char *v6; // rbp
  char **v7; // r14
  size_t v8; // rbx
  __m128i v9; // xmm0
  __m128i v11[3]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (char *)a1[1];
  v3 = *a1;
  v4 = (char *)*a1;
  v5 = v2 - *a1;
  if ( v5 <= 0 )
  {
LABEL_15:
    if ( !*((_DWORD *)a1 + 4) )
      *((_DWORD *)a1 + 4) = 7;
LABEL_14:
    v11[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
    v9 = _mm_loadl_epi64(v11);
    *(__m128i *)a1 = _mm_unpacklo_epi64(v9, v9);
    return 0;
  }
  while ( v5 == 1 || *v4 != a2 || v4[1] != 93 )
  {
    ++v4;
    v5 = v2 - v4;
    *a1 = v4;
    if ( v2 - v4 <= 0 )
      goto LABEL_15;
  }
  v6 = off_2CCA8A0;
  v7 = &off_2CCA8A0;
  v8 = v4 - v3;
  if ( off_2CCA8A0 )
  {
    while ( strncmp(v6, v3, v8) || strlen(v6) != v8 )
    {
      v7 += 2;
      v6 = *v7;
      if ( !*v7 )
        goto LABEL_11;
    }
    return *((unsigned __int8 *)v7 + 8);
  }
  else
  {
LABEL_11:
    if ( v8 != 1 )
    {
      if ( !*((_DWORD *)a1 + 4) )
        *((_DWORD *)a1 + 4) = 3;
      goto LABEL_14;
    }
    return *(unsigned __int8 *)v3;
  }
}
