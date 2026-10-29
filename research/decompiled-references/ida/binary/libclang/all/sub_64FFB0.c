__int64 __fastcall sub_64FFB0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        char *a12)
{
  void *v15; // r12
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int16 v24; // ax
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  void **p_ptr; // rdi
  __int64 v35; // rcx
  __m128i v36; // xmm5
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm6
  __m128i v44; // xmm0
  char v45; // al
  __m128i v46; // xmm0
  char v47; // al
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __m128i *v50; // rbp
  __int64 v51; // rbx
  __int64 v52; // r12
  __int64 v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rax
  _BYTE *m128i_i8; // rdi
  size_t v57; // r13
  __int8 *v58; // r14
  __int64 v59; // rax
  __int64 v60; // rcx
  char *v61; // rax
  _QWORD *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  _BYTE *v65; // rdi
  _QWORD *v66; // rcx
  __int64 v67; // rcx
  void (__fastcall ***v68)(_QWORD); // rdi
  __int64 v69; // rdi
  __int64 v70; // rax
  _QWORD *v71; // rdi
  unsigned int v72; // esi
  unsigned __int64 v73; // rdi
  char *v74; // rdx
  char *v75; // r8
  unsigned int v76; // eax
  unsigned int v77; // edx
  __int64 v78; // rsi
  __int64 v80; // [rsp+0h] [rbp-358h]
  __int64 v81; // [rsp+8h] [rbp-350h]
  __int64 v82; // [rsp+8h] [rbp-350h]
  __int64 v83; // [rsp+10h] [rbp-348h]
  __int64 v84; // [rsp+10h] [rbp-348h]
  __int64 v85; // [rsp+10h] [rbp-348h]
  __int64 v86; // [rsp+10h] [rbp-348h]
  _QWORD *v87; // [rsp+10h] [rbp-348h]
  __int64 v88; // [rsp+10h] [rbp-348h]
  unsigned __int64 v89; // [rsp+18h] [rbp-340h]
  unsigned __int64 v90; // [rsp+38h] [rbp-320h]
  __m128 v91; // [rsp+40h] [rbp-318h] BYREF
  void **v92; // [rsp+50h] [rbp-308h]
  __int64 v93; // [rsp+58h] [rbp-300h]
  __int64 v94; // [rsp+60h] [rbp-2F8h]
  __int64 v95; // [rsp+68h] [rbp-2F0h]
  __int64 v96; // [rsp+70h] [rbp-2E8h]
  __int64 v97; // [rsp+78h] [rbp-2E0h]
  __int64 v98; // [rsp+80h] [rbp-2D8h]
  __int64 v99; // [rsp+88h] [rbp-2D0h]
  __int64 v100; // [rsp+90h] [rbp-2C8h]
  __int64 v101; // [rsp+98h] [rbp-2C0h]
  char v102; // [rsp+A7h] [rbp-2B1h]
  _BYTE *v103; // [rsp+A8h] [rbp-2B0h]
  _BYTE *v104; // [rsp+B0h] [rbp-2A8h]
  _BYTE *v105; // [rsp+B8h] [rbp-2A0h]
  size_t v106; // [rsp+C8h] [rbp-290h]
  __int64 v107; // [rsp+D0h] [rbp-288h] BYREF
  char v108; // [rsp+E0h] [rbp-278h]
  __int64 v109[4]; // [rsp+F0h] [rbp-268h] BYREF
  __int64 v110[4]; // [rsp+110h] [rbp-248h] BYREF
  __int64 v111[4]; // [rsp+130h] [rbp-228h] BYREF
  __int64 v112[4]; // [rsp+150h] [rbp-208h] BYREF
  __int64 v113[4]; // [rsp+170h] [rbp-1E8h] BYREF
  _BYTE v114[32]; // [rsp+190h] [rbp-1C8h] BYREF
  void *v115; // [rsp+1B0h] [rbp-1A8h]
  __int64 v116; // [rsp+1B8h] [rbp-1A0h]
  char v117[16]; // [rsp+1C0h] [rbp-198h] BYREF
  void *v118; // [rsp+1D0h] [rbp-188h] BYREF
  __m128i si128; // [rsp+1D8h] [rbp-180h]
  _BYTE v120[32]; // [rsp+1E8h] [rbp-170h] BYREF
  __m128i v121; // [rsp+208h] [rbp-150h] BYREF
  __m128i v122; // [rsp+218h] [rbp-140h] BYREF
  __m128i v123; // [rsp+228h] [rbp-130h] BYREF
  __int16 v124; // [rsp+238h] [rbp-120h]
  char v125; // [rsp+23Ah] [rbp-11Eh]
  void *v126; // [rsp+240h] [rbp-118h] BYREF
  __m128i v127; // [rsp+248h] [rbp-110h]
  _BYTE v128[32]; // [rsp+258h] [rbp-100h] BYREF
  __m128i v129; // [rsp+278h] [rbp-E0h] BYREF
  __m128i v130; // [rsp+288h] [rbp-D0h] BYREF
  __m128i v131; // [rsp+298h] [rbp-C0h] BYREF
  __int16 v132; // [rsp+2A8h] [rbp-B0h]
  char v133; // [rsp+2AAh] [rbp-AEh]
  void *ptr; // [rsp+2B0h] [rbp-A8h] BYREF
  __m128i v135; // [rsp+2B8h] [rbp-A0h] BYREF
  _BYTE v136[32]; // [rsp+2C8h] [rbp-90h] BYREF
  __m128i v137; // [rsp+2E8h] [rbp-70h] BYREF
  __m128i v138; // [rsp+2F8h] [rbp-60h] BYREF
  __m128i v139; // [rsp+308h] [rbp-50h] BYREF
  __int16 v140; // [rsp+318h] [rbp-40h]
  char v141; // [rsp+31Ah] [rbp-3Eh]

  ptr = (void *)sub_FC8E80(a1, a2, a3);
  v15 = ptr;
  v17 = v16;
  v135 = (__m128i)v16;
  sub_64F120((__int64)&v107, (__int64)(a1 + 20), (__m128i *)&ptr, &v135.m128i_i64[1]);
  v81 = v107;
  if ( v135.m128i_i64[1] )
    (**(void (__fastcall ***)(__int64))v135.m128i_i64[1])(v135.m128i_i64[1]);
  if ( !v108 )
  {
    v18 = *(_QWORD *)(v81 + 16);
    if ( *(_DWORD *)(v18 + 356) != 8 )
      return 0;
    return v18;
  }
  v20 = *a1;
  a1[10] += 464LL;
  v21 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[1] >= v21 + 464 && v20 )
    *a1 = v21 + 464;
  else
    v21 = sub_63DCB0((__int64)a1, 464, 4);
  v89 = v21;
  v102 = *a12;
  sub_644390((__int64)v110, a11);
  sub_644390((__int64)v109, a10);
  v22 = *(_QWORD *)(a8 + 8) == 0;
  v23 = v89;
  v92 = &v118;
  v103 = v120;
  v118 = v120;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( !v22 )
  {
    sub_63DE60((__int64)v92, (unsigned __int8 **)a8);
    v23 = v89;
  }
  v24 = *(_WORD *)(a8 + 104);
  v90 = v23;
  v121 = _mm_loadu_si128((const __m128i *)(a8 + 56));
  v25 = _mm_loadu_si128((const __m128i *)(a8 + 72));
  v124 = v24;
  LOBYTE(v24) = *(_BYTE *)(a8 + 106);
  v122 = v25;
  v26 = _mm_loadu_si128((const __m128i *)(a8 + 88));
  v125 = v24;
  v123 = v26;
  v100 = sub_FC8E80(a1, a4, a5);
  v28 = v27;
  v99 = *a6;
  v97 = a6[1];
  v96 = a6[2];
  v95 = a6[3];
  v94 = a6[4];
  v93 = a6[5];
  v29 = *(_QWORD *)(a7 + 8);
  v91 = _mm_loadh_ps((const double *)a7);
  v98 = v29;
  v30 = *(_QWORD *)(a7 + 16);
  sub_644390((__int64)v112, v110);
  sub_644390((__int64)v111, v109);
  v31 = v90;
  v105 = v128;
  v126 = v128;
  v127 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( si128.m128i_i64[0] )
  {
    sub_63DE60((__int64)&v126, (unsigned __int8 **)v92);
    v31 = v90;
  }
  v101 = v31;
  v32 = _mm_loadu_si128(&v121);
  v115 = v117;
  v132 = v124;
  v129 = v32;
  v33 = _mm_loadu_si128(&v122);
  v133 = v125;
  v130 = v33;
  v92 = (void **)v114;
  v131 = _mm_loadu_si128(&v123);
  strcpy(v117, "public");
  v116 = 6;
  sub_644390((__int64)v114, v112);
  p_ptr = (void **)v113;
  sub_644390((__int64)v113, v111);
  v104 = v136;
  v35 = v101;
  ptr = v136;
  v135 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( v127.m128i_i64[0] )
  {
    p_ptr = &ptr;
    sub_63DE60((__int64)&ptr, (unsigned __int8 **)&v126);
    v35 = v101;
  }
  v36 = _mm_load_si128((const __m128i *)&v91);
  v37 = _mm_loadu_si128(&v129);
  v140 = v132;
  v137 = v37;
  v38 = _mm_loadu_si128(&v130);
  v141 = v133;
  v138 = v38;
  v139 = _mm_loadu_si128(&v131);
  *(_QWORD *)v35 = &off_49F4B08;
  v39 = v100;
  *(_QWORD *)(v35 + 8) = v15;
  *(_QWORD *)(v35 + 24) = v39;
  v40 = v99;
  *(_QWORD *)(v35 + 16) = v17;
  *(_QWORD *)(v35 + 40) = v40;
  v41 = v97;
  *(_QWORD *)(v35 + 32) = v28;
  *(_QWORD *)(v35 + 48) = v41;
  v42 = v96;
  *(__m128i *)(v35 + 88) = v36;
  *(_QWORD *)(v35 + 56) = v42;
  *(_QWORD *)(v35 + 64) = v95;
  *(_QWORD *)(v35 + 72) = v94;
  *(_QWORD *)(v35 + 80) = v93;
  *(_QWORD *)(v35 + 104) = v98;
  v43 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  *(_QWORD *)(v35 + 112) = v30;
  *(_QWORD *)(v35 + 120) = v35 + 144;
  *(__m128i *)(v35 + 128) = v43;
  if ( v135.m128i_i64[0] )
  {
    p_ptr = (void **)(v35 + 120);
    v91.m128_u64[0] = v35;
    sub_63DE60(v35 + 120, (unsigned __int8 **)&ptr);
    v35 = v91.m128_u64[0];
  }
  v44 = _mm_loadu_si128(&v137);
  *(_WORD *)(v35 + 224) = v140;
  v45 = v141;
  *(__m128i *)(v35 + 176) = v44;
  v46 = _mm_loadu_si128(&v138);
  *(_BYTE *)(v35 + 226) = v45;
  v47 = *(_BYTE *)(v35 + 232);
  *(__m128i *)(v35 + 192) = v46;
  *(__m128i *)(v35 + 208) = _mm_loadu_si128(&v139);
  *(_BYTE *)(v35 + 232) = v47 & 0xC0 | 0x11;
  v48 = a9[1] - *a9;
  *(_OWORD *)(v35 + 240) = 0;
  *(_QWORD *)(v35 + 256) = 0;
  if ( v48 )
  {
    if ( v48 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(p_ptr);
    v83 = v35;
    v49 = operator new(v48);
    v35 = v83;
    v50 = (__m128i *)v49;
  }
  else
  {
    v50 = nullptr;
  }
  *(_QWORD *)(v35 + 256) = (char *)v50 + v48;
  *(__m128i *)(v35 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v50, (__m128i)(unsigned __int64)v50);
  v51 = a9[1];
  v52 = *a9;
  if ( v51 != *a9 )
  {
    v91.m128_u64[0] = v35;
    while ( 1 )
    {
      m128i_i8 = v50[1].m128i_i8;
      v50->m128i_i64[0] = (__int64)v50[1].m128i_i64;
      v57 = *(_QWORD *)(v52 + 8);
      v58 = *(__int8 **)v52;
      v106 = v57;
      if ( v57 > 0xF )
        break;
      if ( v57 == 1 )
      {
        v50[1].m128i_i8[0] = *v58;
        goto LABEL_25;
      }
      if ( v57 )
        goto LABEL_28;
LABEL_25:
      v50->m128i_i64[1] = v57;
      v52 += 80;
      v50 += 5;
      m128i_i8[v57] = 0;
      v53 = *(_QWORD *)(v52 - 32);
      v50[-3] = _mm_loadu_si128((const __m128i *)(v52 - 48));
      v54 = _mm_loadu_si128((const __m128i *)(v52 - 24));
      v50[-2].m128i_i64[0] = v53;
      v55 = *(_QWORD *)(v52 - 8);
      *(__m128i *)((char *)v50 - 24) = v54;
      v50[-1].m128i_i64[1] = v55;
      if ( v51 == v52 )
      {
        v35 = v91.m128_u64[0];
        *(_QWORD *)(v91.m128_u64[0] + 248) = v50;
        goto LABEL_32;
      }
    }
    v59 = std::string::_M_create();
    v50->m128i_i64[0] = v59;
    m128i_i8 = (_BYTE *)v59;
    v50[1].m128i_i64[0] = v106;
LABEL_28:
    memcpy(m128i_i8, v58, v57);
    v57 = v106;
    m128i_i8 = (_BYTE *)v50->m128i_i64[0];
    goto LABEL_25;
  }
LABEL_32:
  v84 = v35;
  sub_644390(v35 + 264, v113);
  sub_644390(v84 + 288, (__int64 *)v92);
  v60 = v84;
  *(_BYTE *)(v84 + 312) = v102;
  v61 = (char *)v115;
  v62 = (_QWORD *)(v84 + 336);
  *(_QWORD *)(v84 + 320) = v84 + 336;
  if ( v61 == v117 )
  {
    v63 = v116;
    v72 = v116 + 1;
    if ( (unsigned int)(v116 + 1) >= 8 )
    {
      *v62 = *(_QWORD *)v117;
      *(_QWORD *)((char *)v62 + v72 - 8) = *(_QWORD *)&v117[v72 - 8];
      v73 = (v84 + 344) & 0xFFFFFFFFFFFFFFF8LL;
      v74 = (char *)v62 - v73;
      v75 = (char *)(v117 - v74);
      if ( ((v72 + (_DWORD)v74) & 0xFFFFFFF8) >= 8 )
      {
        v76 = (v72 + (_DWORD)v74) & 0xFFFFFFF8;
        v77 = 0;
        do
        {
          v78 = v77;
          v77 += 8;
          *(_QWORD *)(v73 + v78) = *(_QWORD *)&v75[v78];
        }
        while ( v77 < v76 );
      }
      v63 = v116;
    }
    else if ( (v72 & 4) != 0 )
    {
      *(_DWORD *)v62 = *(_DWORD *)v117;
      *(_DWORD *)((char *)v62 + v72 - 4) = *(_DWORD *)&v117[v72 - 4];
      v63 = v116;
    }
    else if ( (_DWORD)v116 != -1 )
    {
      *(_BYTE *)v62 = v117[0];
      v63 = v116;
      if ( (v72 & 2) != 0 )
      {
        *(_WORD *)((char *)v62 + v72 - 2) = *(_WORD *)&v117[v72 - 2];
        v63 = v116;
      }
    }
  }
  else
  {
    *(_QWORD *)(v84 + 320) = v61;
    *(_QWORD *)(v84 + 336) = *(_QWORD *)v117;
    v63 = v116;
  }
  *(_QWORD *)(v84 + 328) = v63;
  *(_QWORD *)(v84 + 360) = 0;
  *(_QWORD *)(v84 + 352) = 0x800000008LL;
  v115 = v117;
  v116 = 0;
  v117[0] = 0;
  if ( ptr != v104 )
  {
    free(ptr);
    v60 = v84;
  }
  v85 = v60;
  sub_6441A0(v113);
  sub_6441A0((__int64 *)v92);
  v64 = v85;
  if ( v115 != v117 )
  {
    operator delete(v115, *(_QWORD *)v117 + 1LL);
    v64 = v85;
  }
  *(_DWORD *)(v64 + 368) = 8;
  *(_OWORD *)(v64 + 376) = 0;
  *(_QWORD *)v64 = &off_49F4D00;
  v65 = v126;
  *(_QWORD *)(v64 + 392) = v64 + 408;
  *(_QWORD *)(v64 + 400) = 0x100000000LL;
  if ( v65 != v105 )
  {
    v86 = v64;
    free(v65);
    v64 = v86;
  }
  v87 = (_QWORD *)v64;
  sub_6441A0(v111);
  sub_6441A0(v112);
  v66 = v87;
  *v87 = &off_4993310;
  if ( v118 != v103 )
  {
    free(v118);
    v66 = v87;
  }
  v88 = (__int64)v66;
  sub_6441A0(v109);
  sub_6441A0(v110);
  v67 = v88;
  v68 = *(void (__fastcall ****)(_QWORD))(v81 + 16);
  *(_QWORD *)(v81 + 16) = v88;
  if ( v68 )
  {
    (**v68)(v68);
    v67 = v88;
  }
  v69 = *(_QWORD *)(v67 + 88);
  if ( v69 && (unsigned int)(*(_DWORD *)(v69 + 356) - 2) <= 0x13 && (v82 = v67, v70 = sub_FC8C50(), v67 = v82, v70) )
  {
    sub_FC8D50(v70, v82);
    return v82;
  }
  else
  {
    v71 = a1;
    v80 = v67;
    sub_64B900((__int64)(v71 + 23), v67);
    return v80;
  }
}

