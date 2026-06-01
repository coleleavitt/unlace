__int64 __fastcall sub_650A60(
        unsigned __int64 *a1,
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
        __int64 *a12,
        char *a13)
{
  void *v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  __int16 v23; // ax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  void **p_ptr; // rdi
  __m128i v33; // xmm5
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // xmm6
  __m128i v41; // xmm0
  char v42; // al
  __m128i v43; // xmm0
  char v44; // al
  unsigned __int64 v45; // rbp
  __int64 v46; // rbx
  __int64 v47; // r12
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 *v50; // rdi
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rax
  char v54; // al
  _QWORD *v55; // rdx
  __int64 v56; // rax
  _BYTE *v57; // rdi
  _BYTE *v58; // rdi
  void (__fastcall ***v59)(_QWORD); // rdi
  __int64 v60; // rdi
  __int64 v61; // rax
  unsigned int v62; // esi
  unsigned __int64 v63; // rdi
  char *v64; // rdx
  char *v65; // r8
  unsigned int v66; // eax
  unsigned int v67; // edx
  __int64 v68; // rcx
  __int64 v69; // [rsp+8h] [rbp-380h]
  __m128 v72; // [rsp+40h] [rbp-348h] BYREF
  __int64 *v73; // [rsp+50h] [rbp-338h]
  __int64 v74; // [rsp+58h] [rbp-330h]
  __int64 v75; // [rsp+60h] [rbp-328h]
  __int64 v76; // [rsp+68h] [rbp-320h]
  __int64 v77; // [rsp+70h] [rbp-318h]
  __int64 v78; // [rsp+78h] [rbp-310h]
  __int64 v79; // [rsp+80h] [rbp-308h]
  __int64 v80; // [rsp+88h] [rbp-300h]
  __int64 v81; // [rsp+90h] [rbp-2F8h]
  __int64 v82; // [rsp+98h] [rbp-2F0h]
  char v83; // [rsp+A7h] [rbp-2E1h]
  __int64 v84; // [rsp+A8h] [rbp-2E0h]
  __int64 v85; // [rsp+B0h] [rbp-2D8h]
  __int64 v86; // [rsp+B8h] [rbp-2D0h]
  __int64 v87; // [rsp+C0h] [rbp-2C8h]
  __int64 v88; // [rsp+C8h] [rbp-2C0h]
  __int64 v89; // [rsp+D0h] [rbp-2B8h]
  __int64 v90; // [rsp+D8h] [rbp-2B0h]
  _BYTE *v91; // [rsp+E0h] [rbp-2A8h]
  _BYTE *v92; // [rsp+E8h] [rbp-2A0h]
  _BYTE *v93; // [rsp+F0h] [rbp-298h]
  unsigned __int8 **v94; // [rsp+F8h] [rbp-290h]
  __int64 v95; // [rsp+100h] [rbp-288h] BYREF
  char v96; // [rsp+110h] [rbp-278h]
  __int64 v97[4]; // [rsp+120h] [rbp-268h] BYREF
  __int64 v98[4]; // [rsp+140h] [rbp-248h] BYREF
  __int64 v99[4]; // [rsp+160h] [rbp-228h] BYREF
  __int64 v100[4]; // [rsp+180h] [rbp-208h] BYREF
  __int64 v101[4]; // [rsp+1A0h] [rbp-1E8h] BYREF
  _BYTE v102[32]; // [rsp+1C0h] [rbp-1C8h] BYREF
  void *v103; // [rsp+1E0h] [rbp-1A8h]
  __int64 v104; // [rsp+1E8h] [rbp-1A0h]
  char v105[16]; // [rsp+1F0h] [rbp-198h] BYREF
  void *v106; // [rsp+200h] [rbp-188h] BYREF
  __m128i si128; // [rsp+208h] [rbp-180h]
  _BYTE v108[32]; // [rsp+218h] [rbp-170h] BYREF
  __m128i v109; // [rsp+238h] [rbp-150h] BYREF
  __m128i v110; // [rsp+248h] [rbp-140h] BYREF
  __m128i v111; // [rsp+258h] [rbp-130h] BYREF
  __int16 v112; // [rsp+268h] [rbp-120h]
  char v113; // [rsp+26Ah] [rbp-11Eh]
  void *v114; // [rsp+270h] [rbp-118h] BYREF
  __m128i v115; // [rsp+278h] [rbp-110h]
  _BYTE v116[32]; // [rsp+288h] [rbp-100h] BYREF
  __m128i v117; // [rsp+2A8h] [rbp-E0h] BYREF
  __m128i v118; // [rsp+2B8h] [rbp-D0h] BYREF
  __m128i v119; // [rsp+2C8h] [rbp-C0h] BYREF
  __int16 v120; // [rsp+2D8h] [rbp-B0h]
  char v121; // [rsp+2DAh] [rbp-AEh]
  void *ptr; // [rsp+2E0h] [rbp-A8h] BYREF
  __m128i v123; // [rsp+2E8h] [rbp-A0h] BYREF
  _BYTE v124[32]; // [rsp+2F8h] [rbp-90h] BYREF
  __m128i v125; // [rsp+318h] [rbp-70h] BYREF
  __m128i v126; // [rsp+328h] [rbp-60h] BYREF
  __m128i v127; // [rsp+338h] [rbp-50h] BYREF
  __int16 v128; // [rsp+348h] [rbp-40h]
  char v129; // [rsp+34Ah] [rbp-3Eh]

  ptr = (void *)sub_FC8E80(a1, a2, a3);
  v15 = ptr;
  v17 = v16;
  v123 = (__m128i)v16;
  sub_64F120((__int64)&v95, (__int64)(a1 + 20), (__m128i *)&ptr, &v123.m128i_i64[1]);
  v69 = v95;
  if ( v123.m128i_i64[1] )
    (**(void (__fastcall ***)(__int64))v123.m128i_i64[1])(v123.m128i_i64[1]);
  if ( v96 )
  {
    v20 = *a1;
    a1[10] += 520LL;
    v21 = ((v20 + 15) & 0xFFFFFFFFFFFFFFF0LL) + 520;
    if ( a1[1] >= v21 && v20 )
    {
      *a1 = v21;
      v18 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v18 = sub_63DCB0((__int64)a1, 520, 4);
    }
    v83 = *a13;
    sub_644390((__int64)v98, a11);
    sub_644390((__int64)v97, a10);
    v22 = *(_QWORD *)(a8 + 8) == 0;
    v93 = v108;
    v106 = v108;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( !v22 )
      sub_63DE60((__int64)&v106, (unsigned __int8 **)a8);
    v23 = *(_WORD *)(a8 + 104);
    v109 = _mm_loadu_si128((const __m128i *)(a8 + 56));
    v24 = _mm_loadu_si128((const __m128i *)(a8 + 72));
    v112 = v23;
    LOBYTE(v23) = *(_BYTE *)(a8 + 106);
    v110 = v24;
    v25 = _mm_loadu_si128((const __m128i *)(a8 + 88));
    v113 = v23;
    v111 = v25;
    v81 = sub_FC8E80(a1, a4, a5);
    v26 = *a6;
    v82 = v27;
    v76 = v26;
    v80 = a6[1];
    v77 = a6[2];
    v78 = a6[3];
    v79 = a6[4];
    v75 = a6[5];
    v28 = *(_QWORD *)(a7 + 8);
    v72 = _mm_loadh_ps((const double *)a7);
    v74 = v28;
    v29 = *(_QWORD *)(a7 + 16);
    v85 = *a12;
    v84 = a12[1];
    v90 = a12[2];
    v88 = a12[3];
    v89 = a12[4];
    v87 = a12[5];
    v86 = a12[6];
    sub_644390((__int64)v100, v98);
    sub_644390((__int64)v99, v97);
    v94 = (unsigned __int8 **)&v114;
    v92 = v116;
    v114 = v116;
    v115 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( si128.m128i_i64[0] )
      sub_63DE60((__int64)v94, (unsigned __int8 **)&v106);
    strcpy(v105, "public");
    v30 = _mm_loadu_si128(&v109);
    v103 = v105;
    v120 = v112;
    v117 = v30;
    v31 = _mm_loadu_si128(&v110);
    v121 = v113;
    v118 = v31;
    v73 = (__int64 *)v102;
    v119 = _mm_loadu_si128(&v111);
    v104 = 6;
    sub_644390((__int64)v102, v100);
    p_ptr = (void **)v101;
    sub_644390((__int64)v101, v99);
    v91 = v124;
    ptr = v124;
    v123 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    if ( v115.m128i_i64[0] )
    {
      p_ptr = &ptr;
      sub_63DE60((__int64)&ptr, v94);
    }
    v33 = _mm_load_si128((const __m128i *)&v72);
    v34 = _mm_loadu_si128(&v117);
    v128 = v120;
    v125 = v34;
    v35 = _mm_loadu_si128(&v118);
    v129 = v121;
    v126 = v35;
    v127 = _mm_loadu_si128(&v119);
    *(_QWORD *)v18 = &off_49F4B08;
    v36 = v81;
    *(_QWORD *)(v18 + 8) = v15;
    *(_QWORD *)(v18 + 24) = v36;
    v37 = v82;
    *(_QWORD *)(v18 + 16) = v17;
    *(_QWORD *)(v18 + 32) = v37;
    v38 = v76;
    *(__m128i *)(v18 + 88) = v33;
    *(_QWORD *)(v18 + 40) = v38;
    *(_QWORD *)(v18 + 48) = v80;
    *(_QWORD *)(v18 + 56) = v77;
    *(_QWORD *)(v18 + 64) = v78;
    *(_QWORD *)(v18 + 72) = v79;
    *(_QWORD *)(v18 + 80) = v75;
    v39 = v74;
    v40 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    *(_QWORD *)(v18 + 112) = v29;
    *(_QWORD *)(v18 + 104) = v39;
    *(_QWORD *)(v18 + 120) = v18 + 144;
    *(__m128i *)(v18 + 128) = v40;
    if ( v123.m128i_i64[0] )
    {
      p_ptr = (void **)(v18 + 120);
      sub_63DE60(v18 + 120, (unsigned __int8 **)&ptr);
    }
    v41 = _mm_loadu_si128(&v125);
    *(_WORD *)(v18 + 224) = v128;
    v42 = v129;
    *(__m128i *)(v18 + 176) = v41;
    v43 = _mm_loadu_si128(&v126);
    *(_BYTE *)(v18 + 226) = v42;
    v44 = *(_BYTE *)(v18 + 232);
    *(__m128i *)(v18 + 192) = v43;
    *(__m128i *)(v18 + 208) = _mm_loadu_si128(&v127);
    *(_BYTE *)(v18 + 232) = v44 & 0xC0 | 0x11;
    v45 = a9[1] - *a9;
    *(_OWORD *)(v18 + 240) = 0;
    *(_QWORD *)(v18 + 256) = 0;
    if ( v45 )
    {
      if ( v45 > 0x7FFFFFFFFFFFFFD0LL )
        sub_555886(p_ptr);
      v46 = operator new(v45);
    }
    else
    {
      v46 = 0;
    }
    *(_QWORD *)(v18 + 256) = v46 + v45;
    *(__m128i *)(v18 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)(unsigned __int64)v46);
    v47 = a9[1];
    v48 = *a9;
    if ( v47 != *a9 )
    {
      do
      {
        v49 = v46 + 16;
        v50 = (__int64 *)v46;
        v48 += 80;
        v46 += 80;
        *(_QWORD *)(v46 - 80) = v49;
        sub_63E170(v50, *(_BYTE **)(v48 - 80), *(_QWORD *)(v48 - 80) + *(_QWORD *)(v48 - 72));
        v51 = *(_QWORD *)(v48 - 32);
        *(__m128i *)(v46 - 48) = _mm_loadu_si128((const __m128i *)(v48 - 48));
        v52 = _mm_loadu_si128((const __m128i *)(v48 - 24));
        *(_QWORD *)(v46 - 32) = v51;
        v53 = *(_QWORD *)(v48 - 8);
        *(__m128i *)(v46 - 24) = v52;
        *(_QWORD *)(v46 - 8) = v53;
      }
      while ( v47 != v48 );
      *(_QWORD *)(v18 + 248) = v46;
    }
    sub_644390(v18 + 264, v101);
    sub_644390(v18 + 288, v73);
    v54 = v83;
    v55 = (_QWORD *)(v18 + 336);
    *(_QWORD *)(v18 + 320) = v18 + 336;
    *(_BYTE *)(v18 + 312) = v54;
    if ( v103 == v105 )
    {
      v56 = v104;
      v62 = v104 + 1;
      if ( (unsigned int)(v104 + 1) >= 8 )
      {
        *v55 = *(_QWORD *)v105;
        *(_QWORD *)((char *)v55 + v62 - 8) = *(_QWORD *)&v105[v62 - 8];
        v63 = (v18 + 344) & 0xFFFFFFFFFFFFFFF8LL;
        v64 = (char *)v55 - v63;
        v65 = (char *)(v105 - v64);
        if ( ((v62 + (_DWORD)v64) & 0xFFFFFFF8) >= 8 )
        {
          v66 = (v62 + (_DWORD)v64) & 0xFFFFFFF8;
          v67 = 0;
          do
          {
            v68 = v67;
            v67 += 8;
            *(_QWORD *)(v63 + v68) = *(_QWORD *)&v65[v68];
          }
          while ( v67 < v66 );
        }
        v56 = v104;
      }
      else if ( (v62 & 4) != 0 )
      {
        *(_DWORD *)v55 = *(_DWORD *)v105;
        *(_DWORD *)((char *)v55 + v62 - 4) = *(_DWORD *)&v105[v62 - 4];
        v56 = v104;
      }
      else if ( (_DWORD)v104 != -1 )
      {
        *(_BYTE *)v55 = v105[0];
        v56 = v104;
        if ( (v62 & 2) != 0 )
        {
          *(_WORD *)((char *)v55 + v62 - 2) = *(_WORD *)&v105[v62 - 2];
          v56 = v104;
        }
      }
    }
    else
    {
      *(_QWORD *)(v18 + 320) = v103;
      *(_QWORD *)(v18 + 336) = *(_QWORD *)v105;
      v56 = v104;
    }
    *(_QWORD *)(v18 + 328) = v56;
    *(_QWORD *)(v18 + 360) = 0;
    *(_QWORD *)(v18 + 352) = 0x700000007LL;
    v103 = v105;
    v104 = 0;
    v105[0] = 0;
    if ( ptr != v91 )
      free(ptr);
    sub_6441A0(v101);
    sub_6441A0(v73);
    if ( v103 != v105 )
      operator delete(v103, *(_QWORD *)v105 + 1LL);
    *(_DWORD *)(v18 + 368) = 7;
    *(_OWORD *)(v18 + 376) = 0;
    *(_QWORD *)v18 = &off_49F4D00;
    v57 = v114;
    *(_QWORD *)(v18 + 392) = v18 + 408;
    *(_QWORD *)(v18 + 400) = 0x100000000LL;
    if ( v57 != v92 )
      free(v57);
    sub_6441A0(v99);
    sub_6441A0(v100);
    *(_QWORD *)v18 = &off_49932C0;
    v58 = v106;
    *(_QWORD *)(v18 + 464) = v85;
    *(_QWORD *)(v18 + 472) = v84;
    *(_QWORD *)(v18 + 480) = v90;
    *(_QWORD *)(v18 + 488) = v88;
    *(_QWORD *)(v18 + 496) = v89;
    *(_QWORD *)(v18 + 504) = v87;
    *(_QWORD *)(v18 + 512) = v86;
    if ( v58 != v93 )
      free(v58);
    sub_6441A0(v97);
    sub_6441A0(v98);
    v59 = *(void (__fastcall ****)(_QWORD))(v69 + 16);
    *(_QWORD *)(v69 + 16) = v18;
    if ( v59 )
      (**v59)(v59);
    v60 = *(_QWORD *)(v18 + 88);
    if ( v60 && (unsigned int)(*(_DWORD *)(v60 + 356) - 2) <= 0x13 && (v61 = sub_FC8C50()) != 0 )
      sub_FC8D50(v61, v18);
    else
      sub_64B900((__int64)(a1 + 23), v18);
  }
  else
  {
    v18 = *(_QWORD *)(v69 + 16);
    if ( *(_DWORD *)(v18 + 356) != 7 )
      return 0;
  }
  return v18;
}

