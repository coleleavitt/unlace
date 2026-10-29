__int64 *__fastcall sub_D8F2D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r14
  unsigned __int32 v18; // r13d
  __int64 v19; // rax
  char *v20; // rdx
  unsigned int v21; // ecx
  char *v22; // rsi
  __int64 v23; // rcx
  char *v24; // rdi
  char *i; // rax
  int v26; // ecx
  __int64 v27; // rcx
  _QWORD *v28; // r15
  void *v29; // r12
  void *v30; // r12
  void *v31; // rdi
  void *v32; // rdi
  int v33; // edx
  void *v34; // r12
  __int64 v35; // rdx
  char v36; // cl
  __int64 v37; // rdx
  void *v38; // r12
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rdi
  void *v45; // r14
  void *v46; // r15
  void *v47; // r14
  void *v48; // rbx
  int v50; // eax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __m128i *v53; // r12
  unsigned int v54; // r11d
  __int64 v55; // r10
  __m128i *v56; // rax
  __int64 v57; // rdx
  __m128i *v58; // rsi
  __m128i *v59; // rdx
  __m128i *v60; // rdi
  __int32 v61; // ecx
  __m128i *v62; // rax
  int v63; // r9d
  __m128i *v64; // rdx
  const __m128i *v65; // rcx
  __m128i *v66; // r8
  __int64 v67; // rdx
  __m128i *v68; // rsi
  __int64 v69; // rdi
  __m128i *v70; // rdx
  __int32 v71; // eax
  __int64 v72; // rdi
  __int64 v73; // rdi
  int v74; // [rsp+1Ch] [rbp-1B4h]
  int v75; // [rsp+1Ch] [rbp-1B4h]
  int v76; // [rsp+20h] [rbp-1B0h]
  __m128i *v77; // [rsp+20h] [rbp-1B0h]
  void *v78; // [rsp+28h] [rbp-1A8h]
  size_t v79; // [rsp+28h] [rbp-1A8h]
  size_t v80; // [rsp+48h] [rbp-188h]
  unsigned int v81; // [rsp+48h] [rbp-188h]
  __int64 v82; // [rsp+68h] [rbp-168h]
  int v83; // [rsp+78h] [rbp-158h]
  int v84; // [rsp+7Ch] [rbp-154h]
  __int64 v86; // [rsp+88h] [rbp-148h]
  int v87; // [rsp+94h] [rbp-13Ch] BYREF
  int v88; // [rsp+98h] [rbp-138h] BYREF
  int v89; // [rsp+9Ch] [rbp-134h] BYREF
  char v90[8]; // [rsp+A0h] [rbp-130h] BYREF
  char v91[24]; // [rsp+A8h] [rbp-128h] BYREF
  _QWORD v92[2]; // [rsp+C0h] [rbp-110h] BYREF
  _QWORD v93[2]; // [rsp+D0h] [rbp-100h] BYREF
  _QWORD v94[2]; // [rsp+E0h] [rbp-F0h] BYREF
  _QWORD v95[2]; // [rsp+F0h] [rbp-E0h] BYREF
  _QWORD v96[2]; // [rsp+100h] [rbp-D0h] BYREF
  _QWORD v97[2]; // [rsp+110h] [rbp-C0h] BYREF
  __int64 v98; // [rsp+120h] [rbp-B0h] BYREF
  __int64 v99; // [rsp+128h] [rbp-A8h]
  __int64 v100; // [rsp+130h] [rbp-A0h] BYREF
  __int64 v101; // [rsp+138h] [rbp-98h]
  _QWORD v102[2]; // [rsp+140h] [rbp-90h] BYREF
  _QWORD v103[2]; // [rsp+150h] [rbp-80h] BYREF
  int v104; // [rsp+160h] [rbp-70h] BYREF
  char v105; // [rsp+164h] [rbp-6Ch]
  __int64 v106; // [rsp+168h] [rbp-68h]
  int v107; // [rsp+170h] [rbp-60h] BYREF
  char v108; // [rsp+174h] [rbp-5Ch]
  __int64 v109; // [rsp+178h] [rbp-58h]
  __int64 v110; // [rsp+180h] [rbp-50h] BYREF
  __int64 v111; // [rsp+188h] [rbp-48h] BYREF
  _QWORD v112[8]; // [rsp+190h] [rbp-40h] BYREF

  v86 = a2;
  v82 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 752LL);
  v10 = *(_QWORD *)(a2 + 8);
  *a1 = 0;
  a1[1] = v10;
  sub_181A6B0(v90);
  v84 = sub_15C5540((int)a2 + 16, a3, v11, v12, v13, v14);
  v83 = sub_15C5560(a2 + 16, a3);
  v89 = v83 - 1;
  v88 = v84;
  v87 = 1;
  v92[0] = 0;
  v92[1] = 0;
  v93[0] = 1;
  v93[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v93);
  BYTE4(v93[0]) &= ~1u;
  LODWORD(v93[0]) = 1;
  v94[0] = 0;
  v94[1] = 0;
  v95[0] = 1;
  v95[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v95);
  BYTE4(v95[0]) &= ~1u;
  LODWORD(v95[0]) = 1;
  v96[0] = 0;
  v96[1] = 0;
  v97[0] = 1;
  v97[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v97);
  BYTE4(v97[0]) &= ~1u;
  LODWORD(v97[0]) = 1;
  if ( a4 )
    sub_1673B50(a2 + 80, a4, (unsigned int)v92, (unsigned int)&v87, v15, v16);
  if ( a5 )
  {
    sub_1673B50(a2 + 80, a5, (unsigned int)v96, (unsigned int)&v88, v15, v16);
    if ( !a6 )
      goto LABEL_6;
  }
  else if ( !a6 )
  {
    goto LABEL_6;
  }
  sub_1673B50(a2 + 80, a6, (unsigned int)v94, (unsigned int)&v89, v15, v16);
