__int64 __fastcall sub_FD6610(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __m128i *v4; // rcx
  __int64 v5; // rax
  __m128i *v6; // rcx
  __int64 v7; // rax
  __m128i *v8; // rcx
  __int64 v9; // rax
  __m128i *v10; // rcx
  __int64 v11; // rax
  __m128i *v12; // rcx
  __int64 v13; // rax
  __m128i *v14; // rcx
  __m128i *v15; // rcx
  __m128i v16; // xmm0
  __m128i si128; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0

  result = (*(__int64 (__fastcall **)(_QWORD *, void *))(*a2 + 24LL))(a2, &unk_26FAE04);
  if ( (_BYTE)result )
  {
    v3 = sub_227D6D0(a2, &unk_26FAE04);
    v4 = *(__m128i **)(v3 + 32);
    if ( *(_QWORD *)(v3 + 24) - (_QWORD)v4 > 0x1Fu )
    {
      *v4 = _mm_load_si128((const __m128i *)&xmmword_23A9250);
      v4[1] = _mm_load_si128((const __m128i *)&xmmword_23A9260);
      *(_QWORD *)(v3 + 32) += 32LL;
    }
    else
    {
      v3 = sub_227BF10(v3, "\n*** Virtual File System Stats:\n", 32);
    }
    v5 = sub_227B910(v3, a2[3]);
    v6 = *(__m128i **)(v5 + 32);
    if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 > 0xFu )
    {
      *v6 = _mm_load_si128((const __m128i *)&xmmword_23A9270);
      *(_QWORD *)(v5 + 32) += 16LL;
    }
    else
    {
      v5 = sub_227BF10(v5, " status() calls\n", 16);
    }
    v7 = sub_227B910(v5, a2[4]);
    v8 = *(__m128i **)(v7 + 32);
    if ( *(_QWORD *)(v7 + 24) - (_QWORD)v8 > 0x18u )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9280);
      v8[1].m128i_i8[8] = 10;
      v8[1].m128i_i64[0] = 0x736C6C6163202928LL;
      *v8 = si128;
      *(_QWORD *)(v7 + 32) += 25LL;
    }
    else
    {
      v7 = sub_227BF10(v7, " openFileForRead() calls\n", 25);
    }
    v9 = sub_227B910(v7, a2[5]);
    v10 = *(__m128i **)(v9 + 32);
    if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 > 0x12u )
    {
      v18 = _mm_load_si128((const __m128i *)&xmmword_23A9290);
      v10[1].m128i_i8[2] = 10;
      v10[1].m128i_i16[0] = 29548;
      *v10 = v18;
      *(_QWORD *)(v9 + 32) += 19LL;
    }
    else
    {
      v9 = sub_227BF10(v9, " dir_begin() calls\n", 19);
    }
    v11 = sub_227B910(v9, a2[6]);
    v12 = *(__m128i **)(v11 + 32);
    if ( *(_QWORD *)(v11 + 24) - (_QWORD)v12 > 0x14u )
    {
      v19 = _mm_load_si128((const __m128i *)&xmmword_23A92A0);
      v12[1].m128i_i32[0] = 1936485473;
      v12[1].m128i_i8[4] = 10;
      *v12 = v19;
      *(_QWORD *)(v11 + 32) += 21LL;
    }
    else
    {
      v11 = sub_227BF10(v11, " getRealPath() calls\n", 21);
    }
    v13 = sub_227B910(v11, a2[7]);
    v14 = *(__m128i **)(v13 + 32);
    if ( *(_QWORD *)(v13 + 24) - (_QWORD)v14 > 0xFu )
    {
      *v14 = _mm_load_si128((const __m128i *)&xmmword_23A92B0);
      *(_QWORD *)(v13 + 32) += 16LL;
    }
    else
    {
      v13 = sub_227BF10(v13, " exists() calls\n", 16);
    }
    result = sub_227B910(v13, a2[8]);
    v15 = *(__m128i **)(result + 32);
    if ( *(_QWORD *)(result + 24) - (_QWORD)v15 > 0x10u )
    {
      v16 = _mm_load_si128((const __m128i *)&xmmword_23A92C0);
      v15[1].m128i_i8[0] = 10;
      *v15 = v16;
      *(_QWORD *)(result + 32) += 17LL;
    }
    else
    {
      return sub_227BF10(result, " isLocal() calls\n", 17);
    }
  }
  return result;
}
