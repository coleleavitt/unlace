__int64 __fastcall sub_145C0E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rbp
  unsigned __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rsi
  unsigned int v55; // ecx
  _QWORD *v56; // rdx
  _QWORD *v57; // rcx
  __int64 v58; // rdi
  unsigned __int64 v59; // r8
  __m128i v60; // xmm0
  char *v61; // r8
  __m128i v62; // xmm1
  __m128i v63; // xmm2
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax

  v3 = sub_227D6D0(a1, a2);
  sub_995540(v3, "\n*** Preprocessor Stats:\n");
  v4 = sub_227D6D0(v3, "\n*** Preprocessor Stats:\n");
  v5 = sub_227B910(v4, *(unsigned int *)(a1 + 2296));
  sub_995540(v5, " directives found:\n");
  v6 = sub_227D6D0(v5, " directives found:\n");
  v7 = sub_995540(v6, "  ");
  v8 = sub_227B910(v7, *(unsigned int *)(a1 + 2300));
  sub_995540(v8, " #define.\n");
  v9 = sub_227D6D0(v8, " #define.\n");
  v10 = sub_995540(v9, "  ");
  v11 = sub_227B910(v10, *(unsigned int *)(a1 + 2304));
  sub_995540(v11, " #undef.\n");
  v12 = sub_227D6D0(v11, " #undef.\n");
  sub_995540(v12, "  #include/#include_next/#import:\n");
  v13 = sub_227D6D0(v12, "  #include/#include_next/#import:\n");
  v14 = sub_995540(v13, "    ");
  v15 = sub_227B910(v14, *(unsigned int *)(a1 + 2324));
  sub_995540(v15, " source files entered.\n");
  v16 = sub_227D6D0(v15, " source files entered.\n");
  v17 = sub_995540(v16, "    ");
  v18 = sub_227B910(v17, *(unsigned int *)(a1 + 2328));
  sub_995540(v18, " max include stack depth\n");
  v19 = sub_227D6D0(v18, " max include stack depth\n");
  v20 = sub_995540(v19, "  ");
  v21 = sub_227B910(v20, *(unsigned int *)(a1 + 2312));
  sub_995540(v21, " #if/#ifndef/#ifdef.\n");
  v22 = sub_227D6D0(v21, " #if/#ifndef/#ifdef.\n");
  v23 = sub_995540(v22, "  ");
  v24 = sub_227B910(v23, *(unsigned int *)(a1 + 2316));
  sub_995540(v24, " #else/#elif/#elifdef/#elifndef.\n");
  v25 = sub_227D6D0(v24, " #else/#elif/#elifdef/#elifndef.\n");
  v26 = sub_995540(v25, "  ");
  v27 = sub_227B910(v26, *(unsigned int *)(a1 + 2320));
  sub_995540(v27, " #endif.\n");
  v28 = sub_227D6D0(v27, " #endif.\n");
  v29 = sub_995540(v28, "  ");
  v30 = sub_227B910(v29, *(unsigned int *)(a1 + 2308));
  sub_995540(v30, " #pragma.\n");
  v31 = sub_227D6D0(v30, " #pragma.\n");
  v32 = sub_227B910(v31, *(unsigned int *)(a1 + 2356));
  sub_995540(v32, " #if/#ifndef#ifdef regions skipped\n");
  v33 = sub_227D6D0(v32, " #if/#ifndef#ifdef regions skipped\n");
  v34 = sub_227B910(v33, *(unsigned int *)(a1 + 2332));
  v35 = sub_995540(v34, "/");
  v36 = sub_227B910(v35, *(unsigned int *)(a1 + 2336));
  v37 = sub_995540(v36, "/");
  v38 = sub_227B910(v37, *(unsigned int *)(a1 + 2340));
  v39 = sub_995540(v38, " obj/fn/builtin macros expanded, ");
  v40 = sub_227B910(v39, *(unsigned int *)(a1 + 2344));
  sub_995540(v40, " on the fast path.\n");
  v41 = sub_227D6D0(v40, " on the fast path.\n");
  v42 = sub_227B910(v41, (unsigned int)(*(_DWORD *)(a1 + 2352) + *(_DWORD *)(a1 + 2348)));
  v43 = sub_995540(v42, " token paste (##) operations performed, ");
  v44 = sub_227B910(v43, *(unsigned int *)(a1 + 2352));
  sub_995540(v44, " on the fast path.\n");
  v45 = sub_227D6D0(v44, " on the fast path.\n");
  v46 = sub_995540(v45, "\nPreprocessor Memory: ");
  v47 = sub_145BF20(a1);
  v48 = sub_227B910(v46, v47);
  sub_995540(v48, "B total");
  v49 = sub_227D6D0(v48, "B total");
  v50 = sub_995540(v49, "\n  BumpPtr: ");
  v51 = *(_QWORD *)(a1 + 144);
  v52 = v51 + 8LL * *(unsigned int *)(a1 + 152);
  if ( v51 == v52 )
  {
    v54 = 0;
  }
  else
  {
    v53 = *(_QWORD *)(a1 + 144);
    v54 = 0;
    do
    {
      while ( 1 )
      {
        v55 = (unsigned int)((v53 - v51) >> 3) >> 7;
        if ( v55 <= 0x1D )
          break;
        v53 += 8;
        v54 += 0x40000000000LL;
        if ( v52 == v53 )
          goto LABEL_5;
      }
      v53 += 8;
      v54 += 4096LL << v55;
    }
    while ( v52 != v53 );
  }
