__int64 __fastcall sub_64F400(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        char *a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12,
        __int64 *a13,
        char *a14)
{
  void *v17; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  bool v24; // zf
  unsigned __int64 v25; // rcx
  __int16 v26; // ax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  char v33; // r14
  unsigned __int64 v34; // rcx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  void **p_ptr; // rdi
  unsigned __int64 v38; // rcx
  __m128i v39; // xmm5
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm6
  __int16 v46; // ax
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  unsigned __int64 v49; // rbx
  __int64 v50; // rax
  __m128i *v51; // rbp
  __int64 v52; // rbx
  __int64 v53; // r12
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  _BYTE *m128i_i8; // rdi
  size_t v58; // r13
  __int8 *v59; // r14
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  _BYTE *v66; // rdi
  _QWORD *v67; // rcx
  _BYTE *v68; // rdi
  __int64 v69; // rcx
  void (__fastcall ***v70)(_QWORD); // rdi
  __int64 v71; // rdi
  __int64 v72; // rax
  _QWORD *v73; // rdi
  unsigned int v74; // esi
  unsigned __int64 v75; // rdi
  char *v76; // rdx
  char *v77; // r8
  unsigned int v78; // eax
  unsigned int v79; // edx
  __int64 v80; // rsi
  __int64 v82; // [rsp+0h] [rbp-398h]
  __int64 v83; // [rsp+8h] [rbp-390h]
  __int64 v84; // [rsp+8h] [rbp-390h]
  unsigned __int64 v85; // [rsp+10h] [rbp-388h]
  unsigned __int64 v86; // [rsp+10h] [rbp-388h]
  unsigned __int64 v87; // [rsp+10h] [rbp-388h]
  __int64 v88; // [rsp+10h] [rbp-388h]
  _QWORD *v89; // [rsp+10h] [rbp-388h]
  __int64 v90; // [rsp+10h] [rbp-388h]
  unsigned __int64 v91; // [rsp+18h] [rbp-380h]
  unsigned __int64 v92; // [rsp+38h] [rbp-360h]
  __int64 v93; // [rsp+48h] [rbp-350h]
  unsigned __int64 v94; // [rsp+48h] [rbp-350h]
  unsigned __int64 v95; // [rsp+48h] [rbp-350h]
  __m128 v96; // [rsp+50h] [rbp-348h] BYREF
  __int64 v97; // [rsp+60h] [rbp-338h]
  __int64 v98; // [rsp+68h] [rbp-330h]
  __int64 v99; // [rsp+70h] [rbp-328h]
  __int64 v100; // [rsp+78h] [rbp-320h]
  __int64 v101; // [rsp+80h] [rbp-318h]
  __int64 v102; // [rsp+88h] [rbp-310h]
  __int64 v103; // [rsp+90h] [rbp-308h]
  __int64 v104; // [rsp+98h] [rbp-300h]
  unsigned __int64 v105; // [rsp+A0h] [rbp-2F8h]
  char v106; // [rsp+AFh] [rbp-2E9h]
  __int64 v107; // [rsp+B0h] [rbp-2E8h]
  __int64 v108; // [rsp+B8h] [rbp-2E0h]
  __int64 v109; // [rsp+C0h] [rbp-2D8h]
  __int64 v110; // [rsp+C8h] [rbp-2D0h]
  __int64 v111; // [rsp+D0h] [rbp-2C8h]
  __int64 v112; // [rsp+D8h] [rbp-2C0h]
  __int64 v113; // [rsp+E0h] [rbp-2B8h]
  _BYTE *v114; // [rsp+E8h] [rbp-2B0h]
  _BYTE *v115; // [rsp+F0h] [rbp-2A8h]
  _BYTE *v116; // [rsp+F8h] [rbp-2A0h]
  size_t v117; // [rsp+108h] [rbp-290h]
  __int64 v118; // [rsp+110h] [rbp-288h] BYREF
  char v119; // [rsp+120h] [rbp-278h]
  __int64 v120[4]; // [rsp+130h] [rbp-268h] BYREF
  __int64 v121[4]; // [rsp+150h] [rbp-248h] BYREF
  __int64 v122[4]; // [rsp+170h] [rbp-228h] BYREF
  __int64 v123[4]; // [rsp+190h] [rbp-208h] BYREF
  __int64 v124[4]; // [rsp+1B0h] [rbp-1E8h] BYREF
  __int64 v125[4]; // [rsp+1D0h] [rbp-1C8h] BYREF
  void *v126; // [rsp+1F0h] [rbp-1A8h]
  __int64 v127; // [rsp+1F8h] [rbp-1A0h]
  _QWORD v128[2]; // [rsp+200h] [rbp-198h] BYREF
  void *v129; // [rsp+210h] [rbp-188h] BYREF
  __m128i si128; // [rsp+218h] [rbp-180h]
  _BYTE v131[32]; // [rsp+228h] [rbp-170h] BYREF
  __m128i v132; // [rsp+248h] [rbp-150h] BYREF
  __m128i v133; // [rsp+258h] [rbp-140h] BYREF
  __m128i v134; // [rsp+268h] [rbp-130h] BYREF
  __int16 v135; // [rsp+278h] [rbp-120h]
  char v136; // [rsp+27Ah] [rbp-11Eh]
  void *v137; // [rsp+280h] [rbp-118h] BYREF
  __m128i v138; // [rsp+288h] [rbp-110h]
  _BYTE v139[32]; // [rsp+298h] [rbp-100h] BYREF
  __m128i v140; // [rsp+2B8h] [rbp-E0h] BYREF
  __m128i v141; // [rsp+2C8h] [rbp-D0h] BYREF
  __m128i v142; // [rsp+2D8h] [rbp-C0h] BYREF
  __int16 v143; // [rsp+2E8h] [rbp-B0h]
  char v144; // [rsp+2EAh] [rbp-AEh]
  void *ptr; // [rsp+2F0h] [rbp-A8h] BYREF
  __m128i v146; // [rsp+2F8h] [rbp-A0h] BYREF
  _BYTE v147[32]; // [rsp+308h] [rbp-90h] BYREF
  __m128i v148; // [rsp+328h] [rbp-70h] BYREF
  __m128i v149; // [rsp+338h] [rbp-60h] BYREF
  __m128i v150; // [rsp+348h] [rbp-50h] BYREF
  __int16 v151; // [rsp+358h] [rbp-40h]
  char v152; // [rsp+35Ah] [rbp-3Eh]

  ptr = (void *)sub_FC8E80(a1, a2, a3);
  v17 = ptr;
  v19 = v18;
  v146 = (__m128i)v18;
  sub_64F120((__int64)&v118, (__int64)(a1 + 20), (__m128i *)&ptr, &v146.m128i_i64[1]);
  v83 = v118;
  if ( v146.m128i_i64[1] )
    (**(void (__fastcall ***)(__int64))v146.m128i_i64[1])(v146.m128i_i64[1]);
  if ( !v119 )
  {
    v20 = *(_QWORD *)(v83 + 16);
    if ( *(_DWORD *)(v20 + 356) != 6 )
      return 0;
    return v20;
  }
  v22 = *a1;
  a1[10] += 520LL;
  v23 = (v22 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[1] >= v23 + 520 && v22 )
    *a1 = v23 + 520;
  else
    v23 = sub_63DCB0((__int64)a1, 520, 4);
  v91 = v23;
  v106 = *a14;
  sub_644390((__int64)v121, a12);
  sub_644390((__int64)v120, a11);
  v24 = *(_QWORD *)(a8 + 8) == 0;
  v25 = v91;
  v116 = v131;
  v129 = v131;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( !v24 )
  {
    sub_63DE60((__int64)&v129, (unsigned __int8 **)a8);
    v25 = v91;
  }
  v26 = *(_WORD *)(a8 + 104);
  v92 = v25;
  v132 = _mm_loadu_si128((const __m128i *)(a8 + 56));
  v27 = _mm_loadu_si128((const __m128i *)(a8 + 72));
  v135 = v26;
  LOBYTE(v26) = *(_BYTE *)(a8 + 106);
  v133 = v27;
  v28 = _mm_loadu_si128((const __m128i *)(a8 + 88));
  v136 = v26;
  v134 = v28;
  v103 = sub_FC8E80(a1, a4, a5);
  v29 = *a6;
  v104 = v30;
  v102 = v29;
  v101 = a6[1];
  v100 = a6[2];
  v99 = a6[3];
  v98 = a6[4];
  v97 = a6[5];
  v31 = *(_QWORD *)(a7 + 8);
  v32 = *(_QWORD *)(a7 + 16);
  v96 = _mm_loadh_ps((const double *)a7);
  v93 = v32;
  v33 = *a9;
  v111 = *a13;
  v108 = a13[1];
  v109 = a13[2];
  v110 = a13[3];
  v107 = a13[4];
  v112 = a13[5];
  v113 = a13[6];
  sub_644390((__int64)v123, v121);
  sub_644390((__int64)v122, v120);
  v34 = v92;
  v115 = v139;
  v137 = v139;
  v138 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( si128.m128i_i64[0] )
  {
    sub_63DE60((__int64)&v137, (unsigned __int8 **)&v129);
    v34 = v92;
  }
  v105 = v34;
  v35 = _mm_loadu_si128(&v132);
  v126 = v128;
  v143 = v135;
  v140 = v35;
  v36 = _mm_loadu_si128(&v133);
  v144 = v136;
  v141 = v36;
  v142 = _mm_loadu_si128(&v134);
  strcpy((char *)v128, "public");
  v127 = 6;
  sub_644390((__int64)v125, v123);
  p_ptr = (void **)v124;
  sub_644390((__int64)v124, v122);
  v114 = v147;
  v38 = v105;
  ptr = v147;
  v146 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( v138.m128i_i64[0] )
  {
    p_ptr = &ptr;
    sub_63DE60((__int64)&ptr, (unsigned __int8 **)&v137);
    v38 = v105;
  }
  v39 = _mm_load_si128((const __m128i *)&v96);
  v40 = _mm_loadu_si128(&v140);
  v151 = v143;
  v148 = v40;
  v41 = _mm_loadu_si128(&v141);
  v152 = v144;
  v149 = v41;
  v150 = _mm_loadu_si128(&v142);
  *(_QWORD *)v38 = &off_49F4B08;
  v42 = v103;
  *(_QWORD *)(v38 + 8) = v17;
  *(_QWORD *)(v38 + 24) = v42;
  v43 = v104;
  *(_QWORD *)(v38 + 16) = v19;
  *(_QWORD *)(v38 + 32) = v43;
  v44 = v102;
  *(__m128i *)(v38 + 88) = v39;
  *(_QWORD *)(v38 + 40) = v44;
  *(_QWORD *)(v38 + 48) = v101;
  *(_QWORD *)(v38 + 56) = v100;
  *(_QWORD *)(v38 + 64) = v99;
  *(_QWORD *)(v38 + 72) = v98;
  *(_QWORD *)(v38 + 80) = v97;
  *(_QWORD *)(v38 + 104) = v31;
  v45 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  *(_QWORD *)(v38 + 112) = v93;
  *(_QWORD *)(v38 + 120) = v38 + 144;
  *(__m128i *)(v38 + 128) = v45;
  if ( v146.m128i_i64[0] )
  {
    p_ptr = (void **)(v38 + 120);
    v95 = v38;
    sub_63DE60(v38 + 120, (unsigned __int8 **)&ptr);
    v38 = v95;
  }
  v46 = v151;
  *(__m128i *)(v38 + 176) = _mm_loadu_si128(&v148);
  v47 = _mm_loadu_si128(&v149);
  *(_WORD *)(v38 + 224) = v46;
  LOBYTE(v46) = v152;
  *(__m128i *)(v38 + 192) = v47;
  v48 = _mm_loadu_si128(&v150);
  *(_BYTE *)(v38 + 226) = v46;
  *(__m128i *)(v38 + 208) = v48;
  *(_BYTE *)(v38 + 232) = v33;
  v49 = a10[1] - *a10;
  *(_OWORD *)(v38 + 240) = 0;
  *(_QWORD *)(v38 + 256) = 0;
  if ( v49 )
  {
    if ( v49 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(p_ptr);
    v85 = v38;
    v50 = operator new(v49);
    v38 = v85;
    v51 = (__m128i *)v50;
  }
  else
  {
    v51 = nullptr;
  }
  *(_QWORD *)(v38 + 256) = (char *)v51 + v49;
  *(__m128i *)(v38 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v51, (__m128i)(unsigned __int64)v51);
  v52 = a10[1];
  v53 = *a10;
  if ( v52 != *a10 )
  {
    v94 = v38;
    while ( 1 )
    {
      m128i_i8 = v51[1].m128i_i8;
      v51->m128i_i64[0] = (__int64)v51[1].m128i_i64;
      v58 = *(_QWORD *)(v53 + 8);
      v59 = *(__int8 **)v53;
      v117 = v58;
      if ( v58 > 0xF )
        break;
      if ( v58 == 1 )
      {
        v51[1].m128i_i8[0] = *v59;
        goto LABEL_25;
      }
      if ( v58 )
        goto LABEL_28;
LABEL_25:
      v51->m128i_i64[1] = v58;
      v53 += 80;
      v51 += 5;
      m128i_i8[v58] = 0;
      v54 = *(_QWORD *)(v53 - 32);
      v51[-3] = _mm_loadu_si128((const __m128i *)(v53 - 48));
      v55 = _mm_loadu_si128((const __m128i *)(v53 - 24));
      v51[-2].m128i_i64[0] = v54;
      v56 = *(_QWORD *)(v53 - 8);
      *(__m128i *)((char *)v51 - 24) = v55;
      v51[-1].m128i_i64[1] = v56;
      if ( v52 == v53 )
      {
        v38 = v94;
        *(_QWORD *)(v94 + 248) = v51;
        goto LABEL_32;
      }
    }
    v60 = std::string::_M_create();
    v51->m128i_i64[0] = v60;
    m128i_i8 = (_BYTE *)v60;
    v51[1].m128i_i64[0] = v117;
LABEL_28:
    memcpy(m128i_i8, v59, v58);
    v58 = v117;
    m128i_i8 = (_BYTE *)v51->m128i_i64[0];
    goto LABEL_25;
  }
LABEL_32:
  v86 = v38;
  sub_644390(v38 + 264, v124);
  sub_644390(v86 + 288, v125);
  v61 = v86;
  *(_BYTE *)(v86 + 312) = v106;
  v62 = v126;
  v63 = (_QWORD *)(v86 + 336);
  *(_QWORD *)(v86 + 320) = v86 + 336;
  if ( v62 == v128 )
  {
    v64 = v127;
    v74 = v127 + 1;
    if ( (unsigned int)(v127 + 1) >= 8 )
    {
      *v63 = v128[0];
      *(_QWORD *)((char *)v63 + v74 - 8) = *(_QWORD *)((char *)&v128[-1] + v74);
      v75 = (v86 + 344) & 0xFFFFFFFFFFFFFFF8LL;
      v76 = (char *)v63 - v75;
      v77 = (char *)((char *)v128 - v76);
      if ( ((v74 + (_DWORD)v76) & 0xFFFFFFF8) >= 8 )
      {
        v78 = (v74 + (_DWORD)v76) & 0xFFFFFFF8;
        v79 = 0;
        do
        {
          v80 = v79;
          v79 += 8;
          *(_QWORD *)(v75 + v80) = *(_QWORD *)&v77[v80];
        }
        while ( v79 < v78 );
      }
      v64 = v127;
    }
    else if ( (v74 & 4) != 0 )
    {
      *(_DWORD *)v63 = v128[0];
      *(_DWORD *)((char *)v63 + v74 - 4) = *(_DWORD *)((char *)&v127 + v74 + 4);
      v64 = v127;
    }
    else if ( (_DWORD)v127 != -1 )
    {
      *(_BYTE *)v63 = v128[0];
      v64 = v127;
      if ( (v74 & 2) != 0 )
      {
        *(_WORD *)((char *)v63 + v74 - 2) = *(_WORD *)((char *)&v127 + v74 + 6);
        v64 = v127;
      }
    }
  }
  else
  {
    *(_QWORD *)(v86 + 320) = v62;
    *(_QWORD *)(v86 + 336) = v128[0];
    v64 = v127;
  }
  *(_QWORD *)(v86 + 328) = v64;
  *(_QWORD *)(v86 + 360) = 0;
  *(_QWORD *)(v86 + 352) = 0x600000006LL;
  v126 = v128;
  v127 = 0;
  LOBYTE(v128[0]) = 0;
  if ( ptr != v114 )
  {
    free(ptr);
    v61 = v86;
  }
  v87 = v61;
  sub_6441A0(v124);
  sub_6441A0(v125);
  v65 = v87;
  if ( v126 != v128 )
  {
    operator delete(v126, v128[0] + 1LL);
    v65 = v87;
  }
  *(_DWORD *)(v65 + 368) = 6;
  *(_OWORD *)(v65 + 376) = 0;
  *(_QWORD *)v65 = &off_49F4D00;
  v66 = v137;
  *(_QWORD *)(v65 + 392) = v65 + 408;
  *(_QWORD *)(v65 + 400) = 0x100000000LL;
  if ( v66 != v115 )
  {
    v88 = v65;
    free(v66);
    v65 = v88;
  }
  v89 = (_QWORD *)v65;
  sub_6441A0(v122);
  sub_6441A0(v123);
  v67 = v89;
  *v89 = &off_49932E8;
  v68 = v129;
  v89[58] = v111;
  v89[59] = v108;
  v89[60] = v109;
  v89[61] = v110;
  v89[62] = v107;
  v89[63] = v112;
  v89[64] = v113;
  if ( v68 != v116 )
  {
    free(v68);
    v67 = v89;
  }
  v90 = (__int64)v67;
  sub_6441A0(v120);
  sub_6441A0(v121);
  v69 = v90;
  v70 = *(void (__fastcall ****)(_QWORD))(v83 + 16);
  *(_QWORD *)(v83 + 16) = v90;
  if ( v70 )
  {
    (**v70)(v70);
    v69 = v90;
  }
  v71 = *(_QWORD *)(v69 + 88);
  if ( v71 && (unsigned int)(*(_DWORD *)(v71 + 356) - 2) <= 0x13 && (v84 = v69, v72 = sub_FC8C50(), v69 = v84, v72) )
  {
    sub_FC8D50(v72, v84);
    return v84;
  }
  else
  {
    v73 = a1;
    v82 = v69;
    sub_64B900((__int64)(v73 + 23), v69);
    return v82;
  }
}

