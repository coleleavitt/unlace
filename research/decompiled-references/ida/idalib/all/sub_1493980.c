__int64 **__fastcall sub_1493980(__int64 a1, __int64 **a2, __m128i a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i *v11; // rcx
  const __m128i *v12; // rax
  __m128 v13; // xmm1
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  const __m128i *v18; // r12
  __m128i *v19; // rax
  char *v20; // rsi
  __int64 v21; // rdx
  __int16 v22; // ax
  unsigned __int16 v23; // cx
  __int64 *v24; // rdi
  unsigned int v25; // edx
  __int16 v26; // ax
  __int64 *v27; // r12
  __int64 *v28; // r13
  __int64 v29; // rdx
  __int16 i; // di
  unsigned __int16 v31; // ax
  __int64 *v32; // rdi
  unsigned __int16 v33; // ax
  unsigned int v34; // ecx
  unsigned __int16 v35; // si
  __int64 v36; // rdx
  unsigned __int16 v37; // cx
  unsigned int v38; // edx
  unsigned __int16 v39; // si
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  char *v43; // r12
  char *v44; // rbp
  signed __int64 v45; // r8
  signed __int64 v46; // r13
  unsigned __int64 v47; // rcx
  char *v48; // r11
  char *v49; // r10
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  unsigned int v53; // r9d
  __int64 v54; // rdx
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  char *v59; // r12
  unsigned int v61; // ecx
  _WORD *v62; // rdx
  unsigned __int16 v63; // cx
  unsigned int v64; // eax
  _WORD *v65; // rdx
  unsigned __int16 v66; // cx
  unsigned int v67; // eax
  unsigned __int16 v68; // si
  _WORD *v69; // rdx
  size_t v70; // r9
  char *v71; // rdi
  __int64 v72; // r13
  unsigned __int64 v73; // rdx
  char *v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  __int64 v79; // rsi
  char *v80; // r12
  int v81; // eax
  __int64 *v82; // rdi
  int v83; // eax
  __int64 *v84; // rdi
  __int64 j; // rax
  unsigned int v86; // eax
  unsigned __int16 v87; // si
  _WORD *v88; // rdx
  __int64 *v89; // [rsp+0h] [rbp-118h]
  int *v90; // [rsp+8h] [rbp-110h]
  int v91; // [rsp+14h] [rbp-104h]
  __int64 v93; // [rsp+28h] [rbp-F0h]
  __int64 v94; // [rsp+30h] [rbp-E8h]
  char *v95; // [rsp+38h] [rbp-E0h]
  char *v96; // [rsp+38h] [rbp-E0h]
  void *v97; // [rsp+38h] [rbp-E0h]
  int v98; // [rsp+38h] [rbp-E0h]
  void *v99; // [rsp+38h] [rbp-E0h]
  size_t na; // [rsp+40h] [rbp-D8h]
  size_t nb; // [rsp+40h] [rbp-D8h]
  size_t n; // [rsp+40h] [rbp-D8h]
  char *nc; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v104; // [rsp+48h] [rbp-D0h]
  char *v105; // [rsp+48h] [rbp-D0h]
  signed __int64 v106; // [rsp+48h] [rbp-D0h]
  char *v107; // [rsp+48h] [rbp-D0h]
  signed __int64 v108; // [rsp+48h] [rbp-D0h]
  __int64 v109; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v110; // [rsp+50h] [rbp-C8h]
  char *v111; // [rsp+50h] [rbp-C8h]
  char *v112; // [rsp+50h] [rbp-C8h]
  char *v114; // [rsp+60h] [rbp-B8h]
  size_t v115; // [rsp+68h] [rbp-B0h]
  _DWORD v116[2]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v117; // [rsp+78h] [rbp-A0h]
  int v118; // [rsp+80h] [rbp-98h]
  __int64 v119; // [rsp+90h] [rbp-88h] BYREF
  void *src; // [rsp+98h] [rbp-80h]
  __int64 v121; // [rsp+A0h] [rbp-78h]
  _BYTE v122[16]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v123; // [rsp+B8h] [rbp-60h] BYREF
  void *ptr; // [rsp+C0h] [rbp-58h]
  __int64 v125; // [rsp+C8h] [rbp-50h]
  _BYTE v126[72]; // [rsp+D0h] [rbp-48h] BYREF

  v93 = (__int64)&(*a2)[*((unsigned int *)a2 + 2)];
  if ( *a2 != (__int64 *)v93 )
  {
    v89 = *a2;
    v90 = (int *)(a1 + 16);
    v94 = a1 + 504;
    do
    {
      v116[1] = 0;
      v118 = 1;
      v6 = *v89;
      v7 = *(_QWORD *)(*v89 + 16);
      v8 = *(unsigned int *)(*v89 + 28);
      v116[0] = *(_DWORD *)(a1 + 16);
      v9 = *(unsigned int *)(v6 + 24);
      v117 = v7;
      v10 = v9 + 1;
      v11 = (__m128i *)(v7 + 24 * v9);
      v12 = (const __m128i *)v116;
      if ( v10 <= v8 )
        goto LABEL_4;
      v75 = v6 + 32;
      if ( v7 > (unsigned __int64)v116 )
      {
        v76 = v6 + 16;
      }
      else
      {
        v76 = v6 + 16;
        if ( v11 > (__m128i *)v116 )
        {
          sub_2237220(v76, v75, v10, 24);
          v77 = *(_QWORD *)(v6 + 16);
          v12 = (const __m128i *)((char *)v116 + v77 - v7);
          v11 = (__m128i *)(v77 + 24LL * *(unsigned int *)(v6 + 24));
          goto LABEL_4;
        }
      }
      sub_2237220(v76, v75, v10, 24);
      v11 = (__m128i *)(*(_QWORD *)(v6 + 16) + 24LL * *(unsigned int *)(v6 + 24));
      v12 = (const __m128i *)v116;
LABEL_4:
      v13 = (__m128)_mm_loadu_si128(v12);
      *v11 = (__m128i)v13;
      v11[1].m128i_i64[0] = v12[1].m128i_i64[0];
      v14 = *(unsigned int *)(v6 + 28);
      v15 = (unsigned int)(*(_DWORD *)(v6 + 24) + 1);
      v16 = v15 + 1;
      *(_DWORD *)(v6 + 24) = v15;
      if ( v15 + 1 > v14 )
      {
        v78 = *(_QWORD *)(v6 + 16);
        v79 = v6 + 32;
        if ( v78 > (unsigned __int64)v90 || (unsigned __int64)v90 >= v78 + 24 * v15 )
        {
          sub_2237220(v6 + 16, v79, v16, 24);
          v17 = *(_QWORD *)(v6 + 16);
          v15 = *(unsigned int *)(v6 + 24);
          v18 = (const __m128i *)v90;
        }
        else
        {
          v80 = (char *)v90 - v78;
          sub_2237220(v6 + 16, v79, v16, 24);
          v17 = *(_QWORD *)(v6 + 16);
          v15 = *(unsigned int *)(v6 + 24);
          v18 = (const __m128i *)&v80[v17];
        }
      }
      else
      {
        v17 = *(_QWORD *)(v6 + 16);
        v18 = (const __m128i *)v90;
      }
      v19 = (__m128i *)(v17 + 24 * v15);
      *v19 = _mm_loadu_si128(v18);
      v19[1].m128i_i64[0] = v18[1].m128i_i64[0];
      v20 = *(char **)(v6 + 16);
      v21 = (unsigned int)(*(_DWORD *)(v6 + 24) + 1);
      *(_DWORD *)(v6 + 24) = v21;
      sub_14368B0(*(_QWORD *)(a1 + 8), v20, v21, 1u, 0, 1u);
      v22 = *(_WORD *)(a1 + 32);
      if ( v22 == 22 )
      {
        ++*(_WORD *)(a1 + 88);
        goto LABEL_11;
      }
      if ( v22 == 23 )
      {
        v63 = *(_WORD *)(a1 + 88);
        if ( v63 )
        {
          v64 = *(_DWORD *)(a1 + 2792);
          if ( !v64 )
          {
LABEL_94:
            *(_WORD *)(a1 + 88) = v63 - 1;
            goto LABEL_11;
          }
          v65 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v64 - 24);
          while ( 2 )
          {
            if ( v63 == v65[7] )
            {
              if ( *((_DWORD *)v65 + 4) != *(_DWORD *)(a1 + 90) )
              {
LABEL_92:
                if ( *(_WORD *)(a1 + 90) <= v65[8] && *(_WORD *)(a1 + 92) <= v65[9] )
                  goto LABEL_94;
              }
            }
            else if ( v63 <= v65[7] )
            {
              goto LABEL_92;
            }
            --v64;
            v65 -= 12;
            *(_DWORD *)(a1 + 2792) = v64;
            if ( !v64 )
              goto LABEL_94;
            continue;
          }
        }
LABEL_11:
        v24 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v24, v90);
        goto LABEL_12;
      }
      if ( (unsigned __int16)(v22 - 20) <= 1u )
      {
        v23 = *(_WORD *)(a1 + 90);
        if ( v22 == 20 )
        {
          *(_WORD *)(a1 + 90) = v23 + 1;
          goto LABEL_11;
        }
        if ( !v23 )
          goto LABEL_11;
        v86 = *(_DWORD *)(a1 + 2792);
        if ( !v86 )
        {
LABEL_156:
          *(_WORD *)(a1 + 90) = v23 - 1;
          goto LABEL_11;
        }
        v87 = *(_WORD *)(a1 + 88);
        v88 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v86 - 24);
        while ( 2 )
        {
          if ( v87 == v88[7] )
          {
            if ( *((_DWORD *)v88 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_154:
              if ( v23 <= v88[8] && *(_WORD *)(a1 + 92) <= v88[9] )
                goto LABEL_156;
            }
          }
          else if ( v87 <= v88[7] )
          {
            goto LABEL_154;
          }
          --v86;
          v88 -= 12;
          *(_DWORD *)(a1 + 2792) = v86;
          if ( !v86 )
            goto LABEL_156;
          continue;
        }
      }
      if ( (unsigned __int16)(v22 - 24) <= 1u )
      {
        v66 = *(_WORD *)(a1 + 92);
        if ( v22 == 24 )
        {
          *(_WORD *)(a1 + 92) = v66 + 1;
          goto LABEL_11;
        }
        if ( !v66 )
          goto LABEL_11;
        v67 = *(_DWORD *)(a1 + 2792);
        if ( !v67 )
        {
LABEL_108:
          *(_WORD *)(a1 + 92) = v66 - 1;
          goto LABEL_11;
        }
        v68 = *(_WORD *)(a1 + 88);
        v69 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v67 - 24);
        while ( 2 )
        {
          if ( v68 == v69[7] )
          {
            if ( *((_DWORD *)v69 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_106:
              if ( *(_WORD *)(a1 + 90) <= v69[8] && v66 <= v69[9] )
                goto LABEL_108;
            }
          }
          else if ( v68 <= v69[7] )
          {
            goto LABEL_106;
          }
          --v67;
          v69 -= 12;
          *(_DWORD *)(a1 + 2792) = v67;
          if ( !v67 )
            goto LABEL_108;
          continue;
        }
      }
      if ( (unsigned __int16)(v22 - 14) <= 1u || (unsigned __int16)(v22 - 17) <= 2u || v22 == 3 || !sub_10CCDE0(v22) )
        goto LABEL_11;
      v83 = *(_DWORD *)(a1 + 20);
      v84 = *(__int64 **)(a1 + 8);
      if ( !v83 )
        v83 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v83;
      sub_14634E0(v84, v90);
LABEL_12:
      src = v122;
      v25 = *(_DWORD *)(v6 + 144);
      v119 = 0;
      v123 = v94;
      ptr = v126;
      v121 = 0x200000000LL;
      HIBYTE(v26) = BYTE1(v91) & 0xFC;
      v125 = 0x200000000LL;
      LOBYTE(v26) = -15;
      LOWORD(v91) = v26;
      sub_148F5D0(a1, *(__int64 **)(v6 + 128), v25, &v119, nullptr, 0, a3, v13, 0, v91, 0);
      v27 = *(__int64 **)(v6 + 152);
      v28 = &v27[*(unsigned int *)(v6 + 160)];
      while ( v28 != v27 )
      {
        v29 = *v27++;
        sub_17A5EA0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v29, &v119);
      }
      for ( i = *(_WORD *)(a1 + 32); i != 1; i = *(_WORD *)(a1 + 32) )
      {
        if ( (unsigned __int16)(i - 22) <= 1u )
        {
          v31 = *(_WORD *)(a1 + 88);
          if ( i == 22 )
          {
            *(_WORD *)(a1 + 88) = v31 + 1;
          }
          else if ( v31 )
          {
            v61 = *(_DWORD *)(a1 + 2792);
            if ( !v61 )
            {
LABEL_79:
              *(_WORD *)(a1 + 88) = v31 - 1;
              goto LABEL_18;
            }
            v62 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v61 - 24);
            while ( 2 )
            {
              if ( v62[7] == v31 )
              {
                if ( *((_DWORD *)v62 + 4) != *(_DWORD *)(a1 + 90) )
                {
LABEL_77:
                  if ( *(_WORD *)(a1 + 90) <= v62[8] && *(_WORD *)(a1 + 92) <= v62[9] )
                    goto LABEL_79;
                }
              }
              else if ( v62[7] >= v31 )
              {
                goto LABEL_77;
              }
              --v61;
              v62 -= 12;
              *(_DWORD *)(a1 + 2792) = v61;
              if ( !v61 )
                goto LABEL_79;
              continue;
            }
          }
        }
        else
        {
          if ( (unsigned __int16)(i - 20) <= 1u )
          {
            v33 = *(_WORD *)(a1 + 90);
            if ( i == 20 )
            {
              *(_WORD *)(a1 + 90) = v33 + 1;
            }
            else if ( v33 )
            {
              v34 = *(_DWORD *)(a1 + 2792);
              if ( v34 )
              {
                v35 = *(_WORD *)(a1 + 88);
                v36 = *(_QWORD *)(a1 + 2784) + 24LL * v34 - 24;
                do
                {
                  if ( v35 == *(_WORD *)(v36 + 14) )
                  {
                    if ( *(_DWORD *)(v36 + 16) == *(_DWORD *)(a1 + 90) )
                      goto LABEL_27;
                  }
                  else if ( v35 > *(_WORD *)(v36 + 14) )
                  {
                    goto LABEL_27;
                  }
                  if ( v33 <= *(_WORD *)(v36 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v36 + 18) )
                    break;
LABEL_27:
                  --v34;
                  v36 -= 24;
                  *(_DWORD *)(a1 + 2792) = v34;
                }
                while ( v34 );
              }
              *(_WORD *)(a1 + 90) = v33 - 1;
            }
            goto LABEL_18;
          }
          if ( (unsigned __int16)(i - 24) > 1u )
          {
            if ( (unsigned __int16)(i - 14) > 1u && (unsigned __int16)(i - 17) > 2u )
            {
              if ( i == 3 )
              {
                sub_1566D30(a1);
                continue;
              }
              if ( sub_10CCDE0(i) )
              {
                v81 = *(_DWORD *)(a1 + 20);
                v82 = *(__int64 **)(a1 + 8);
                if ( !v81 )
                  v81 = *(_DWORD *)(a1 + 16);
                *(_DWORD *)(a1 + 40) = v81;
                sub_14634E0(v82, v90);
                continue;
              }
            }
          }
          else
          {
            v37 = *(_WORD *)(a1 + 92);
            if ( i == 24 )
            {
              *(_WORD *)(a1 + 92) = v37 + 1;
            }
            else if ( v37 )
            {
              v38 = *(_DWORD *)(a1 + 2792);
              if ( v38 )
              {
                v39 = *(_WORD *)(a1 + 88);
                v40 = *(_QWORD *)(a1 + 2784) + 24LL * v38 - 24;
                do
                {
                  if ( v39 == *(_WORD *)(v40 + 14) )
                  {
                    if ( *(_DWORD *)(v40 + 16) == *(_DWORD *)(a1 + 90) )
                      goto LABEL_39;
                  }
                  else if ( v39 > *(_WORD *)(v40 + 14) )
                  {
                    goto LABEL_39;
                  }
                  if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v40 + 16) && *(_WORD *)(v40 + 18) >= v37 )
                    break;
LABEL_39:
                  --v38;
                  v40 -= 24;
                  *(_DWORD *)(a1 + 2792) = v38;
                }
                while ( v38 );
              }
              *(_WORD *)(a1 + 92) = v37 - 1;
            }
          }
        }
