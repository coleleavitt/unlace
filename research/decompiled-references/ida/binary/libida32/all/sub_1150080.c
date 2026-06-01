void __fastcall sub_1150080(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5, char a6)
{
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  void **v12; // r15
  void **v13; // r13
  void **v14; // r12
  void *v15; // rdx
  __int64 v16; // rdx
  void **v17; // r15
  void **v18; // r12
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  size_t v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  void *v25; // rdx
  char v26; // al
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, void **); // rax
  size_t v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  void *v32; // rdx
  char v33; // al
  __int64 v34; // rdi
  __int64 (__fastcall *v35)(__int64, void **); // rax
  size_t v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  void *v39; // rdx
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // r15
  const char *v43; // r12
  size_t v44; // rax
  __int32 v45; // r13d
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // edx
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdi
  __int64 (__fastcall *v61)(__int64, void **); // rax
  void *v62; // rcx
  _BYTE *v63; // rsi
  __int64 v64; // rdx
  char *v65; // rbx
  size_t v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  __int32 v69; // edx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // [rsp+10h] [rbp-288h]
  unsigned __int32 v81; // [rsp+10h] [rbp-288h]
  _QWORD *v82; // [rsp+18h] [rbp-280h]
  __int64 v85; // [rsp+28h] [rbp-270h]
  void *v86[2]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v87; // [rsp+40h] [rbp-258h] BYREF
  __m128i v88; // [rsp+50h] [rbp-248h] BYREF
  __int64 v89; // [rsp+60h] [rbp-238h] BYREF
  __m128i v90[3]; // [rsp+80h] [rbp-218h] BYREF
  __m128i v91[3]; // [rsp+B0h] [rbp-1E8h] BYREF
  __m128i v92[3]; // [rsp+E0h] [rbp-1B8h] BYREF
  __m128i v93[2]; // [rsp+110h] [rbp-188h] BYREF
  __int16 v94; // [rsp+130h] [rbp-168h]
  __m128i v95[2]; // [rsp+140h] [rbp-158h] BYREF
  __int16 v96; // [rsp+160h] [rbp-138h]
  __m128i v97[2]; // [rsp+170h] [rbp-128h] BYREF
  __int16 v98; // [rsp+190h] [rbp-108h]
  __m128i v99; // [rsp+1A0h] [rbp-F8h] BYREF
  __int64 v100; // [rsp+1B0h] [rbp-E8h] BYREF
  __int16 v101; // [rsp+1C0h] [rbp-D8h]
  __m128i ptr; // [rsp+1D0h] [rbp-C8h] BYREF
  _WORD v103[24]; // [rsp+1E0h] [rbp-B8h] BYREF
  void *v104[2]; // [rsp+210h] [rbp-88h] BYREF
  _QWORD v105[2]; // [rsp+220h] [rbp-78h] BYREF
  __int16 v106; // [rsp+230h] [rbp-68h]

  *(_QWORD *)(a1 + 16) = 0x500000003LL;
  *(_QWORD *)(a1 + 24) = "0";
  v85 = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  v82 = (_QWORD *)(a1 + 80);
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
  v80 = a1 + 216;
  *(_QWORD *)(a1 + 240) = a1 + 264;
  *(_QWORD *)(a1 + 264) = a1 + 288;
  *(_QWORD *)(a1 + 288) = a1 + 312;
  *(_QWORD *)(a1 + 312) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 384;
  *(_QWORD *)(a1 + 400) = 0x2800000000LL;
  *(_QWORD *)(a1 + 408) = a1 + 432;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
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
  *(_QWORD *)(a1 + 432) = a1 + 456;
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
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
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
  *(_QWORD *)(a1 + 696) = a1 + 720;
  *(_QWORD *)(a1 + 720) = a1 + 744;
  *(_QWORD *)(a1 + 768) = a1 + 752;
  *(_QWORD *)(a1 + 776) = a1 + 752;
  *(_QWORD *)(a1 + 792) = a1 + 808;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_DWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 800) = 0x400000000LL;
  *(_BYTE *)(a1 + 1065) = sub_10B8FF0(a4, 0xD45u) != 0;
  v9 = j__strlen(&byte_22CD811);
  v10 = sub_2193E80(a4, 3225, &byte_22CD811, v9);
  *(_QWORD *)(a1 + 120) = v11;
  *(_QWORD *)(a1 + 112) = v10;
  *(_BYTE *)(a1 + 1064) = sub_10B8FF0(a4, 0xC5Eu) != 0;
  sub_2193410(v104, a4, 3224);
  v12 = *(void ***)(a1 + 128);
  v13 = *(void ***)(a1 + 136);
  v14 = v12;
  *(void **)(a1 + 128) = v104[0];
  v15 = v104[1];
  *(_OWORD *)v104 = 0;
  *(_QWORD *)(a1 + 136) = v15;
  v16 = v105[0];
  v105[0] = 0;
  for ( *(_QWORD *)(a1 + 144) = v16; v13 != v14; v14 += 4 )
  {
    while ( *v14 != v14 + 2 )
    {
      operator delete(*v14);
      v14 += 4;
      if ( v14 == v13 )
        goto LABEL_4;
    }
  }
