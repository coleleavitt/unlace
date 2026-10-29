__int64 __fastcall sub_1FDA3E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char *v5; // rsi
  __int64 v6; // rax
  _BYTE *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  __m128i *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rax
  __m128i *v16; // rcx
  __int64 v17; // rax
  _BYTE *v18; // rdx
  __m128i *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  _BYTE *v23; // rdx
  __int64 v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // rax
  _BYTE *v27; // rdx
  __m128i *v28; // rcx
  __int64 v29; // rax
  _BYTE *v30; // rdx
  __int64 v31; // rax
  __m128i *v32; // rcx
  __int64 v33; // rax
  _BYTE *v34; // rdx
  __m128i *v35; // rcx
  __int64 v36; // rax
  _BYTE *v37; // rdx
  __int64 v38; // rax
  __m128i *v39; // rcx
  __int64 v40; // rax
  _BYTE *v41; // rdx
  __m128i *v42; // rcx
  __int64 v43; // rax
  _BYTE *v44; // rdx
  __int64 v45; // rax
  __m128i *v46; // rcx
  __int64 v47; // rax
  _BYTE *v48; // rdx
  __m128i *v49; // rcx
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 v52; // rax
  __m128i *v53; // rcx
  __int64 v54; // rax
  _BYTE *v55; // rdx
  __m128i *v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rax
  _BYTE *v60; // rdx
  __int64 v61; // rax
  __m128i *v62; // rcx
  __int64 v63; // rax
  _BYTE *v64; // rdx
  __m128i *v65; // rcx
  __int64 result; // rax
  _BYTE *v67; // rdx
  __int64 v68; // rax
  void *v69; // rcx
  int v70; // eax
  __int64 v71; // r12
  __int64 i; // rbp
  __int64 v73; // rcx
  __int64 v74; // rax
  _WORD *v75; // rcx
  __m128i si128; // xmm0
  __m128i v77; // xmm0
  __m128i v78; // xmm0
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  __m128i v82; // xmm0
  __m128i v83; // xmm0
  __m128i v84; // xmm0
  __m128i v85; // xmm0
  __m128i v86; // xmm0
  __m128i v87; // xmm0
  __m128i v88; // xmm0
  __m128i v89; // xmm0
  __m128i v90; // xmm0
  __int64 v91; // rax
  _BYTE *v92; // rdx

  v3 = sub_227D6D0(a1, a2);
  v4 = *(_QWORD *)(v3 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(v3 + 24) - v4) > 8 )
  {
    *(_BYTE *)(v4 + 8) = 32;
    *(_QWORD *)v4 = 0x3A656C75646F4D0ALL;
    *(_QWORD *)(v3 + 32) += 9LL;
  }
  else
  {
    v3 = sub_227BF10(v3, "\nModule: ", 9);
  }
  v5 = *(char **)(a1 + 8);
  v6 = sub_227BF10(v3, v5, *(_QWORD *)(a1 + 16));
  v7 = *(_BYTE **)(v6 + 32);
  if ( *(_BYTE **)(v6 + 24) == v7 )
  {
    v5 = "\n";
    sub_227BF10(v6, "\n", 1);
  }
  else
  {
    *v7 = 10;
    ++*(_QWORD *)(v6 + 32);
  }
  v8 = *(unsigned int *)(a1 + 3312);
  if ( (_DWORD)v8 )
  {
    v68 = sub_227D6D0(v8, v5);
    v69 = *(void **)(v68 + 32);
    if ( *(_QWORD *)(v68 + 24) - (_QWORD)v69 > 0xAu )
    {
      v8 = 0x74726F706D492020LL;
      v5 = (_BYTE *)(&stru_3A60 + 19);
      qmemcpy(v69, "  Imports: ", 11);
      *(_QWORD *)(v68 + 32) += 11LL;
    }
    else
    {
      v5 = "  Imports: ";
      v8 = v68;
      sub_227BF10(v68, "  Imports: ", 11);
    }
    v70 = *(_DWORD *)(a1 + 3312);
    if ( v70 )
    {
      v71 = (unsigned int)(v70 - 1);
      for ( i = 0; ; ++i )
      {
        v8 = sub_227D6D0(v8, v5);
        v73 = *(_QWORD *)(*(_QWORD *)(a1 + 3304) + 8 * i);
        v5 = *(char **)(v73 + 8);
        sub_227BF10(v8, v5, *(_QWORD *)(v73 + 16));
        if ( i == v71 )
          break;
        if ( (_DWORD)i != -1 )
        {
          v74 = sub_227D6D0(v8, v5);
          v75 = *(_WORD **)(v74 + 32);
          if ( *(_QWORD *)(v74 + 24) - (_QWORD)v75 <= 1u )
          {
            v5 = ", ";
            v8 = v74;
            sub_227BF10(v74, ", ", 2);
          }
          else
          {
            *v75 = 8236;
            *(_QWORD *)(v74 + 32) += 2LL;
          }
        }
      }
    }
    v91 = sub_227D6D0(v8, v5);
    v92 = *(_BYTE **)(v91 + 32);
    if ( *(_BYTE **)(v91 + 24) == v92 )
    {
      v5 = "\n";
      v8 = v91;
      sub_227BF10(v91, "\n", 1);
    }
    else
    {
      *v92 = 10;
      ++*(_QWORD *)(v91 + 32);
    }
  }
  v9 = sub_227D6D0(v8, v5);
  v10 = *(__m128i **)(v9 + 32);
  if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 > 0x1Eu )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AAC50);
    qmemcpy(&v10[1], "cation offset: ", 15);
    *v10 = si128;
    *(_QWORD *)(v9 + 32) += 31LL;
  }
  else
  {
    v9 = sub_227BF10(v9, "  Base source location offset: ", 31);
  }
  v11 = *(unsigned int *)(a1 + 1648);
  v12 = v9;
  v13 = sub_227B910(v9, v11);
  v14 = *(_BYTE **)(v13 + 32);
  if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
  {
    v11 = 10;
    v12 = v13;
    sub_227BA10(v13, 10);
  }
  else
  {
    *(_QWORD *)(v13 + 32) = v14 + 1;
    *v14 = 10;
  }
  v15 = sub_227D6D0(v12, v11);
  v16 = *(__m128i **)(v15 + 32);
  if ( *(_QWORD *)(v15 + 24) - (_QWORD)v16 > 0x15u )
  {
    v80 = _mm_load_si128((const __m128i *)&xmmword_23AAC60);
    v16[1].m128i_i32[0] = 1145643122;
    v16[1].m128i_i16[2] = 8250;
    *v16 = v80;
    *(_QWORD *)(v15 + 32) += 22LL;
  }
  else
  {
    v15 = sub_227BF10(v15, "  Base identifier ID: ", 22);
  }
  v17 = sub_227B910(v15, *(_QWORD *)(a1 + 1688));
  v18 = *(_BYTE **)(v17 + 32);
  if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
  {
    v17 = sub_227BA10(v17, 10);
  }
  else
  {
    *(_QWORD *)(v17 + 32) = v18 + 1;
    *v18 = 10;
  }
  v19 = *(__m128i **)(v17 + 32);
  if ( *(_QWORD *)(v17 + 24) - (_QWORD)v19 > 0x18u )
  {
    v79 = _mm_load_si128((const __m128i *)&xmmword_23AAC70);
    v19[1].m128i_i8[8] = 32;
    v19[1].m128i_i64[0] = 0x3A73726569666974LL;
    *v19 = v79;
    *(_QWORD *)(v17 + 32) += 25LL;
  }
  else
  {
    v17 = sub_227BF10(v17, "  Number of identifiers: ", 25);
  }
  v20 = *(unsigned int *)(a1 + 1672);
  v21 = v17;
  v22 = sub_227B910(v17, v20);
  v23 = *(_BYTE **)(v22 + 32);
  if ( (unsigned __int64)v23 >= *(_QWORD *)(v22 + 24) )
  {
    v20 = 10;
    v21 = v22;
    sub_227BA10(v22, 10);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v23 + 1;
    *v23 = 10;
  }
  v24 = sub_227D6D0(v21, v20);
  v25 = *(__m128i **)(v24 + 32);
  if ( *(_QWORD *)(v24 + 24) - (_QWORD)v25 > 0x10u )
  {
    v78 = _mm_load_si128((const __m128i *)&xmmword_23AAC80);
    v25[1].m128i_i8[0] = 32;
    *v25 = v78;
    *(_QWORD *)(v24 + 32) += 17LL;
  }
  else
  {
    v24 = sub_227BF10(v24, "  Base macro ID: ", 17);
  }
  v26 = sub_227B910(v24, *(unsigned int *)(a1 + 2104));
  v27 = *(_BYTE **)(v26 + 32);
  if ( (unsigned __int64)v27 >= *(_QWORD *)(v26 + 24) )
  {
    v26 = sub_227BA10(v26, 10);
  }
  else
  {
    *(_QWORD *)(v26 + 32) = v27 + 1;
    *v27 = 10;
  }
  v28 = *(__m128i **)(v26 + 32);
  if ( *(_QWORD *)(v26 + 24) - (_QWORD)v28 > 0x13u )
  {
    v77 = _mm_load_si128((const __m128i *)&xmmword_23AAC90);
    v28[1].m128i_i32[0] = 540701551;
    *v28 = v77;
    *(_QWORD *)(v26 + 32) += 20LL;
  }
  else
  {
    v26 = sub_227BF10(v26, "  Number of macros: ", 20);
  }
  v29 = sub_227B910(v26, *(unsigned int *)(a1 + 2080));
  v30 = *(_BYTE **)(v29 + 32);
  if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 24) )
  {
    sub_227BA10(v29, 10);
  }
  else
  {
    *(_QWORD *)(v29 + 32) = v30 + 1;
    *v30 = 10;
  }
  sub_1FD9230("Macro ID local -> global map", 0x1Cu, (unsigned int **)(a1 + 2112));
  v31 = sub_227D6D0("Macro ID local -> global map", 28);
  v32 = *(__m128i **)(v31 + 32);
  if ( *(_QWORD *)(v31 + 24) - (_QWORD)v32 > 0x14u )
  {
    v84 = _mm_load_si128((const __m128i *)&xmmword_23AACA0);
    v32[1].m128i_i32[0] = 977553696;
    v32[1].m128i_i8[4] = 32;
    *v32 = v84;
    *(_QWORD *)(v31 + 32) += 21LL;
  }
  else
  {
    v31 = sub_227BF10(v31, "  Base submodule ID: ", 21);
  }
  v33 = sub_227B910(v31, *(unsigned int *)(a1 + 2596));
  v34 = *(_BYTE **)(v33 + 32);
  if ( (unsigned __int64)v34 >= *(_QWORD *)(v33 + 24) )
  {
    v33 = sub_227BA10(v33, 10);
  }
  else
  {
    *(_QWORD *)(v33 + 32) = v34 + 1;
    *v34 = 10;
  }
  v35 = *(__m128i **)(v33 + 32);
  if ( *(_QWORD *)(v33 + 24) - (_QWORD)v35 > 0x17u )
  {
    v83 = _mm_load_si128((const __m128i *)&xmmword_23AACB0);
    v35[1].m128i_i64[0] = 0x203A73656C75646FLL;
    *v35 = v83;
    *(_QWORD *)(v33 + 32) += 24LL;
  }
  else
  {
    v33 = sub_227BF10(v33, "  Number of submodules: ", 24);
  }
  v36 = sub_227B910(v33, *(unsigned int *)(a1 + 2592));
  v37 = *(_BYTE **)(v36 + 32);
  if ( (unsigned __int64)v37 >= *(_QWORD *)(v36 + 24) )
  {
    sub_227BA10(v36, 10);
  }
  else
  {
    *(_QWORD *)(v36 + 32) = v37 + 1;
    *v37 = 10;
  }
  sub_1FD9230("Submodule ID local -> global map", 0x20u, (unsigned int **)(a1 + 2600));
  v38 = sub_227D6D0("Submodule ID local -> global map", 32);
  v39 = *(__m128i **)(v38 + 32);
  if ( *(_QWORD *)(v38 + 24) - (_QWORD)v39 > 0x13u )
  {
    v82 = _mm_load_si128((const __m128i *)&xmmword_23AACC0);
    v39[1].m128i_i32[0] = 540689481;
    *v39 = v82;
    *(_QWORD *)(v38 + 32) += 20LL;
  }
  else
  {
    v38 = sub_227BF10(v38, "  Base selector ID: ", 20);
  }
  v40 = sub_227B910(v38, *(unsigned int *)(a1 + 2648));
  v41 = *(_BYTE **)(v40 + 32);
  if ( (unsigned __int64)v41 >= *(_QWORD *)(v40 + 24) )
  {
    v40 = sub_227BA10(v40, 10);
  }
  else
  {
    *(_QWORD *)(v40 + 32) = v41 + 1;
    *v41 = 10;
  }
  v42 = *(__m128i **)(v40 + 32);
  if ( *(_QWORD *)(v40 + 24) - (_QWORD)v42 > 0x16u )
  {
    v81 = _mm_load_si128((const __m128i *)&xmmword_23AACD0);
    v42[1].m128i_i32[0] = 1919906915;
    v42[1].m128i_i16[2] = 14963;
    *v42 = v81;
    v42[1].m128i_i8[6] = 32;
    *(_QWORD *)(v40 + 32) += 23LL;
  }
  else
  {
    v40 = sub_227BF10(v40, "  Number of selectors: ", 23);
  }
  v43 = sub_227B910(v40, *(unsigned int *)(a1 + 2632));
  v44 = *(_BYTE **)(v43 + 32);
  if ( (unsigned __int64)v44 >= *(_QWORD *)(v43 + 24) )
  {
    sub_227BA10(v43, 10);
  }
  else
  {
    *(_QWORD *)(v43 + 32) = v44 + 1;
    *v44 = 10;
  }
  sub_1FD9230("Selector ID local -> global map", 0x1Fu, (unsigned int **)(a1 + 2656));
  v45 = sub_227D6D0("Selector ID local -> global map", 31);
  v46 = *(__m128i **)(v45 + 32);
  if ( *(_QWORD *)(v45 + 24) - (_QWORD)v46 > 0x1Eu )
  {
    v88 = _mm_load_si128((const __m128i *)&xmmword_23AACE0);
    qmemcpy(&v46[1], "sed entity ID: ", 15);
    *v46 = v88;
    *(_QWORD *)(v45 + 32) += 31LL;
  }
  else
  {
    v45 = sub_227BF10(v45, "  Base preprocessed entity ID: ", 31);
  }
  v47 = sub_227B910(v45, *(unsigned int *)(a1 + 2504));
  v48 = *(_BYTE **)(v47 + 32);
  if ( (unsigned __int64)v48 >= *(_QWORD *)(v47 + 24) )
  {
    v47 = sub_227BA10(v47, 10);
  }
  else
  {
    *(_QWORD *)(v47 + 32) = v48 + 1;
    *v48 = 10;
  }
  v49 = *(__m128i **)(v47 + 32);
  if ( *(_QWORD *)(v47 + 24) - (_QWORD)v49 > 0x22u )
  {
    v87 = _mm_load_si128((const __m128i *)&xmmword_23AACF0);
    v49[2].m128i_i8[2] = 32;
    v49[2].m128i_i16[0] = 14963;
    *v49 = v87;
    v49[1] = _mm_load_si128((const __m128i *)&xmmword_23AAD00);
    *(_QWORD *)(v47 + 32) += 35LL;
  }
  else
  {
    v47 = sub_227BF10(v47, "  Number of preprocessed entities: ", 35);
  }
  v50 = sub_227B910(v47, *(unsigned int *)(a1 + 2552));
  v51 = *(_BYTE **)(v50 + 32);
  if ( (unsigned __int64)v51 >= *(_QWORD *)(v50 + 24) )
  {
    sub_227BA10(v50, 10);
  }
  else
  {
    *(_QWORD *)(v50 + 32) = v51 + 1;
    *v51 = 10;
  }
  sub_1FD9230("Preprocessed entity ID local -> global map", 0x2Au, (unsigned int **)(a1 + 2512));
  v52 = sub_227D6D0("Preprocessed entity ID local -> global map", 42);
  v53 = *(__m128i **)(v52 + 32);
  if ( *(_QWORD *)(v52 + 24) - (_QWORD)v53 > 0x12u )
  {
    v86 = _mm_load_si128((const __m128i *)&xmmword_23AAD10);
    v53[1].m128i_i8[2] = 32;
    v53[1].m128i_i16[0] = 14968;
    *v53 = v86;
    *(_QWORD *)(v52 + 32) += 19LL;
  }
  else
  {
    v52 = sub_227BF10(v52, "  Base type index: ", 19);
  }
  v54 = sub_227B910(v52, *(_QWORD *)(a1 + 3152));
  v55 = *(_BYTE **)(v54 + 32);
  if ( (unsigned __int64)v55 >= *(_QWORD *)(v54 + 24) )
  {
    v54 = sub_227BA10(v54, 10);
  }
  else
  {
    *(_QWORD *)(v54 + 32) = v55 + 1;
    *v55 = 10;
  }
  v56 = *(__m128i **)(v54 + 32);
  if ( *(_QWORD *)(v54 + 24) - (_QWORD)v56 > 0x12u )
  {
    v85 = _mm_load_si128((const __m128i *)&xmmword_23AAD20);
    v56[1].m128i_i8[2] = 32;
    v56[1].m128i_i16[0] = 14963;
    *v56 = v85;
    *(_QWORD *)(v54 + 32) += 19LL;
  }
  else
  {
    v54 = sub_227BF10(v54, "  Number of types: ", 19);
  }
  v57 = *(unsigned int *)(a1 + 3136);
  v58 = v54;
  v59 = sub_227B910(v54, v57);
  v60 = *(_BYTE **)(v59 + 32);
  if ( (unsigned __int64)v60 >= *(_QWORD *)(v59 + 24) )
  {
    v57 = 10;
    v58 = v59;
    sub_227BA10(v59, 10);
  }
  else
  {
    *(_QWORD *)(v59 + 32) = v60 + 1;
    *v60 = 10;
  }
  v61 = sub_227D6D0(v58, v57);
  v62 = *(__m128i **)(v61 + 32);
  if ( *(_QWORD *)(v61 + 24) - (_QWORD)v62 > 0x12u )
  {
    v90 = _mm_load_si128((const __m128i *)&xmmword_23AAD30);
    v62[1].m128i_i8[2] = 32;
    v62[1].m128i_i16[0] = 14968;
    *v62 = v90;
    *(_QWORD *)(v61 + 32) += 19LL;
  }
  else
  {
    v61 = sub_227BF10(v61, "  Base decl index: ", 19);
  }
  v63 = sub_227B910(v61, *(unsigned int *)(a1 + 3072));
  v64 = *(_BYTE **)(v63 + 32);
  if ( (unsigned __int64)v64 >= *(_QWORD *)(v63 + 24) )
  {
    v63 = sub_227BA10(v63, 10);
  }
  else
  {
    *(_QWORD *)(v63 + 32) = v64 + 1;
    *v64 = 10;
  }
  v65 = *(__m128i **)(v63 + 32);
  if ( *(_QWORD *)(v63 + 24) - (_QWORD)v65 > 0x12u )
  {
    v89 = _mm_load_si128((const __m128i *)&xmmword_23AAD40);
    v65[1].m128i_i8[2] = 32;
    v65[1].m128i_i16[0] = 14963;
    *v65 = v89;
    *(_QWORD *)(v63 + 32) += 19LL;
  }
  else
  {
    v63 = sub_227BF10(v63, "  Number of decls: ", 19);
  }
  result = sub_227B910(v63, *(unsigned int *)(a1 + 3056));
  v67 = *(_BYTE **)(result + 32);
  if ( (unsigned __int64)v67 >= *(_QWORD *)(result + 24) )
    return sub_227BA10(result, 10);
  *(_QWORD *)(result + 32) = v67 + 1;
  *v67 = 10;
  return result;
}
