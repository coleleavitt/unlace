void __fastcall sub_1150E40(__int64 a1, __int64 *a2, __int64 a3)
{
  size_t v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  void **v9; // r15
  void **v10; // rax
  void **v11; // r12
  void *v12; // rdx
  __int64 v13; // rdx
  void *v14; // rdi
  void **v15; // r15
  void **v16; // r12
  size_t v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  size_t v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  void *v23; // rdx
  char v24; // al
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, void **); // rax
  size_t v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  void *v30; // rdx
  char v31; // al
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, void **); // rax
  size_t v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  void *v37; // rdx
  char v38; // al
  __int64 v39; // rax
  __int64 v40; // r15
  const char *v41; // r12
  size_t v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // edx
  int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdi
  __int64 (__fastcall *v58)(__int64, void **); // rax
  void *v59; // rcx
  _BYTE *v60; // rsi
  __int64 v61; // rdx
  char *v62; // rbx
  size_t v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  __int32 v66; // edx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  void **v77; // [rsp+0h] [rbp-288h]
  __int32 v78; // [rsp+0h] [rbp-288h]
  _QWORD *v79; // [rsp+8h] [rbp-280h]
  __int64 v80; // [rsp+10h] [rbp-278h]
  unsigned __int32 v81; // [rsp+10h] [rbp-278h]
  __int64 v82; // [rsp+18h] [rbp-270h]
  void *v83[2]; // [rsp+20h] [rbp-268h] BYREF
  __int64 v84; // [rsp+30h] [rbp-258h] BYREF
  __m128i v85; // [rsp+40h] [rbp-248h] BYREF
  _WORD v86[16]; // [rsp+50h] [rbp-238h] BYREF
  __m128i v87[2]; // [rsp+70h] [rbp-218h] BYREF
  __int16 v88; // [rsp+90h] [rbp-1F8h]
  __m128i v89[2]; // [rsp+A0h] [rbp-1E8h] BYREF
  __int16 v90; // [rsp+C0h] [rbp-1C8h]
  __m128i v91[2]; // [rsp+D0h] [rbp-1B8h] BYREF
  __int16 v92; // [rsp+F0h] [rbp-198h]
  __m128i v93[2]; // [rsp+100h] [rbp-188h] BYREF
  __int16 v94; // [rsp+120h] [rbp-168h]
  __m128i v95[2]; // [rsp+130h] [rbp-158h] BYREF
  __int16 v96; // [rsp+150h] [rbp-138h]
  __m128i v97[2]; // [rsp+160h] [rbp-128h] BYREF
  __int16 v98; // [rsp+180h] [rbp-108h]
  __m128i v99; // [rsp+190h] [rbp-F8h] BYREF
  _WORD v100[16]; // [rsp+1A0h] [rbp-E8h] BYREF
  __m128i ptr; // [rsp+1C0h] [rbp-C8h] BYREF
  _WORD v102[24]; // [rsp+1D0h] [rbp-B8h] BYREF
  void *v103[2]; // [rsp+200h] [rbp-88h] BYREF
  _QWORD v104[2]; // [rsp+210h] [rbp-78h] BYREF
  __int16 v105; // [rsp+220h] [rbp-68h]

  *(_QWORD *)(a1 + 16) = 0x500000003LL;
  *(_QWORD *)(a1 + 24) = "0";
  v82 = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  v79 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = a1 + 96;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = 0;
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
  v80 = a1 + 216;
  *(_QWORD *)(a1 + 240) = a1 + 264;
  *(_QWORD *)(a1 + 264) = a1 + 288;
  *(_QWORD *)(a1 + 288) = a1 + 312;
  *(_QWORD *)(a1 + 312) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 384;
  *(_QWORD *)(a1 + 400) = 0x2800000000LL;
  *(_QWORD *)(a1 + 408) = a1 + 432;
  *(_QWORD *)(a1 + 432) = a1 + 456;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = a1 + 480;
  *(_QWORD *)(a1 + 480) = a1 + 504;
  *(_QWORD *)(a1 + 504) = a1 + 528;
  *(_QWORD *)(a1 + 528) = a1 + 552;
  *(_QWORD *)(a1 + 552) = a1 + 576;
  *(_QWORD *)(a1 + 576) = a1 + 600;
  *(_QWORD *)(a1 + 600) = a1 + 624;
  *(_QWORD *)(a1 + 624) = a1 + 648;
  *(_QWORD *)(a1 + 648) = a1 + 672;
  *(_QWORD *)(a1 + 672) = a1 + 696;
  *(_QWORD *)(a1 + 696) = a1 + 720;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0;
  *(_QWORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0;
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = a1 + 744;
  *(_QWORD *)(a1 + 768) = a1 + 752;
  *(_QWORD *)(a1 + 776) = a1 + 752;
  *(_QWORD *)(a1 + 792) = a1 + 808;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_DWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 800) = 0x400000000LL;
  *(_BYTE *)(a1 + 1065) = sub_10B8FF0(a3, 0xD45u) != 0;
  v6 = j__strlen(&byte_22CD811);
  v7 = sub_2193E80(a3, 3225, &byte_22CD811, v6);
  *(_QWORD *)(a1 + 120) = v8;
  *(_QWORD *)(a1 + 112) = v7;
  *(_BYTE *)(a1 + 1064) = sub_10B8FF0(a3, 0xC5Eu) != 0;
  sub_2193410(v103, a3, 3224);
  v9 = *(void ***)(a1 + 128);
  v10 = *(void ***)(a1 + 136);
  v11 = v9;
  *(void **)(a1 + 128) = v103[0];
  v12 = v103[1];
  *(_OWORD *)v103 = 0;
  *(_QWORD *)(a1 + 136) = v12;
  v13 = v104[0];
  v104[0] = 0;
  for ( *(_QWORD *)(a1 + 144) = v13; v10 != v11; v11 += 4 )
  {
    while ( 1 )
    {
      v14 = *v11;
      if ( *v11 == v11 + 2 )
        break;
      v77 = v10;
      v11 += 4;
      operator delete(v14);
      v10 = v77;
      if ( v11 == v77 )
        goto LABEL_4;
    }
  }