LABEL_4:
  if ( v12 )
    operator delete(v12);
  v17 = (void **)v104[1];
  v18 = (void **)v104[0];
  if ( v104[1] != v104[0] )
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 4;
        if ( v17 == v18 )
          goto LABEL_9;
      }
      v18 += 4;
    }
    while ( v17 != v18 );
LABEL_9:
    v18 = (void **)v104[0];
  }
  if ( v18 )
    operator delete(v18);
  v19 = j__strlen(&byte_22CD811);
  v20 = sub_2193E80(a4, 2113, &byte_22CD811, v19);
  *(_QWORD *)(a1 + 160) = v21;
  *(_QWORD *)(a1 + 152) = v20;
  v22 = j__strlen(&byte_22CD811);
  v23 = sub_2193E80(a4, 2117, &byte_22CD811, v22);
  *(_QWORD *)(a1 + 176) = v24;
  v25 = *(void **)(a1 + 176);
  *(_QWORD *)(a1 + 168) = v23;
  v26 = 0;
  if ( v25 )
  {
    v27 = a2[1];
    v28 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v27 + 96LL);
    v104[0] = *(void **)(a1 + 168);
    v106 = 773;
    v104[1] = v25;
    v105[0] = "/hipstdpar_lib.hpp";
    v26 = v28(v27, v104);
  }
  *(_BYTE *)(a1 + 10) = v26;
  v29 = j__strlen(&byte_22CD811);
  v30 = sub_2193E80(a4, 2119, &byte_22CD811, v29);
  *(_QWORD *)(a1 + 192) = v31;
  v32 = *(void **)(a1 + 192);
  *(_QWORD *)(a1 + 184) = v30;
  v33 = 0;
  if ( v32 )
  {
    v34 = a2[1];
    v35 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v34 + 96LL);
    v104[0] = *(void **)(a1 + 184);
    v106 = 773;
    v104[1] = v32;
    v105[0] = "/thrust";
    v33 = v35(v34, v104);
  }
  *(_BYTE *)(a1 + 11) = v33;
  v36 = j__strlen(&byte_22CD811);
  v37 = sub_2193E80(a4, 2118, &byte_22CD811, v36);
  *(_QWORD *)(a1 + 208) = v38;
  v39 = *(void **)(a1 + 208);
  *(_QWORD *)(a1 + 200) = v37;
  v40 = 0;
  if ( v39 )
  {
    v60 = a2[1];
    v61 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v60 + 96LL);
    v106 = 773;
    v62 = *(void **)(a1 + 200);
    v104[1] = v39;
    v104[0] = v62;
    v105[0] = "/rocprim";
    v40 = v61(v60, v104);
  }
  *(_BYTE *)(a1 + 12) = v40;
  v41 = sub_10B8FF0(a4, 0x842u);
  v42 = v41;
  if ( v41 )
  {
    v43 = **(const char ***)(v41 + 48);
    v44 = 0;
    if ( v43 )
      v44 = j__strlen(v43);
    *(_QWORD *)(a1 + 216) = v43;
    *(_QWORD *)(a1 + 224) = v44;
    ptr.m128i_i64[0] = (__int64)v103;
    ptr.m128i_i64[1] = 0x300000000LL;
    sub_22239B0(v80, &ptr, 46, 0xFFFFFFFFLL, 1);
    if ( ptr.m128i_i32[2] )
    {
      if ( (unsigned __int8)sub_2223C30(*(_QWORD *)ptr.m128i_i64[0], *(_QWORD *)(ptr.m128i_i64[0] + 8), 0, v104)
        || (v45 = (__int32)v104[0], v104[0] != (void *)LODWORD(v104[0])) )
      {
        v45 = -1;
      }
      if ( ptr.m128i_i32[2] <= 1u )
      {
        v81 = -1;
      }
      else
      {
        if ( (unsigned __int8)sub_2223C30(
                                *(_QWORD *)(ptr.m128i_i64[0] + 16),
                                *(_QWORD *)(ptr.m128i_i64[0] + 24),
                                0,
                                v104)
          || v104[0] != (void *)LODWORD(v104[0]) )
        {
          v81 = -1;
        }
        else
        {
          v81 = (unsigned __int32)v104[0];
        }
        if ( ptr.m128i_i32[2] > 2u )
        {
          v63 = *(_BYTE **)(ptr.m128i_i64[0] + 32);
          if ( v63 )
          {
            v64 = (__int64)&v63[*(_QWORD *)(ptr.m128i_i64[0] + 40)];
            v104[0] = v105;
            sub_1148360(v104, v63, v64);
          }
          else
          {
            LOBYTE(v105[0]) = 0;
            v104[1] = nullptr;
            v104[0] = v105;
          }
          sub_9E6D90((__int64)v82, v104);
          if ( v104[0] != v105 )
            operator delete(v104[0]);
        }
      }
      if ( *(_QWORD *)(a1 + 88) )
      {
LABEL_52:
        if ( v45 != -1 )
        {
          if ( v81 == -1 )
          {
            v48 = 0;
            v81 = 0;
          }
          else
          {
            v48 = v81 & 0x7FFFFFFF;
          }
LABEL_26:
          v49 = *(_DWORD *)(a1 + 68);
          *(_DWORD *)(a1 + 64) = v45;
          *(_QWORD *)(a1 + 72) = 0;
          v98 = 265;
          v50 = v48 | v49 & 0x80000000;
          v93[0].m128i_i32[0] = v45;
          *(_DWORD *)(a1 + 68) = v50;
          v97[0].m128i_i32[0] = v81;
          *(_BYTE *)(a1 + 71) = HIBYTE(v50) | 0x80;
          v106 = 260;
          v104[0] = v82;
          v99.m128i_i64[0] = (__int64)".";
          v95[0].m128i_i64[0] = (__int64)".";
          v101 = 259;
          v94 = 265;
          v96 = 259;
          sub_A1D840(v92, v93, v95, v81, v46, v47);
          sub_A1D840(v91, v92, v97, v51, v52, v53);
          sub_A1D840(v90, v91, &v99, v54, v55, v56);
          sub_A1D840(&v88, v90, (const __m128i *)v104, v57, v58, v59);
          sub_222F820(v86, &v88);
          sub_9E6D90(v85, v86);
          if ( v86[0] != &v87 )
            operator delete(v86[0]);
          if ( (_WORD *)ptr.m128i_i64[0] != v103 )
            free((void *)ptr.m128i_i64[0]);
          goto LABEL_30;
        }
LABEL_23:
        sub_FA3370((__int64)v104, *a2, 0, 400);
        sub_21922B0(&v99, v42, a4);
        sub_AC84E0((unsigned __int8 **)v104, v99.m128i_i64[0], v99.m128i_i64[1]);
        sub_AC84E0((unsigned __int8 **)v104, *(_BYTE **)(a1 + 216), *(_QWORD *)(a1 + 224));
        if ( (__int64 *)v99.m128i_i64[0] != &v100 )
          operator delete((void *)v99.m128i_i64[0]);
        sub_AC6300((__int64)v104);
        v48 = v81 & 0x7FFFFFFF;
        goto LABEL_26;
      }
    }
    else
    {
      v45 = -1;
      v81 = -1;
      if ( *(_QWORD *)(a1 + 88) )
        goto LABEL_23;
    }
    sub_978080(v82, 0, 0, "0", 1u);
    goto LABEL_52;
  }
  v65 = *(char **)(a1 + 24);
  v66 = strlen(v65);
  sub_978080(v82, 0, *(_QWORD *)(a1 + 88), v65, v66);
  v67 = *(unsigned int *)(a1 + 20);
  v68 = *(_DWORD *)(a1 + 68);
  v69 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 72) = 0;
  v104[0] = v82;
  *(_DWORD *)(a1 + 64) = v69;
  v70 = v67 & 0x7FFFFFFF | v68 & 0x80000000;
  v101 = 265;
  *(_DWORD *)(a1 + 68) = v70;
  v103[8] = 259;
  *(_BYTE *)(a1 + 71) = HIBYTE(v70) | 0x80;
  v106 = 260;
  v95[0].m128i_i32[0] = v69;
  ptr.m128i_i64[0] = (__int64)".";
  v99.m128i_i32[0] = v67;
  v97[0].m128i_i64[0] = (__int64)".";
  v98 = 259;
  v96 = 265;
  sub_A1D840(v93, v95, v97, v67, 259, 265);
  sub_A1D840(v92, v93, &v99, v71, v72, v73);
  sub_A1D840(v91, v92, &ptr, v74, v75, v76);
  sub_A1D840(v90, v91, (const __m128i *)v104, v77, v78, v79);
  sub_222F820(&v88, v90);
  sub_9E6D90(v85, &v88);
  if ( (__int64 *)v88.m128i_i64[0] != &v89 )
    operator delete((void *)v88.m128i_i64[0]);
LABEL_30:
  if ( a5 )
    sub_114C1D0(a1);
  if ( a6 )
    sub_114FAB0(a1);
}

