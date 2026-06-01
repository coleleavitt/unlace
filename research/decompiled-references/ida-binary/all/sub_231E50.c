__int64 __fastcall sub_231E50(__int64 a1, const char *a2, char a3)
{
  _QWORD *v4; // rax
  double v5; // xmm0_8
  __int64 v6; // rdx
  const char *v7; // rsi
  int v8; // eax
  bool v9; // zf
  void *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __m128i si128; // xmm0
  const char *v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned __int64 v17; // r14
  __int64 v18; // r15
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rsi
  __m128i v22; // xmm0
  const char *v23; // r12
  __int64 v24; // rbp
  __int64 v25; // r14
  unsigned __int64 v26; // r13
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rax
  _QWORD *v30; // rbp
  __int64 result; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  struct _Unwind_Exception *v37; // rbp
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi

  *(_QWORD *)a1 = &stru_86F6A0;
  *(_DWORD *)(a1 + 8) = -16777212;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 12) = a3 == 0 ? 132992 : 132867;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 40) = "Manual memory regions";
  *(_QWORD *)(a1 + 64) = &off_860260;
  v4 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  v5 = 0.0;
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v4 );
  *(_DWORD *)(a1 + 176) = 0;
  v6 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v37 = (struct _Unwind_Exception *)interr(3449, a2, v6, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v38 = *(_QWORD *)(a1 + 256);
        if ( v38 )
        {
          *(_QWORD *)(a1 + 264) = 0;
          v5 = qfree(v38, a2);
        }
        v39 = *(_QWORD *)(a1 + 232);
        if ( v39 )
        {
          *(_QWORD *)(a1 + 240) = 0;
          v5 = qfree(v39, a2, v5);
        }
        v40 = *(_QWORD *)(a1 + 208);
        if ( v40 )
        {
          *(_QWORD *)(a1 + 216) = 0;
          qfree(v40, a2, v5);
        }
        *(_QWORD *)a1 = &unk_870060;
        sub_1AB100((_QWORD *)a1, a2);
        _Unwind_Resume(v37);
      }
      BUG();
    }
    v6 = (unsigned int)v6 & 0xFE07FFFF;
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v6;
  }
  *(_QWORD *)(a1 + 184) = a2;
  v7 = a2 + 8;
  *(_QWORD *)a1 = mr_chooser_t___vtable;
  *(_QWORD *)(a1 + 192) = v7;
  v8 = *(_DWORD *)(get_eah(a1, v7, v6) + 24);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  v9 = v8 == 4;
  *(_DWORD *)(a1 + 200) = v8;
  v10 = &unk_5E2B00;
  v11 = a1 + 232;
  if ( v9 )
    v10 = &unk_5E2B40;
  *(_DWORD *)(a1 + 48) = 9;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 56) = v10;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  v12 = qvector_reserve(v11, 0, 65, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC850);
  *(_QWORD *)(a1 + 232) = v12;
  v14 = "<~S~tart address:M::32::>\n"
        "<~E~nd address  :M::32::>\n"
        "<~B~ase address :M::32::>\n"
        "<~N~ame         :q:63:32::>\n"
        "<~C~lass        :q:63:32::>\n"
        "<~1~6-bit segment:R>  <~R~eadable:C>\n"
        "<~3~2-bit segment:R>  <~W~ritable:C>\n"
        "<~6~4-bit segment:R>>  <E~x~ecutable:C>>\n"
        "\n"
        "\n";
  *(_QWORD *)(a1 + 240) = 65;
  *(__m128i *)v12 = si128;
  *(__m128i *)(v12 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC860);
  *(__m128i *)(v12 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC870);
  *(__m128i *)(v12 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DC880);
  *(_BYTE *)(*(_QWORD *)(a1 + 232) + 64LL) = 0;
  if ( *(_DWORD *)(a1 + 200) == 4 )
    v14 = "<~S~tart address:M::32::>\n"
          "<~E~nd address  :M::32::>\n"
          "<~B~ase address :M::32::>\n"
          "<~N~ame         :q:63:32::>\n"
          "<~C~lass        :q:63:32::>\n"
          "<~1~6-bit segment:R>  <~R~eadable:C>\n"
          "<~3~2-bit segment:R>>  <~W~ritable:C>\n"
          "                      <E~x~ecutable:C>>\n"
          "\n"
          "\n";
  v15 = *(_QWORD *)(a1 + 240);
  if ( v15 )
  {
    v18 = v15 + 250;
    v17 = v15 + 251;
    v16 = *(_QWORD *)(a1 + 232);
    --v15;
    if ( *(_QWORD *)(a1 + 248) >= v17 )
      goto LABEL_12;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 232);
    v17 = 252;
    v18 = 251;
    if ( *(_QWORD *)(a1 + 248) >= 0xFCu )
      goto LABEL_12;
  }
  v33 = qvector_reserve(a1 + 232, v16, v17, 1);
  *(_QWORD *)(a1 + 232) = v33;
  v16 = v33;
