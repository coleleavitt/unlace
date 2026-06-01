void __fastcall sub_21B05A0(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _DWORD *v11; // rax
  unsigned __int64 v12; // rdx
  const char *v13; // rax
  __int64 (__fastcall ***v14)(); // r12
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int8 *v19; // r12
  unsigned __int8 *v20; // rcx
  int v21; // eax
  char v22; // r15
  __int64 v23; // r14
  int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  char *v29; // rcx
  __int64 v30; // r14
  __int64 v31; // r8
  signed __int64 v32; // r15
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rax
  char *v38; // rax
  __m128i v39; // xmm0
  void *v40; // r15
  signed __int64 v41; // r9
  char *v42; // rax
  __int16 v43; // ax
  const char *v44; // rax
  __int64 (__fastcall ***v45)(); // r13
  __int64 v46; // rbx
  size_t v47; // rax
  __m128i *v48; // rax
  void *v49; // rcx
  __int64 (__fastcall ***v50)(); // r15
  __m128i v51; // xmm0
  __m128i v52; // rax
  __int64 (__fastcall ***v53)(); // r13
  __int64 v54; // rbx
  __m128i v55; // [rsp+8h] [rbp-180h] BYREF
  __int64 v56; // [rsp+18h] [rbp-170h]
  __int128 *v57; // [rsp+20h] [rbp-168h]
  __int64 v58; // [rsp+28h] [rbp-160h]
  __int128 v59; // [rsp+30h] [rbp-158h] BYREF
  int v60; // [rsp+40h] [rbp-148h]
  __int64 v61; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int8 *v62; // [rsp+58h] [rbp-130h]
  unsigned __int64 v63; // [rsp+60h] [rbp-128h]
  void *v64[2]; // [rsp+70h] [rbp-118h] BYREF
  __m128i v65; // [rsp+80h] [rbp-108h] BYREF
  __m128i v66; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v67[32]; // [rsp+A0h] [rbp-E8h] BYREF
  void *dest[2]; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v69; // [rsp+D0h] [rbp-B8h]
  __int64 v70; // [rsp+E0h] [rbp-A8h]
  char v71; // [rsp+E8h] [rbp-A0h]
  int v72; // [rsp+ECh] [rbp-9Ch]
  __m128i *v73; // [rsp+F0h] [rbp-98h]
  const char *v74; // [rsp+100h] [rbp-88h] BYREF
  __m128i v75; // [rsp+108h] [rbp-80h] BYREF
  int v76; // [rsp+118h] [rbp-70h]
  __m128i v77; // [rsp+120h] [rbp-68h] BYREF
  void *src[2]; // [rsp+130h] [rbp-58h]
  __int64 v79; // [rsp+140h] [rbp-48h]
  __int16 v80; // [rsp+148h] [rbp-40h]

  sub_21A20D0((_QWORD *)a1, 22, a3, a4, a5, a6, a7, a8, a9, a10);
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)a1 = &off_2C74840;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_BYTE *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 624) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_DWORD *)(a1 + 704) = 0;
  *(_OWORD *)(a1 + 672) = 0;
  *(_OWORD *)(a1 + 688) = 0;
  v11 = (_DWORD *)sub_215DEC0(a1);
  *(_QWORD *)(a1 + 48) = v11;
  if ( v12 <= 3 )
  {
    *(_QWORD *)(a1 + 56) = v12;
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 56) = 4;
  if ( *v11 != 1836278016 )
  {
LABEL_3:
    v13 = "invalid magic number";
LABEL_4:
    v74 = v13;
    v77.m128i_i16[0] = 259;
    v14 = sub_2195B10();
    v15 = operator new(0x40u);
    sub_2220590(v15, &v74, 3, v14);
    *a2 = v15;
    return;
  }
  v61 = sub_215DEC0(a1);
  v62 = (unsigned __int8 *)(v61 + 4);
  sub_215DEC0(a1);
  v19 = (unsigned __int8 *)(v18 + v61);
  v20 = (unsigned __int8 *)(v61 + 8);
  v63 = v18 + v61;
  if ( v18 + v61 < (unsigned __int64)(v61 + 8) )
  {
    v13 = "missing version number";
    goto LABEL_4;
  }
  v21 = *(_DWORD *)v62;
  v62 += 4;
  *(_DWORD *)(a1 + 64) = v21;
  if ( v21 != 1 )
  {
    LODWORD(v74) = v21;
    LOWORD(v70) = 259;
    v77.m128i_i16[0] = 265;
    dest[0] = "invalid version number: ";
    sub_A41580(&v66, (const __m128i *)dest, (const __m128i *)&v74, 265, v16, v17);
    v53 = sub_2195B10();
    v54 = operator new(0x40u);
    sub_2220590(v54, &v66, 3, v53);
    *a2 = v54;
    return;
  }
  v60 = 0;
  v59 = 0;
  if ( v19 != v20 )
  {
    v58 = a1 + 72;
    v55.m128i_i64[1] = (__int64)&v61;
    v57 = &v59;
    while ( 1 )
    {
      v22 = (_BYTE)v20 + 1;
      v74 = nullptr;
      v75 = 0u;
      v76 = -1;
      v77 = 0u;
      *(_OWORD *)src = 0;
      v79 = 0;
      HIBYTE(v80) = 0;
      v62 = v20 + 1;
      LODWORD(v74) = *v20;
      v23 = (unsigned int)sub_21A2A40(v55.m128i_i64[1]);
      if ( !HIBYTE(v80) )
        HIBYTE(v80) = 1;
      LOBYTE(v80) = (_BYTE)v62 - v22;
      HIDWORD(v74) = (_DWORD)v62 - v61;
      if ( !(_DWORD)v23 )
        break;
      if ( (unsigned __int64)&v62[(unsigned int)v23] > v63 )
      {
        v44 = "section too large";
        goto LABEL_32;
      }
      v24 = (int)v74;
      if ( !(_DWORD)v74 )
      {
        v55.m128i_i64[0] = (__int64)v62;
        v51 = _mm_loadl_epi64(&v55);
        *(_QWORD *)&v69 = &v62[(unsigned int)v23];
        *(__m128i *)dest = _mm_unpacklo_epi64(v51, v51);
        v52.m128i_i64[0] = sub_21A2A80((__int64)dest);
        v24 = (int)v74;
        v75 = v52;
        v23 = (unsigned int)(v23 - (LODWORD(dest[1]) - LODWORD(dest[0])));
        v62 += (unsigned int)(LODWORD(dest[1]) - LODWORD(dest[0]));
      }
      if ( !(unsigned __int8)sub_21A9260((__int64)v57, v24, (void *)v75.m128i_i64[0], v75.m128i_u64[1]) )
      {
        v69 = 0;
        v66.m128i_i64[0] = (__int64)v67;
        v66.m128i_i64[1] = 0;
        v67[0] = 0;
        LODWORD(dest[1]) = 0;
        v71 = 0;
        v72 = 1;
        v70 = 0;
        dest[0] = &off_2BEBE68;
        v73 = &v66;
        sub_227B8B0(dest, 0, 0, 0);
        sub_227B910(dest, (unsigned int)v74);
        dest[0] = &off_2BEBE68;
        sub_227B7A0(dest);
        v47 = j__strlen("out of order section type: ");
        v48 = (__m128i *)sub_99BDC0(&v66, 0, 0, "out of order section type: ", v47);
        v64[0] = &v65;
        if ( (__m128i *)v48->m128i_i64[0] == &v48[1] )
        {
          v65 = _mm_loadu_si128(v48 + 1);
        }
        else
        {
          v64[0] = (void *)v48->m128i_i64[0];
          v65.m128i_i64[0] = v48[1].m128i_i64[0];
        }
        v49 = (void *)v48->m128i_i64[1];
        v48[1].m128i_i8[0] = 0;
        v64[1] = v49;
        v48->m128i_i64[0] = (__int64)v48[1].m128i_i64;
        v48->m128i_i64[1] = 0;
        dest[0] = v64;
        LOWORD(v70) = 260;
        v50 = sub_2195B10();
        v46 = operator new(0x40u);
        sub_2220590(v46, dest, 3, v50);
        if ( v64[0] != &v65 )
          operator delete(v64[0]);
        if ( (_BYTE *)v66.m128i_i64[0] != v67 )
          operator delete((void *)v66.m128i_i64[0]);
LABEL_33:
        *a2 = v46;
LABEL_34:
        if ( src[0] )
          operator delete(src[0]);
        return;
      }
      v28 = (__int64)v62;
      *a2 = 0;
      v77.m128i_i64[1] = v23;
      v77.m128i_i64[0] = v28;
      v62 = (unsigned __int8 *)(v28 + v23);
      sub_21B0350((__int64 *)dest, a1, (unsigned int *)&v74, v25, v26, v27);
      v29 = (char *)dest[0];
      *a2 = dest[0];
      if ( v29 )
        goto LABEL_34;
      v30 = *(_QWORD *)(a1 + 80);
      if ( v30 == *(_QWORD *)(a1 + 88) )
      {
        sub_21A4F50(v58, *(char **)(a1 + 80), (__int64)&v74);
        v40 = src[0];
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 80);
        v32 = (char *)src[1] - (char *)src[0];
        v33 = _mm_loadu_si128(&v75);
        v34 = _mm_load_si128(&v77);
        *(_DWORD *)v30 = (_DWORD)v74;
        v35 = HIDWORD(v74);
        *(__m128i *)(v30 + 8) = v33;
        *(_DWORD *)(v30 + 4) = v35;
        v36 = v76;
        *(__m128i *)(v30 + 32) = v34;
        *(_DWORD *)(v30 + 24) = v36;
        *(_QWORD *)(v30 + 48) = 0;
        v37 = 0xAAAAAAAAAAAAAAABLL * (v32 >> 3);
        *(_QWORD *)(v30 + 56) = 0;
        *(_QWORD *)(v30 + 64) = 0;
        if ( v37 )
        {
          if ( v37 > 0xAAAAAAAAAAAAAAALL )
            std::__throw_bad_alloc();
          v38 = (char *)operator new(v32);
          v31 = *(_QWORD *)(a1 + 80);
          v29 = v38;
        }
        v55.m128i_i64[0] = (__int64)v29;
        v39 = _mm_loadl_epi64(&v55);
        *(_QWORD *)(v30 + 64) = &v29[v32];
        *(__m128i *)(v30 + 48) = _mm_unpacklo_epi64(v39, v39);
        v40 = src[0];
        v41 = (char *)src[1] - (char *)src[0];
        if ( src[1] != src[0] )
        {
          v56 = v31;
          v55.m128i_i64[0] = (char *)src[1] - (char *)src[0];
          v42 = (char *)memmove(v29, src[0], (char *)src[1] - (char *)src[0]);
          v31 = v56;
          v41 = v55.m128i_i64[0];
          v29 = v42;
        }
        v43 = v80;
        *(_QWORD *)(v30 + 56) = &v29[v41];
        *(_WORD *)(v30 + 72) = v43;
        *(_QWORD *)(a1 + 80) = v31 + 80;
      }
      if ( v40 )
      {
        operator delete(v40);
        v20 = v62;
        if ( (unsigned __int64)v62 >= v63 )
          return;
      }
      else
      {
        v20 = v62;
        if ( (unsigned __int64)v62 >= v63 )
          return;
      }
    }
    v44 = "zero length section";
LABEL_32:
    dest[0] = (void *)v44;
    LOWORD(v70) = 259;
    v45 = sub_2195B10();
    v46 = operator new(0x40u);
    sub_2220590(v46, dest, 3, v45);
    goto LABEL_33;
  }
}