LABEL_6:
  v98 = 0;
  v99 = 0;
  v17 = *(_QWORD *)(a2 + 24);
  v18 = v84 - 1;
  v100 = 1;
  v101 = 0;
  v19 = *(unsigned int *)(v17 + 824);
  v20 = *(char **)(v17 + 816);
  v21 = v19 - 1;
  v19 *= 24;
  v22 = &v20[v19];
  v23 = 24LL * ((v84 - 1) & v21);
  v24 = &v20[v23];
  if ( v23 != v19 )
  {
    for ( i = &v20[v23]; v22 != i; i += 24 )
    {
      v26 = *((_DWORD *)i + 1);
      if ( v26 == 2 )
      {
        if ( v18 == *(_DWORD *)i && v18 == *((_DWORD *)i + 2) )
        {
LABEL_13:
          v27 = v86;
          if ( v22 != i )
          {
            while ( *((_DWORD *)i + 1) != 2 )
            {
              i += 24;
              if ( v22 == i )
                goto LABEL_47;
            }
            if ( i != v22 )
            {
              v28 = *((_QWORD **)i + 2);
              goto LABEL_19;
            }
          }
          goto LABEL_48;
        }
      }
      else if ( !v26 )
      {
        goto LABEL_48;
      }
    }
  }
  if ( v20 != v24 )
  {
    v27 = v86;
    do
    {
      v50 = *((_DWORD *)v20 + 1);
      if ( v50 == 2 )
      {
        if ( v18 == *(_DWORD *)v20 && v18 == *((_DWORD *)v20 + 2) )
        {
          i = v20;
          goto LABEL_13;
        }
      }
      else if ( !v50 )
      {
        break;
      }
      v20 += 24;
    }
    while ( v24 != v20 );
LABEL_47:
    v86 = v27;
  }
