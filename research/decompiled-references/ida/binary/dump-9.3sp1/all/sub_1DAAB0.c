unsigned __int64 __fastcall sub_1DAAB0(__m128i *a1, unsigned __int64 *a2, char a3, __int64 *a4)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm1
  __m128i v12; // xmm2
  __int64 v13; // rax
  __m128i v14; // xmm2
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm1
  __int64 v23; // rax
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm1
  __int64 v31; // rax
  __m128i v32; // xmm1
  __int64 v33; // rax
  __m128i v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v40; // rdx
  _QWORD *exception; // rax

  v6 = (_QWORD *)qalloc();
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v7 = (unsigned __int64)v6;
  memset(v6, 0, 0x278u);
  v8 = *a4;
  v6[3] = *(_QWORD *)v8;
  v6[4] = *(_QWORD *)(v8 + 8);
  v9 = *(_QWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v7 + 40) = v9;
  *(_QWORD *)(v7 + 48) = *(_QWORD *)(v8 + 24);
  v10 = *(_QWORD *)(v8 + 32);
  *(_OWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v7 + 56) = v10;
  v11 = _mm_loadu_si128((const __m128i *)(v8 + 80));
  v12 = _mm_loadu_si128((const __m128i *)(v8 + 64));
  *(_QWORD *)(v7 + 64) = *(_QWORD *)(v8 + 40);
  v13 = *(_QWORD *)(v8 + 48);
  *(__m128i *)(v7 + 88) = v12;
  v14 = _mm_loadu_si128((const __m128i *)(v8 + 112));
  *(_QWORD *)(v7 + 72) = v13;
  v15 = *(_QWORD *)(v8 + 56);
  *(__m128i *)(v7 + 104) = v11;
  v16 = _mm_loadu_si128((const __m128i *)(v8 + 128));
  *(_QWORD *)(v7 + 80) = v15;
  v17 = *(_QWORD *)(v8 + 96);
  *(__m128i *)(v7 + 152) = v16;
  *(_QWORD *)(v7 + 120) = v17;
  LODWORD(v17) = *(_DWORD *)(v8 + 104);
  *(__m128i *)(v7 + 136) = v14;
  *(_DWORD *)(v7 + 128) = v17;
  *(_QWORD *)(v7 + 168) = *(_QWORD *)(v8 + 144);
  v18 = *(_QWORD *)(v8 + 152);
  v19 = _mm_loadu_si128((const __m128i *)(v8 + 160));
  *(_QWORD *)(v8 + 152) = 0;
  *(_QWORD *)(v7 + 176) = v18;
  *(__m128i *)(v7 + 184) = v19;
  v20 = *(_QWORD *)(v8 + 176);
  *(_OWORD *)(v8 + 160) = 0;
  *(_QWORD *)(v7 + 200) = v20;
  v21 = *(_QWORD *)(v8 + 184);
  v22 = _mm_loadu_si128((const __m128i *)(v8 + 192));
  *(_QWORD *)(v8 + 184) = 0;
  *(_QWORD *)(v7 + 208) = v21;
  *(__m128i *)(v7 + 216) = v22;
  v23 = *(_QWORD *)(v8 + 208);
  v24 = _mm_loadu_si128((const __m128i *)(v8 + 216));
  *(_OWORD *)(v8 + 192) = 0;
  *(_QWORD *)(v7 + 232) = v23;
  *(__m128i *)(v7 + 240) = v24;
  v25 = *(_QWORD *)(v8 + 232);
  v26 = _mm_loadu_si128((const __m128i *)(v8 + 240));
  *(_QWORD *)(v8 + 208) = 0;
  *(_OWORD *)(v8 + 216) = 0;
  *(_QWORD *)(v8 + 232) = 0;
  *(_QWORD *)(v7 + 256) = v25;
  *(__m128i *)(v7 + 264) = v26;
  *(_OWORD *)(v8 + 240) = 0;
  sub_64000((__int64 *)(v7 + 280), v8 + 256);
  v27 = *(_QWORD *)(v8 + 272);
  v28 = _mm_loadu_si128((const __m128i *)(v8 + 280));
  *(_QWORD *)(v8 + 272) = 0;
  *(__m128i *)(v7 + 304) = v28;
  *(_QWORD *)(v7 + 296) = v27;
  LODWORD(v27) = *(_DWORD *)(v8 + 296);
  *(_OWORD *)(v8 + 280) = 0;
  *(_DWORD *)(v7 + 320) = v27;
  v29 = *(_QWORD *)(v8 + 304);
  v30 = _mm_loadu_si128((const __m128i *)(v8 + 312));
  *(_QWORD *)(v8 + 304) = 0;
  *(_QWORD *)(v7 + 328) = v29;
  *(__m128i *)(v7 + 336) = v30;
  v31 = *(_QWORD *)(v8 + 328);
  v32 = _mm_loadu_si128((const __m128i *)(v8 + 336));
  *(_OWORD *)(v8 + 312) = 0;
  *(_QWORD *)(v7 + 352) = v31;
  *(__m128i *)(v7 + 360) = v32;
  v33 = *(_QWORD *)(v8 + 352);
  v34 = _mm_loadu_si128((const __m128i *)(v8 + 360));
  *(_OWORD *)(v8 + 336) = 0;
  *(_QWORD *)(v8 + 328) = 0;
  *(_QWORD *)(v7 + 376) = v33;
  *(__m128i *)(v7 + 384) = v34;
  v35 = *(_QWORD *)(v8 + 376);
  *(_OWORD *)(v8 + 360) = 0;
  *(_QWORD *)(v8 + 352) = 0;
  *(_QWORD *)(v7 + 400) = v35;
  v36 = *(_QWORD *)(v8 + 384);
  *(_QWORD *)(v8 + 376) = 0;
  *(_QWORD *)(v7 + 408) = v36;
  *(_QWORD *)(v8 + 384) = 0;
  memmove((void *)(v7 + 416), (const void *)(v8 + 392), 0xC0u);
  *(_QWORD *)(v7 + 608) = *(_QWORD *)(v8 + 584);
  *(_QWORD *)(v7 + 616) = *(_QWORD *)(v8 + 592);
  *(_DWORD *)(v7 + 624) = *(_DWORD *)(v8 + 600);
  v37 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v7 & 1LL;
  *(_QWORD *)v7 = v37;
  v38 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v37 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v38, v38);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v40 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v40 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v7;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    }
    else
    {
      a2[2] = v7;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    }
    sub_1DA6D0(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}