LABEL_5:
  v56 = *(_QWORD **)(a1 + 192);
  v57 = &v56[2 * *(unsigned int *)(a1 + 200)];
  if ( v56 != v57 )
  {
    v58 = *(_QWORD *)(a1 + 192);
    v59 = 16LL * *(unsigned int *)(a1 + 200) - 16;
    if ( v59 > 0x40 )
    {
      v60 = 0;
      v61 = (char *)v56 + (v59 & 0xFFFFFFFFFFFFFFE0LL);
      do
      {
        v62 = _mm_loadu_si128((const __m128i *)(v58 + 8));
        v63 = _mm_loadu_si128((const __m128i *)(v58 + 24));
        v58 += 32;
        v60 = _mm_add_epi64(v60, _mm_unpacklo_epi64(v62, v63));
      }
      while ( (char *)v58 != v61 );
      v56 += 2 * (((16 * (unsigned __int64)*(unsigned int *)(a1 + 200) - 16) >> 4) & 0xFFFFFFFFFFFFFFFELL);
      v54 += _mm_add_epi64(v60, _mm_srli_si128(v60, 8)).m128i_u64[0];
    }
    v54 += v56[1];
    if ( v57 != v56 + 2 )
    {
      v54 += v56[3];
      if ( v57 != v56 + 4 )
      {
        v54 += v56[5];
        if ( v57 != v56 + 6 )
        {
          v54 += v56[7];
          if ( v57 != v56 + 8 )
            v54 += v56[9];
        }
      }
    }
  }
  v64 = v50;
  sub_227B910(v50, v54);
  v65 = sub_227D6D0(v64, v54);
  v66 = sub_995540(v65, "\n  Macro Expanded Tokens: ");
  v67 = 24LL * *(unsigned int *)(a1 + 2484);
  sub_227B910(v66, v67);
  v68 = sub_227D6D0(v66, v67);
  v69 = sub_995540(v68, "\n  Predefines Buffer: ");
  if ( *(_QWORD *)(a1 + 2360) == a1 + 2376 )
    v70 = 15;
  else
    v70 = *(_QWORD *)(a1 + 2376);
  v71 = v69;
  sub_227B910(v69, v70);
  v72 = sub_227D6D0(v71, v70);
  v73 = sub_995540(v72, "\n  Macros: ");
  v74 = 16LL * *(unsigned int *)(*(_QWORD *)(a1 + 1704) + 16LL);
  sub_227B910(v73, v74);
  v75 = sub_227D6D0(v73, v74);
  v76 = sub_995540(v75, "\n  #pragma push_macro Info: ");
  v77 = 32LL * *(unsigned int *)(a1 + 2288);
  sub_227B910(v76, v77);
  v78 = sub_227D6D0(v76, v77);
  v79 = sub_995540(v78, "\n  Poison Reasons: ");
  v80 = 16LL * *(unsigned int *)(a1 + 3048);
  sub_227B910(v79, v80);
  v81 = sub_227D6D0(v79, v80);
  v82 = sub_995540(v81, "\n  Comment Handlers: ");
  v83 = sub_227B910(v82, *(_QWORD *)(a1 + 728) - *(_QWORD *)(a1 + 712));
  return sub_995540(v83, "\n");
}
