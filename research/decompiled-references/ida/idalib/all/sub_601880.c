unsigned __int64 __fastcall sub_601880(__int64 a1)
{
  __m128i si128; // xmm1
  __m128i v3; // xmm0
  __int64 v4; // rbp
  void *v5; // rdi
  size_t v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbp
  _BYTE *v9; // rax
  size_t v10; // r14
  void *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  _BYTE *v14; // rax
  size_t v15; // r15
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbp
  __m128i *v19; // rax
  void *v20; // rdi
  size_t v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbp
  void *v24; // rdi
  size_t v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  void *v29; // rax
  void *v30; // rsi
  void *v31; // rax
  void *v32; // rsi
  void *v33; // rax
  void *v34; // rsi
  void *v35; // rax
  void *v36; // rsi
  void *v37; // rax
  void *v38; // rsi
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+18h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 64) = 0x1000000001LL;
  *(_OWORD *)a1 = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = a1 + 128;
  *(_QWORD *)(a1 + 152) = a1 + 128;
  *(_QWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_WORD *)(a1 + 180) = 1;
  *(_QWORD *)(a1 + 172) = 0x20040010000000LL;
  *(_QWORD *)(a1 + 232) = a1 + 216;
  *(_QWORD *)(a1 + 240) = a1 + 216;
  *(_BYTE *)(a1 + 182) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = a1 + 264;
  *(_QWORD *)(a1 + 288) = a1 + 264;
  *(_QWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  sub_5FC700(nullptr);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D30);
  *(_QWORD *)(a1 + 280) = a1 + 264;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 288) = a1 + 264;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 360) = 1;
  *(_QWORD *)(a1 + 364) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 372) = -1;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 448) = 20;
  *(_OWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  *(__m128i *)(a1 + 408) = si128;
  *(_OWORD *)(a1 + 432) = 0;
  dto_init(a1 + 456, 0);
  dto_init(a1 + 472, 1);
  *(_WORD *)(a1 + 568) = 256;
  *(_OWORD *)(a1 + 496) = 0;
  *(_OWORD *)(a1 + 528) = 0;
  *(_OWORD *)(a1 + 552) = 0;
  v3 = _mm_load_si128((const __m128i *)&xmmword_23A7D40);
  *(_QWORD *)(a1 + 488) = 0;
  *(_BYTE *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 608) = 0x7D000000064LL;
  *(_WORD *)(a1 + 616) = 0;
  *(_BYTE *)(a1 + 618) = 0;
  *(__m128i *)(a1 + 592) = v3;
  v4 = operator new(0xC8u);
  *(_OWORD *)n = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 9, 1);
  n[0] = 9;
  strcpy((char *)src, "hexvault");
  v5 = src;
  v6 = n[0];
  *(_QWORD *)(v4 + 8) = 0;
  *(_OWORD *)(v4 + 16) = 0;
  if ( v6 )
  {
    v29 = (void *)qalloc_or_throw(v6);
    *(_QWORD *)(v4 + 8) = v29;
    v30 = src;
    *(_QWORD *)(v4 + 24) = v6;
    memcpy(v29, v30, v6);
    *(_QWORD *)(v4 + 16) = v6;
    v5 = src;
  }
  *(_QWORD *)(v4 + 40) = 0;
  *(_WORD *)(v4 + 32) = -103;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)v4 = &off_2B31120;
  *(_QWORD *)(v4 + 88) = 0;
  *(_WORD *)(v4 + 112) = 0;
  *(_QWORD *)(v4 + 120) = 0;
  *(_QWORD *)(v4 + 144) = 0;
  *(_DWORD *)(v4 + 168) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  *(_OWORD *)(v4 + 128) = 0;
  *(_OWORD *)(v4 + 152) = 0;
  if ( v5 )
  {
    n[0] = 0;
    qfree(v5);
  }
  *(_QWORD *)(a1 + 624) = v4;
  *(_QWORD *)v4 = &off_2B31168;
  *(_QWORD *)(v4 + 176) = 0;
  *(_OWORD *)(v4 + 184) = 0;
  v7 = operator new(0xB0u);
  src = nullptr;
  v8 = v7;
  *(_OWORD *)n = 0;
  v9 = (_BYTE *)qvector_reserve(&src, 0, 1, 1);
  n[0] = 1;
  src = v9;
  *v9 = 0;
  v10 = n[0];
  *(_QWORD *)(v8 + 8) = 0;
  *(_OWORD *)(v8 + 16) = 0;
  if ( v10 )
  {
    v37 = (void *)qalloc_or_throw(v10);
    *(_QWORD *)(v8 + 8) = v37;
    v38 = src;
    *(_QWORD *)(v8 + 24) = v10;
    memcpy(v37, v38, v10);
    *(_QWORD *)(v8 + 16) = v10;
  }
  v11 = src;
  *(_WORD *)(v8 + 32) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  *(_QWORD *)v8 = &off_2B31120;
  *(_QWORD *)(v8 + 88) = 0;
  *(_WORD *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 120) = 0;
  *(_QWORD *)(v8 + 144) = 0;
  *(_DWORD *)(v8 + 168) = 0;
  *(_OWORD *)(v8 + 48) = 0;
  *(_OWORD *)(v8 + 72) = 0;
  *(_OWORD *)(v8 + 96) = 0;
  *(_OWORD *)(v8 + 128) = 0;
  *(_OWORD *)(v8 + 152) = 0;
  if ( v11 )
  {
    n[0] = 0;
    qfree(v11);
  }
  *(_QWORD *)(a1 + 632) = v8;
  *(_QWORD *)v8 = &off_2B3A918;
  v12 = operator new(0xB0u);
  src = nullptr;
  v13 = v12;
  *(_OWORD *)n = 0;
  v14 = (_BYTE *)qvector_reserve(&src, 0, 1, 1);
  n[0] = 1;
  src = v14;
  *v14 = 0;
  v15 = n[0];
  *(_QWORD *)(v13 + 8) = 0;
  *(_OWORD *)(v13 + 16) = 0;
  if ( v15 )
  {
    v35 = (void *)qalloc_or_throw(v15);
    *(_QWORD *)(v13 + 8) = v35;
    v36 = src;
    *(_QWORD *)(v13 + 24) = v15;
    memcpy(v35, v36, v15);
    *(_QWORD *)(v13 + 16) = v15;
  }
  v16 = src;
  *(_QWORD *)v13 = &off_2B31120;
  *(_WORD *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 64) = 0;
  *(_QWORD *)(v13 + 88) = 0;
  *(_WORD *)(v13 + 112) = 0;
  *(_QWORD *)(v13 + 120) = 0;
  *(_QWORD *)(v13 + 144) = 0;
  *(_DWORD *)(v13 + 168) = 0;
  *(_OWORD *)(v13 + 48) = 0;
  *(_OWORD *)(v13 + 72) = 0;
  *(_OWORD *)(v13 + 96) = 0;
  *(_OWORD *)(v13 + 128) = 0;
  *(_OWORD *)(v13 + 152) = 0;
  if ( v16 )
  {
    n[0] = 0;
    qfree(v16);
  }
  *(_QWORD *)(a1 + 640) = v13;
  *(_QWORD *)v13 = &off_2B3A918;
  *(_DWORD *)(a1 + 648) = 32;
  v17 = operator new(0xB0u);
  src = nullptr;
  v18 = v17;
  *(_OWORD *)n = 0;
  v19 = (__m128i *)qvector_reserve(&src, 0, 20, 1);
  src = v19;
  n[0] = 20;
  *v19 = _mm_load_si128((const __m128i *)&xmmword_23A7D50);
  *(__int32 *)((char *)&v19->m128i_i32[3] + 3) = 1836016430;
  v20 = src;
  *((_BYTE *)src + 19) = 0;
  v21 = n[0];
  *(_QWORD *)(v18 + 8) = 0;
  *(_OWORD *)(v18 + 16) = 0;
  if ( v21 )
  {
    v33 = (void *)qalloc_or_throw(v21);
    *(_QWORD *)(v18 + 8) = v33;
    v34 = src;
    *(_QWORD *)(v18 + 24) = v21;
    memcpy(v33, v34, v21);
    *(_QWORD *)(v18 + 16) = v21;
    v20 = src;
  }
  *(_QWORD *)(v18 + 40) = 0;
  *(_WORD *)(v18 + 32) = 443;
  *(_QWORD *)(v18 + 64) = 0;
  *(_QWORD *)v18 = &off_2B31120;
  *(_QWORD *)(v18 + 88) = 0;
  *(_WORD *)(v18 + 112) = 0;
  *(_QWORD *)(v18 + 120) = 0;
  *(_QWORD *)(v18 + 144) = 0;
  *(_DWORD *)(v18 + 168) = 0;
  *(_OWORD *)(v18 + 48) = 0;
  *(_OWORD *)(v18 + 72) = 0;
  *(_OWORD *)(v18 + 96) = 0;
  *(_OWORD *)(v18 + 128) = 0;
  *(_OWORD *)(v18 + 152) = 0;
  if ( v20 )
  {
    n[0] = 0;
    qfree(v20);
  }
  *(_QWORD *)(a1 + 656) = v18;
  *(_QWORD *)v18 = &off_2B311B0;
  v22 = operator new(0xB0u);
  src = nullptr;
  v23 = v22;
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve(&src, 0, 17, 1);
  n[0] = 17;
  *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_23A7700);
  v24 = src;
  *((_BYTE *)src + 16) = 0;
  v25 = n[0];
  *(_QWORD *)(v23 + 8) = 0;
  *(_OWORD *)(v23 + 16) = 0;
  if ( v25 )
  {
    v31 = (void *)qalloc_or_throw(v25);
    *(_QWORD *)(v23 + 8) = v31;
    v32 = src;
    *(_QWORD *)(v23 + 24) = v25;
    memcpy(v31, v32, v25);
    *(_QWORD *)(v23 + 16) = v25;
    v24 = src;
  }
  *(_QWORD *)(v23 + 40) = 0;
  *(_WORD *)(v23 + 32) = 443;
  *(_QWORD *)(v23 + 64) = 0;
  *(_QWORD *)v23 = &off_2B31120;
  *(_QWORD *)(v23 + 88) = 0;
  *(_WORD *)(v23 + 112) = 0;
  *(_QWORD *)(v23 + 120) = 0;
  *(_QWORD *)(v23 + 144) = 0;
  *(_DWORD *)(v23 + 168) = 0;
  *(_OWORD *)(v23 + 48) = 0;
  *(_OWORD *)(v23 + 72) = 0;
  *(_OWORD *)(v23 + 96) = 0;
  *(_OWORD *)(v23 + 128) = 0;
  *(_OWORD *)(v23 + 152) = 0;
  if ( v24 )
  {
    n[0] = 0;
    qfree(v24);
  }
  *(_QWORD *)(a1 + 664) = v23;
  *(_QWORD *)v23 = &off_2B311F8;
  v26 = operator new(0x58u);
  *(_BYTE *)(v26 + 26) = 1;
  *(_QWORD *)v26 = 0;
  *(_WORD *)(v26 + 24) = 0;
  *(_BYTE *)(v26 + 32) = 0;
  *(_QWORD *)(v26 + 40) = 0;
  *(_QWORD *)(v26 + 64) = 0;
  *(_QWORD *)(a1 + 672) = v26;
  *(_OWORD *)(v26 + 8) = 0;
  *(_OWORD *)(v26 + 48) = 0;
  *(_OWORD *)(v26 + 72) = 0;
  v27 = operator new(0x18u);
  *(_DWORD *)v27 = 0;
  *(_WORD *)(v27 + 4) = 0;
  *(_QWORD *)(v27 + 8) = 0;
  *(_QWORD *)(v27 + 16) = 0;
  *(_QWORD *)(a1 + 680) = v27;
  return v41 - __readfsqword(0x28u);
}