LABEL_18:
        v32 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v32, v90);
      }
      if ( v7 == *(_QWORD *)(a1 + 24) )
        sub_1479170(a1);
      if ( !a5 )
        goto LABEL_65;
      v41 = *(unsigned int *)(a5 + 16);
      v42 = a5 + 8;
      v43 = *(char **)(a5 + 8);
      v44 = (char *)src;
      v45 = 8LL * (unsigned int)v121;
      v46 = 8 * v41;
      v47 = *(unsigned int *)(a5 + 20);
      v48 = (char *)src + v45;
      v49 = &v43[8 * v41];
      v50 = v45 >> 3;
      v51 = v41 + (v45 >> 3);
      if ( !(8 * v41) )
      {
        if ( v51 > v47 )
        {
          v109 = v45 >> 3;
          nc = (char *)src + v45;
          v99 = (void *)(8LL * (unsigned int)v121);
          sub_2237220(v42, a5 + 24, v51, 8);
          v41 = *(unsigned int *)(a5 + 16);
          LODWORD(v50) = v109;
          v48 = nc;
          v49 = (char *)(*(_QWORD *)(a5 + 8) + 8 * v41);
          v45 = (signed __int64)v99;
        }
        if ( v44 != v48 )
        {
          v98 = v50;
          memcpy(v49, v44, v45);
          LODWORD(v50) = v98;
          LODWORD(v41) = *(_DWORD *)(a5 + 16);
        }
        *(_DWORD *)(a5 + 16) = v41 + v50;
        goto LABEL_64;
      }
      if ( v51 > v47 )
      {
        v110 = v45 >> 3;
        v105 = (char *)src + v45;
        nb = 8LL * (unsigned int)v121;
        sub_2237220(v42, a5 + 24, v51, 8);
        v41 = *(unsigned int *)(a5 + 16);
        v43 = *(char **)(a5 + 8);
        LODWORD(v50) = v110;
        v48 = v105;
        v46 = 8 * v41;
        v45 = nb;
        v42 = a5 + 8;
        v49 = &v43[8 * v41];
        v52 = (8 * v41) >> 3;
        if ( v52 < v110 )
          goto LABEL_52;
LABEL_110:
        v70 = v45;
        n = v46 - v45;
        v96 = &v43[v46 - v45];
        v71 = v49;
        v72 = v45 >> 3;
        v73 = (v45 >> 3) + v41;
        if ( v73 > *(unsigned int *)(a5 + 20) )
        {
          v115 = v45;
          v114 = v49;
          v112 = v48;
          v108 = v45;
          sub_2237220(v42, a5 + 24, v73, 8);
          v70 = v115;
          v48 = v112;
          v41 = *(unsigned int *)(a5 + 16);
          v45 = v108;
          v71 = (char *)(*(_QWORD *)(a5 + 8) + 8 * v41);
          v74 = v96;
          if ( v96 == v114 )
            goto LABEL_113;
        }
        else
        {
          v74 = v96;
          if ( v96 == v49 )
          {
LABEL_113:
            *(_DWORD *)(a5 + 16) = v41 + v72;
            if ( v96 != v43 )
            {
              v107 = v48;
              v97 = (void *)v45;
              memmove(&v43[v45], v43, n);
              v48 = v107;
              v45 = (signed __int64)v97;
            }
            if ( v44 != v48 )
              memmove(v43, v44, v45);
            goto LABEL_64;
          }
        }
        v111 = v48;
        v106 = v45;
        memmove(v71, v74, v70);
        v48 = v111;
        v45 = v106;
        LODWORD(v41) = *(_DWORD *)(a5 + 16);
        goto LABEL_113;
      }
      v52 = v46 >> 3;
      if ( v46 >> 3 >= v50 )
        goto LABEL_110;
