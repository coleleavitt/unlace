unsigned __int64 __fastcall sub_52C720(__int64 a1, const char *a2)
{
  unsigned int v2; // ebp
  const char *v3; // rbx
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  __int64 k; // r13
  void *v7; // r12
  bool v8; // zf
  void *v9; // r12
  void *v10; // rax
  __int64 v11; // r15
  __int64 i; // r14
  __m128i v13; // xmm0
  void *v14; // r12
  size_t v15; // r12
  __m128i v16; // xmm0
  int v17; // eax
  __m128i v18; // xmm0
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // r12
  __int64 v24; // r13
  __m128i v25; // xmm0
  unsigned int v26; // r15d
  void *v27; // r12
  size_t v28; // r12
  __m128i v29; // xmm0
  __int64 v30; // rdx
  char v31; // al
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbp
  void *v37; // r12
  void *v38; // r12
  const char *v39; // rcx
  __int64 v40; // rax
  const char *v41; // rsi
  unsigned __int64 v42; // rbp
  __int64 v43; // r13
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 v47; // r14
  __int64 v48; // rcx
  unsigned int v49; // r15d
  __int64 v50; // r14
  void *v51; // rax
  __int64 v52; // r15
  __int64 j; // r13
  __m128i v54; // xmm0
  void *v55; // r14
  size_t v56; // r14
  __m128i v57; // xmm0
  int v58; // eax
  __m128i v59; // xmm0
  int v60; // eax
  void *v61; // rax
  void *v62; // r15
  __int64 v63; // rdx
  __int64 v64; // r12
  void *v65; // r15
  void *v66; // rax
  __int64 v67; // rbp
  __int64 m; // r13
  void *v69; // r12
  void *v70; // r12
  void *v71; // rax
  const char *v72; // rsi
  __int64 v73; // r13
  void *v74; // r12
  size_t v75; // r12
  __m128i v76; // xmm0
  const char *v77; // rcx
  __int64 v78; // rdx
  char v79; // al
  __m128i v80; // xmm0
  __int64 v81; // rax
  void *v82; // rax
  size_t v83; // r13
  size_t v84; // r13
  const char *v85; // rsi
  __m128i v86; // xmm0
  __int64 v87; // rdx
  __int64 v88; // r13
  char v89; // al
  __m128i v90; // xmm0
  __m128i v91; // xmm0
  void *v92; // r12
  size_t v93; // r12
  __m128i v94; // xmm0
  __int64 v95; // rdx
  char v96; // al
  __m128i v97; // xmm0
  __int64 v98; // rax
  __int64 v99; // rdx
  const char *v100; // rsi
  void *v101; // rax
  const char *v102; // rsi
  void *v103; // rax
  void *v104; // rax
  size_t nc; // [rsp+18h] [rbp-150h]
  void *nb; // [rsp+18h] [rbp-150h]
  size_t n; // [rsp+18h] [rbp-150h]
  void *na; // [rsp+18h] [rbp-150h]
  _BYTE v109[48]; // [rsp+20h] [rbp-148h] BYREF
  __int128 v110; // [rsp+50h] [rbp-118h]
  __int64 v111; // [rsp+60h] [rbp-108h] BYREF
  __m128i v112; // [rsp+68h] [rbp-100h]
  __m128i v113; // [rsp+78h] [rbp-F0h]
  __int64 v114; // [rsp+88h] [rbp-E0h]
  __int64 v115; // [rsp+90h] [rbp-D8h]
  char v116; // [rsp+98h] [rbp-D0h]
  void *v117[3]; // [rsp+A0h] [rbp-C8h] BYREF
  void *v118[3]; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 v119; // [rsp+D0h] [rbp-98h]
  __int64 v120; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v121; // [rsp+E8h] [rbp-80h]
  __m128i v122; // [rsp+F8h] [rbp-70h]
  __int64 v123; // [rsp+108h] [rbp-60h]
  __int64 v124; // [rsp+110h] [rbp-58h]
  char v125; // [rsp+118h] [rbp-50h]
  unsigned __int64 v126; // [rsp+128h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  if ( !a2 )
    return v126 - __readfsqword(0x28u);
  v2 = *((_DWORD *)a2 + 14);
  v3 = a2;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 2:
      v11 = *((_QWORD *)a2 + 9);
      for ( i = v11 + (*((_QWORD *)a2 + 10) << 7); i != v11; v11 += 128 )
      {
        if ( (*(_BYTE *)(v11 + 117) & 4) == 0 )
        {
          v13 = _mm_loadu_si128((const __m128i *)v11);
          v117[2] = nullptr;
          *(__m128i *)v117 = v13;
          *(_OWORD *)v118 = 0;
          v14 = *(void **)(v11 + 24);
          if ( v14 )
          {
            v51 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 24), a2);
            v118[1] = v14;
            v117[2] = v51;
            a2 = *(const char **)(v11 + 16);
            memcpy(v51, a2, (size_t)v14);
            v118[0] = v14;
          }
          v118[2] = nullptr;
          v119 = 0;
          v15 = *(_QWORD *)(v11 + 48);
          if ( v15 )
          {
            v118[2] = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 48), a2);
            *((_QWORD *)&v119 + 1) = v15;
            memcpy(v118[2], *(const void **)(v11 + 40), v15);
            *(_QWORD *)&v119 = v15;
          }
          v120 = 0;
          copy_tinfo_t(&v120);
          v16 = _mm_loadu_si128((const __m128i *)(v11 + 72));
          v123 = *(_QWORD *)(v11 + 104);
          v17 = *(_DWORD *)(v11 + 112);
          v121 = v16;
          v18 = _mm_loadu_si128((const __m128i *)(v11 + 88));
          LODWORD(v124) = v17;
          v19 = *(_DWORD *)(v11 + 116);
          v122 = v18;
          HIDWORD(v124) = v19;
          v125 = *(_BYTE *)(v11 + 120);
          v20 = *(unsigned int *)(v11 + 124);
          if ( v2 == -1 )
          {
            a2 = haystack;
            if ( *((_QWORD *)v3 + 5) )
              a2 = *((const char **)v3 + 4);
            sub_396090(0x4Au, a2, v20, v117);
          }
          else
          {
            a2 = (const char *)*((unsigned int *)v3 + 14);
            sub_396090(0x50u, a2, v20, v117);
          }
          clear_tinfo_t(&v120);
          if ( v118[2] )
          {
            *(_QWORD *)&v119 = 0;
            qfree(v118[2]);
          }
          if ( v117[2] )
          {
            v118[0] = nullptr;
            qfree(v117[2]);
          }
        }
      }
      v52 = *((_QWORD *)v3 + 12);
      for ( j = v52 + (*((_QWORD *)v3 + 13) << 7); j != v52; v52 += 128 )
      {
        v54 = _mm_loadu_si128((const __m128i *)v52);
        v117[2] = nullptr;
        *(_OWORD *)v118 = 0;
        *(__m128i *)v117 = v54;
        v55 = *(void **)(v52 + 24);
        if ( v55 )
        {
          v61 = (void *)qalloc_or_throw(*(_QWORD *)(v52 + 24), a2);
          v118[1] = v55;
          v117[2] = v61;
          a2 = *(const char **)(v52 + 16);
          memcpy(v61, a2, (size_t)v55);
          v118[0] = v55;
        }
        v118[2] = nullptr;
        v119 = 0;
        v56 = *(_QWORD *)(v52 + 48);
        if ( v56 )
        {
          v118[2] = (void *)qalloc_or_throw(*(_QWORD *)(v52 + 48), a2);
          *((_QWORD *)&v119 + 1) = v56;
          memcpy(v118[2], *(const void **)(v52 + 40), v56);
          *(_QWORD *)&v119 = v56;
        }
        v120 = 0;
        copy_tinfo_t(&v120);
        v57 = _mm_loadu_si128((const __m128i *)(v52 + 72));
        v123 = *(_QWORD *)(v52 + 104);
        v58 = *(_DWORD *)(v52 + 112);
        v121 = v57;
        v59 = _mm_loadu_si128((const __m128i *)(v52 + 88));
        LODWORD(v124) = v58;
        v60 = *(_DWORD *)(v52 + 116);
        v122 = v59;
        HIDWORD(v124) = v60;
        v125 = *(_BYTE *)(v52 + 120);
        if ( v2 == -1 )
        {
          a2 = haystack;
          if ( *((_QWORD *)v3 + 5) )
            a2 = *((const char **)v3 + 4);
          sub_396090(0x49u, a2, v117);
        }
        else
        {
          a2 = (const char *)*((unsigned int *)v3 + 14);
          sub_396090(0x4Fu, a2, v117);
        }
        clear_tinfo_t(&v120);
        if ( v118[2] )
        {
          *(_QWORD *)&v119 = 0;
          qfree(v118[2]);
        }
        if ( v117[2] )
        {
          v118[0] = nullptr;
          qfree(v117[2]);
        }
      }
      return v126 - __readfsqword(0x28u);
    case 3:
      if ( *((_QWORD *)a2 + 10) == 1 && *((_QWORD *)a2 + 13) == 1 )
      {
        v73 = *((_QWORD *)a2 + 12);
        v117[2] = nullptr;
        *(__m128i *)v117 = _mm_loadu_si128((const __m128i *)v73);
        *(_OWORD *)v118 = 0;
        v74 = *(void **)(v73 + 24);
        if ( v74 )
        {
          v103 = (void *)qalloc_or_throw(*(_QWORD *)(v73 + 24), a2);
          v118[1] = v74;
          v117[2] = v103;
          a2 = *(const char **)(v73 + 16);
          memcpy(v103, a2, (size_t)v74);
          v118[0] = v74;
        }
        v118[2] = nullptr;
        v119 = 0;
        v75 = *(_QWORD *)(v73 + 48);
        if ( v75 )
        {
          v118[2] = (void *)qalloc_or_throw(*(_QWORD *)(v73 + 48), a2);
          *((_QWORD *)&v119 + 1) = v75;
          memcpy(v118[2], *(const void **)(v73 + 40), v75);
          *(_QWORD *)&v119 = v75;
        }
        v120 = 0;
        copy_tinfo_t(&v120);
        v76 = _mm_loadu_si128((const __m128i *)(v73 + 72));
        v77 = haystack;
        v78 = *(_QWORD *)(v73 + 112);
        v123 = *(_QWORD *)(v73 + 104);
        v79 = *(_BYTE *)(v73 + 120);
        v121 = v76;
        v80 = _mm_loadu_si128((const __m128i *)(v73 + 88));
        v125 = v79;
        v81 = *((_QWORD *)v3 + 9);
        v124 = v78;
        v122 = v80;
        if ( *(_QWORD *)(v81 + 24) )
          v77 = *(const char **)(v81 + 16);
        if ( v2 == -1 )
        {
          v102 = haystack;
          if ( *((_QWORD *)v3 + 5) )
            v102 = *((const char **)v3 + 4);
          sub_396090(0x4Bu, v102, v117, v77);
        }
        else
        {
          sub_396090(0x51u, *((unsigned int *)v3 + 14), v117, v77);
        }
        clear_tinfo_t(&v120);
        if ( v118[2] )
        {
          *(_QWORD *)&v119 = 0;
          qfree(v118[2]);
        }
        if ( v117[2] )
        {
          v118[0] = nullptr;
          qfree(v117[2]);
        }
      }
      return v126 - __readfsqword(0x28u);
    case 4:
      v21 = *((_QWORD *)a2 + 10);
      if ( v21 )
      {
        v22 = *((_QWORD *)a2 + 13);
        if ( v22 == 1 )
        {
          v23 = *((_QWORD *)a2 + 9);
          if ( v21 != 1 )
          {
            do
            {
              v24 = v23 + (v22 << 7);
              if ( (*(_BYTE *)(v24 + 117) & 4) == 0 )
              {
                v25 = _mm_loadu_si128((const __m128i *)v24);
                v26 = *(_DWORD *)(v24 + 124);
                v117[2] = nullptr;
                *(__m128i *)v117 = v25;
                *(_OWORD *)v118 = 0;
                v27 = *(void **)(v24 + 24);
                if ( v27 )
                {
                  v82 = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 24), a2);
                  v118[1] = v27;
                  v117[2] = v82;
                  a2 = *(const char **)(v24 + 16);
                  memcpy(v82, a2, (size_t)v27);
                  v118[0] = v27;
                }
                v118[2] = nullptr;
                v119 = 0;
                v28 = *(_QWORD *)(v24 + 48);
                if ( v28 )
                {
                  v118[2] = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 48), a2);
                  *((_QWORD *)&v119 + 1) = v28;
                  memcpy(v118[2], *(const void **)(v24 + 40), v28);
                  *(_QWORD *)&v119 = v28;
                }
                v120 = 0;
                copy_tinfo_t(&v120);
                v29 = _mm_loadu_si128((const __m128i *)(v24 + 72));
                v30 = *(_QWORD *)(v24 + 112);
                v123 = *(_QWORD *)(v24 + 104);
                v31 = *(_BYTE *)(v24 + 120);
                v121 = v29;
                v32 = _mm_loadu_si128((const __m128i *)(v24 + 88));
                v125 = v31;
                v124 = v30;
                v122 = v32;
                if ( v2 == -1 )
                {
                  a2 = haystack;
                  if ( *((_QWORD *)v3 + 5) )
                    a2 = *((const char **)v3 + 4);
                  sub_396090(0x4Au, a2, v26, v117);
                }
                else
                {
                  a2 = (const char *)*((unsigned int *)v3 + 14);
                  sub_396090(0x50u, a2, v26, v117);
                }
                clear_tinfo_t(&v120);
                if ( v118[2] )
                {
                  *(_QWORD *)&v119 = 0;
                  qfree(v118[2]);
                }
                if ( v117[2] )
                {
                  v118[0] = nullptr;
                  qfree(v117[2]);
                }
                v23 = *((_QWORD *)v3 + 9);
              }
              ++v22;
            }
            while ( v22 < *((_QWORD *)v3 + 10) );
          }
          memset(&v109[16], 0, 24);
          *(__m128i *)v109 = _mm_loadu_si128((const __m128i *)v23);
          v83 = *(_QWORD *)(v23 + 24);
          if ( v83 )
          {
            v101 = (void *)qalloc_or_throw(*(_QWORD *)(v23 + 24), a2);
            *(_QWORD *)&v109[32] = v83;
            *(_QWORD *)&v109[16] = v101;
            a2 = *(const char **)(v23 + 16);
            memcpy(v101, a2, v83);
            *(_QWORD *)&v109[24] = v83;
          }
          *(_QWORD *)&v109[40] = 0;
          v110 = 0;
          v84 = *(_QWORD *)(v23 + 48);
          if ( v84 )
          {
            *(_QWORD *)&v109[40] = qalloc_or_throw(*(_QWORD *)(v23 + 48), a2);
            *((_QWORD *)&v110 + 1) = v84;
            memcpy(*(void **)&v109[40], *(const void **)(v23 + 40), v84);
            *(_QWORD *)&v110 = v84;
          }
          v85 = (const char *)(v23 + 64);
          v111 = 0;
          copy_tinfo_t(&v111);
          v86 = _mm_loadu_si128((const __m128i *)(v23 + 72));
          v87 = *(_QWORD *)(v23 + 112);
          v88 = *((_QWORD *)v3 + 12);
          v114 = *(_QWORD *)(v23 + 104);
          v89 = *(_BYTE *)(v23 + 120);
          v112 = v86;
          v90 = _mm_loadu_si128((const __m128i *)(v23 + 88));
          v116 = v89;
          v115 = v87;
          v113 = v90;
          v91 = _mm_loadu_si128((const __m128i *)v88);
          v117[2] = nullptr;
          *(__m128i *)v117 = v91;
          *(_OWORD *)v118 = 0;
          v92 = *(void **)(v88 + 24);
          if ( v92 )
          {
            v117[2] = (void *)qalloc_or_throw(*(_QWORD *)(v88 + 24), v85);
            v118[1] = v92;
            v85 = *(const char **)(v88 + 16);
            memcpy(v117[2], v85, (size_t)v92);
            v118[0] = v92;
          }
          v118[2] = nullptr;
          v119 = 0;
          v93 = *(_QWORD *)(v88 + 48);
          if ( v93 )
          {
            v118[2] = (void *)qalloc_or_throw(*(_QWORD *)(v88 + 48), v85);
            *((_QWORD *)&v119 + 1) = v93;
            memcpy(v118[2], *(const void **)(v88 + 40), v93);
            *(_QWORD *)&v119 = v93;
          }
          v120 = 0;
          copy_tinfo_t(&v120);
          v94 = _mm_loadu_si128((const __m128i *)(v88 + 72));
          v95 = *(_QWORD *)(v88 + 112);
          v123 = *(_QWORD *)(v88 + 104);
          v96 = *(_BYTE *)(v88 + 120);
          v121 = v94;
          v97 = _mm_loadu_si128((const __m128i *)(v88 + 88));
          v125 = v96;
          v98 = *((_QWORD *)v3 + 9);
          v124 = v95;
          v122 = v97;
          v99 = *(unsigned int *)(v98 + 124);
          if ( v2 == -1 )
          {
            v100 = haystack;
            if ( *((_QWORD *)v3 + 5) )
              v100 = *((const char **)v3 + 4);
            sub_396090(0x4Cu, v100, v99, v109, v117);
          }
          else
          {
            sub_396090(0x52u, *((unsigned int *)v3 + 14), v99, v109, v117);
          }
          clear_tinfo_t(&v120);
          if ( v118[2] )
          {
            *(_QWORD *)&v119 = 0;
            qfree(v118[2]);
          }
          if ( v117[2] )
          {
            v118[0] = nullptr;
            qfree(v117[2]);
          }
          clear_tinfo_t(&v111);
          if ( *(_QWORD *)&v109[40] )
          {
            *(_QWORD *)&v110 = 0;
            qfree(*(void **)&v109[40]);
          }
          if ( *(_QWORD *)&v109[16] )
          {
            *(_QWORD *)&v109[24] = 0;
            qfree(*(void **)&v109[16]);
          }
        }
      }
      return v126 - __readfsqword(0x28u);
    case 5:
      v33 = *((_QWORD *)a2 + 9);
      v34 = *(unsigned int *)(v33 + 124);
      v35 = (**((_QWORD **)a2 + 12) - *(_QWORD *)v33) >> 3;
      if ( v2 == -1 )
      {
        v72 = haystack;
        if ( *((_QWORD *)v3 + 5) )
          v72 = *((const char **)v3 + 4);
        result = sub_396090(0x4Du, v72, v34, v35);
      }
      else
      {
        result = sub_396090(0x53u, v2, v34, v35);
      }
      break;
    case 6:
    case 7:
    case 0xA:
      v5 = *((_QWORD *)a2 + 15);
      for ( k = v5 + (*((_QWORD *)a2 + 16) << 6); k != v5; v5 += 64 )
      {
        memset(v117, 0, sizeof(v117));
        v9 = *(void **)(v5 + 8);
        if ( v9 )
        {
          v10 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 8), a2);
          v117[2] = v9;
          v117[0] = v10;
          a2 = *(const char **)v5;
          memcpy(v10, *(const void **)v5, (size_t)v9);
          v117[1] = v9;
        }
        memset(v118, 0, sizeof(v118));
        v7 = *(void **)(v5 + 32);
        if ( v7 )
        {
          v118[0] = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 32), a2);
          v118[2] = v7;
          memcpy(v118[0], *(const void **)(v5 + 24), (size_t)v7);
          v118[1] = v7;
        }
        v8 = *((_QWORD *)v3 + 5) == 0;
        a2 = haystack;
        *(_QWORD *)&v119 = *(_QWORD *)(v5 + 48);
        if ( !v8 )
          a2 = *((const char **)v3 + 4);
        sub_396090(0x56u, a2, *(unsigned int *)(v5 + 56), v117);
        if ( v118[0] )
        {
          v118[1] = nullptr;
          qfree(v118[0]);
        }
        if ( v117[0] )
        {
          v117[1] = nullptr;
          qfree(v117[0]);
        }
      }
      v67 = *((_QWORD *)v3 + 18);
      for ( m = v67 + 56LL * *((_QWORD *)v3 + 19); m != v67; v67 += 56 )
      {
        memset(v117, 0, sizeof(v117));
        v70 = *(void **)(v67 + 8);
        if ( v70 )
        {
          v71 = (void *)qalloc_or_throw(*(_QWORD *)(v67 + 8), a2);
          v117[2] = v70;
          v117[0] = v71;
          a2 = *(const char **)v67;
          memcpy(v71, *(const void **)v67, (size_t)v70);
          v117[1] = v70;
        }
        memset(v118, 0, sizeof(v118));
        v69 = *(void **)(v67 + 32);
        if ( v69 )
        {
          v118[0] = (void *)qalloc_or_throw(*(_QWORD *)(v67 + 32), a2);
          v118[2] = v69;
          memcpy(v118[0], *(const void **)(v67 + 24), (size_t)v69);
          v118[1] = v69;
        }
        v8 = *((_QWORD *)v3 + 5) == 0;
        a2 = haystack;
        *(_QWORD *)&v119 = *(_QWORD *)(v67 + 48);
        if ( !v8 )
          a2 = *((const char **)v3 + 4);
        sub_396090(0x55u, a2, v117);
        if ( v118[0] )
        {
          v118[1] = nullptr;
          qfree(v118[0]);
        }
        if ( v117[0] )
        {
          v117[1] = nullptr;
          qfree(v117[0]);
        }
      }
      return v126 - __readfsqword(0x28u);
    case 8:
      if ( *((_QWORD *)a2 + 16) == 1 && *((_QWORD *)a2 + 19) == 1 )
      {
        v36 = *((_QWORD *)a2 + 18);
        memset(v117, 0, sizeof(v117));
        v37 = *(void **)(v36 + 8);
        if ( v37 )
        {
          v104 = (void *)qalloc_or_throw(*(_QWORD *)(v36 + 8), a2);
          v117[2] = v37;
          v117[0] = v104;
          a2 = *(const char **)v36;
          memcpy(v104, *(const void **)v36, (size_t)v37);
          v117[1] = v37;
        }
        memset(v118, 0, sizeof(v118));
        v38 = *(void **)(v36 + 32);
        if ( v38 )
        {
          v118[0] = (void *)qalloc_or_throw(*(_QWORD *)(v36 + 32), a2);
          v118[2] = v38;
          memcpy(v118[0], *(const void **)(v36 + 24), (size_t)v38);
          v118[1] = v38;
        }
        v39 = haystack;
        *(_QWORD *)&v119 = *(_QWORD *)(v36 + 48);
        v40 = *((_QWORD *)v3 + 15);
        if ( *(_QWORD *)(v40 + 8) )
          v39 = *(const char **)v40;
        v41 = haystack;
        if ( *((_QWORD *)v3 + 5) )
          v41 = *((const char **)v3 + 4);
        sub_396090(0x57u, v41, v117, v39);
        if ( v118[0] )
        {
          v118[1] = nullptr;
          qfree(v118[0]);
        }
        if ( v117[0] )
        {
          v117[1] = nullptr;
          qfree(v117[0]);
        }
      }
      return v126 - __readfsqword(0x28u);
    case 9:
      v42 = *((_QWORD *)a2 + 16);
      v43 = 0;
      v44 = 0;
      if ( v42 )
      {
        do
        {
          v48 = *((_QWORD *)v3 + 15) + (v44 << 6);
          v49 = *(_DWORD *)(v48 + 56);
          v50 = v48;
          memset(v109, 0, 24);
          if ( *(_QWORD *)(v48 + 8) )
          {
            nc = *(_QWORD *)(v48 + 8);
            *(_QWORD *)v109 = qalloc_or_throw(nc, a2);
            *(_QWORD *)&v109[16] = nc;
            a2 = *(const char **)v50;
            memcpy(*(void **)v109, *(const void **)v50, nc);
            *(_QWORD *)&v109[8] = nc;
          }
          memset(&v109[24], 0, 24);
          if ( *(_QWORD *)(v50 + 32) )
          {
            n = *(_QWORD *)(v50 + 32);
            *(_QWORD *)&v109[24] = qalloc_or_throw(n, a2);
            *(_QWORD *)&v109[40] = n;
            a2 = *(const char **)(v50 + 24);
            memcpy(*(void **)&v109[24], a2, n);
            *(_QWORD *)&v109[32] = n;
          }
          v45 = *(_QWORD *)(v50 + 48);
          v46 = *((_QWORD *)v3 + 18);
          memset(v117, 0, sizeof(v117));
          v47 = v43 + v46;
          *(_QWORD *)&v110 = v45;
          if ( *(_QWORD *)(v47 + 8) )
          {
            na = *(void **)(v47 + 8);
            v117[0] = (void *)qalloc_or_throw(na, a2);
            v117[2] = na;
            a2 = *(const char **)v47;
            memcpy(v117[0], *(const void **)v47, (size_t)na);
            v117[1] = na;
          }
          memset(v118, 0, sizeof(v118));
          if ( *(_QWORD *)(v47 + 32) )
          {
            nb = *(void **)(v47 + 32);
            v118[0] = (void *)qalloc_or_throw(nb, a2);
            v118[2] = nb;
            memcpy(v118[0], *(const void **)(v47 + 24), (size_t)nb);
            v118[1] = nb;
          }
          v8 = *((_QWORD *)v3 + 5) == 0;
          a2 = haystack;
          *(_QWORD *)&v119 = *(_QWORD *)(v47 + 48);
          if ( !v8 )
            a2 = *((const char **)v3 + 4);
          sub_396090(0x58u, a2, v49, v109, v117);
          if ( v118[0] )
          {
            v118[1] = nullptr;
            qfree(v118[0]);
          }
          if ( v117[0] )
          {
            v117[1] = nullptr;
            qfree(v117[0]);
          }
          if ( *(_QWORD *)&v109[24] )
          {
            *(_QWORD *)&v109[32] = 0;
            qfree(*(void **)&v109[24]);
          }
          if ( *(_QWORD *)v109 )
          {
            *(_QWORD *)&v109[8] = 0;
            qfree(*(void **)v109);
          }
          ++v44;
          v43 += 56;
        }
        while ( v44 != v42 );
      }
      for ( ; v42 < *((_QWORD *)v3 + 19); ++v42 )
      {
        v63 = *((_QWORD *)v3 + 18);
        memset(v117, 0, sizeof(v117));
        v64 = v63 + 56 * v42;
        v65 = *(void **)(v64 + 8);
        if ( v65 )
        {
          v66 = (void *)qalloc_or_throw(*(_QWORD *)(v64 + 8), a2);
          v117[2] = v65;
          v117[0] = v66;
          a2 = *(const char **)v64;
          memcpy(v66, *(const void **)v64, (size_t)v65);
          v117[1] = v65;
        }
        memset(v118, 0, sizeof(v118));
        v62 = *(void **)(v64 + 32);
        if ( v62 )
        {
          v118[0] = (void *)qalloc_or_throw(*(_QWORD *)(v64 + 32), a2);
          v118[2] = v62;
          memcpy(v118[0], *(const void **)(v64 + 24), (size_t)v62);
          v118[1] = v62;
        }
        v8 = *((_QWORD *)v3 + 5) == 0;
        a2 = haystack;
        *(_QWORD *)&v119 = *(_QWORD *)(v64 + 48);
        if ( !v8 )
          a2 = *((const char **)v3 + 4);
        sub_396090(0x55u, a2, v117);
        if ( v118[0] )
        {
          v118[1] = nullptr;
          qfree(v118[0]);
        }
        if ( v117[0] )
        {
          v117[1] = nullptr;
          qfree(v117[0]);
        }
      }
      return v126 - __readfsqword(0x28u);
    default:
      return v126 - __readfsqword(0x28u);
  }
  return result;
}