LABEL_12:
  *(_QWORD *)(a1 + 240) = v17;
  v19 = _mm_loadu_si128((const __m128i *)v14);
  *(_BYTE *)(v16 + v18) = 0;
  v20 = v15 + *(_QWORD *)(a1 + 232);
  *(__m128i *)v20 = v19;
  *(__m128i *)(v20 + 16) = _mm_loadu_si128((const __m128i *)v14 + 1);
  *(__m128i *)(v20 + 32) = _mm_loadu_si128((const __m128i *)v14 + 2);
  *(__m128i *)(v20 + 48) = _mm_loadu_si128((const __m128i *)v14 + 3);
  *(__m128i *)(v20 + 64) = _mm_loadu_si128((const __m128i *)v14 + 4);
  *(__m128i *)(v20 + 80) = _mm_loadu_si128((const __m128i *)v14 + 5);
  *(__m128i *)(v20 + 96) = _mm_loadu_si128((const __m128i *)v14 + 6);
  *(__m128i *)(v20 + 112) = _mm_loadu_si128((const __m128i *)v14 + 7);
  *(__m128i *)(v20 + 128) = _mm_loadu_si128((const __m128i *)v14 + 8);
  *(__m128i *)(v20 + 144) = _mm_loadu_si128((const __m128i *)v14 + 9);
  *(__m128i *)(v20 + 160) = _mm_loadu_si128((const __m128i *)v14 + 10);
  *(__m128i *)(v20 + 176) = _mm_loadu_si128((const __m128i *)v14 + 11);
  *(__m128i *)(v20 + 192) = _mm_loadu_si128((const __m128i *)v14 + 12);
  *(__m128i *)(v20 + 208) = _mm_loadu_si128((const __m128i *)v14 + 13);
  *(__m128i *)(v20 + 224) = _mm_loadu_si128((const __m128i *)v14 + 14);
  *(__m128i *)(v20 + 235) = _mm_loadu_si128((const __m128i *)(v14 + 235));
  v21 = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 272) <= 0x1Du )
  {
    v36 = qvector_reserve(a1 + 256, v21, 30, 1);
    *(_QWORD *)(a1 + 256) = v36;
    v21 = v36;
  }
  v22 = _mm_load_si128((const __m128i *)&xmmword_5DC890);
  v23 = "<~S~tart address:M::32::>\n"
        "<~E~nd address  :M::32::>\n"
        "<~B~ase address :M::32::>\n"
        "<~N~ame         :q:63:32::>\n"
        "<~C~lass        :q:63:32::>\n"
        "<~1~6-bit segment:R>  <~R~eadable:C>\n"
        "<~3~2-bit segment:R>>  <~W~ritable:C>\n"
        "                      <E~x~ecutable:C>>\n"
        "\n"
        "\n";
  *(_QWORD *)(a1 + 264) = 30;
  *(__m128i *)v21 = v22;
  *(__m128i *)(v21 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DC880);
  *(_BYTE *)(*(_QWORD *)(a1 + 256) + 29LL) = 0;
  if ( *(_DWORD *)(a1 + 200) != 4 )
    v23 = "<~S~tart address:M::32::>\n"
          "<~E~nd address  :M::32::>\n"
          "<~B~ase address :M::32::>\n"
          "<~N~ame         :q:63:32::>\n"
          "<~C~lass        :q:63:32::>\n"
          "<~1~6-bit segment:R>  <~R~eadable:C>\n"
          "<~3~2-bit segment:R>  <~W~ritable:C>\n"
          "<~6~4-bit segment:R>>  <E~x~ecutable:C>>\n"
          "\n"
          "\n";
  v24 = *(_QWORD *)(a1 + 264);
  if ( v24 )
  {
    v25 = v24 + 250;
    v26 = v24 + 251;
    v27 = *(_QWORD *)(a1 + 256);
    --v24;
    if ( *(_QWORD *)(a1 + 272) >= v26 )
      goto LABEL_18;
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 256);
    v26 = 252;
    v25 = 251;
    if ( *(_QWORD *)(a1 + 272) >= 0xFCu )
      goto LABEL_18;
  }
  v34 = qvector_reserve(a1 + 256, v27, v26, 1);
  *(_QWORD *)(a1 + 256) = v34;
  v27 = v34;
