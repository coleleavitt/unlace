void __fastcall sub_AE0A10(__int64 *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbp
  signed __int64 v5; // r13
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  int v8; // eax
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  _BYTE *v11; // r14
  signed __int64 v12; // r13
  void *v13; // rdi
  _BYTE *v14; // r14
  __int128 v15; // xmm0
  int v16; // edx
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __m128i v21; // xmm7
  __m128i v22; // xmm6
  __m128i v23; // xmm5
  __m128i v24; // xmm4
  __m128i v25; // xmm3
  __m128i v26; // xmm2
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int128 v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int128 v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  void *v43; // rdi
  void *v44; // rdi
  bool v45; // zf
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // r13
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 v54; // rax
  __m128i v55[2]; // [rsp+0h] [rbp-148h] BYREF
  __m128i v56; // [rsp+20h] [rbp-128h]
  __m128i v57; // [rsp+30h] [rbp-118h]
  __m128i v58; // [rsp+40h] [rbp-108h]
  __m128i v59; // [rsp+50h] [rbp-F8h]
  __m128i v60; // [rsp+60h] [rbp-E8h]
  __m128i v61; // [rsp+70h] [rbp-D8h]
  __m128i v62; // [rsp+80h] [rbp-C8h]
  __m128i v63; // [rsp+90h] [rbp-B8h]
  __m128i v64[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v65; // [rsp+C0h] [rbp-88h]
  __m128i v66; // [rsp+D0h] [rbp-78h]
  __m128i v67; // [rsp+E0h] [rbp-68h]
  __m128i v68[2]; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v69; // [rsp+110h] [rbp-38h] BYREF
  _QWORD v70[6]; // [rsp+118h] [rbp-30h] BYREF

  if ( a1[4] )
  {
    if ( a1[9] )
      return;
    goto LABEL_19;
  }
  v2 = sub_186B270(0x2F8u);
  v3 = (void *)(v2 + 120);
  v4 = *(_QWORD *)(a1[6] + 112);
  v5 = *(_QWORD *)(v4 + 112);
  v65 = _mm_loadu_si128((const __m128i *)v4);
  v6 = _mm_loadu_si128((const __m128i *)(v4 + 16));
  v66 = v6;
  v7 = _mm_loadu_si128((const __m128i *)(v4 + 32));
  v67 = v7;
  v68[0] = _mm_loadu_si128((const __m128i *)(v4 + 48));
  *(__int32 *)((char *)&v68[0].m128i_i32[3] + 3) = *(_DWORD *)(v4 + 63);
  v8 = *(__int32 *)((char *)&v68[0].m128i_i32[3] + 3);
  *(__m128i *)v2 = v65;
  *(__m128i *)(v2 + 16) = v6;
  *(__m128i *)(v2 + 32) = v7;
  *(__m128i *)(v2 + 48) = _mm_load_si128(v68);
  v9 = _mm_loadu_si128((const __m128i *)(v4 + 72));
  *(_DWORD *)(v2 + 63) = v8;
  *(__m128i *)(v2 + 72) = v9;
  v10 = _mm_loadu_si128((const __m128i *)(v4 + 88));
  *(_QWORD *)(v2 + 104) = v2 + 120;
  v11 = *(_BYTE **)(v4 + 104);
  *(__m128i *)(v2 + 88) = v10;
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v5 + 1 < 0 )
      std::__throw_bad_alloc();
    v53 = operator new(v5 + 1);
    *(_QWORD *)(v2 + 120) = v5;
    *(_QWORD *)(v2 + 104) = v53;
    v3 = (void *)v53;
LABEL_25:
    memcpy(v3, v11, v5);
    v3 = *(void **)(v2 + 104);
    goto LABEL_7;
  }
  if ( v5 == 1 )
  {
    *(_BYTE *)(v2 + 120) = *v11;
    goto LABEL_7;
  }
  if ( v5 )
    goto LABEL_25;
