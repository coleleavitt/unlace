__int64 __fastcall sub_FD8130(__int64 a1, const char *a2)
{
  __int64 v3; // rax
  __m128i *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i *v8; // rcx
  const char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __m128i *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i *v15; // rcx
  const char *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __m128i *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // rcx
  const char *v23; // rsi
  __int64 v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rcx
  __int64 v30; // rax
  __m128i *v31; // rcx
  _QWORD *v32; // rbx
  __int64 v33; // rax
  __m128i *v34; // rcx
  __int64 v35; // rax
  __m128i *v36; // rcx
  __int64 v37; // rax
  __m128i *v38; // rcx
  __int64 v39; // rax
  __m128i *v40; // rcx
  __int64 v41; // rax
  __m128i *v42; // rcx
  __int64 v43; // rax
  __m128i *v44; // rcx
  __int64 v45; // rax
  __m128i *v46; // rcx
  __m128i si128; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  __m128i v54; // xmm0
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  _BYTE v59[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = sub_227D6D0(a1, a2);
  v4 = *(__m128i **)(v3 + 32);
  if ( *(_QWORD *)(v3 + 24) - (_QWORD)v4 > 0x18u )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A92D0);
    v4[1].m128i_i8[8] = 10;
    v5 = 0x3A73746174532072LL;
    v4[1].m128i_i64[0] = 0x3A73746174532072LL;
    *v4 = si128;
    *(_QWORD *)(v3 + 32) += 25LL;
  }
  else
  {
    a2 = "\n*** File Manager Stats:\n";
    v5 = v3;
    sub_227BF10(v3, "\n*** File Manager Stats:\n", 25);
  }
  v6 = sub_227D6D0(v5, a2);
  v7 = sub_227B910(v6, *(unsigned int *)(a1 + 272));
  v8 = *(__m128i **)(v7 + 32);
  if ( *(_QWORD *)(v7 + 24) - (_QWORD)v8 > 0x12u )
  {
    v54 = _mm_load_si128((const __m128i *)&xmmword_23A92E0);
    v8[1].m128i_i8[2] = 32;
    v8[1].m128i_i16[0] = 11364;
    *v8 = v54;
    *(_QWORD *)(v7 + 32) += 19LL;
  }
  else
  {
    v7 = sub_227BF10(v7, " real files found, ", 19);
  }
  v9 = (const char *)*(unsigned int *)(a1 + 248);
  v10 = v7;
  v11 = sub_227B910(v7, v9);
  v12 = *(__m128i **)(v11 + 32);
  if ( *(_QWORD *)(v11 + 24) - (_QWORD)v12 > 0x11u )
  {
    v53 = _mm_load_si128((const __m128i *)&xmmword_23A92F0);
    v12[1].m128i_i16[0] = 2606;
    *v12 = v53;
    *(_QWORD *)(v11 + 32) += 18LL;
  }
  else
  {
    v9 = " real dirs found.\n";
    v10 = v11;
    sub_227BF10(v11, " real dirs found.\n", 18);
  }
  v13 = sub_227D6D0(v10, v9);
  v14 = sub_227B910(v13, *(unsigned int *)(a1 + 344));
  v15 = *(__m128i **)(v14 + 32);
  if ( *(_QWORD *)(v14 + 24) - (_QWORD)v15 > 0x15u )
  {
    v52 = _mm_load_si128((const __m128i *)&xmmword_23A9300);
    v15[1].m128i_i32[0] = 1684960623;
    v15[1].m128i_i16[2] = 8236;
    *v15 = v52;
    *(_QWORD *)(v14 + 32) += 22LL;
  }
  else
  {
    v14 = sub_227BF10(v14, " virtual files found, ", 22);
  }
  v16 = (const char *)*(unsigned int *)(a1 + 296);
  v17 = v14;
  v18 = sub_227B910(v14, v16);
  v19 = *(__m128i **)(v18 + 32);
  if ( *(_QWORD *)(v18 + 24) - (_QWORD)v19 > 0x14u )
  {
    v51 = _mm_load_si128((const __m128i *)&xmmword_23A9310);
    v19[1].m128i_i32[0] = 778333813;
    v19[1].m128i_i8[4] = 10;
    *v19 = v51;
    *(_QWORD *)(v18 + 32) += 21LL;
  }
  else
  {
    v16 = " virtual dirs found.\n";
    v17 = v18;
    sub_227BF10(v18, " virtual dirs found.\n", 21);
  }
  v20 = sub_227D6D0(v17, v16);
  v21 = sub_227B910(v20, *(unsigned int *)(a1 + 780));
  v22 = *(void **)(v21 + 32);
  if ( *(_QWORD *)(v21 + 24) - (_QWORD)v22 > 0xDu )
  {
    qmemcpy(v22, " dir lookups, ", 14);
    *(_QWORD *)(v21 + 32) += 14LL;
  }
  else
  {
    v21 = sub_227BF10(v21, " dir lookups, ", 14);
  }
  v23 = (const char *)*(unsigned int *)(a1 + 788);
  v24 = sub_227B910(v21, v23);
  v25 = *(__m128i **)(v24 + 32);
  if ( *(_QWORD *)(v24 + 24) - (_QWORD)v25 > 0x12u )
  {
    v50 = _mm_load_si128((const __m128i *)&xmmword_23A9320);
    v26 = 11891;
    v25[1].m128i_i8[2] = 10;
    v25[1].m128i_i16[0] = 11891;
    *v25 = v50;
    *(_QWORD *)(v24 + 32) += 19LL;
  }
  else
  {
    v23 = " dir cache misses.\n";
    v26 = v24;
    sub_227BF10(v24, " dir cache misses.\n", 19);
  }
  v27 = sub_227D6D0(v26, v23);
  v28 = sub_227B910(v27, *(unsigned int *)(a1 + 784));
  v29 = *(void **)(v28 + 32);
  if ( *(_QWORD *)(v28 + 24) - (_QWORD)v29 > 0xEu )
  {
    qmemcpy(v29, " file lookups, ", 15);
    *(_QWORD *)(v28 + 32) += 15LL;
  }
  else
  {
    v28 = sub_227BF10(v28, " file lookups, ", 15);
  }
  v30 = sub_227B910(v28, *(unsigned int *)(a1 + 792));
  v31 = *(__m128i **)(v30 + 32);
  if ( *(_QWORD *)(v30 + 24) - (_QWORD)v31 > 0x13u )
  {
    v49 = _mm_load_si128((const __m128i *)&xmmword_23A9330);
    v31[1].m128i_i32[0] = 170816357;
    *v31 = v49;
    *(_QWORD *)(v30 + 32) += 20LL;
  }
  else
  {
    sub_227BF10(v30, " file cache misses.\n", 20);
  }
  v32 = *(_QWORD **)(a1 + 8);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v32 + 24LL))(v32, &unk_26FAE04) )
  {
    v33 = sub_227D6D0(v32, &unk_26FAE04);
    v34 = *(__m128i **)(v33 + 32);
    if ( *(_QWORD *)(v33 + 24) - (_QWORD)v34 > 0x1Fu )
    {
      *v34 = _mm_load_si128((const __m128i *)&xmmword_23A9250);
      v34[1] = _mm_load_si128((const __m128i *)&xmmword_23A9260);
      *(_QWORD *)(v33 + 32) += 32LL;
    }
    else
    {
      v33 = sub_227BF10(v33, "\n*** Virtual File System Stats:\n", 32);
    }
    v35 = sub_227B910(v33, v32[3]);
    v36 = *(__m128i **)(v35 + 32);
    if ( *(_QWORD *)(v35 + 24) - (_QWORD)v36 > 0xFu )
    {
      *v36 = _mm_load_si128((const __m128i *)&xmmword_23A9270);
      *(_QWORD *)(v35 + 32) += 16LL;
    }
    else
    {
      v35 = sub_227BF10(v35, " status() calls\n", 16);
    }
    v37 = sub_227B910(v35, v32[4]);
    v38 = *(__m128i **)(v37 + 32);
    if ( *(_QWORD *)(v37 + 24) - (_QWORD)v38 > 0x18u )
    {
      v55 = _mm_load_si128((const __m128i *)&xmmword_23A9280);
      v38[1].m128i_i8[8] = 10;
      v38[1].m128i_i64[0] = 0x736C6C6163202928LL;
      *v38 = v55;
      *(_QWORD *)(v37 + 32) += 25LL;
    }
    else
    {
      v37 = sub_227BF10(v37, " openFileForRead() calls\n", 25);
    }
    v39 = sub_227B910(v37, v32[5]);
    v40 = *(__m128i **)(v39 + 32);
    if ( *(_QWORD *)(v39 + 24) - (_QWORD)v40 > 0x12u )
    {
      v56 = _mm_load_si128((const __m128i *)&xmmword_23A9290);
      v40[1].m128i_i8[2] = 10;
      v40[1].m128i_i16[0] = 29548;
      *v40 = v56;
      *(_QWORD *)(v39 + 32) += 19LL;
    }
    else
    {
      v39 = sub_227BF10(v39, " dir_begin() calls\n", 19);
    }
    v41 = sub_227B910(v39, v32[6]);
    v42 = *(__m128i **)(v41 + 32);
    if ( *(_QWORD *)(v41 + 24) - (_QWORD)v42 > 0x14u )
    {
      v57 = _mm_load_si128((const __m128i *)&xmmword_23A92A0);
      v42[1].m128i_i32[0] = 1936485473;
      v42[1].m128i_i8[4] = 10;
      *v42 = v57;
      *(_QWORD *)(v41 + 32) += 21LL;
    }
    else
    {
      v41 = sub_227BF10(v41, " getRealPath() calls\n", 21);
    }
    v43 = sub_227B910(v41, v32[7]);
    v44 = *(__m128i **)(v43 + 32);
    if ( *(_QWORD *)(v43 + 24) - (_QWORD)v44 > 0xFu )
    {
      *v44 = _mm_load_si128((const __m128i *)&xmmword_23A92B0);
      *(_QWORD *)(v43 + 32) += 16LL;
    }
    else
    {
      v43 = sub_227BF10(v43, " exists() calls\n", 16);
    }
    v45 = sub_227B910(v43, v32[8]);
    v46 = *(__m128i **)(v45 + 32);
    if ( *(_QWORD *)(v45 + 24) - (_QWORD)v46 > 0x10u )
    {
      v58 = _mm_load_si128((const __m128i *)&xmmword_23A92C0);
      v46[1].m128i_i8[0] = 10;
      *v46 = v58;
      *(_QWORD *)(v45 + 32) += 17LL;
    }
    else
    {
      sub_227BF10(v45, " isLocal() calls\n", 17);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall *)(__int64, _QWORD *), _BYTE *))(*v32 + 120LL))(
           v32,
           sub_FD6610,
           v59);
}
