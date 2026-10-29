__int64 __fastcall sub_C2C80(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // edx
  int v5; // eax
  bool v6; // zf
  void *v7; // rax
  __int64 v8; // rax
  __m128i si128; // xmm0
  const char *v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rsi
  __m128i v18; // xmm0
  const char *v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r14
  unsigned __int64 v22; // r13
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rax
  _QWORD *v26; // rbp
  __int64 result; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _Unwind_Exception *v33; // rbp

  *(_QWORD *)a1 = &stru_236898;
  *(_DWORD *)(a1 + 8) = -16777212;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 12) = a3 == 0 ? 132992 : 132867;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 40) = "Manual memory regions";
  *(_QWORD *)(a1 + 64) = &off_230C80;
  v3 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v3 );
  *(_DWORD *)(a1 + 176) = 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( ((v4 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v33 = (struct _Unwind_Exception *)interr();
        if ( *(_QWORD *)(a1 + 256) )
        {
          *(_QWORD *)(a1 + 264) = 0;
          qfree();
        }
        if ( *(_QWORD *)(a1 + 232) )
        {
          *(_QWORD *)(a1 + 240) = 0;
          qfree();
        }
        if ( *(_QWORD *)(a1 + 208) )
        {
          *(_QWORD *)(a1 + 216) = 0;
          qfree();
        }
        *(_QWORD *)a1 = &unk_236B00;
        sub_BF540((_QWORD *)a1);
        _Unwind_Resume(v33);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v4 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v4 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)a1 = off_22FD00;
  *(_QWORD *)(a1 + 192) = a2 + 8;
  v5 = *(_DWORD *)(get_eah() + 24);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  v6 = v5 == 4;
  *(_DWORD *)(a1 + 200) = v5;
  v7 = &unk_1D56E0;
  if ( v6 )
    v7 = &unk_1D5720;
  *(_DWORD *)(a1 + 48) = 9;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 56) = v7;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  v8 = qvector_reserve();
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D3130);
  *(_QWORD *)(a1 + 232) = v8;
  v10 = "<~S~tart address:M::32::>\n"
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
  *(__m128i *)v8 = si128;
  *(__m128i *)(v8 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D3140);
  *(__m128i *)(v8 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D3150);
  *(__m128i *)(v8 + 48) = _mm_load_si128((const __m128i *)&xmmword_1D3160);
  *(_BYTE *)(*(_QWORD *)(a1 + 232) + 64LL) = 0;
  if ( *(_DWORD *)(a1 + 200) == 4 )
    v10 = "<~S~tart address:M::32::>\n"
          "<~E~nd address  :M::32::>\n"
          "<~B~ase address :M::32::>\n"
          "<~N~ame         :q:63:32::>\n"
          "<~C~lass        :q:63:32::>\n"
          "<~1~6-bit segment:R>  <~R~eadable:C>\n"
          "<~3~2-bit segment:R>>  <~W~ritable:C>\n"
          "                      <E~x~ecutable:C>>\n"
          "\n"
          "\n";
  v11 = *(_QWORD *)(a1 + 240);
  if ( v11 )
  {
    v14 = v11 + 250;
    v13 = v11 + 251;
    v12 = *(_QWORD *)(a1 + 232);
    --v11;
    if ( *(_QWORD *)(a1 + 248) >= v13 )
      goto LABEL_12;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 232);
    v13 = 252;
    v14 = 251;
    if ( *(_QWORD *)(a1 + 248) >= 0xFCu )
      goto LABEL_12;
  }
  v29 = qvector_reserve();
  *(_QWORD *)(a1 + 232) = v29;
  v12 = v29;