LABEL_7:
  *(_QWORD *)(v2 + 112) = v5;
  *((_BYTE *)v3 + v5) = 0;
  v12 = *(_QWORD *)(v4 + 144);
  v13 = (void *)(v2 + 152);
  *(_QWORD *)(v2 + 136) = v2 + 152;
  v14 = *(_BYTE **)(v4 + 136);
  if ( (unsigned __int64)v12 > 0xF )
  {
    if ( v12 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v12 + 1 < 0 )
      std::__throw_bad_alloc();
    v54 = operator new(v12 + 1);
    *(_QWORD *)(v2 + 136) = v54;
    v13 = (void *)v54;
    *(_QWORD *)(v2 + 152) = v12;
LABEL_27:
    memcpy(v13, v14, v12);
    v13 = *(void **)(v2 + 136);
    goto LABEL_10;
  }
  if ( v12 == 1 )
  {
    *(_BYTE *)(v2 + 152) = *v14;
    goto LABEL_10;
  }
  if ( v12 )
    goto LABEL_27;
LABEL_10:
  *(_QWORD *)(v2 + 144) = v12;
  *((_BYTE *)v13 + v12) = 0;
  v15 = *(_OWORD *)(v4 + 168);
  v16 = *(_DWORD *)(v4 + 224);
  *(_QWORD *)(v2 + 184) = *(_QWORD *)(v4 + 184);
  v17 = *(_BYTE *)(v4 + 192);
  v18 = *(_QWORD *)(v4 + 216);
  v19 = *(_QWORD *)(v4 + 208);
  *(_DWORD *)(v2 + 224) = v16;
  *(_BYTE *)(v2 + 192) = v17;
  v20 = *(_QWORD *)(v4 + 196);
  *(_OWORD *)(v2 + 168) = v15;
  *(_QWORD *)(v2 + 196) = v20;
  LOWORD(v20) = *(_WORD *)(v4 + 204);
  *(_QWORD *)(v2 + 208) = v19;
  *(_WORD *)(v2 + 204) = v20;
  LOBYTE(v20) = *(_BYTE *)(v4 + 228);
  *(_QWORD *)(v2 + 216) = v18;
  *(_BYTE *)(v2 + 228) = v20;
  *(_DWORD *)(v2 + 232) = *(_DWORD *)(v4 + 232);
  *(_QWORD *)(v2 + 240) = *(_QWORD *)(v4 + 240);
  v21 = _mm_loadu_si128((const __m128i *)(v4 + 248));
  v56 = v21;
  v22 = _mm_loadu_si128((const __m128i *)(v4 + 264));
  v57 = v22;
  v23 = _mm_loadu_si128((const __m128i *)(v4 + 280));
  v58 = v23;
  v24 = _mm_loadu_si128((const __m128i *)(v4 + 296));
  v59 = v24;
  v25 = _mm_loadu_si128((const __m128i *)(v4 + 312));
  v60 = v25;
  v26 = _mm_loadu_si128((const __m128i *)(v4 + 328));
  v61 = v26;
  v62 = _mm_loadu_si128((const __m128i *)(v4 + 344));
  v27 = _mm_loadu_si128((const __m128i *)(v4 + 360));
  v63 = v27;
  v64[0] = _mm_loadu_si128((const __m128i *)(v4 + 376));
  *(__int32 *)((char *)&v64[0].m128i_i32[3] + 3) = *(_DWORD *)(v4 + 391);
  LODWORD(v20) = *(__int32 *)((char *)&v64[0].m128i_i32[3] + 3);
  *(__m128i *)(v2 + 344) = v62;
  *(__m128i *)(v2 + 248) = v21;
  *(__m128i *)(v2 + 264) = v22;
  *(__m128i *)(v2 + 280) = v23;
  *(__m128i *)(v2 + 296) = v24;
  *(__m128i *)(v2 + 312) = v25;
  *(__m128i *)(v2 + 328) = v26;
  *(__m128i *)(v2 + 360) = v27;
  *(__m128i *)(v2 + 376) = _mm_load_si128(v64);
  v28 = _mm_loadu_si128((const __m128i *)(v4 + 396));
  *(_DWORD *)(v2 + 391) = v20;
  v55[0] = v28;
  v29 = _mm_loadu_si128((const __m128i *)(v4 + 405));
  *(__m128i *)((char *)v55 + 9) = v29;
  *(__m128i *)(v2 + 396) = _mm_load_si128(v55);
  *(__m128i *)(v2 + 405) = v29;
  *(__m128i *)(v2 + 424) = _mm_loadu_si128((const __m128i *)(v4 + 424));
  v30 = *(_OWORD *)(v4 + 488);
  *(_DWORD *)(v2 + 440) = *(_DWORD *)(v4 + 440);
  *(_QWORD *)(v2 + 444) = *(_QWORD *)(v4 + 444);
  *(_DWORD *)(v2 + 452) = *(_DWORD *)(v4 + 452);
  v31 = *(_QWORD *)(v4 + 456);
  *(_OWORD *)(v2 + 488) = v30;
  v32 = v31 << 24 >> 24;
  *(__m128i *)(v2 + 504) = _mm_loadu_si128((const __m128i *)(v4 + 504));
  v33 = _mm_loadu_si128((const __m128i *)(v4 + 528));
  *(_DWORD *)(v2 + 456) = v32;
  *(_BYTE *)(v2 + 460) = BYTE4(v32);
  LODWORD(v32) = *(_DWORD *)(v4 + 464);
  *(__m128i *)(v2 + 528) = v33;
  *(_DWORD *)(v2 + 464) = v32;
  *(_DWORD *)(v2 + 468) = *(_DWORD *)(v4 + 468);
  *(_WORD *)(v2 + 472) = *(_WORD *)(v4 + 472);
  *(_DWORD *)(v2 + 476) = *(_DWORD *)(v4 + 476);
  *(_BYTE *)(v2 + 480) = *(_BYTE *)(v4 + 480);
  *(_DWORD *)(v2 + 484) = *(_DWORD *)(v4 + 484);
  *(_DWORD *)(v2 + 520) = *(_DWORD *)(v4 + 520);
  *(_BYTE *)(v2 + 524) = *(_BYTE *)(v4 + 524);
  *(_QWORD *)(v2 + 544) = *(_QWORD *)(v4 + 544);
  v34 = *(_QWORD *)(v4 + 556);
  v33.m128i_i64[0] = *(_QWORD *)(v4 + 608);
  *(_BYTE *)(v2 + 552) = *(_BYTE *)(v4 + 552);
  LOBYTE(v32) = *(_BYTE *)(v4 + 564);
  *(_QWORD *)(v2 + 556) = v34;
  v35 = *(_QWORD *)(v4 + 580);
  *(_BYTE *)(v2 + 564) = v32;
  v36 = *(_QWORD *)(v4 + 568);
  *(_QWORD *)(v2 + 608) = v33.m128i_i64[0];
  v37 = *(_OWORD *)(v4 + 624);
  *(_QWORD *)(v2 + 568) = v36;
  LOWORD(v36) = *(_WORD *)(v4 + 576);
  *(_QWORD *)(v2 + 580) = v35;
  v38 = *(_QWORD *)(v4 + 588);
  *(_WORD *)(v2 + 576) = v36;
  LOBYTE(v36) = *(_BYTE *)(v4 + 596);
  *(_OWORD *)(v2 + 624) = v37;
  *(_QWORD *)&v37 = *(_QWORD *)(v4 + 656);
  *(_BYTE *)(v2 + 596) = v36;
  v39 = *(_QWORD *)(v4 + 600);
  *(_QWORD *)(v2 + 588) = v38;
  *(_QWORD *)(v2 + 600) = v39;
  LOBYTE(v39) = *(_BYTE *)(v4 + 616);
  *(_QWORD *)(v2 + 656) = v37;
  *(_BYTE *)(v2 + 616) = v39;
  *(_DWORD *)(v2 + 640) = *(_DWORD *)(v4 + 640);
  *(_BYTE *)(v2 + 644) = *(_BYTE *)(v4 + 644);
  *(_QWORD *)(v2 + 648) = *(_QWORD *)(v4 + 648);
  LODWORD(v39) = *(_DWORD *)(v4 + 680);
  *(__m128i *)(v2 + 664) = _mm_loadu_si128((const __m128i *)(v4 + 664));
  *(_QWORD *)&v37 = *(_QWORD *)(v4 + 688);
  *(_DWORD *)(v2 + 680) = v39;
  LODWORD(v39) = *(_DWORD *)(v4 + 696);
  *(_QWORD *)(v2 + 688) = v37;
  *(_QWORD *)&v37 = *(_QWORD *)(v4 + 736);
  *(_DWORD *)(v2 + 696) = v39;
  v40 = *(_QWORD *)(v4 + 704);
  *(_QWORD *)(v2 + 736) = v37;
  *(_QWORD *)(v2 + 704) = v40;
  *(_DWORD *)(v2 + 712) = *(_DWORD *)(v4 + 712);
  *(_WORD *)(v2 + 716) = *(_WORD *)(v4 + 716);
  *(_DWORD *)(v2 + 720) = *(_DWORD *)(v4 + 720);
  *(_QWORD *)(v2 + 724) = *(_QWORD *)(v4 + 724);
  *(_BYTE *)(v2 + 732) = *(_BYTE *)(v4 + 732);
  *(_BYTE *)(v2 + 744) = *(_BYTE *)(v4 + 744);
  v41 = *(_QWORD *)(v4 + 752);
  v42 = a1[4];
  *(_QWORD *)(v2 + 752) = v41;
  if ( v2 != v42 )
  {
    if ( v42 )
    {
      v43 = *(void **)(v42 + 136);
      if ( v43 != (void *)(v42 + 152) )
        operator delete(v43, *(_QWORD *)(v42 + 152) + 1LL);
      v44 = *(void **)(v42 + 104);
      if ( v44 != (void *)(v42 + 120) )
        operator delete(v44, *(_QWORD *)(v42 + 120) + 1LL);
      sub_186B220((void *)v42);
    }
    a1[4] = v2;
    v42 = v2;
  }
  *(_DWORD *)(v42 + 476) = 0;
  v45 = a1[9] == 0;
  *(_WORD *)(v42 + 697) = 0;
  *(_DWORD *)(v42 + 580) = 0;
  *(_QWORD *)(v42 + 568) = 0;
  if ( v45 )
  {
LABEL_19:
    v69 = 0;
    v70[0] = 0;
    sub_1862300(v70, "solver.axioms2files", 0);
    sub_1862300(v70, "solver.lemmas2console", 0);
    sub_18625B0(v70, "solver.proof.log", &qword_18D6CD0);
    v46 = sub_8FCA80(a1[6], &v69, a1[4], (__int64)v70);
    v51 = (void *)a1[9];
    v52 = v46;
    if ( (void *)v46 != v51 )
    {
      if ( v51 )
      {
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int32, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int32))(*(_QWORD *)v51 + 16LL))(
          a1[9],
          &v69,
          v47,
          v48,
          v49,
          v50,
          v55[0].m128i_i64[0],
          v55[0].m128i_i64[1],
          v55[1].m128i_i64[0],
          v55[1].m128i_i32[2],
          v56.m128i_i64[0],
          v56.m128i_i64[1],
          v57.m128i_i64[0],
          v57.m128i_i64[1],
          v58.m128i_i64[0],
          v58.m128i_i64[1],
          v59.m128i_i64[0],
          v59.m128i_i64[1],
          v60.m128i_i64[0],
          v60.m128i_i64[1],
          v61.m128i_i64[0],
          v61.m128i_i64[1],
          v62.m128i_i64[0],
          v62.m128i_i64[1],
          v63.m128i_i64[0],
          v63.m128i_i64[1],
          v64[0].m128i_i64[0],
          v64[0].m128i_i64[1],
          v64[1].m128i_i32[0]);
        sub_186B220(v51);
      }
      a1[9] = v52;
    }
    sub_18572D0(v70);
  }
}

