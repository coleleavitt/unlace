void __fastcall sub_E74000(char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, char **a6)
{
  int v6; // ebx
  char *v7; // r10
  char *v8; // rbp
  int v9; // r14d
  char *v10; // rax
  char *v11; // r12
  char *v12; // r15
  __int64 v13; // rdi
  unsigned int v14; // r11d
  char *v15; // r13
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned int v19; // esi
  char v20; // r9
  __int64 v21; // r11
  __int64 v22; // r12
  _DWORD *v23; // rdx
  _DWORD *v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // r15
  __m128d v29; // xmm0
  __m128d v30; // xmm1
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 *v33; // rcx
  __int64 *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // r9
  char *v38; // r15
  __int64 v39; // rdi
  unsigned int v40; // r11d
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int *v44; // rdx
  unsigned int v45; // esi
  signed __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdi
  __m128i v52; // xmm0
  unsigned __int64 v53; // rdx
  __int64 *v54; // rcx
  __int64 *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // rdx
  unsigned int *v58; // rcx
  __int64 v59; // rdx
  unsigned int *v60; // rcx
  __int64 i; // rdx
  int v62; // edi
  int v63; // r11d
  int v64; // edi
  _DWORD *v65; // rcx
  __int64 v66; // rsi
  int v67; // edi
  int v68; // r11d
  int v69; // r11d
  int v70; // edi
  unsigned int v71; // edx
  unsigned int v72; // esi
  unsigned int v73; // eax
  unsigned int v74; // ecx
  int v75; // edx
  int v76; // eax
  unsigned __int64 v77; // rcx
  __int64 v78; // rax
  __m128i v79; // xmm0
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  unsigned int *v82; // rdx
  char *v83; // rax
  __int64 v84; // rcx
  char v85; // r8
  char *v86; // rdx
  char *v87; // rax
  char *v88; // rcx
  int v89; // esi
  int v90; // edi
  int v91; // edi
  int v92; // esi
  char **v94; // [rsp+0h] [rbp-98h]
  int v96; // [rsp+8h] [rbp-90h]
  __int64 v97; // [rsp+10h] [rbp-88h]
  int v98; // [rsp+10h] [rbp-88h]
  char v100; // [rsp+10h] [rbp-88h]
  char *v101; // [rsp+10h] [rbp-88h]
  char *v102; // [rsp+10h] [rbp-88h]
  int v103; // [rsp+18h] [rbp-80h]
  int v104; // [rsp+18h] [rbp-80h]
  int v105; // [rsp+18h] [rbp-80h]
  __int64 v106; // [rsp+18h] [rbp-80h]
  int v107; // [rsp+18h] [rbp-80h]
  int v108; // [rsp+20h] [rbp-78h]
  int v109; // [rsp+20h] [rbp-78h]
  int v110; // [rsp+28h] [rbp-70h]
  int v111; // [rsp+28h] [rbp-70h]
  char *v112; // [rsp+38h] [rbp-60h] BYREF
  __int64 v113; // [rsp+40h] [rbp-58h] BYREF
  char *v114; // [rsp+48h] [rbp-50h] BYREF
  __int64 v115; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v116[8]; // [rsp+58h] [rbp-40h] BYREF

  if ( !a4 )
    return;
  v6 = a5;
  if ( !a5 )
    return;
  v7 = a1;
  v8 = a2;
  v9 = a4;
  if ( a4 + a5 == 2 )
  {
    v71 = *(_DWORD *)a2;
    v72 = *((_DWORD *)a2 + 1);
    v73 = *(_DWORD *)a1;
    v74 = *((_DWORD *)a1 + 1);
    if ( v72 )
    {
      if ( !v74 )
        return;
      v85 = (*a6)[v71];
      if ( (v85 || !(*a6)[v73]) && ((v85 != 0) != ((*a6)[v73] != 0) || v72 >= v74) )
        return;
    }
    else if ( v71 >= __PAIR64__(v74, v73) )
    {
      return;
    }
    *(_DWORD *)a1 = v71;
    v75 = *((_DWORD *)v8 + 1);
    *(_DWORD *)v8 = v73;
    v76 = *((_DWORD *)a1 + 1);
    *((_DWORD *)a1 + 1) = v75;
    *((_DWORD *)v8 + 1) = v76;
    return;
  }
  v10 = *a6;
  if ( a4 <= a5 )
  {
    v106 = a5 / 2;
    v15 = &a2[8 * (a5 / 2)];
    if ( v10 && (v114 = nullptr, sub_C7B020(&v114, a6), v38 = v114, v7 = a1, v114) )
    {
      v115 = 0;
      sub_C7B020(&v115, &v114);
      v39 = v115;
      v7 = a1;
    }
    else
    {
      v38 = nullptr;
      v39 = 0;
    }
    v40 = *((_DWORD *)v15 + 1);
    v41 = *(unsigned int *)v15;
    v11 = v7;
    v42 = (a2 - v7) >> 3;
    if ( v40 )
    {
      while ( v42 > 0 )
      {
        while ( 1 )
        {
          v43 = v42 >> 1;
          v44 = (unsigned int *)&v11[8 * (v42 >> 1)];
          v45 = v44[1];
          if ( !v45 )
            break;
          v100 = *(_BYTE *)(v39 + v41);
          if ( (v100 || !*(_BYTE *)(v39 + *v44)) && ((v100 != 0) != (*(_BYTE *)(v39 + *v44) != 0) || v40 >= v45) )
            break;
          v42 >>= 1;
          if ( v43 <= 0 )
            goto LABEL_48;
        }
        v11 = (char *)(v44 + 2);
        v42 = v42 - v43 - 1;
      }
    }
    else
    {
      while ( v42 > 0 )
      {
        while ( 1 )
        {
          v59 = v42 >> 1;
          v60 = (unsigned int *)&v11[8 * (v42 >> 1)];
          if ( (unsigned __int64)(unsigned int)v41 >= *(_QWORD *)v60 )
            break;
          v42 >>= 1;
          if ( v59 <= 0 )
            goto LABEL_48;
        }
        v11 = (char *)(v60 + 2);
        v42 = v42 - v59 - 1;
      }
    }
LABEL_48:
    if ( v39 )
    {
      v101 = v7;
      sub_186B220((void *)(v39 - 8));
      v7 = v101;
    }
    if ( v38 )
    {
      v102 = v7;
      sub_186B220(v38 - 8);
      v7 = v102;
    }
    v97 = (v11 - v7) >> 3;
  }
  else
  {
    v97 = a4 / 2;
    v11 = &a1[8 * (a4 / 2)];
    if ( v10 && (v103 = (int)a1, v112 = nullptr, sub_C7B020(&v112, a6), v12 = v112, LODWORD(v7) = (_DWORD)a1, v112) )
    {
      v113 = 0;
      sub_C7B020(&v113, &v112);
      v13 = v113;
      LODWORD(v7) = v103;
    }
    else
    {
      v12 = nullptr;
      v13 = 0;
    }
    v14 = *((_DWORD *)v11 + 1);
    v15 = a2;
    v16 = *(unsigned int *)v11;
    v17 = (a3 - (__int64)a2) >> 3;
    if ( v14 )
    {
      while ( v17 > 0 )
      {
        while ( 1 )
        {
          v18 = (unsigned int *)&v15[8 * (v17 >> 1)];
          v19 = v18[1];
          if ( v19 )
          {
            v20 = *(_BYTE *)(v13 + *v18);
            if ( (v20 || !*(_BYTE *)(v13 + v16)) && ((v20 != 0) != (*(_BYTE *)(v13 + v16) != 0) || v19 >= v14) )
              break;
          }
          v15 = (char *)(v18 + 2);
          v17 = v17 - (v17 >> 1) - 1;
          if ( v17 <= 0 )
            goto LABEL_14;
        }
        v17 >>= 1;
      }
    }
    else
    {
      while ( v17 > 0 )
      {
        while ( 1 )
        {
          v57 = v17 >> 1;
          v58 = (unsigned int *)&v15[8 * (v17 >> 1)];
          if ( *(_QWORD *)v58 < (unsigned __int64)(unsigned int)v16 )
            break;
          v17 >>= 1;
          if ( v57 <= 0 )
            goto LABEL_14;
        }
        v15 = (char *)(v58 + 2);
        v17 = v17 - v57 - 1;
      }
    }
LABEL_14:
    if ( v13 )
    {
      v104 = (int)v7;
      sub_186B220((void *)(v13 - 8));
      LODWORD(v7) = v104;
    }
    if ( v12 )
    {
      v105 = (int)v7;
      sub_186B220(v12 - 8);
      LODWORD(v7) = v105;
    }
    v106 = (v15 - v8) >> 3;
  }
  if ( v8 == v11 )
  {
    LODWORD(v8) = (_DWORD)v15;
  }
  else if ( v8 == v15 )
  {
    LODWORD(v8) = (_DWORD)v11;
  }
  else
  {
    v36 = (__int64)v11;
    v46 = v8 - v11;
    v47 = (v15 - v11) >> 3;
    v37 = (v8 - v11) >> 3;
    if ( v37 != v47 - v37 )
    {
      v108 = (int)v15;
      v110 = (int)v11;
      while ( 1 )
      {
        v48 = v47 - v37;
        if ( v37 >= (__int64)(v47 - v37) )
        {
          v21 = 8 * v47;
          v22 = 8 * v48;
          v23 = (_DWORD *)(v36 + 8 * v47);
          v24 = &v23[-2 * v48];
          if ( v37 <= 0 )
          {
            v36 = v36 + 8 * v47 - 8 * v48;
          }
          else
          {
            v25 = v21 - v22;
            if ( v21 - v22 > v21 - 16 && v21 > v25 - 16 )
            {
              v65 = (_DWORD *)(v36 + 8 * v47 - 8 * v48);
              v66 = 0;
              do
              {
                v67 = *(v65 - 2);
                v68 = *(v23 - 2);
                ++v66;
                v65 -= 2;
                v23 -= 2;
                *v65 = v68;
                v69 = v23[1];
                *v23 = v67;
                v70 = v65[1];
                v65[1] = v69;
                v23[1] = v70;
              }
              while ( v37 != v66 );
            }
            else
            {
              if ( v37 == 1 )
              {
                v31 = 0;
                goto LABEL_26;
              }
              v26 = v36 + v25 - 16;
              v27 = v36 + v21 - 16;
              v28 = 0;
              do
              {
                ++v28;
                v26 -= 16;
                v27 -= 16;
                v29 = (__m128d)_mm_loadh_ps((const double *)(v26 + 16));
                v30 = (__m128d)_mm_loadh_ps((const double *)(v27 + 16));
                *(__m128d *)(v26 + 16) = _mm_shuffle_pd(v30, v30, 1);
                *(__m128d *)(v27 + 16) = _mm_shuffle_pd(v29, v29, 1);
              }
              while ( v28 != (unsigned __int64)v37 >> 1 );
              v31 = v37 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v37 & 1) != 0 )
              {
LABEL_26:
                v32 = v21 + 8 * ~v31;
                v33 = (__int64 *)(v36 + v32);
                v34 = (__int64 *)(v36 + v32 - v22);
                v35 = *v34;
                *v34 = *v33;
                *v33 = v35;
              }
            }
            v36 = (__int64)&v24[-2 * v37];
          }
          v37 = v47 % v48;
          if ( !(v47 % v48) )
            goto LABEL_29;
          goto LABEL_69;
        }
        v49 = v36 + 8 * v37;
        if ( (__int64)v48 > 0 )
          break;
LABEL_67:
        if ( !(v47 % v37) )
        {
LABEL_29:
          LODWORD(v15) = v108;
          LODWORD(v11) = v110;
          LODWORD(v8) = v110 + v108 - (_DWORD)v8;
          goto LABEL_30;
        }
        v48 = v37;
        v37 -= v47 % v37;
LABEL_69:
        v47 = v48;
      }
      if ( 8 * v37 + 16 > 0 && v49 < v36 + 16 )
      {
        for ( i = 0; i != v48; ++i )
        {
          v62 = *(_DWORD *)(v36 + 8 * i);
          *(_DWORD *)(v36 + 8 * i) = *(_DWORD *)(v49 + 8 * i);
          v63 = *(_DWORD *)(v49 + 8 * i + 4);
          *(_DWORD *)(v49 + 8 * i) = v62;
          v64 = *(_DWORD *)(v36 + 8 * i + 4);
          *(_DWORD *)(v36 + 8 * i + 4) = v63;
          *(_DWORD *)(v49 + 8 * i + 4) = v64;
        }
        goto LABEL_66;
      }
      if ( v48 == 1 )
      {
        v53 = 0;
      }
      else
      {
        v50 = 0;
        v51 = 0;
        do
        {
          v52 = _mm_loadu_si128((const __m128i *)(v36 + v50));
          ++v51;
          *(__m128i *)(v36 + v50) = _mm_loadu_si128((const __m128i *)(v49 + v50));
          *(__m128i *)(v49 + v50) = v52;
          v50 += 16;
        }
        while ( v51 != v48 >> 1 );
        v53 = v48 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v48 & 1) == 0 )
          goto LABEL_66;
      }
      v54 = (__int64 *)(v36 + 8 * v53);
      v55 = (__int64 *)(v36 + 8 * (v37 + v53));
      v56 = *v54;
      *v54 = *v55;
      *v55 = v56;