LABEL_4:
  if ( v9 )
    operator delete(v9);
  v15 = (void **)v103[1];
  v16 = (void **)v103[0];
  if ( v103[1] != v103[0] )
  {
    do
    {
      while ( *v16 != v16 + 2 )
      {
        operator delete(*v16);
        v16 += 4;
        if ( v15 == v16 )
          goto LABEL_9;
      }
      v16 += 4;
    }
    while ( v15 != v16 );
LABEL_9:
    v16 = (void **)v103[0];
  }
  if ( v16 )
    operator delete(v16);
  v17 = j__strlen(&byte_22CD811);
  v18 = sub_2193E80(a3, 2113, &byte_22CD811, v17);
  *(_QWORD *)(a1 + 160) = v19;
  *(_QWORD *)(a1 + 152) = v18;
  v20 = j__strlen(&byte_22CD811);
  v21 = sub_2193E80(a3, 2117, &byte_22CD811, v20);
  *(_QWORD *)(a1 + 176) = v22;
  v23 = *(void **)(a1 + 176);
  *(_QWORD *)(a1 + 168) = v21;
  v24 = 0;
  if ( v23 )
  {
    v25 = a2[1];
    v26 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v25 + 96LL);
    v103[0] = *(void **)(a1 + 168);
    v105 = 773;
    v103[1] = v23;
    v104[0] = "/hipstdpar_lib.hpp";
    v24 = v26(v25, v103);
  }
  *(_BYTE *)(a1 + 10) = v24;
  v27 = j__strlen(&byte_22CD811);
  v28 = sub_2193E80(a3, 2119, &byte_22CD811, v27);
  *(_QWORD *)(a1 + 192) = v29;
  v30 = *(void **)(a1 + 192);
  *(_QWORD *)(a1 + 184) = v28;
  v31 = 0;
  if ( v30 )
  {
    v32 = a2[1];
    v33 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v32 + 96LL);
    v103[0] = *(void **)(a1 + 184);
    v105 = 773;
    v103[1] = v30;
    v104[0] = "/thrust";
    v31 = v33(v32, v103);
  }
  *(_BYTE *)(a1 + 11) = v31;
  v34 = j__strlen(&byte_22CD811);
  v35 = sub_2193E80(a3, 2118, &byte_22CD811, v34);
  *(_QWORD *)(a1 + 208) = v36;
  v37 = *(void **)(a1 + 208);
  *(_QWORD *)(a1 + 200) = v35;
  v38 = 0;
  if ( v37 )
  {
    v57 = a2[1];
    v58 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v57 + 96LL);
    v105 = 773;
    v59 = *(void **)(a1 + 200);
    v103[1] = v37;
    v103[0] = v59;
    v104[0] = "/rocprim";
    v38 = v58(v57, v103);
  }
  *(_BYTE *)(a1 + 12) = v38;
  v39 = sub_10B8FF0(a3, 0x842u);
  v40 = v39;
  if ( v39 )
  {
    v41 = **(const char ***)(v39 + 48);
    v42 = 0;
    if ( v41 )
      v42 = j__strlen(v41);
    *(_QWORD *)(a1 + 216) = v41;
    *(_QWORD *)(a1 + 224) = v42;
    ptr.m128i_i64[0] = (__int64)v102;
    ptr.m128i_i64[1] = 0x300000000LL;
    sub_22239B0(v80, &ptr, 46, 0xFFFFFFFFLL, 1);
    if ( ptr.m128i_i32[2] )
    {
      if ( (unsigned __int8)sub_2223C30(*(_QWORD *)ptr.m128i_i64[0], *(_QWORD *)(ptr.m128i_i64[0] + 8), 0, v103)
        || v103[0] != (void *)LODWORD(v103[0]) )
      {
        v81 = -1;
      }
      else
      {
        v81 = (unsigned __int32)v103[0];
      }
      if ( ptr.m128i_i32[2] <= 1u )
      {
        v78 = -1;
      }
      else
      {
        if ( (unsigned __int8)sub_2223C30(
                                *(_QWORD *)(ptr.m128i_i64[0] + 16),
                                *(_QWORD *)(ptr.m128i_i64[0] + 24),
                                0,
                                v103)
          || v103[0] != (void *)LODWORD(v103[0]) )
        {
          v78 = -1;
        }
        else
        {
          v78 = (__int32)v103[0];
        }
        if ( ptr.m128i_i32[2] > 2u )
        {
          v60 = *(_BYTE **)(ptr.m128i_i64[0] + 32);
          if ( v60 )
          {
            v61 = *(_QWORD *)(ptr.m128i_i64[0] + 40);
            v103[0] = v104;
            sub_1148360(v103, v60, (__int64)&v60[v61]);
          }
          else
          {
            LOBYTE(v104[0]) = 0;
            v103[0] = v104;
            v103[1] = nullptr;
          }
          sub_9E6D90((__int64)v79, v103);
          if ( v103[0] != v104 )
            operator delete(v103[0]);
        }
      }
      if ( *(_QWORD *)(a1 + 88) )
      {
LABEL_49:
        if ( v81 != -1 )
        {
          if ( v78 == -1 )
          {
            v45 = 0;
            v78 = 0;
          }
          else
          {
            v45 = v78 & 0x7FFFFFFF;
          }
LABEL_26:
          v46 = *(_DWORD *)(a1 + 68);
          *(_QWORD *)(a1 + 72) = 0;
          v92 = 265;
          *(_DWORD *)(a1 + 64) = v81;
          v47 = v45 | v46 & 0x80000000;
          v91[0].m128i_i32[0] = v78;
          *(_DWORD *)(a1 + 68) = v47;
          v85.m128i_i32[0] = v81;
          *(_BYTE *)(a1 + 71) = HIBYTE(v47) | 0x80;
          v88 = 259;
          v99.m128i_i64[0] = (__int64)v79;
          v95[0].m128i_i64[0] = (__int64)".";
          v87[0].m128i_i64[0] = (__int64)".";
          v100[8] = 260;
          v96 = 259;
          v86[8] = 265;
          sub_A1D840(v89, &v85, v87, v81, v43, v44);
          sub_A1D840(v93, v89, v91, v48, v49, v50);
          sub_A1D840(v97, v93, v95, v51, v52, v53);
          sub_A1D840((__m128i *)v103, v97, &v99, v54, v55, v56);
          sub_222F820(v83, v103);
          sub_9E6D90(v82, v83);
          if ( v83[0] != &v84 )
            operator delete(v83[0]);
          if ( (_WORD *)ptr.m128i_i64[0] != v102 )
            free((void *)ptr.m128i_i64[0]);
          goto LABEL_30;
        }
LABEL_23:
        sub_FA3370((__int64)v103, *a2, 0, 400);
        sub_21922B0(&v99, v40, a3);
        sub_AC84E0((unsigned __int8 **)v103, v99.m128i_i64[0], v99.m128i_i64[1]);
        sub_AC84E0((unsigned __int8 **)v103, *(_BYTE **)(a1 + 216), *(_QWORD *)(a1 + 224));
        if ( (_WORD *)v99.m128i_i64[0] != v100 )
          operator delete((void *)v99.m128i_i64[0]);
        sub_AC6300((__int64)v103);
        v45 = v78 & 0x7FFFFFFF;
        goto LABEL_26;
      }
    }
    else
    {
      v81 = -1;
      v78 = -1;
      if ( *(_QWORD *)(a1 + 88) )
        goto LABEL_23;
    }
    sub_978080(v79, 0, 0, "0", 1u);
    goto LABEL_49;
  }
  v62 = *(char **)(a1 + 24);
  v63 = strlen(v62);
  sub_978080(v79, 0, *(_QWORD *)(a1 + 88), v62, v63);
  v64 = *(unsigned int *)(a1 + 20);
  v65 = *(_DWORD *)(a1 + 68);
  *(_QWORD *)(a1 + 72) = 0;
  v66 = *(_DWORD *)(a1 + 16);
  ptr.m128i_i64[0] = (__int64)v79;
  *(_DWORD *)(a1 + 64) = v66;
  v67 = v64 & 0x7FFFFFFF | v65 & 0x80000000;
  v94 = 265;
  *(_DWORD *)(a1 + 68) = v67;
  v98 = 259;
  *(_BYTE *)(a1 + 71) = HIBYTE(v67) | 0x80;
  v102[8] = 260;
  v87[0].m128i_i32[0] = v66;
  v97[0].m128i_i64[0] = (__int64)".";
  v93[0].m128i_i32[0] = v64;
  v89[0].m128i_i64[0] = (__int64)".";
  v90 = 259;
  v88 = 265;
  sub_A1D840(v91, v87, v89, v64, 259, 265);
  sub_A1D840(v95, v91, v93, v68, v69, v70);
  sub_A1D840(&v99, v95, v97, v71, v72, v73);
  sub_A1D840((__m128i *)v103, &v99, &ptr, v74, v75, v76);
  sub_222F820(&v85, v103);
  sub_9E6D90(v82, &v85);
  if ( (_WORD *)v85.m128i_i64[0] != v86 )
    operator delete((void *)v85.m128i_i64[0]);
LABEL_30:
  sub_114C1D0(a1);
}