LABEL_52:
      v53 = v41 + v50;
      *(_DWORD *)(a5 + 16) = v53;
      if ( v49 != v43 )
      {
        v104 = v52;
        na = (size_t)v49;
        v95 = v48;
        memcpy(&v43[8 * v53 - v46], v43, v46);
        v52 = v104;
        v49 = (char *)na;
        v48 = v95;
      }
      if ( v52 )
      {
        if ( (v43 >= v44 + 16 || v44 >= v43 + 16) && v52 - 1 > 3 )
        {
          v54 = 0;
          v55 = 0;
          v56 = ((v52 - 2) >> 1) + 1;
          do
          {
            a3 = _mm_loadu_si128((const __m128i *)&v44[v54]);
            ++v55;
            *(__m128i *)&v43[v54] = a3;
            v54 += 16;
          }
          while ( v55 < v56 );
          v57 = 2 * v56;
          v58 = 16 * v56;
          v59 = &v43[v58];
          if ( v52 != v57 )
            *(_QWORD *)v59 = *(_QWORD *)&v44[v58];
        }
        else
        {
          for ( j = 0; j != v52; ++j )
            *(_QWORD *)&v43[8 * j] = *(_QWORD *)&v44[8 * j];
        }
        v44 += v46;
      }
      if ( v48 != v44 )
        memcpy(v49, v44, v48 - v44);
LABEL_64:
      LODWORD(v121) = 0;
      sub_15D8C50(a5 + 40, &v123);
      LODWORD(v125) = 0;
LABEL_65:
      sub_15DCED0(v123, &v123);
      if ( ptr != v126 )
        free(ptr);
      if ( src != v122 )
        free(src);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      ++v89;
    }
    while ( (__int64 *)v93 != v89 );
  }
  *((_DWORD *)a2 + 2) = 0;
  return a2;
}