LABEL_18:
  *(_QWORD *)(a1 + 264) = v26;
  v28 = _mm_loadu_si128((const __m128i *)v23);
  *(_BYTE *)(v27 + v25) = 0;
  v29 = v24 + *(_QWORD *)(a1 + 256);
  *(__m128i *)v29 = v28;
  *(__m128i *)(v29 + 16) = _mm_loadu_si128((const __m128i *)v23 + 1);
  *(__m128i *)(v29 + 32) = _mm_loadu_si128((const __m128i *)v23 + 2);
  *(__m128i *)(v29 + 48) = _mm_loadu_si128((const __m128i *)v23 + 3);
  *(__m128i *)(v29 + 64) = _mm_loadu_si128((const __m128i *)v23 + 4);
  *(__m128i *)(v29 + 80) = _mm_loadu_si128((const __m128i *)v23 + 5);
  *(__m128i *)(v29 + 96) = _mm_loadu_si128((const __m128i *)v23 + 6);
  *(__m128i *)(v29 + 112) = _mm_loadu_si128((const __m128i *)v23 + 7);
  *(__m128i *)(v29 + 128) = _mm_loadu_si128((const __m128i *)v23 + 8);
  *(__m128i *)(v29 + 144) = _mm_loadu_si128((const __m128i *)v23 + 9);
  *(__m128i *)(v29 + 160) = _mm_loadu_si128((const __m128i *)v23 + 10);
  *(__m128i *)(v29 + 176) = _mm_loadu_si128((const __m128i *)v23 + 11);
  *(__m128i *)(v29 + 192) = _mm_loadu_si128((const __m128i *)v23 + 12);
  *(__m128i *)(v29 + 208) = _mm_loadu_si128((const __m128i *)v23 + 13);
  *(__m128i *)(v29 + 224) = _mm_loadu_si128((const __m128i *)v23 + 14);
  *(__m128i *)(v29 + 235) = _mm_loadu_si128((const __m128i *)(v23 + 235));
  v30 = *(_QWORD **)(a1 + 192);
  result = v30[4];
  v32 = v30[3];
  if ( v30[5] < (unsigned __int64)(result + 1) )
  {
    v35 = qvector_reserve(v30 + 3, v32, result + 1, 8);
    v30[3] = v35;
    v32 = v35;
    result = v30[4];
  }
  *(_QWORD *)(v32 + 8 * result) = a1;
  ++v30[4];
  return result;
}
