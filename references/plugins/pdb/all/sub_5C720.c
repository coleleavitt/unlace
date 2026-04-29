__int64 __fastcall sub_5C720(_QWORD *a1, double a2, double a3, double a4)
{
  __int64 v4; // rbx
  unsigned int v5; // ebx
  void (*v6)(void); // rax
  void *v8; // rdi
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // r12
  int v12; // r13d
  int v13; // eax
  int v14; // eax
  unsigned int v15; // r13d
  void *v16; // r13
  __int64 v17; // r15
  unsigned __int16 v18; // ax
  void (__fastcall *v19)(void *); // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r15
  void *v28; // rdi
  __int64 v29; // rax
  const char *v30; // r8
  void **v31; // r15
  void **v32; // r14
  void *v33; // rdi
  void (*v34)(void); // rax
  void (*v35)(void); // rax
  void *v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // r14
  __int64 v41; // r15
  __int64 v42; // rbx
  __int64 v43; // r13
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rdx
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __int64 v50; // rdi
  __int64 v51; // rdi
  bool v52; // cf
  signed __int64 v53; // rax
  signed __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  char *v57; // rax
  char *v58; // r10
  __int64 *v59; // rsi
  unsigned __int64 v60; // rcx
  char *v61; // rdx
  __int64 v62; // rdi
  void *v63; // r13
  void (__fastcall *v64)(void *); // rax
  __int64 v65; // rax
  void (__fastcall *v66)(void *); // rax
  __int64 v67; // rdx
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 *v70; // r13
  __int64 v71; // r15
  __int64 *v72; // rdi
  __int64 v73; // r14
  __int64 v74; // rbx
  __int64 v75; // r14
  __int64 v76; // rdx
  __m128i v77; // xmm0
  __int64 v78; // rdx
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 *v85; // r12
  __int64 v86; // rdi
  __int64 v87; // rdi
  _QWORD *v88; // rbx
  __int64 v89; // rax
  __m128i si128; // xmm0
  __int64 v91; // rax
  unsigned int v92; // [rsp+8h] [rbp-120h]
  __int64 v93; // [rsp+8h] [rbp-120h]
  void *v94; // [rsp+10h] [rbp-118h]
  __int64 v95; // [rsp+10h] [rbp-118h]
  unsigned __int64 v96; // [rsp+10h] [rbp-118h]
  char *v97; // [rsp+10h] [rbp-118h]
  __int64 v98; // [rsp+10h] [rbp-118h]
  __int64 v99; // [rsp+10h] [rbp-118h]
  __int64 v100; // [rsp+18h] [rbp-110h]
  __int64 v101; // [rsp+18h] [rbp-110h]
  __int64 v102; // [rsp+18h] [rbp-110h]
  __int64 *v103; // [rsp+18h] [rbp-110h]
  unsigned __int64 v104; // [rsp+18h] [rbp-110h]
  void (__fastcall *v105)(void **, void *, __int64, __int64); // [rsp+20h] [rbp-108h]
  __int64 *v106; // [rsp+20h] [rbp-108h]
  __int64 v107; // [rsp+28h] [rbp-100h]
  signed __int64 v108; // [rsp+38h] [rbp-F0h]
  void *v109; // [rsp+48h] [rbp-E0h] BYREF
  void *v110; // [rsp+50h] [rbp-D8h] BYREF
  void *v111; // [rsp+58h] [rbp-D0h] BYREF
  void *v112[2]; // [rsp+60h] [rbp-C8h] BYREF
  char *v113; // [rsp+70h] [rbp-B8h]
  _OWORD v114[2]; // [rsp+80h] [rbp-A8h] BYREF
  char v115[12]; // [rsp+A0h] [rbp-88h] BYREF
  __int16 v116; // [rsp+ACh] [rbp-7Ch]
  __int16 v117; // [rsp+B0h] [rbp-78h]
  __int16 v118; // [rsp+B4h] [rbp-74h]
  int v119; // [rsp+B8h] [rbp-70h]
  int v120; // [rsp+BCh] [rbp-6Ch]
  int v121; // [rsp+C0h] [rbp-68h]
  int v122; // [rsp+C4h] [rbp-64h]
  int v123; // [rsp+C8h] [rbp-60h]
  int v124; // [rsp+D0h] [rbp-58h]
  int v125; // [rsp+D4h] [rbp-54h]
  unsigned __int64 v126; // [rsp+E8h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  v4 = (__int64)a1;
  sub_585C0(a1);
  (*(void (__fastcall **)(void **, _QWORD, __int64))(**(_QWORD **)(v4 + 608) + 24LL))(&v109, *(_QWORD *)(v4 + 608), 3);
  if ( !v109 )
  {
    if ( (*(_DWORD *)debug & 0x400000) == 0 )
      return 1;
    goto LABEL_70;
  }
  if ( !(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 24LL))(v109) )
  {
    if ( (*(_DWORD *)debug & 0x400000) == 0 )
    {
LABEL_4:
      v5 = 1;
      goto LABEL_5;
    }
LABEL_70:
    sub_29350();
    goto LABEL_4;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(void *, char *, __int64))(*(_QWORD *)v109 + 48LL))(v109, v115, 64) )
    goto LABEL_67;
  v8 = v109;
  *(_WORD *)(v4 + 616) = v116;
  *(_WORD *)(v4 + 618) = v117;
  *(_WORD *)(v4 + 620) = v118;
  v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v8 + 32LL))(v8);
  v10 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
  v11 = (unsigned int)(v119 + v10);
  if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)v109 + 40LL))(v109, v11) )
    goto LABEL_67;
  v12 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
  sub_555E0((_QWORD *)v4, &v109, v120, a2, a3, a4);
  if ( !(*(unsigned __int8 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v109 + 40LL))(v109, (unsigned int)(v120 + v12)) )
    goto LABEL_67;
  v13 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
  if ( !(*(unsigned __int8 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v109 + 40LL))(
          v109,
          (unsigned int)(v123 + v121 + v122 + v13)) )
    goto LABEL_67;
  v14 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
  v15 = v125 + v14;
  if ( !(unsigned __int8)sub_5B6C0(v4, v4 + 24, (__int64 **)&v109, v125) )
    sub_57C20(v4 + 24);
  if ( !(*(unsigned __int8 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v109 + 40LL))(v109, v15) )
    goto LABEL_67;
  if ( !v124 )
    goto LABEL_33;
  v16 = v109;
  memset(v114, 255, 22);
  v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
  if ( !(*(unsigned __int8 (__fastcall **)(void *, _OWORD *, __int64))(*(_QWORD *)v16 + 48LL))(v16, v114, 22)
    || !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)v16 + 40LL))(v16, v17) )
  {
LABEL_67:
    v5 = 0;
    goto LABEL_5;
  }
  v18 = WORD2(v114[1]);
  if ( WORD2(v114[1]) == 0xFFFF )
  {
    v18 = WORD5(v114[0]);
    if ( WORD5(v114[0]) == 0xFFFF )
    {
LABEL_25:
      if ( (unsigned __int16)(WORD6(v114[0]) - 1) <= 0xFFFDu )
        sub_244A0();
      if ( (LOWORD(v114[0]) == 0xFFFF
         || (unsigned __int8)sub_5C080(v4, LOWORD(v114[0]), (_QWORD *)(v4 + 656), NAN, a3, a4))
        && (WORD1(v114[1]) == 0xFFFF || (unsigned __int8)sub_5C470(
                                                           v4,
                                                           WORD1(v114[1]),
                                                           (_QWORD *)(v4 + 704),
                                                           NAN,
                                                           a3,
                                                           a4))
        && (WORD4(v114[0]) == 0xFFFF || (unsigned __int8)sub_55EA0(v4, WORD4(v114[0]), NAN, a3, a4)) )
      {
LABEL_33:
        if ( (*(unsigned __int8 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v109 + 40LL))(v109, v9) )
        {
          v20 = *(_QWORD *)(v4 + 160);
          v107 = v4 + 144;
          v21 = *(_QWORD *)(v4 + 152);
          if ( v20 < v21 + 1 )
          {
            v67 = qvector_reserve(v107, 0, v21 + 1, 120);
            v68 = *(_QWORD *)(v4 + 152);
            v69 = *(_QWORD *)(v4 + 160);
            *(_QWORD *)(v4 + 160) = v20;
            v70 = *(__int64 **)(v4 + 144);
            v71 = v67;
            v93 = v69;
            v72 = v70;
            v73 = v68 - 1;
            if ( v73 >= 0 )
            {
              v98 = v4;
              v74 = v73;
              v75 = v67;
              do
              {
                v76 = *v70;
                v77 = _mm_loadu_si128((const __m128i *)(v70 + 1));
                *v70 = 0;
                *(_OWORD *)(v70 + 1) = 0;
                *(_QWORD *)v71 = v76;
                *(__m128i *)(v71 + 8) = v77;
                v78 = v70[3];
                v79 = _mm_loadu_si128((const __m128i *)v70 + 2);
                v70[3] = 0;
                *(_QWORD *)(v71 + 24) = v78;
                *(__m128i *)(v71 + 32) = v79;
                v80 = _mm_loadu_si128((const __m128i *)v70 + 3);
                LODWORD(v78) = *((_DWORD *)v70 + 28);
                v70[5] = 0;
                *(__m128i *)(v71 + 48) = v80;
                v81 = _mm_loadu_si128((const __m128i *)v70 + 4);
                *(_DWORD *)(v71 + 112) = v78;
                *(__m128i *)(v71 + 64) = v81;
                *(__m128i *)(v71 + 80) = _mm_loadu_si128((const __m128i *)v70 + 5);
                *(__m128i *)(v71 + 96) = _mm_loadu_si128((const __m128i *)v70 + 6);
                v82 = v70[3];
                if ( v82 )
                {
                  v70[4] = 0;
                  qfree(v82);
                }
                v83 = *v70;
                if ( *v70 )
                {
                  v70[1] = 0;
                  qfree(v83);
                }
                v70 += 15;
                v71 += 120;
                v52 = v74-- == 0;
              }
              while ( !v52 );
              v4 = v98;
              v67 = v75;
              v72 = *(__int64 **)(v98 + 144);
            }
            v99 = v67;
            qfree(v72);
            v22 = v99;
            *(_QWORD *)(v4 + 160) = v93;
            v21 = *(_QWORD *)(v4 + 152);
            *(_QWORD *)(v4 + 144) = v99;
          }
          else
          {
            v22 = *(_QWORD *)(v4 + 144);
          }
          v23 = v22 + 120 * v21;
          *(_OWORD *)(v23 + 8) = 0;
          *(_OWORD *)(v23 + 32) = 0;
          *(_QWORD *)v23 = 0;
          *(_QWORD *)(v23 + 24) = 0;
          *(_DWORD *)(v23 + 112) = -1;
          *(_OWORD *)(v23 + 48) = 0;
          *(_OWORD *)(v23 + 64) = 0;
          *(_OWORD *)(v23 + 80) = 0;
          *(_OWORD *)(v23 + 96) = 0;
          ++*(_QWORD *)(v4 + 152);
          while ( v11 > (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109) )
          {
            v24 = *(_QWORD *)(v4 + 152);
            v25 = *(_QWORD *)(v4 + 160);
            v92 = v24;
            if ( v25 < v24 + 1 )
            {
              v38 = qvector_reserve(v107, 0, v24 + 1, 120);
              v39 = *(_QWORD *)(v4 + 160);
              *(_QWORD *)(v4 + 160) = v25;
              v40 = *(__int64 **)(v4 + 144);
              v95 = v39;
              if ( *(_QWORD *)(v4 + 152) - 1LL >= 0 )
              {
                v101 = v4;
                v41 = v38;
                v42 = *(_QWORD *)(v4 + 152) - 1LL;
                v43 = v38;
                do
                {
                  v44 = *v40;
                  v45 = _mm_loadu_si128((const __m128i *)(v40 + 1));
                  *v40 = 0;
                  *(_OWORD *)(v40 + 1) = 0;
                  *(_QWORD *)v41 = v44;
                  *(__m128i *)(v41 + 8) = v45;
                  v46 = v40[3];
                  v47 = _mm_loadu_si128((const __m128i *)v40 + 2);
                  v40[3] = 0;
                  *(_QWORD *)(v41 + 24) = v46;
                  *(__m128i *)(v41 + 32) = v47;
                  v48 = _mm_loadu_si128((const __m128i *)v40 + 3);
                  LODWORD(v46) = *((_DWORD *)v40 + 28);
                  v40[5] = 0;
                  *(__m128i *)(v41 + 48) = v48;
                  v49 = _mm_loadu_si128((const __m128i *)v40 + 4);
                  *(_DWORD *)(v41 + 112) = v46;
                  *(__m128i *)(v41 + 64) = v49;
                  *(__m128i *)(v41 + 80) = _mm_loadu_si128((const __m128i *)v40 + 5);
                  *(__m128i *)(v41 + 96) = _mm_loadu_si128((const __m128i *)v40 + 6);
                  v50 = v40[3];
                  if ( v50 )
                  {
                    v40[4] = 0;
                    qfree(v50);
                  }
                  v51 = *v40;
                  if ( *v40 )
                  {
                    v40[1] = 0;
                    qfree(v51);
                  }
                  v40 += 15;
                  v41 += 120;
                  v52 = v42-- == 0;
                }
                while ( !v52 );
                v4 = v101;
                v38 = v43;
                v40 = *(__int64 **)(v101 + 144);
              }
              v102 = v38;
              qfree(v40);
              v26 = v102;
              *(_QWORD *)(v4 + 160) = v95;
              v24 = *(_QWORD *)(v4 + 152);
              *(_QWORD *)(v4 + 144) = v102;
            }
            else
            {
              v26 = *(_QWORD *)(v4 + 144);
            }
            v27 = v26 + 120 * v24;
            *(_QWORD *)v27 = 0;
            v28 = v109;
            *(_QWORD *)(v27 + 24) = 0;
            *(_DWORD *)(v27 + 112) = -1;
            *(_OWORD *)(v27 + 8) = 0;
            *(_OWORD *)(v27 + 32) = 0;
            *(_OWORD *)(v27 + 48) = 0;
            *(_OWORD *)(v27 + 64) = 0;
            *(_OWORD *)(v27 + 80) = 0;
            *(_OWORD *)(v27 + 96) = 0;
            ++*(_QWORD *)(v4 + 152);
            if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v28 + 48LL))(
                    v28,
                    v27 + 48,
                    64)
              || !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)v109 + 56LL))(v109, v27)
              || !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)v109 + 56LL))(v109, v27 + 24) )
            {
              v65 = *(_QWORD *)(v4 + 152);
              if ( v65 )
              {
                v84 = v65 - 1;
                *(_QWORD *)(v4 + 152) = v84;
                v85 = (__int64 *)(*(_QWORD *)(v4 + 144) + 120 * v84);
                v86 = v85[3];
                if ( v86 )
                {
                  v85[4] = 0;
                  qfree(v86);
                }
                v87 = *v85;
                if ( *v85 )
                {
                  v85[1] = 0;
                  qfree(v87);
                }
              }
              sub_37FD0(*(__int64 **)(v4 + 600), (__int64)"Invalid module stream %d", v92);
              v5 = 0;
              goto LABEL_5;
            }
            if ( *(_DWORD *)(v27 + 84) && *(_WORD *)(v27 + 82) != 0xFFFF )
            {
              (*(void (**)(void))(**(_QWORD **)(v4 + 608) + 24LL))();
              if ( !v110 )
              {
                v88 = *(_QWORD **)(v4 + 600);
                if ( v88[2] <= 0x15u )
                  *v88 = qvector_reserve(v88, *v88, 22, 1);
                v89 = *v88;
                si128 = _mm_load_si128((const __m128i *)&xmmword_94240);
                v88[1] = 22;
                *(__m128i *)v89 = si128;
                *(_QWORD *)(v89 + 13) = 0x6D61657274732065LL;
                v91 = *v88;
                v5 = 0;
                *(_BYTE *)(v91 + 21) = 0;
                sub_55E50(&v110);
                goto LABEL_5;
              }
              v94 = v110;
              v113 = nullptr;
              *(_OWORD *)v112 = 0;
              v100 = *(unsigned int *)(v27 + 84);
              v105 = *(void (__fastcall **)(void **, void *, __int64, __int64))(*(_QWORD *)v110 + 16LL);
              v29 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v110 + 32LL))(v110);
              v105(&v111, v94, v29, v100);
              if ( v112[1] == v113 )
              {
                v53 = ((char *)v112[1] - (char *)v112[0]) >> 3;
                if ( v53 == 0xFFFFFFFFFFFFFFFLL )
                  std::__throw_length_error("vector::_M_realloc_append");
                v54 = 1;
                if ( v53 )
                  v54 = ((char *)v112[1] - (char *)v112[0]) >> 3;
                v52 = __CFADD__(v54, v53);
                v55 = v54 + v53;
                if ( v52 )
                {
                  v56 = 0x7FFFFFFFFFFFFFF8LL;
                }
                else
                {
                  if ( v55 > 0xFFFFFFFFFFFFFFFLL )
                    v55 = 0xFFFFFFFFFFFFFFFLL;
                  v56 = 8 * v55;
                }
                v108 = (char *)v112[1] - (char *)v112[0];
                v106 = (__int64 *)v112[0];
                v103 = (__int64 *)v112[1];
                v96 = v56;
                v57 = (char *)operator new(v56);
                v58 = v57;
                v59 = (__int64 *)v108;
                v60 = v96;
                *(_QWORD *)&v57[v108] = v111;
                v111 = nullptr;
                if ( v103 != v106 )
                {
                  v59 = v106;
                  v57 += (char *)v103 - (char *)v106;
                  v61 = v58;
                  do
                  {
                    v62 = *v59;
                    v61 += 8;
                    ++v59;
                    *((_QWORD *)v61 - 1) = v62;
                  }
                  while ( v57 != v61 );
                }
                v63 = v57 + 8;
                if ( v106 )
                {
                  v104 = v96;
                  v97 = v58;
                  v59 = (__int64 *)(v113 - (char *)v106);
                  operator delete(v106, v113 - (char *)v106);
                  v60 = v104;
                  v58 = v97;
                }
                v112[0] = v58;
                v112[1] = v63;
                v113 = &v58[v60];
                if ( v111 )
                {
                  v64 = *(void (__fastcall **)(void *))(*(_QWORD *)v111 + 8LL);
                  if ( v64 == sub_54910 )
                    operator delete(v111, 0x40u);
                  else
                    ((void (__fastcall *)(void *, __int64 *))v64)(v111, v59);
                }
              }
              else
              {
                *(_QWORD *)v112[1] = v111;
                v112[1] = (char *)v112[1] + 8;
              }
              v30 = src;
              if ( *(_QWORD *)(v27 + 8) )
                v30 = *(const char **)v27;
              if ( !(unsigned __int8)sub_580A0(v4, v27 + 112, v112, v92, v30, 0) )
                sub_244A0();
              v31 = (void **)v112[1];
              v32 = (void **)v112[0];
              if ( v112[1] != v112[0] )
              {
                do
                {
                  v33 = *v32;
                  if ( *v32 )
                  {
                    v34 = *(void (**)(void))(*(_QWORD *)v33 + 8LL);
                    if ( (char *)v34 == (char *)sub_54910 )
                      operator delete(v33, 0x40u);
                    else
                      v34();
                  }
                  ++v32;
                }
                while ( v31 != v32 );
                v32 = (void **)v112[0];
              }
              if ( v32 )
                operator delete(v32, v113 - (char *)v32);
              if ( v110 )
              {
                v35 = *(void (**)(void))(*(_QWORD *)v110 + 8LL);
                if ( (char *)v35 == (char *)sub_54910 )
                  operator delete(v110, 0x40u);
                else
                  v35();
              }
            }
            v36 = v109;
            v37 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
            if ( v37 % 4
              && !(*(unsigned __int8 (__fastcall **)(void *, __int64))(*(_QWORD *)v36 + 40LL))(
                    v36,
                    v37 + 4 - (unsigned int)(v37 % 4)) )
            {
              goto LABEL_67;
            }
          }
          if ( !(unsigned __int8)sub_56F50(v4) )
            sub_244A0();
          if ( !(unsigned __int8)sub_57150(v4) )
            sub_244A0();
          goto LABEL_4;
        }
        goto LABEL_67;
      }
      goto LABEL_67;
    }
  }
  (*(void (__fastcall **)(void **, _QWORD, _QWORD))(**(_QWORD **)(v4 + 608) + 24LL))(v112, *(_QWORD *)(v4 + 608), v18);
  if ( !v112[0] )
    goto LABEL_67;
  if ( (unsigned __int8)sub_55960((_QWORD *)v4, v112) )
  {
    if ( v112[0] )
    {
      v19 = *(void (__fastcall **)(void *))(*(_QWORD *)v112[0] + 8LL);
      if ( v19 == sub_54910 )
        operator delete(v112[0], 0x40u);
      else
        v19(v112[0]);
    }
    goto LABEL_25;
  }
  if ( !v112[0] )
    goto LABEL_67;
  v66 = *(void (__fastcall **)(void *))(*(_QWORD *)v112[0] + 8LL);
  if ( v66 == sub_54910 )
  {
    v5 = 0;
    operator delete(v112[0], 0x40u);
  }
  else
  {
    v66(v112[0]);
    v5 = 0;
  }
LABEL_5:
  if ( v109 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v109 + 8LL);
    if ( (char *)v6 == (char *)sub_54910 )
      operator delete(v109, 0x40u);
    else
      v6();
  }
  return v5;
}
