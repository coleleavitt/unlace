void *__fastcall sub_13BFC20(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rbx
  size_t v9; // rax
  void *v10; // rdi
  size_t v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  const __m128i *v15; // rax
  __m128i v16; // xmm3
  __m128i si128; // xmm1
  __m128i v18; // xmm6
  __m128i v19; // xmm5
  __m128i v20; // xmm0
  __m128i v21; // xmm7
  __m128i v22; // xmm7
  __m128i v23; // xmm8
  __m128i v24; // xmm0
  __m128i v25; // xmm8
  unsigned int v26; // ecx
  __m128i v27; // xmm3
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  const char *v44; // rbx
  __int64 v45; // rbp
  size_t v46; // rax
  void *v47; // rdi
  size_t v48; // r12
  const char *v49; // rsi
  __int64 v50; // rbx
  size_t v51; // rax
  void *v52; // rdi
  size_t v53; // rbp
  __int64 v54; // rbx
  size_t v55; // rax
  void *v56; // rdi
  size_t v57; // rbp
  __int64 v58; // rbx
  size_t v59; // rax
  void *v60; // rdi
  size_t v61; // rbp
  size_t v62; // rax
  void *v63; // rdi
  size_t v64; // rbp
  const char *v65; // rsi
  __int64 v66; // rbx
  size_t v67; // rax
  void *v68; // rdi
  size_t v69; // rbp
  __int64 v70; // rax
  __int64 v71; // rbx
  size_t v72; // rax
  void *v73; // rdi
  size_t v74; // rbp
  __int64 v75; // rbx
  size_t v76; // rax
  void *v77; // rdi
  size_t v78; // rbp
  void *result; // rax

  v3 = sub_227D6D0(a1, a2);
  v4 = j__strlen("\n*** HeaderSearch Stats:\n");
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v3 = sub_227BF10(v3, "\n*** HeaderSearch Stats:\n", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, "\n*** HeaderSearch Stats:\n", v4);
    *(_QWORD *)(v3 + 32) += v6;
  }
  v7 = (__int64)(*(_QWORD *)(a1 + 344) - *(_QWORD *)(a1 + 336)) >> 4;
  v8 = sub_227B910(v3, v7);
  v9 = j__strlen(" files tracked.\n");
  v10 = *(void **)(v8 + 32);
  v11 = v9;
  if ( v9 > *(_QWORD *)(v8 + 24) - (_QWORD)v10 )
  {
    v7 = (__int64)" files tracked.\n";
    sub_227BF10(v8, " files tracked.\n", v9);
  }
  else if ( v9 )
  {
    v7 = (__int64)" files tracked.\n";
    memcpy(v10, " files tracked.\n", v9);
    *(_QWORD *)(v8 + 32) += v11;
  }
  v12 = *(_QWORD *)(a1 + 336);
  v13 = (*(_QWORD *)(a1 + 344) - v12) >> 4;
  if ( (_DWORD)v13 )
  {
    v14 = v13 - 1;
    if ( (unsigned int)(v13 - 1) <= 0xF )
    {
      v26 = 0;
      v28 = 0;
    }
    else
    {
      v15 = *(const __m128i **)(a1 + 336);
      v16 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D80);
      v18 = _mm_load_si128((const __m128i *)&xmmword_23AA480);
      v19 = _mm_load_si128((const __m128i *)&xmmword_23A8EB0);
      do
      {
        v20 = _mm_loadu_si128(v15);
        v21 = _mm_loadu_si128(v15 + 1);
        v15 += 16;
        v22 = _mm_andnot_si128(
                _mm_cmpeq_epi8(
                  _mm_and_si128(
                    _mm_packus_epi16(
                      _mm_and_si128(
                        _mm_packus_epi16(
                          _mm_and_si128(
                            _mm_packus_epi16(
                              _mm_and_si128(
                                _mm_packus_epi16(_mm_and_si128(v20, si128), _mm_and_si128(v21, si128)),
                                si128),
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(_mm_loadu_si128(v15 - 14), si128),
                                  _mm_and_si128(_mm_loadu_si128(v15 - 13), si128)),
                                si128)),
                            si128),
                          _mm_and_si128(
                            _mm_packus_epi16(
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(_mm_loadu_si128(v15 - 12), si128),
                                  _mm_and_si128(_mm_loadu_si128(v15 - 11), si128)),
                                si128),
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(_mm_loadu_si128(v15 - 10), si128),
                                  _mm_and_si128(_mm_loadu_si128(v15 - 9), si128)),
                                si128)),
                            si128)),
                        si128),
                      _mm_and_si128(
                        _mm_packus_epi16(
                          _mm_and_si128(
                            _mm_packus_epi16(
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(_mm_loadu_si128(v15 - 8), si128),
                                  _mm_and_si128(_mm_loadu_si128(v15 - 7), si128)),
                                si128),
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(_mm_loadu_si128(v15 - 6), si128),
                                  _mm_and_si128(_mm_loadu_si128(v15 - 5), si128)),
                                si128)),
                            si128),
                          _mm_and_si128(
                            _mm_packus_epi16(
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(_mm_loadu_si128(v15 - 4), si128),
                                  _mm_and_si128(_mm_loadu_si128(v15 - 3), si128)),
                                si128),
                              _mm_and_si128(
                                _mm_packus_epi16(
                                  _mm_and_si128(_mm_loadu_si128(v15 - 2), si128),
                                  _mm_and_si128(_mm_loadu_si128(v15 - 1), si128)),
                                si128)),
                            si128)),
                        si128)),
                    v18),
                  (__m128i)0LL),
                v19);
        v23 = _mm_unpackhi_epi8(v22, (__m128i)0LL);
        v24 = _mm_add_epi32(_mm_unpackhi_epi16(v23, (__m128i)0LL), _mm_unpacklo_epi16(v23, (__m128i)0LL));
        v25 = _mm_unpacklo_epi8(v22, (__m128i)0LL);
        v16 = _mm_add_epi32(
                v16,
                _mm_add_epi32(
                  v24,
                  _mm_add_epi32(_mm_unpackhi_epi16(v25, (__m128i)0LL), _mm_unpacklo_epi16(v25, (__m128i)0LL))));
      }
      while ( v15 != (const __m128i *)(v12 + ((unsigned __int64)(v14 >> 4) << 8)) );
      v26 = v14 & 0xFFFFFFF0;
      v27 = _mm_add_epi32(v16, _mm_srli_si128(v16, 8));
      v28 = _mm_cvtsi128_si32(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
    }
    v7 = v28 + (unsigned int)((*(_BYTE *)(v12 + 16LL * v26) & 6) != 0);
    v29 = v26 + 1;
    if ( (_DWORD)v13 != (_DWORD)v29 )
    {
      v7 = ((*(_BYTE *)(v12 + 16 * v29) & 6) != 0) + (unsigned int)v7;
      v30 = v26 + 2;
      if ( (_DWORD)v30 != (_DWORD)v13 )
      {
        v7 = ((*(_BYTE *)(v12 + 16 * v30) & 6) != 0) + (unsigned int)v7;
        v31 = v26 + 3;
        if ( (_DWORD)v13 != (_DWORD)v31 )
        {
          v7 = ((*(_BYTE *)(v12 + 16 * v31) & 6) != 0) + (unsigned int)v7;
          v32 = v26 + 4;
          if ( (_DWORD)v13 != (_DWORD)v32 )
          {
            v7 = ((*(_BYTE *)(v12 + 16 * v32) & 6) != 0) + (unsigned int)v7;
            v33 = v26 + 5;
            if ( (_DWORD)v13 != (_DWORD)v33 )
            {
              v7 = ((*(_BYTE *)(v12 + 16 * v33) & 6) != 0) + (unsigned int)v7;
              v34 = v26 + 6;
              if ( (_DWORD)v13 != (_DWORD)v34 )
              {
                v7 = ((*(_BYTE *)(v12 + 16 * v34) & 6) != 0) + (unsigned int)v7;
                v35 = v26 + 7;
                if ( (_DWORD)v13 != (_DWORD)v35 )
                {
                  v7 = ((*(_BYTE *)(v12 + 16 * v35) & 6) != 0) + (unsigned int)v7;
                  v36 = v26 + 8;
                  if ( (_DWORD)v13 != (_DWORD)v36 )
                  {
                    v7 = ((*(_BYTE *)(v12 + 16 * v36) & 6) != 0) + (unsigned int)v7;
                    v37 = v26 + 9;
                    if ( (_DWORD)v13 != (_DWORD)v37 )
                    {
                      v7 = ((*(_BYTE *)(v12 + 16 * v37) & 6) != 0) + (unsigned int)v7;
                      v38 = v26 + 10;
                      if ( (_DWORD)v13 != (_DWORD)v38 )
                      {
                        v7 = ((*(_BYTE *)(v12 + 16 * v38) & 6) != 0) + (unsigned int)v7;
                        v39 = v26 + 11;
                        if ( (_DWORD)v13 != (_DWORD)v39 )
                        {
                          v7 = ((*(_BYTE *)(v12 + 16 * v39) & 6) != 0) + (unsigned int)v7;
                          v40 = v26 + 12;
                          if ( (_DWORD)v13 != (_DWORD)v40 )
                          {
                            v7 = ((*(_BYTE *)(v12 + 16 * v40) & 6) != 0) + (unsigned int)v7;
                            v41 = v26 + 13;
                            if ( (_DWORD)v13 != (_DWORD)v41 )
                            {
                              v7 = ((*(_BYTE *)(v12 + 16 * v41) & 6) != 0) + (unsigned int)v7;
                              v42 = v26 + 14;
                              if ( (_DWORD)v13 != (_DWORD)v42 )
                              {
                                v43 = v26 + 15;
                                v7 = ((*(_BYTE *)(v12 + 16 * v42) & 6) != 0) + (unsigned int)v7;
                                if ( (_DWORD)v13 != (_DWORD)v43 )
                                  v7 = ((*(_BYTE *)(v12 + 16 * v43) & 6) != 0) + (unsigned int)v7;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v44 = (const char *)(unsigned int)v7;
  }
  else
  {
    v44 = nullptr;
  }
  v45 = sub_227D6D0(v12, v7);
  v46 = j__strlen("  ");
  v47 = *(void **)(v45 + 32);
  v48 = v46;
  if ( v46 > *(_QWORD *)(v45 + 24) - (_QWORD)v47 )
  {
    v45 = sub_227BF10(v45, "  ", v46);
  }
  else if ( v46 )
  {
    memcpy(v47, "  ", v46);
    *(_QWORD *)(v45 + 32) += v48;
  }
  v49 = v44;
  v50 = sub_227B910(v45, v44);
  v51 = j__strlen(" #import/#pragma once files.\n");
  v52 = *(void **)(v50 + 32);
  v53 = v51;
  if ( v51 > *(_QWORD *)(v50 + 24) - (_QWORD)v52 )
  {
    v49 = " #import/#pragma once files.\n";
    v52 = (void *)v50;
    sub_227BF10(v50, " #import/#pragma once files.\n", v51);
  }
  else if ( v51 )
  {
    v49 = " #import/#pragma once files.\n";
    memcpy(v52, " #import/#pragma once files.\n", v51);
    *(_QWORD *)(v50 + 32) += v53;
  }
  v54 = sub_227D6D0(v52, v49);
  v55 = j__strlen("  ");
  v56 = *(void **)(v54 + 32);
  v57 = v55;
  if ( v55 > *(_QWORD *)(v54 + 24) - (_QWORD)v56 )
  {
    v54 = sub_227BF10(v54, "  ", v55);
  }
  else if ( v55 )
  {
    memcpy(v56, "  ", v55);
    *(_QWORD *)(v54 + 32) += v57;
  }
  v58 = sub_227B910(v54, qword_2C86D78);
  v59 = j__strlen(" #include/#include_next/#import.\n");
  v60 = *(void **)(v58 + 32);
  v61 = v59;
  if ( v59 > *(_QWORD *)(v58 + 24) - (_QWORD)v60 )
  {
    v58 = sub_227BF10(v58, " #include/#include_next/#import.\n", v59);
  }
  else if ( v59 )
  {
    memcpy(v60, " #include/#include_next/#import.\n", v59);
    *(_QWORD *)(v58 + 32) += v61;
  }
  v62 = j__strlen("    ");
  v63 = *(void **)(v58 + 32);
  v64 = v62;
  if ( v62 > *(_QWORD *)(v58 + 24) - (_QWORD)v63 )
  {
    v58 = sub_227BF10(v58, "    ", v62);
  }
  else if ( v62 )
  {
    memcpy(v63, "    ", v62);
    *(_QWORD *)(v58 + 32) += v64;
  }
  v65 = (const char *)qword_2C86D38;
  v66 = sub_227B910(v58, qword_2C86D38);
  v67 = j__strlen(" #includes skipped due to the multi-include optimization.\n");
  v68 = *(void **)(v66 + 32);
  v69 = v67;
  if ( v67 > *(_QWORD *)(v66 + 24) - (_QWORD)v68 )
  {
    v65 = " #includes skipped due to the multi-include optimization.\n";
    v68 = (void *)v66;
    sub_227BF10(v66, " #includes skipped due to the multi-include optimization.\n", v67);
  }
  else if ( v67 )
  {
    v65 = " #includes skipped due to the multi-include optimization.\n";
    memcpy(v68, " #includes skipped due to the multi-include optimization.\n", v67);
    *(_QWORD *)(v66 + 32) += v69;
  }
  v70 = sub_227D6D0(v68, v65);
  v71 = sub_227B910(v70, qword_2C86CF8);
  v72 = j__strlen(" framework lookups.\n");
  v73 = *(void **)(v71 + 32);
  v74 = v72;
  if ( v72 > *(_QWORD *)(v71 + 24) - (_QWORD)v73 )
  {
    v71 = sub_227BF10(v71, " framework lookups.\n", v72);
  }
  else if ( v72 )
  {
    memcpy(v73, " framework lookups.\n", v72);
    *(_QWORD *)(v71 + 32) += v74;
  }
  v75 = sub_227B910(v71, qword_2C86CB8);
  v76 = j__strlen(" subframework lookups.\n");
  v77 = *(void **)(v75 + 32);
  v78 = v76;
  result = (void *)(*(_QWORD *)(v75 + 24) - (_QWORD)v77);
  if ( v78 > (unsigned __int64)result )
    return (void *)sub_227BF10(v75, " subframework lookups.\n", v78);
  if ( v78 )
  {
    result = memcpy(v77, " subframework lookups.\n", v78);
    *(_QWORD *)(v75 + 32) += v78;
  }
  return result;
}
