unsigned __int64 __fastcall sub_2325D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  int *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // eax
  bool v10; // zf
  void *v11; // rax
  __m128i *v12; // rax
  __int64 v13; // rcx
  const char *v14; // r12
  __int64 v15; // rbx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rsi
  const char *v22; // r12
  __int64 v23; // rbx
  __int64 v24; // r14
  unsigned __int64 v25; // r13
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-160h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+10h] [rbp-158h] BYREF
  __int64 v37; // [rsp+18h] [rbp-150h]
  __int128 v38; // [rsp+20h] [rbp-148h]
  __int64 v39; // [rsp+30h] [rbp-138h]
  const char *v40; // [rsp+38h] [rbp-130h]
  int v41; // [rsp+40h] [rbp-128h]
  void *v42; // [rsp+48h] [rbp-120h]
  _UNKNOWN **v43; // [rsp+50h] [rbp-118h]
  int v44; // [rsp+58h] [rbp-110h]
  char v45; // [rsp+60h] [rbp-108h] BYREF
  int v46; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-A0h]
  _QWORD *v48; // [rsp+D0h] [rbp-98h]
  int v49; // [rsp+D8h] [rbp-90h]
  __int64 v50; // [rsp+E0h] [rbp-88h]
  __int128 v51; // [rsp+E8h] [rbp-80h]
  __int64 v52; // [rsp+F8h] [rbp-70h] BYREF
  __int128 v53; // [rsp+100h] [rbp-68h]
  __int64 v54; // [rsp+110h] [rbp-58h] BYREF
  __int128 v55; // [rsp+118h] [rbp-50h]
  unsigned __int64 v56; // [rsp+128h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  v5 = sub_227580(a5, a1, a2, a3, a4);
  v39 = 0;
  v36 = (__int64 (__fastcall **)())&stru_86F6A0;
  v6 = (int *)&v45;
  v37 = 0x20703FF000004LL;
  v40 = "Manual memory regions";
  v41 = 0;
  v42 = nullptr;
  v44 = -1;
  v43 = &off_860260;
  v38 = -1;
  do
  {
    *(_QWORD *)v6 = 0;
    v6 += 6;
    *((_OWORD *)v6 - 1) = 0;
  }
  while ( &v46 != v6 );
  v46 = 0;
  v7 = (HIDWORD(v37) >> 19) & 0x3F;
  v8 = (unsigned int)(v7 - 1);
  if ( ((HIDWORD(v37) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v37) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, v8, v7, HIDWORD(v37), 0.0);
      BUG();
    }
    BYTE3(v37) = ((HIDWORD(v37) >> 19) & 0x3F) - 1;
    HIDWORD(v37) &= 0xFE07FFFF;
  }
  v47 = v5;
  v36 = mr_chooser_t___vtable;
  v48 = (_QWORD *)(v5 + 8);
  v9 = *(_DWORD *)(get_eah(mr_chooser_t___vtable, v8, v7) + 24);
  v50 = 0;
  v10 = v9 == 4;
  v49 = v9;
  v11 = &unk_5E2B00;
  if ( v10 )
    v11 = &unk_5E2B40;
  v52 = 0;
  v54 = 0;
  v41 = 9;
  v42 = v11;
  v51 = 0;
  v53 = 0;
  v55 = 0;
  v12 = (__m128i *)qvector_reserve(&v52, 0, 65, 1);
  v52 = (__int64)v12;
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
  *(_QWORD *)&v53 = 65;
  *v12 = _mm_load_si128((const __m128i *)&xmmword_5DC850);
  v12[1] = _mm_load_si128((const __m128i *)&xmmword_5DC860);
  v12[2] = _mm_load_si128((const __m128i *)&xmmword_5DC870);
  v12[3] = _mm_load_si128((const __m128i *)&xmmword_5DC880);
  *(_BYTE *)(v52 + 64) = 0;
  if ( v49 == 4 )
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
  v15 = v53;
  if ( (_QWORD)v53 )
  {
    v17 = v53 + 250;
    v16 = v53 + 251;
    v15 = v53 - 1;
  }
  else
  {
    v16 = 252;
    v17 = 251;
  }
  v18 = v52;
  if ( *((_QWORD *)&v53 + 1) < v16 )
  {
    v52 = qvector_reserve(&v52, v52, v16, 1);
    v18 = v52;
  }
  *(_QWORD *)&v53 = v16;
  v19 = _mm_loadu_si128((const __m128i *)v14);
  *(_BYTE *)(v18 + v17) = 0;
  v20 = v15 + v52;
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
  v21 = v54;
  if ( *((_QWORD *)&v55 + 1) <= 0x1Du )
  {
    v54 = qvector_reserve(&v54, v54, 30, 1);
    v21 = v54;
  }
  v22 = "<~S~tart address:M::32::>\n"
        "<~E~nd address  :M::32::>\n"
        "<~B~ase address :M::32::>\n"
        "<~N~ame         :q:63:32::>\n"
        "<~C~lass        :q:63:32::>\n"
        "<~1~6-bit segment:R>  <~R~eadable:C>\n"
        "<~3~2-bit segment:R>>  <~W~ritable:C>\n"
        "                      <E~x~ecutable:C>>\n"
        "\n"
        "\n";
  *(_QWORD *)&v55 = 30;
  *(__m128i *)v21 = _mm_load_si128((const __m128i *)&xmmword_5DC890);
  *(__m128i *)(v21 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DC880);
  *(_BYTE *)(v54 + 29) = 0;
  if ( v49 != 4 )
    v22 = "<~S~tart address:M::32::>\n"
          "<~E~nd address  :M::32::>\n"
          "<~B~ase address :M::32::>\n"
          "<~N~ame         :q:63:32::>\n"
          "<~C~lass        :q:63:32::>\n"
          "<~1~6-bit segment:R>  <~R~eadable:C>\n"
          "<~3~2-bit segment:R>  <~W~ritable:C>\n"
          "<~6~4-bit segment:R>>  <E~x~ecutable:C>>\n"
          "\n"
          "\n";
  v23 = v55;
  if ( (_QWORD)v55 )
  {
    v24 = v55 + 250;
    v25 = v55 + 251;
    v23 = v55 - 1;
  }
  else
  {
    v25 = 252;
    v24 = 251;
  }
  v26 = v54;
  if ( *((_QWORD *)&v55 + 1) < v25 )
  {
    v54 = qvector_reserve(&v54, v54, v25, 1);
    v26 = v54;
  }
  *(_QWORD *)&v55 = v25;
  v27 = _mm_loadu_si128((const __m128i *)v22);
  *(_BYTE *)(v26 + v24) = 0;
  v28 = v23 + v54;
  *(__m128i *)v28 = v27;
  *(__m128i *)(v28 + 16) = _mm_loadu_si128((const __m128i *)v22 + 1);
  *(__m128i *)(v28 + 32) = _mm_loadu_si128((const __m128i *)v22 + 2);
  *(__m128i *)(v28 + 48) = _mm_loadu_si128((const __m128i *)v22 + 3);
  *(__m128i *)(v28 + 64) = _mm_loadu_si128((const __m128i *)v22 + 4);
  *(__m128i *)(v28 + 80) = _mm_loadu_si128((const __m128i *)v22 + 5);
  *(__m128i *)(v28 + 96) = _mm_loadu_si128((const __m128i *)v22 + 6);
  *(__m128i *)(v28 + 112) = _mm_loadu_si128((const __m128i *)v22 + 7);
  *(__m128i *)(v28 + 128) = _mm_loadu_si128((const __m128i *)v22 + 8);
  *(__m128i *)(v28 + 144) = _mm_loadu_si128((const __m128i *)v22 + 9);
  *(__m128i *)(v28 + 160) = _mm_loadu_si128((const __m128i *)v22 + 10);
  *(__m128i *)(v28 + 176) = _mm_loadu_si128((const __m128i *)v22 + 11);
  *(__m128i *)(v28 + 192) = _mm_loadu_si128((const __m128i *)v22 + 12);
  *(__m128i *)(v28 + 208) = _mm_loadu_si128((const __m128i *)v22 + 13);
  *(__m128i *)(v28 + 224) = _mm_loadu_si128((const __m128i *)v22 + 14);
  v29 = v48;
  *(__m128i *)(v28 + 235) = _mm_loadu_si128((const __m128i *)(v22 + 235));
  v30 = v29[4];
  v31 = v29[3];
  v32 = v30 + 1;
  if ( v29[5] < (unsigned __int64)(v30 + 1) )
  {
    v34 = qvector_reserve(v29 + 3, v31, v32, 8);
    v29[3] = v34;
    v31 = v34;
    v30 = v29[4];
  }
  *(_QWORD *)(v31 + 8 * v30) = &v36;
  ++v29[4];
  v35 = -1;
  sub_4AED50(&v36, &v35, v32, v13);
  mr_chooser_t__::vfunc_0(&v36, (const char *)&v35);
  return v56 - __readfsqword(0x28u);
}