LABEL_66:
      v36 += 8 * v48;
      goto LABEL_67;
    }
    if ( (unsigned __int64)(v8 + 15 - v11) <= 0x1E )
    {
      v86 = &v8[v46];
      v87 = v8;
      v88 = v11;
      do
      {
        v89 = *(_DWORD *)v88;
        v90 = *(_DWORD *)v87;
        v87 += 8;
        v88 += 8;
        *((_DWORD *)v88 - 2) = v90;
        v91 = *((_DWORD *)v87 - 1);
        *((_DWORD *)v87 - 2) = v89;
        v92 = *((_DWORD *)v88 - 1);
        *((_DWORD *)v88 - 1) = v91;
        *((_DWORD *)v87 - 1) = v92;
      }
      while ( v87 != v86 );
      goto LABEL_30;
    }
    v77 = ((unsigned __int64)(v46 - 8) >> 3) + 1;
    if ( v46 == 8 )
    {
      v80 = 0;
    }
    else
    {
      v78 = 0;
      do
      {
        v79 = _mm_loadu_si128((const __m128i *)&v11[v78]);
        *(__m128i *)&v11[v78] = _mm_loadu_si128((const __m128i *)&v8[v78]);
        *(__m128i *)&v8[v78] = v79;
        v78 += 16;
      }
      while ( 16 * (v77 >> 1) != v78 );
      if ( (v77 & 1) == 0 )
        goto LABEL_30;
      v80 = v77 & 0xFFFFFFFFFFFFFFFELL;
    }
    v81 = 8 * v80;
    v82 = (unsigned int *)&v11[v81];
    v83 = &v8[v81];
    v84 = *(_QWORD *)v82;
    *(_QWORD *)v82 = *(_QWORD *)v83;
    *(_QWORD *)v83 = v84;
  }
LABEL_30:
  v116[0] = 0;
  if ( *a6 )
  {
    v108 = (int)v7;
    sub_C7B020(v116, a6);
    LODWORD(v7) = v108;
  }
  sub_E74000((_DWORD)v7, (_DWORD)v11, (_DWORD)v8, v97, v106, (unsigned int)v116, (_DWORD)a6, a3, v97, v106, v108, v110);
  if ( v116[0] )
    sub_186B220((void *)(v116[0] - 8LL));
  v116[0] = 0;
  if ( *v94 )
    sub_C7B020(v116, v94);
  sub_E74000(
    (_DWORD)v8,
    (_DWORD)v15,
    v96,
    v9 - v98,
    v6 - v107,
    (unsigned int)v116,
    (_DWORD)v94,
    v96,
    v98,
    v107,
    v109,
    v111);
  if ( v116[0] )
    sub_186B220((void *)(v116[0] - 8LL));
}

