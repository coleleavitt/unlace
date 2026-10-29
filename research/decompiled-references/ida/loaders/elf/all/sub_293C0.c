__int64 __fastcall sub_293C0(__int64 a1, unsigned int a2, void *a3, _DWORD *a4, char *a5, size_t a6)
{
  __m128 *v7; // rdx
  __m128i v9; // xmm5
  __m128i v11; // xmm4
  __m128i si128; // xmm3
  __m128 v14; // xmm2
  int v15; // eax
  __m128i v16; // xmm6
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  unsigned __int64 i; // rax
  unsigned __int64 v21; // rdx
  int v22; // ecx
  __m128i *v23; // rax
  void *v24; // r10
  __m128i *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r14
  const char *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 result; // rax
  __int64 v32; // rbp
  void *v33; // [rsp+0h] [rbp-88h]
  __int64 v34; // [rsp+0h] [rbp-88h]
  void *v35; // [rsp+8h] [rbp-80h]
  _QWORD v36[3]; // [rsp+10h] [rbp-78h] BYREF
  void *v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  unsigned __int64 v40; // [rsp+48h] [rbp-40h]

  v7 = (__m128 *)dword_8BE20;
  v9 = _mm_shuffle_epi32(_mm_cvtsi32_si128(4u), 0);
  v11 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BFC0);
  v40 = __readfsqword(0x28u);
  do
  {
    v14 = (__m128)si128;
    v15 = 8;
    si128 = _mm_add_epi32(si128, v9);
    do
    {
      v16 = _mm_and_si128((__m128i)v14, v11);
      v17 = _mm_add_epi32(
              _mm_slli_epi32(
                _mm_sub_epi32(
                  _mm_slli_epi32(
                    _mm_sub_epi32(_mm_slli_epi32(_mm_sub_epi32(_mm_slli_epi32(v16, 4u), v16), 3u), v16),
                    5u),
                  v16),
                2u),
              v16);
      v18 = _mm_slli_epi32(_mm_sub_epi32(_mm_slli_epi32(v17, 0xAu), v17), 3u);
      v19 = _mm_slli_epi32(_mm_add_epi32(v18, v16), 5u);
      v14 = (__m128)_mm_xor_si128(_mm_srli_epi32((__m128i)v14, 1u), v19);
      --v15;
    }
    while ( v15 );
    *v7++ = v14;
  }
  while ( &unk_8C220 != (_UNKNOWN *)v7 );
  for ( i = 0; i != 256; ++i )
  {
    v21 = i;
    v22 = 8;
    do
    {
      v21 = (v21 >> 1) ^ -(__int64)(v21 & 1) & 0xC96C5795D7870F42LL;
      --v22;
    }
    while ( v22 );
    qword_8B620[i] = v21;
  }
  v33 = a3;
  v23 = sub_27FD0();
  v24 = v33;
  v25 = v23;
  if ( v23 )
  {
    v36[0] = a1;
    v36[1] = 0;
    v36[2] = a2;
    if ( v33 )
    {
      v37 = v33;
      v26 = (unsigned int)*a4;
    }
    else
    {
      v37 = &unk_89620;
      v26 = 0x2000;
    }
    v39 = v26;
    v27 = 0;
    v28 = nullptr;
    *a4 = 0;
    while ( 1 )
    {
      do
      {
        v35 = v24;
        v38 = v27;
        v29 = sub_280C0((__m128 *)v25, v36, 1, (__m128)v19, (__m128)v18, v14);
        v24 = v35;
        v27 = v38;
        if ( !v35 && v38 == 0x2000 )
        {
          *a4 += 0x2000;
          v27 = 0;
        }
      }
      while ( !(_DWORD)v29 );
      if ( (_DWORD)v29 != 2 )
        break;
      v28 = "Unsupported check; not verifying file integrity";
    }
    switch ( v29 )
    {
      case 1LL:
        v30 = v25[76].m128i_i64[0];
        if ( *(_DWORD *)(v30 + 100) )
          goto LABEL_38;
        goto LABEL_32;
      case 3LL:
        strncpy(a5, "Memory allocation failed\n", a6);
        goto LABEL_26;
      case 4LL:
        strncpy(a5, "Memory usage limit reached\n", a6);
        goto LABEL_26;
      case 5LL:
        strncpy(a5, "Bad xz format\n", a6);
        goto LABEL_26;
      case 6LL:
        strncpy(a5, "Unsupported options in the .xz headers\n", a6);
        v32 = v25[76].m128i_i64[0];
        if ( *(_DWORD *)(v32 + 100) )
          goto LABEL_29;
        goto LABEL_27;
      case 7LL:
      case 8LL:
        v30 = v25[76].m128i_i64[0];
        if ( !*(_DWORD *)(v30 + 100) )
        {
          v28 = "Data corrupt\n";
          free((void *)v30);
          free((void *)v25[76].m128i_i64[1]);
          free(v25);
LABEL_23:
          strncpy(a5, v28, a6);
          goto LABEL_24;
        }
        v28 = "Data corrupt\n";
LABEL_38:
        v34 = v30;
        free(*(void **)(v30 + 40));
        v30 = v34;
LABEL_32:
        free((void *)v30);
        free((void *)v25[76].m128i_i64[1]);
        free(v25);
        if ( v28 )
          goto LABEL_23;
LABEL_24:
        *a4 += v27;
        result = 1;
        break;
      default:
        strncpy(a5, "Bug!\n", a6);
LABEL_26:
        v32 = v25[76].m128i_i64[0];
        if ( *(_DWORD *)(v32 + 100) )
LABEL_29:
          free(*(void **)(v32 + 40));
LABEL_27:
        free((void *)v32);
        free((void *)v25[76].m128i_i64[1]);
        free(v25);
        return 0;
    }
  }
  else
  {
    strncpy(a5, "Memory allocation failed\n", a6);
    return 0;
  }
  return result;
}

