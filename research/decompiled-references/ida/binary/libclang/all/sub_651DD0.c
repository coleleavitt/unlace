__int64 __fastcall sub_651DD0(
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
        __int64 a12,
        char *a13)
{
  _QWORD *v14; // rbx
  void *v15; // r12
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  bool v22; // zf
  __int16 v23; // ax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  char *v29; // rax
  char *v30; // rbp
  __int64 v31; // rax
  __int64 v32; // r15
  void **p_ptr; // rdi
  __m128i v34; // xmm4
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // xmm5
  __m128i v41; // xmm0
  char v42; // al
  __m128i v43; // xmm0
  char v44; // al
  unsigned __int64 v45; // r12
  __int64 v46; // r15
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rax
  _BYTE *v52; // rdi
  size_t v53; // rbx
  _BYTE *v54; // rbp
  __int64 v55; // rax
  char v56; // al
  _QWORD *v57; // rdx
  __int64 v58; // rax
  void (__fastcall ***v59)(_QWORD); // rdi
  __int64 v60; // rdi
  __int64 v61; // rax
  int v62; // esi
  _DWORD *v63; // rdi
  _DWORD *v64; // rax
  __int64 v65; // rdx
  unsigned int v66; // ecx
  unsigned __int64 v67; // rsi
  char *v68; // rdx
  char *v69; // rdi
  unsigned int v70; // eax
  unsigned int v71; // edx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // [rsp+0h] [rbp-2B8h]
  __int64 v77; // [rsp+10h] [rbp-2A8h]
  _QWORD *v79; // [rsp+20h] [rbp-298h]
  char *v80; // [rsp+40h] [rbp-278h]
  __int64 v81; // [rsp+48h] [rbp-270h]
  __int64 v82; // [rsp+50h] [rbp-268h]
  __int64 v83; // [rsp+58h] [rbp-260h]
  __m128 v84; // [rsp+60h] [rbp-258h] BYREF
  __int64 v85; // [rsp+70h] [rbp-248h]
  __int64 v86; // [rsp+78h] [rbp-240h]
  __int64 v87; // [rsp+80h] [rbp-238h]
  __int64 v88; // [rsp+88h] [rbp-230h]
  char v89; // [rsp+97h] [rbp-221h]
  _BYTE *v90; // [rsp+98h] [rbp-220h]
  _BYTE *v91; // [rsp+A0h] [rbp-218h]
  unsigned __int8 **v92; // [rsp+A8h] [rbp-210h]
  size_t v93; // [rsp+B8h] [rbp-200h]
  __int64 v94; // [rsp+C0h] [rbp-1F8h] BYREF
  char v95; // [rsp+D0h] [rbp-1E8h]
  __int64 v96[4]; // [rsp+E0h] [rbp-1D8h] BYREF
  __int64 v97[4]; // [rsp+100h] [rbp-1B8h] BYREF
  __int64 v98[4]; // [rsp+120h] [rbp-198h] BYREF
  __int64 v99[4]; // [rsp+140h] [rbp-178h] BYREF
  void *v100; // [rsp+160h] [rbp-158h] BYREF
  __int64 v101; // [rsp+168h] [rbp-150h]
  _QWORD v102[2]; // [rsp+170h] [rbp-148h] BYREF
  void *v103; // [rsp+180h] [rbp-138h]
  __int64 v104; // [rsp+188h] [rbp-130h]
  _QWORD v105[2]; // [rsp+190h] [rbp-128h] BYREF
  void *v106; // [rsp+1A0h] [rbp-118h] BYREF
  __m128i si128; // [rsp+1A8h] [rbp-110h]
  _BYTE v108[32]; // [rsp+1B8h] [rbp-100h] BYREF
  __m128i v109; // [rsp+1D8h] [rbp-E0h] BYREF
  __m128i v110; // [rsp+1E8h] [rbp-D0h] BYREF
  __m128i v111; // [rsp+1F8h] [rbp-C0h] BYREF
  __int16 v112; // [rsp+208h] [rbp-B0h]
  char v113; // [rsp+20Ah] [rbp-AEh]
  void *ptr; // [rsp+210h] [rbp-A8h] BYREF
  __m128i v115; // [rsp+218h] [rbp-A0h] BYREF
  _BYTE v116[32]; // [rsp+228h] [rbp-90h] BYREF
  __m128i v117; // [rsp+248h] [rbp-70h] BYREF
  __m128i v118; // [rsp+258h] [rbp-60h] BYREF
  __m128i v119; // [rsp+268h] [rbp-50h] BYREF
  __int16 v120; // [rsp+278h] [rbp-40h]
  char v121; // [rsp+27Ah] [rbp-3Eh]

  v14 = a1;
  ptr = (void *)sub_FC8E80(a1, a2, a3);
  v15 = ptr;
  v17 = v16;
  v115 = (__m128i)v16;
  sub_64F120((__int64)&v94, (__int64)(a1 + 20), (__m128i *)&ptr, &v115.m128i_i64[1]);
  v75 = v94;
  if ( v115.m128i_i64[1] )
    (**(void (__fastcall ***)(__int64))v115.m128i_i64[1])(v115.m128i_i64[1]);
  if ( !v95 )
  {
    v18 = *(_QWORD *)(v75 + 16);
    if ( (unsigned int)(*(_DWORD *)(v18 + 356) - 15) >= 3 )
      return 0;
    return v18;
  }
  v20 = *a1;
  a1[10] += 392LL;
  v21 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[1] >= v21 + 392 && v20 )
  {
    *a1 = v21 + 392;
    v18 = (v20 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v18 = sub_63DCB0((__int64)a1, 392, 4);
  }
  v89 = *a13;
  v100 = v102;
  sub_63E170((__int64 *)&v100, *(_BYTE **)a12, *(_QWORD *)a12 + *(_QWORD *)(a12 + 8));
  sub_644390((__int64)v97, a11);
  sub_644390((__int64)v96, a10);
  v22 = *(_QWORD *)(a8 + 8) == 0;
  v92 = (unsigned __int8 **)&v106;
  v91 = v108;
  v106 = v108;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( !v22 )
    sub_63DE60((__int64)v92, (unsigned __int8 **)a8);
  v23 = *(_WORD *)(a8 + 104);
  v109 = _mm_loadu_si128((const __m128i *)(a8 + 56));
  v24 = _mm_loadu_si128((const __m128i *)(a8 + 72));
  v112 = v23;
  LOBYTE(v23) = *(_BYTE *)(a8 + 106);
  v110 = v24;
  v25 = _mm_loadu_si128((const __m128i *)(a8 + 88));
  v113 = v23;
  v111 = v25;
  v87 = sub_FC8E80(a1, a4, a5);
  v26 = *a6;
  v88 = v27;
  v28 = v101;
  v86 = v26;
  v85 = a6[1];
  v81 = a6[2];
  v82 = a6[3];
  v83 = a6[4];
  v29 = (char *)a6[5];
  v30 = (char *)v105;
  v103 = v105;
  v80 = v29;
  v31 = *(_QWORD *)(a7 + 8);
  v84 = _mm_loadh_ps((const double *)a7);
  v77 = v31;
  v32 = *(_QWORD *)(a7 + 16);
  if ( v100 == v102 )
  {
    v62 = v101 + 1;
    v63 = v105;
    v64 = v102;
    if ( (unsigned int)(v101 + 1) >= 8 )
    {
      LODWORD(v73) = 0;
      do
      {
        v74 = (unsigned int)v73;
        v73 = (unsigned int)(v73 + 8);
        *(_QWORD *)((char *)v105 + v74) = *(_QWORD *)((char *)v102 + v74);
      }
      while ( (unsigned int)v73 < (v62 & 0xFFFFFFF8) );
      v63 = (_DWORD *)((char *)v105 + v73);
      v64 = (_DWORD *)((char *)v102 + v73);
    }
    v65 = 0;
    if ( (v62 & 4) != 0 )
    {
      *v63 = *v64;
      v65 = 4;
    }
    if ( (v62 & 2) != 0 )
    {
      *(_WORD *)((char *)v63 + v65) = *(_WORD *)((char *)v64 + v65);
      v65 += 2;
    }
    if ( (v62 & 1) != 0 )
      *((_BYTE *)v63 + v65) = *((_BYTE *)v64 + v65);
  }
  else
  {
    v103 = v100;
    v105[0] = v102[0];
  }
  v104 = v28;
  v101 = 0;
  v100 = v102;
  LOBYTE(v102[0]) = 0;
  sub_644390((__int64)v99, v97);
  p_ptr = (void **)v98;
  sub_644390((__int64)v98, v96);
  v90 = v116;
  ptr = v116;
  v115 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( si128.m128i_i64[0] )
  {
    p_ptr = &ptr;
    sub_63DE60((__int64)&ptr, v92);
  }
  v34 = _mm_load_si128((const __m128i *)&v84);
  v35 = _mm_loadu_si128(&v109);
  v120 = v112;
  v117 = v35;
  v36 = _mm_loadu_si128(&v110);
  v121 = v113;
  v118 = v36;
  v119 = _mm_loadu_si128(&v111);
  *(_QWORD *)v18 = &off_49F4B08;
  v37 = v87;
  *(_QWORD *)(v18 + 8) = v15;
  *(_QWORD *)(v18 + 24) = v37;
  v38 = v88;
  *(_QWORD *)(v18 + 16) = v17;
  *(_QWORD *)(v18 + 32) = v38;
  v39 = v86;
  *(__m128i *)(v18 + 88) = v34;
  *(_QWORD *)(v18 + 40) = v39;
  *(_QWORD *)(v18 + 48) = v85;
  *(_QWORD *)(v18 + 56) = v81;
  *(_QWORD *)(v18 + 64) = v82;
  *(_QWORD *)(v18 + 72) = v83;
  *(_QWORD *)(v18 + 80) = v80;
  v40 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  *(_QWORD *)(v18 + 112) = v32;
  *(_QWORD *)(v18 + 104) = v77;
  *(_QWORD *)(v18 + 120) = v18 + 144;
  *(__m128i *)(v18 + 128) = v40;
  if ( v115.m128i_i64[0] )
  {
    p_ptr = (void **)(v18 + 120);
    sub_63DE60(v18 + 120, (unsigned __int8 **)&ptr);
  }
  v41 = _mm_loadu_si128(&v117);
  *(_WORD *)(v18 + 224) = v120;
  v42 = v121;
  *(__m128i *)(v18 + 176) = v41;
  v43 = _mm_loadu_si128(&v118);
  *(_BYTE *)(v18 + 226) = v42;
  v44 = *(_BYTE *)(v18 + 232);
  *(__m128i *)(v18 + 192) = v43;
  *(__m128i *)(v18 + 208) = _mm_loadu_si128(&v119);
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
  if ( v47 != *a9 )
  {
    v79 = v14;
    v48 = *a9;
    v80 = (char *)v105;
    while ( 1 )
    {
      v52 = (_BYTE *)(v46 + 16);
      *(_QWORD *)v46 = v46 + 16;
      v53 = *(_QWORD *)(v48 + 8);
      v54 = *(_BYTE **)v48;
      v93 = v53;
      if ( v53 > 0xF )
        break;
      if ( v53 == 1 )
      {
        *(_BYTE *)(v46 + 16) = *v54;
        goto LABEL_25;
      }
      if ( v53 )
        goto LABEL_28;
LABEL_25:
      *(_QWORD *)(v46 + 8) = v53;
      v48 += 80;
      v46 += 80;
      v52[v53] = 0;
      v49 = *(_QWORD *)(v48 - 32);
      *(__m128i *)(v46 - 48) = _mm_loadu_si128((const __m128i *)(v48 - 48));
      v50 = _mm_loadu_si128((const __m128i *)(v48 - 24));
      *(_QWORD *)(v46 - 32) = v49;
      v51 = *(_QWORD *)(v48 - 8);
      *(__m128i *)(v46 - 24) = v50;
      *(_QWORD *)(v46 - 8) = v51;
      if ( v47 == v48 )
      {
        *(_QWORD *)(v18 + 248) = v46;
        v14 = v79;
        v30 = v80;
        goto LABEL_32;
      }
    }
    v55 = std::string::_M_create();
    *(_QWORD *)v46 = v55;
    v52 = (_BYTE *)v55;
    *(_QWORD *)(v46 + 16) = v93;
LABEL_28:
    memcpy(v52, v54, v53);
    v53 = v93;
    v52 = *(_BYTE **)v46;
    goto LABEL_25;
  }
LABEL_32:
  sub_644390(v18 + 264, v98);
  sub_644390(v18 + 288, v99);
  v56 = v89;
  v57 = (_QWORD *)(v18 + 336);
  *(_QWORD *)(v18 + 320) = v18 + 336;
  *(_BYTE *)(v18 + 312) = v56;
  if ( v103 == v30 )
  {
    v58 = v104;
    v66 = v104 + 1;
    if ( (unsigned int)(v104 + 1) >= 8 )
    {
      *v57 = v105[0];
      *(_QWORD *)((char *)v57 + v66 - 8) = *(_QWORD *)&v30[v66 - 8];
      v67 = (v18 + 344) & 0xFFFFFFFFFFFFFFF8LL;
      v68 = (char *)v57 - v67;
      v69 = (char *)(v30 - v68);
      if ( ((v66 + (_DWORD)v68) & 0xFFFFFFF8) >= 8 )
      {
        v70 = (v66 + (_DWORD)v68) & 0xFFFFFFF8;
        v71 = 0;
        do
        {
          v72 = v71;
          v71 += 8;
          *(_QWORD *)(v67 + v72) = *(_QWORD *)&v69[v72];
        }
        while ( v71 < v70 );
      }
      v58 = v104;
    }
    else if ( (v66 & 4) != 0 )
    {
      *(_DWORD *)v57 = v105[0];
      *(_DWORD *)((char *)v57 + v66 - 4) = *(_DWORD *)&v30[v66 - 4];
      v58 = v104;
    }
    else if ( (_DWORD)v104 != -1 )
    {
      *(_BYTE *)v57 = v105[0];
      v58 = v104;
      if ( (v66 & 2) != 0 )
      {
        *(_WORD *)((char *)v57 + v66 - 2) = *(_WORD *)&v30[v66 - 2];
        v58 = v104;
      }
    }
  }
  else
  {
    *(_QWORD *)(v18 + 320) = v103;
    *(_QWORD *)(v18 + 336) = v105[0];
    v58 = v104;
  }
  *(_QWORD *)(v18 + 328) = v58;
  *(_QWORD *)(v18 + 360) = 0;
  *(_QWORD *)(v18 + 352) = 0xF0000000FLL;
  v103 = v30;
  v104 = 0;
  LOBYTE(v105[0]) = 0;
  if ( ptr != v90 )
    free(ptr);
  sub_6441A0(v98);
  sub_6441A0(v99);
  if ( v103 != v30 )
    operator delete(v103, v105[0] + 1LL);
  *(_DWORD *)(v18 + 368) = 15;
  *(_OWORD *)(v18 + 376) = 0;
  *(_QWORD *)v18 = &off_4993108;
  if ( v106 != v91 )
    free(v106);
  sub_6441A0(v96);
  sub_6441A0(v97);
  if ( v100 != v102 )
    operator delete(v100, v102[0] + 1LL);
  v59 = *(void (__fastcall ****)(_QWORD))(v75 + 16);
  *(_QWORD *)(v75 + 16) = v18;
  if ( v59 )
    (**v59)(v59);
  v60 = *(_QWORD *)(v18 + 88);
  if ( v60 && (unsigned int)(*(_DWORD *)(v60 + 356) - 2) <= 0x13 && (v61 = sub_FC8C50()) != 0 )
    sub_FC8D50(v61, v18);
  else
    sub_64B900((__int64)(v14 + 23), v18);
  return v18;
}

