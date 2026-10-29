unsigned __int64 sub_C2210()
{
  __int64 v0; // rax
  int *v1; // rdx
  int v2; // eax
  bool v3; // zf
  void *v4; // rax
  __m128i *v5; // rax
  const char *v6; // r12
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rsi
  const char *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r14
  unsigned __int64 v17; // r13
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-160h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+10h] [rbp-158h] BYREF
  __int64 v28; // [rsp+18h] [rbp-150h]
  __int128 v29; // [rsp+20h] [rbp-148h]
  __int64 v30; // [rsp+30h] [rbp-138h]
  const char *v31; // [rsp+38h] [rbp-130h]
  int v32; // [rsp+40h] [rbp-128h]
  void *v33; // [rsp+48h] [rbp-120h]
  _UNKNOWN **v34; // [rsp+50h] [rbp-118h]
  int v35; // [rsp+58h] [rbp-110h]
  char v36; // [rsp+60h] [rbp-108h] BYREF
  int v37; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-A0h]
  _QWORD *v39; // [rsp+D0h] [rbp-98h]
  int v40; // [rsp+D8h] [rbp-90h]
  __int64 v41; // [rsp+E0h] [rbp-88h]
  __int128 v42; // [rsp+E8h] [rbp-80h]
  __int64 v43; // [rsp+F8h] [rbp-70h]
  __int128 v44; // [rsp+100h] [rbp-68h]
  __int64 v45; // [rsp+110h] [rbp-58h]
  __int128 v46; // [rsp+118h] [rbp-50h]
  unsigned __int64 v47; // [rsp+128h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v0 = sub_B7CA0();
  v30 = 0;
  v27 = (__int64 (__fastcall **)())&stru_235898;
  v1 = (int *)&v36;
  v28 = 0x20703FF000004LL;
  v31 = "Manual memory regions";
  v32 = 0;
  v33 = nullptr;
  v35 = -1;
  v34 = &off_22FC00;
  v29 = -1;
  do
  {
    *(_QWORD *)v1 = 0;
    v1 += 6;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( &v37 != v1 );
  v37 = 0;
  if ( ((HIDWORD(v28) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v28) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    BYTE3(v28) = ((HIDWORD(v28) >> 19) & 0x3F) - 1;
    HIDWORD(v28) &= 0xFE07FFFF;
  }
  v38 = v0;
  v27 = off_22EC80;
  v39 = (_QWORD *)(v0 + 8);
  v2 = *(_DWORD *)(get_eah() + 8);
  v41 = 0;
  v3 = v2 == 4;
  v40 = v2;
  v4 = &unk_1D46E0;
  if ( v3 )
    v4 = &unk_1D4720;
  v43 = 0;
  v45 = 0;
  v32 = 9;
  v33 = v4;
  v42 = 0;
  v44 = 0;
  v46 = 0;
  v5 = (__m128i *)qvector_reserve();
  v43 = (__int64)v5;
  v6 = "<~S~tart address:M::32::>\n"
       "<~E~nd address  :M::32::>\n"
       "<~B~ase address :M::32::>\n"
       "<~N~ame         :q:63:32::>\n"
       "<~C~lass        :q:63:32::>\n"
       "<~1~6-bit segment:R>  <~R~eadable:C>\n"
       "<~3~2-bit segment:R>  <~W~ritable:C>\n"
       "<~6~4-bit segment:R>>  <E~x~ecutable:C>>\n"
       "\n"
       "\n";
  *(_QWORD *)&v44 = 65;
  *v5 = _mm_load_si128((const __m128i *)&xmmword_1D2110);
  v5[1] = _mm_load_si128((const __m128i *)&xmmword_1D2120);
  v5[2] = _mm_load_si128((const __m128i *)&xmmword_1D2130);
  v5[3] = _mm_load_si128((const __m128i *)&xmmword_1D2140);
  *(_BYTE *)(v43 + 64) = 0;
  if ( v40 == 4 )
    v6 = "<~S~tart address:M::32::>\n"
         "<~E~nd address  :M::32::>\n"
         "<~B~ase address :M::32::>\n"
         "<~N~ame         :q:63:32::>\n"
         "<~C~lass        :q:63:32::>\n"
         "<~1~6-bit segment:R>  <~R~eadable:C>\n"
         "<~3~2-bit segment:R>>  <~W~ritable:C>\n"
         "                      <E~x~ecutable:C>>\n"
         "\n"
         "\n";
  v7 = v44;
  if ( (_QWORD)v44 )
  {
    v9 = v44 + 250;
    v8 = v44 + 251;
    v7 = v44 - 1;
  }
  else
  {
    v8 = 252;
    v9 = 251;
  }
  v10 = v43;
  if ( *((_QWORD *)&v44 + 1) < v8 )
  {
    v43 = qvector_reserve();
    v10 = v43;
  }
  *(_QWORD *)&v44 = v8;
  v11 = _mm_loadu_si128((const __m128i *)v6);
  *(_BYTE *)(v10 + v9) = 0;
  v12 = v7 + v43;
  *(__m128i *)v12 = v11;
  *(__m128i *)(v12 + 16) = _mm_loadu_si128((const __m128i *)v6 + 1);
  *(__m128i *)(v12 + 32) = _mm_loadu_si128((const __m128i *)v6 + 2);
  *(__m128i *)(v12 + 48) = _mm_loadu_si128((const __m128i *)v6 + 3);
  *(__m128i *)(v12 + 64) = _mm_loadu_si128((const __m128i *)v6 + 4);
  *(__m128i *)(v12 + 80) = _mm_loadu_si128((const __m128i *)v6 + 5);
  *(__m128i *)(v12 + 96) = _mm_loadu_si128((const __m128i *)v6 + 6);
  *(__m128i *)(v12 + 112) = _mm_loadu_si128((const __m128i *)v6 + 7);
  *(__m128i *)(v12 + 128) = _mm_loadu_si128((const __m128i *)v6 + 8);
  *(__m128i *)(v12 + 144) = _mm_loadu_si128((const __m128i *)v6 + 9);
  *(__m128i *)(v12 + 160) = _mm_loadu_si128((const __m128i *)v6 + 10);
  *(__m128i *)(v12 + 176) = _mm_loadu_si128((const __m128i *)v6 + 11);
  *(__m128i *)(v12 + 192) = _mm_loadu_si128((const __m128i *)v6 + 12);
  *(__m128i *)(v12 + 208) = _mm_loadu_si128((const __m128i *)v6 + 13);
  *(__m128i *)(v12 + 224) = _mm_loadu_si128((const __m128i *)v6 + 14);
  *(__m128i *)(v12 + 235) = _mm_loadu_si128((const __m128i *)(v6 + 235));
  v13 = v45;
  if ( *((_QWORD *)&v46 + 1) <= 0x1Du )
  {
    v45 = qvector_reserve();
    v13 = v45;
  }
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
  *(_QWORD *)&v46 = 30;
  *(__m128i *)v13 = _mm_load_si128((const __m128i *)&xmmword_1D2150);
  *(__m128i *)(v13 + 13) = _mm_load_si128((const __m128i *)&xmmword_1D2140);
  *(_BYTE *)(v45 + 29) = 0;
  if ( v40 != 4 )
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
  v15 = v46;
  if ( (_QWORD)v46 )
  {
    v16 = v46 + 250;
    v17 = v46 + 251;
    v15 = v46 - 1;
  }
  else
  {
    v17 = 252;
    v16 = 251;
  }
  v18 = v45;
  if ( *((_QWORD *)&v46 + 1) < v17 )
  {
    v45 = qvector_reserve();
    v18 = v45;
  }
  *(_QWORD *)&v46 = v17;
  v19 = _mm_loadu_si128((const __m128i *)v14);
  *(_BYTE *)(v18 + v16) = 0;
  v20 = v15 + v45;
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
  v21 = v39;
  *(__m128i *)(v20 + 235) = _mm_loadu_si128((const __m128i *)(v14 + 235));
  v22 = v21[4];
  v23 = v21[3];
  if ( v21[5] < (unsigned __int64)(v22 + 1) )
  {
    v25 = qvector_reserve();
    v21[3] = v25;
    v23 = v25;
    v22 = v21[4];
  }
  *(_QWORD *)(v23 + 8 * v22) = &v27;
  ++v21[4];
  v26 = -1;
  sub_198260(&v27, &v26);
  sub_BCF00(&v27);
  return v47 - __readfsqword(0x28u);
}