LABEL_48:
  v51 = (_QWORD *)sub_186B270(0x10u);
  *v51 = 0;
  v52 = *(unsigned int *)(v17 + 824);
  v28 = v51;
  v51[1] = 0;
  if ( 3 * (int)v52 < (unsigned int)(4 * (*(_DWORD *)(v17 + 828) + *(_DWORD *)(v17 + 832))) )
  {
    v74 = v52;
    v76 = 2 * v52;
    v80 = 24LL * (unsigned int)(2 * v52);
    v79 = v80;
    v62 = (__m128i *)sub_186B270(v80);
    v63 = v76;
    v55 = v80;
    v53 = v62;
    if ( v76 )
    {
      v64 = &v62[3 * (v74 & 0x7FFFFFFF)];
      do
      {
        v62->m128i_i64[0] = 0;
        v62 += 3;
        v62[-2].m128i_i64[1] = 0;
      }
      while ( v62 != v64 );
    }
    v65 = *(const __m128i **)(v17 + 816);
    v54 = v76 - 1;
    v66 = (__m128i *)((char *)v65 + 24 * *(unsigned int *)(v17 + 824));
    v56 = (__m128i *)((char *)v53 + v80);
    if ( v65 != v66 )
    {
      do
      {
        if ( v65->m128i_i32[1] == 2 )
        {
          v67 = 24LL * (v65->m128i_i32[0] & v54);
          v68 = (__m128i *)((char *)v53 + v67);
          if ( v80 == v67 )
          {
LABEL_103:
            if ( v53 == v68 )
            {
LABEL_110:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v69 = v86;
            v70 = v53;
            while ( v70->m128i_i32[1] )
            {
              v70 = (__m128i *)((char *)v70 + 24);
              if ( v68 == v70 )
                goto LABEL_110;
            }
          }
          else
          {
            v69 = v86;
            v70 = (__m128i *)((char *)v53 + v67);
            while ( v70->m128i_i32[1] )
            {
              v70 = (__m128i *)((char *)v70 + 24);
              if ( v56 == v70 )
                goto LABEL_103;
            }
          }
          v86 = v69;
          *v70 = _mm_loadu_si128(v65);
          v70[1].m128i_i64[0] = v65[1].m128i_i64[0];
        }
        v65 = (const __m128i *)((char *)v65 + 24);
      }
      while ( v66 != v65 );
      v66 = *(__m128i **)(v17 + 816);
    }
    if ( v66 )
    {
      v75 = v76;
      v77 = (__m128i *)((char *)v53 + v80);
      v81 = v63 - 1;
      sub_186B220(v66);
      v63 = v75;
      v56 = v77;
      v55 = v79;
      v54 = v81;
    }
    *(_QWORD *)(v17 + 816) = v53;
    *(_DWORD *)(v17 + 824) = v63;
    *(_DWORD *)(v17 + 832) = 0;
  }
  else
  {
    v53 = *(__m128i **)(v17 + 816);
    v54 = v52 - 1;
    v55 = 24 * v52;
    v56 = (__m128i *)((char *)v53 + 24 * v52);
  }
  v57 = 24LL * (v18 & v54);
  v58 = (__m128i *)((char *)v53 + v57);
  if ( v57 != v55 )
  {
    v59 = (__m128i *)((char *)v53 + v57);
    v60 = nullptr;
    while ( 1 )
    {
      v61 = v59->m128i_i32[1];
      if ( v61 == 2 )
      {
        if ( v18 == v59->m128i_i32[0] && v18 == v59->m128i_i32[2] )
        {
          v59->m128i_i32[2] = v18;
          v59[1].m128i_i64[0] = (__int64)v28;
          v59->m128i_i32[1] = 2;
          goto LABEL_96;
        }
      }
      else
      {
        if ( !v61 )
        {
          if ( !v60 )
          {
            v60 = v59;
            goto LABEL_95;
          }
LABEL_94:
          --*(_DWORD *)(v17 + 832);
          goto LABEL_95;
        }
        v60 = v59;
      }
      v59 = (__m128i *)((char *)v59 + 24);
      if ( v59 == v56 )
        goto LABEL_84;
    }
  }
  v60 = nullptr;
LABEL_84:
  if ( v58 == v53 )
  {
LABEL_97:
    sub_1872CE0("");
    sub_1873130(114, 405);
  }
  while ( 1 )
  {
    v71 = v53->m128i_i32[1];
    if ( v71 != 2 )
      break;
    if ( v18 == v53->m128i_i32[0] && v18 == v53->m128i_i32[2] )
    {
      v53->m128i_i32[2] = v18;
      v53[1].m128i_i64[0] = (__int64)v28;
      v53->m128i_i32[1] = 2;
      goto LABEL_96;
    }
LABEL_88:
    v53 = (__m128i *)((char *)v53 + 24);
    if ( v58 == v53 )
      goto LABEL_97;
  }
  if ( v71 )
  {
    v60 = v53;
    goto LABEL_88;
  }
  if ( v60 )
    goto LABEL_94;
  v60 = v53;
LABEL_95:
  v60->m128i_i32[2] = v18;
  v60[1].m128i_i64[0] = (__int64)v28;
  v60->m128i_i32[1] = 2;
  v60->m128i_i32[0] = v18;
  ++*(_DWORD *)(v17 + 828);
LABEL_96:
  v72 = *(_QWORD *)(v17 + 760);
  BYTE4(v110) &= 0xFCu;
  LODWORD(v110) = 2;
  v111 = 0;
  sub_18393F0(v72, &v110, v18, v28);
  v73 = *(_QWORD *)(v17 + 760);
  v111 = 0;
  v110 = 0xFFFFFFFFLL;
  sub_1839610(v73, v28, &v110);
LABEL_19:
  v102[0] = 0;
  v29 = qword_1C7F2C0;
  v102[1] = 0;
  v103[0] = 1;
  v103[1] = 0;
  if ( (*((_BYTE *)v28 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v102, v28);
  else
    LODWORD(v102[0]) = *(_DWORD *)v28;
  sub_182CBA0(v29, v103);
  BYTE4(v103[0]) &= ~1u;
  v30 = qword_1C7F2C0;
  LODWORD(v103[0]) = 1;
  v110 = 0;
  v111 = 0;
  v112[0] = 1;
  v112[1] = 0;
  if ( (v96[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v110, v96);
    if ( (v97[0] & 0x100000000LL) != 0 )
      goto LABEL_76;
LABEL_23:
    BYTE4(v112[0]) &= ~1u;
    LODWORD(v112[0]) = v97[0];
  }
  else
  {
    LODWORD(v110) = v96[0];
    if ( (v97[0] & 0x100000000LL) == 0 )
      goto LABEL_23;
LABEL_76:
    sub_182C690(v30, v112, v97);
  }
  v31 = qword_1C7F2C0;
  if ( (v112[0] & 0x100000000LL) != 0
    || LODWORD(v112[0]) != 1
    || (v103[0] & 0x100000000LL) != 0
    || LODWORD(v103[0]) != 1 )
  {
    sub_1852000(qword_1C7F2C0, &v110, v102);
  }
  else
  {
    sub_1832A70(qword_1C7F2C0, &v110, v102);
    sub_182CBA0(v31, v112);
    BYTE4(v112[0]) &= ~1u;
    LODWORD(v112[0]) = 1;
  }
  v105 &= 0xFCu;
  v32 = qword_1C7F2C0;
  v108 &= 0xFCu;
  v104 = 0;
  v106 = 0;
  v107 = 1;
  v109 = 0;
  if ( (v110 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v104, &v110);
  else
    v104 = v110;
  if ( (v112[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v32, &v107, v112);
  }
  else
  {
    v108 &= ~1u;
    v107 = v112[0];
  }
  v78 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v110);
  sub_182CBA0(v78, v112);
  v33 = v104;
  v34 = qword_1C7F2C0;
  v104 = v98;
  LODWORD(v98) = v33;
  v35 = v106;
  v106 = v99;
  v99 = v35;
  v36 = v105 & 1;
  LOBYTE(v35) = BYTE4(v98) & 0xFC | v105 & 2;
  v105 = BYTE4(v98) & 1 | v105 & 0xFC | BYTE4(v98) & 2;
  BYTE4(v98) = v36 | v35;
  LODWORD(v35) = v107;
  v107 = v100;
  LODWORD(v100) = v35;
  v37 = v109;
  v109 = v101;
  v101 = v37;
  LOBYTE(v37) = v108 & 1 | BYTE4(v100) & 0xFC | v108 & 2;
  v108 = BYTE4(v100) & 1 | v108 & 0xFC | BYTE4(v100) & 2;
  BYTE4(v100) = v37;
  sub_182CBA0(qword_1C7F2C0, &v104);
  sub_182CBA0(v34, &v107);
  v38 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v102);
  sub_182CBA0(v38, v103);
  v111 = 0;
  v112[0] = 0;
  v110 = v82;
  if ( (v94[0] & 0x100000000LL) != 0 )
    sub_182EA00(v82, &v111, v94);
  else
    LODWORD(v111) = v94[0];
  v39 = sub_182F370(v82, &v98);
  sub_181AED0(*(_QWORD *)(v86 + 24) + 24, (unsigned int)v90, v84, v83, LODWORD(v92[0]) != 0, v39, (__int64)&v111);
  v40 = sub_15CC210(*(_QWORD *)(v86 + 24), v90);
  v41 = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v42 = *a1;
  if ( *a1 )
  {
    v43 = a1[1];
    if ( (*(_DWORD *)(v42 + 8))-- == 1 )
      sub_15D7BC0(v43, v42);
  }
  *a1 = v41;
  sub_182EF00(*(_QWORD *)(*(_QWORD *)(v86 + 24) + 752LL), v91);
  sub_182EF00(v110, &v111);
  v45 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v98);
  sub_182CBA0(v45, &v100);
  v46 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v96);
  sub_182CBA0(v46, v97);
  v47 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v94);
  sub_182CBA0(v47, v95);
  v48 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v92);
  sub_182CBA0(v48, v93);
  return a1;
}