LABEL_12:
  *(_QWORD *)(a1 + 240) = v13;
  v15 = _mm_loadu_si128((const __m128i *)v10);
  *(_BYTE *)(v12 + v14) = 0;
  v16 = v11 + *(_QWORD *)(a1 + 232);
  *(__m128i *)v16 = v15;
  *(__m128i *)(v16 + 16) = _mm_loadu_si128((const __m128i *)v10 + 1);
  *(__m128i *)(v16 + 32) = _mm_loadu_si128((const __m128i *)v10 + 2);
  *(__m128i *)(v16 + 48) = _mm_loadu_si128((const __m128i *)v10 + 3);
  *(__m128i *)(v16 + 64) = _mm_loadu_si128((const __m128i *)v10 + 4);
  *(__m128i *)(v16 + 80) = _mm_loadu_si128((const __m128i *)v10 + 5);
  *(__m128i *)(v16 + 96) = _mm_loadu_si128((const __m128i *)v10 + 6);
  *(__m128i *)(v16 + 112) = _mm_loadu_si128((const __m128i *)v10 + 7);
  *(__m128i *)(v16 + 128) = _mm_loadu_si128((const __m128i *)v10 + 8);
  *(__m128i *)(v16 + 144) = _mm_loadu_si128((const __m128i *)v10 + 9);
  *(__m128i *)(v16 + 160) = _mm_loadu_si128((const __m128i *)v10 + 10);
  *(__m128i *)(v16 + 176) = _mm_loadu_si128((const __m128i *)v10 + 11);
  *(__m128i *)(v16 + 192) = _mm_loadu_si128((const __m128i *)v10 + 12);
  *(__m128i *)(v16 + 208) = _mm_loadu_si128((const __m128i *)v10 + 13);
  *(__m128i *)(v16 + 224) = _mm_loadu_si128((const __m128i *)v10 + 14);
  *(__m128i *)(v16 + 235) = _mm_loadu_si128((const __m128i *)(v10 + 235));
  v17 = *(_QWORD *)(a1 + 256);
  if ( *(_QWORD *)(a1 + 272) <= 0x1Du )
  {
    v32 = qvector_reserve();
    *(_QWORD *)(a1 + 256) = v32;
    v17 = v32;
  }
  v18 = _mm_load_si128((const __m128i *)&xmmword_1D3170);
  v19 = "<~S~tart address:M::32::>\n"
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
  *(__m128i *)v17 = v18;
  *(__m128i *)(v17 + 13) = _mm_load_si128((const __m128i *)&xmmword_1D3160);
  *(_BYTE *)(*(_QWORD *)(a1 + 256) + 29LL) = 0;
  if ( *(_DWORD *)(a1 + 200) != 4 )
    v19 = "<~S~tart address:M::32::>\n"
          "<~E~nd address  :M::32::>\n"
          "<~B~ase address :M::32::>\n"
          "<~N~ame         :q:63:32::>\n"
          "<~C~lass        :q:63:32::>\n"
          "<~1~6-bit segment:R>  <~R~eadable:C>\n"
          "<~3~2-bit segment:R>  <~W~ritable:C>\n"
          "<~6~4-bit segment:R>>  <E~x~ecutable:C>>\n"
          "\n"
          "\n";
  v20 = *(_QWORD *)(a1 + 264);
  if ( v20 )
  {
    v21 = v20 + 250;
    v22 = v20 + 251;
    v23 = *(_QWORD *)(a1 + 256);
    --v20;
    if ( *(_QWORD *)(a1 + 272) >= v22 )
      goto LABEL_18;
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 256);
    v22 = 252;
    v21 = 251;
    if ( *(_QWORD *)(a1 + 272) >= 0xFCu )
      goto LABEL_18;
  }
  v30 = qvector_reserve();
  *(_QWORD *)(a1 + 256) = v30;
  v23 = v30;
LABEL_18:
  *(_QWORD *)(a1 + 264) = v22;
  v24 = _mm_loadu_si128((const __m128i *)v19);
  *(_BYTE *)(v23 + v21) = 0;
  v25 = v20 + *(_QWORD *)(a1 + 256);
  *(__m128i *)v25 = v24;
  *(__m128i *)(v25 + 16) = _mm_loadu_si128((const __m128i *)v19 + 1);
  *(__m128i *)(v25 + 32) = _mm_loadu_si128((const __m128i *)v19 + 2);
  *(__m128i *)(v25 + 48) = _mm_loadu_si128((const __m128i *)v19 + 3);
  *(__m128i *)(v25 + 64) = _mm_loadu_si128((const __m128i *)v19 + 4);
  *(__m128i *)(v25 + 80) = _mm_loadu_si128((const __m128i *)v19 + 5);
  *(__m128i *)(v25 + 96) = _mm_loadu_si128((const __m128i *)v19 + 6);
  *(__m128i *)(v25 + 112) = _mm_loadu_si128((const __m128i *)v19 + 7);
  *(__m128i *)(v25 + 128) = _mm_loadu_si128((const __m128i *)v19 + 8);
  *(__m128i *)(v25 + 144) = _mm_loadu_si128((const __m128i *)v19 + 9);
  *(__m128i *)(v25 + 160) = _mm_loadu_si128((const __m128i *)v19 + 10);
  *(__m128i *)(v25 + 176) = _mm_loadu_si128((const __m128i *)v19 + 11);
  *(__m128i *)(v25 + 192) = _mm_loadu_si128((const __m128i *)v19 + 12);
  *(__m128i *)(v25 + 208) = _mm_loadu_si128((const __m128i *)v19 + 13);
  *(__m128i *)(v25 + 224) = _mm_loadu_si128((const __m128i *)v19 + 14);
  *(__m128i *)(v25 + 235) = _mm_loadu_si128((const __m128i *)(v19 + 235));
  v26 = *(_QWORD **)(a1 + 192);
  result = v26[4];
  v28 = v26[3];
  if ( v26[5] < (unsigned __int64)(result + 1) )
  {
    v31 = qvector_reserve();
    v26[3] = v31;
    v28 = v31;
    result = v26[4];
  }
  *(_QWORD *)(v28 + 8 * result) = a1;
  ++v26[4];
  return result;
}

