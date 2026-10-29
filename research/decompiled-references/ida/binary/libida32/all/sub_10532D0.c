__int64 __fastcall sub_10532D0(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t a5, char ***a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r13d
  unsigned int v12; // eax
  unsigned int v13; // r14d
  __m128i v14; // rax
  _BYTE *v15; // rdi
  void *v16; // rax
  void *v17; // rax
  char *v18; // rsi
  _QWORD *v19; // rsi
  void **v20; // r12
  unsigned int v21; // eax
  unsigned __int64 v22; // r15
  const void *v23; // r13
  size_t v24; // rdx
  size_t v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // r8
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r15
  unsigned int v33; // eax
  __int64 v34; // rax
  _QWORD *v35; // r12
  _QWORD *v36; // rbx
  _BYTE *v37; // r13
  size_t v38; // r14
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r9
  unsigned int v43; // r15d
  __int64 *v44; // r8
  __int64 v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r12d
  __int64 *v52; // rbx
  __int64 v53; // rax
  char **v54; // r13
  char **v55; // rbx
  char *v56; // rsi
  __int64 v57; // rdx
  __m128i *v58; // rsi
  __int64 v59; // rax
  __int64 *v60; // r8
  __int64 v61; // rcx
  unsigned int v62; // eax
  __int64 v63; // rax
  unsigned int v64; // eax
  unsigned int v65; // eax
  size_t v66; // rbp
  void **v67; // rbx
  unsigned int v68; // r12d
  size_t v70; // rbx
  unsigned int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned int v76; // r14d
  __int64 *v77; // r13
  __int64 v78; // rax
  __int64 v79; // r12
  unsigned int v80; // eax
  void *v81; // rdx
  __int64 v82; // rax
  const void *v83; // r15
  size_t v84; // rdx
  size_t v85; // rbx
  unsigned int v86; // eax
  unsigned int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned int v91; // r12d
  __int64 *v92; // r13
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned int v95; // r9d
  __int64 *v96; // r8
  __int64 v97; // rcx
  unsigned int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rcx
  unsigned int v101; // eax
  __int64 *v102; // [rsp+10h] [rbp-118h] BYREF
  __int64 v103; // [rsp+18h] [rbp-110h]
  __int64 v104; // [rsp+20h] [rbp-108h]
  size_t v105; // [rsp+28h] [rbp-100h]
  void **v106; // [rsp+30h] [rbp-F8h]
  __int64 v107; // [rsp+38h] [rbp-F0h]
  char ***v108; // [rsp+40h] [rbp-E8h]
  void **v109; // [rsp+48h] [rbp-E0h]
  __int64 *v110; // [rsp+50h] [rbp-D8h]
  __int64 v111; // [rsp+58h] [rbp-D0h]
  void *v112[2]; // [rsp+60h] [rbp-C8h] BYREF
  void *v113; // [rsp+70h] [rbp-B8h]
  void *dest[4]; // [rsp+80h] [rbp-A8h] BYREF
  size_t n[2]; // [rsp+A0h] [rbp-88h] BYREF
  _QWORD v116[2]; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v117; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v118; // [rsp+D0h] [rbp-58h] BYREF
  __int16 v119; // [rsp+E0h] [rbp-48h]

  v103 = a1;
  v106 = dest;
  v104 = (__int64)a4;
  v105 = a5;
  v108 = a6;
  *(_OWORD *)v112 = 0;
  v107 = a3;
  dest[0] = &dest[2];
  dest[1] = nullptr;
  LOBYTE(dest[2]) = 0;
  v113 = nullptr;
  v9 = sub_2293740(a1 + 216);
  v11 = sub_2278D80(v9, v10);
  v12 = sub_227C0C0(a4, a5);
  if ( v12 )
  {
    v13 = v12;
  }
  else
  {
    if ( !v11 )
    {
      v20 = v112;
      goto LABEL_20;
    }
    v13 = v11;
  }
  v14.m128i_i64[0] = sub_227BE40(v13);
  v119 = 1283;
  v117.m128i_i64[0] = (__int64)"+";
  v118 = v14;
  sub_222F820(n, &v117);
  v15 = dest[0];
  if ( (_QWORD *)n[0] == v116 )
  {
    v81 = (void *)n[1];
    if ( n[1] )
    {
      if ( n[1] == 1 )
        *(_BYTE *)dest[0] = v116[0];
      else
        memcpy(dest[0], (const void *)n[0], n[1]);
      v81 = (void *)n[1];
      v15 = dest[0];
    }
    dest[1] = v81;
    *((_BYTE *)v81 + (_QWORD)v15) = 0;
    v15 = (_BYTE *)n[0];
    goto LABEL_7;
  }
  if ( dest[0] == v106 + 2 )
  {
    v102 = (__int64 *)v116[0];
    dest[0] = (void *)n[0];
    *(__m128 *)&dest[1] = _mm_loadh_ps((const double *)&v102);
    goto LABEL_87;
  }
  v102 = (__int64 *)v116[0];
  v16 = dest[2];
  dest[0] = (void *)n[0];
  *(__m128 *)&dest[1] = _mm_loadh_ps((const double *)&v102);
  if ( !v15 )
  {
LABEL_87:
    v15 = v116;
    n[0] = (size_t)v116;
    goto LABEL_7;
  }
  n[0] = (size_t)v15;
  v116[0] = v16;
LABEL_7:
  n[1] = 0;
  *v15 = 0;
  if ( (_QWORD *)n[0] != v116 )
    operator delete((void *)n[0]);
  v17 = dest[1];
  v18 = (char *)v112[1];
  v117 = *(__m128i *)dest;
  if ( v112[1] == v113 )
  {
    v20 = v112;
    sub_1052040((__int64)v112, (char *)v112[1], &v117);
  }
  else
  {
    *(_QWORD *)v112[1] = dest[0];
    v19 = v18 + 16;
    v20 = v112;
    *(v19 - 1) = v17;
    v112[1] = v19;
  }
  v21 = sub_227BEB0(v13);
  v22 = v21;
  if ( v21 )
  {
    LODWORD(v102) = v11;
    while ( 1 )
    {
      v23 = (const void *)sub_227BE80((unsigned int)v22);
      v25 = v24;
      v26 = sub_2220DF0(v23, v24);
      v27 = (unsigned int)sub_2220F70(a2, v23, v25, v26);
      v29 = (__int64 *)(*(_QWORD *)a2 + 8 * v27);
      if ( !*v29 )
        goto LABEL_100;
      if ( *v29 == -8 )
        break;
      sub_1005BB0((__int64 **)&v117, v29, 0);
      v30 = v117.m128i_i64[0];
LABEL_16:
      *(_BYTE *)(*(_QWORD *)v30 + 8LL) = 1;
      if ( (unsigned int)v22 <= 0x21 )
      {
        v82 = 0x204030000LL;
        if ( _bittest64(&v82, v22) || (v22 = (unsigned int)(v22 - 1), !(_DWORD)v22) )
        {
          v11 = (unsigned int)v102;
          goto LABEL_90;
        }
      }
      else
      {
        v22 = (unsigned int)(v22 - 1);
      }
    }
    --*(_DWORD *)(a2 + 16);
LABEL_100:
    v110 = v29;
    LODWORD(v109) = v27;
    v94 = sub_220C370(v25 + 17, 8, v27, v28, v29, v27);
    v95 = (unsigned int)v109;
    v96 = v110;
    v97 = v94;
    if ( v25 )
    {
      v111 = v94;
      memcpy((void *)(v94 + 16), v23, v25);
      v97 = v111;
      v96 = v110;
      v95 = (unsigned int)v109;
    }
    *(_BYTE *)(v97 + v25 + 16) = 0;
    *(_QWORD *)v97 = v25;
    *(_BYTE *)(v97 + 8) = 0;
    *v96 = v97;
    ++*(_DWORD *)(a2 + 12);
    v98 = sub_2221390(a2, v95);
    sub_1005BB0((__int64 **)&v117, (__int64 *)(*(_QWORD *)a2 + 8LL * v98), 0);
    v30 = v117.m128i_i64[0];
    goto LABEL_16;
  }
LABEL_90:
  if ( v13 - 17 > 0xC )
    goto LABEL_20;
  LODWORD(v102) = v11;
  v109 = v112;
  while ( 1 )
  {
    v83 = (const void *)sub_227BE80(v13);
    v85 = v84;
    v86 = sub_2220DF0(v83, v84);
    v87 = sub_2220F70(a2, v83, v85, v86);
    v91 = v87;
    v92 = (__int64 *)(*(_QWORD *)a2 + 8LL * v87);
    if ( *v92 )
    {
      if ( *v92 != -8 )
      {
        sub_1005BB0((__int64 **)&v117, v92, 0);
        v93 = v117.m128i_i64[0];
        goto LABEL_95;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v99 = sub_220C370(v85 + 17, 8, v87, v88, v89, v90);
    v100 = v99;
    if ( v85 )
    {
      v110 = (__int64 *)v99;
      memcpy((void *)(v99 + 16), v83, v85);
      v100 = (__int64)v110;
    }
    *(_BYTE *)(v100 + v85 + 16) = 0;
    *(_QWORD *)v100 = v85;
    *(_BYTE *)(v100 + 8) = 0;
    *v92 = v100;
    ++*(_DWORD *)(a2 + 12);
    v101 = sub_2221390(a2, v91);
    sub_1005BB0((__int64 **)&v117, (__int64 *)(*(_QWORD *)a2 + 8LL * v101), 0);
    v93 = v117.m128i_i64[0];
LABEL_95:
    *(_BYTE *)(*(_QWORD *)v93 + 8LL) = 1;
    if ( v13 == 17 || v13 == 26 )
      break;
    --v13;
  }
  v11 = (unsigned int)v102;
  v20 = v109;
LABEL_20:
  v31 = v105;
  v32 = v104;
  v33 = sub_22793A0(v104, v105, v11);
  sub_227CA70(v33, v20);
  v34 = sub_227A8D0(v32, v31, v11);
  sub_227CE40(v34, v20);
  v35 = v112[1];
  v36 = v112[0];
  if ( v112[1] != v112[0] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v37 = (_BYTE *)*v36;
        if ( *(_BYTE *)*v36 == 43 )
          break;
        v36 += 2;
        if ( v35 == v36 )
          goto LABEL_30;
      }
      v38 = v36[1];
      if ( v38 )
      {
        --v38;
        ++v37;
      }
      v39 = sub_2220DF0(v37, v38);
      v40 = sub_2220F70(a2, v37, v38, v39);
      v43 = v40;
      v44 = (__int64 *)(*(_QWORD *)a2 + 8LL * v40);
      if ( !*v44 )
        goto LABEL_50;
      if ( *v44 == -8 )
        break;
      sub_1005BB0((__int64 **)&v117, v44, 0);
      v45 = v117.m128i_i64[0];
LABEL_29:
      v36 += 2;
      *(_BYTE *)(*(_QWORD *)v45 + 8LL) = 1;
      if ( v35 == v36 )
        goto LABEL_30;
    }
    --*(_DWORD *)(a2 + 16);
LABEL_50:
    v102 = v44;
    v59 = sub_220C370(v38 + 17, 8, v40, v41, v44, v42);
    v60 = v102;
    v61 = v59;
    if ( v38 )
    {
      v109 = (void **)v59;
      memcpy((void *)(v59 + 16), v37, v38);
      v61 = (__int64)v109;
      v60 = v102;
    }
    *(_BYTE *)(v61 + v38 + 16) = 0;
    *(_QWORD *)v61 = v38;
    *(_BYTE *)(v61 + 8) = 0;
    *v60 = v61;
    ++*(_DWORD *)(a2 + 12);
    v62 = sub_2221390(a2, v43);
    sub_1005BB0((__int64 **)&v117, (__int64 *)(*(_QWORD *)a2 + 8LL * v62), 0);
    v45 = v117.m128i_i64[0];
    goto LABEL_29;
  }
LABEL_30:
  if ( *(_DWORD *)(v103 + 612) == 2 )
  {
    v70 = j__strlen("thumb-mode");
    v71 = sub_2220DF0("thumb-mode", v70);
    v72 = sub_2220F70(a2, "thumb-mode", v70, v71);
    v76 = v72;
    v77 = (__int64 *)(*(_QWORD *)a2 + 8LL * v72);
    if ( *v77 )
    {
      if ( *v77 != -8 )
      {
        sub_1005BB0((__int64 **)&v117, v77, 0);
        v78 = v117.m128i_i64[0];
LABEL_80:
        *(_BYTE *)(*(_QWORD *)v78 + 8LL) = 1;
        goto LABEL_35;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v79 = sub_220C370(v70 + 17, 8, v72, v73, v74, v75);
    if ( v70 )
      memcpy((void *)(v79 + 16), "thumb-mode", v70);
    *(_BYTE *)(v79 + v70 + 16) = 0;
    *(_QWORD *)v79 = v70;
    *(_BYTE *)(v79 + 8) = 0;
    *v77 = v79;
    ++*(_DWORD *)(a2 + 12);
    v80 = sub_2221390(a2, v76);
    sub_1005BB0((__int64 **)&v117, (__int64 *)(*(_QWORD *)a2 + 8LL * v80), 0);
    v78 = v117.m128i_i64[0];
    goto LABEL_80;
  }
  v46 = sub_2220DF0("thumb-mode", 10);
  v47 = sub_2220F70(a2, "thumb-mode", 10, v46);
  v51 = v47;
  v52 = (__int64 *)(*(_QWORD *)a2 + 8LL * v47);
  if ( *v52 )
  {
    if ( *v52 != -8 )
    {
      sub_1005BB0((__int64 **)&v117, v52, 0);
      v53 = v117.m128i_i64[0];
      goto LABEL_34;
    }
    --*(_DWORD *)(a2 + 16);
  }
  v63 = sub_220C370(27, 8, v47, v48, v49, v50);
  strcpy((char *)(v63 + 16), "thumb-mode");
  *(_QWORD *)v63 = 10;
  *(_BYTE *)(v63 + 8) = 0;
  *v52 = v63;
  ++*(_DWORD *)(a2 + 12);
  v64 = sub_2221390(a2, v51);
  sub_1005BB0((__int64 **)&v117, (__int64 *)(*(_QWORD *)a2 + 8LL * v64), 0);
  v53 = v117.m128i_i64[0];
LABEL_34:
  *(_BYTE *)(*(_QWORD *)v53 + 8LL) = 0;
LABEL_35:
  v116[0] = 0;
  *(_OWORD *)n = 0;
  v54 = v108[1];
  v55 = *v108;
  if ( v54 == *v108 )
    goto LABEL_58;
  v102 = (__int64 *)a2;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !sub_990D60((__int64)v55, "+soft-float-abi") )
      {
LABEL_44:
        v55 += 4;
        if ( v54 == v55 )
          goto LABEL_57;
        continue;
      }
      break;
    }
    if ( !sub_990D60((__int64)v55, "+arm") )
    {
      v57 = 11;
      v56 = "-thumb-mode";
      goto LABEL_48;
    }
    if ( sub_990D60((__int64)v55, "+thumb") )
    {
      v56 = *v55;
      v57 = (__int64)v55[1];
      if ( *v55 )
        goto LABEL_48;
      v117.m128i_i64[0] = (__int64)&v118;
      v117.m128i_i64[1] = 0;
      v118.m128i_i8[0] = 0;
    }
    else
    {
      v57 = 11;
      v56 = "+thumb-mode";
LABEL_48:
      v117.m128i_i64[0] = (__int64)&v118;
      sub_104C2D0(&v117, v56, (__int64)&v56[v57]);
    }
    v58 = (__m128i *)n[1];
    if ( n[1] != v116[0] )
    {
      *(_QWORD *)n[1] = n[1] + 16;
      if ( (__m128i *)v117.m128i_i64[0] == &v118 )
      {
        v58[1] = _mm_load_si128(&v118);
      }
      else
      {
        v58->m128i_i64[0] = v117.m128i_i64[0];
        v58[1].m128i_i64[0] = v118.m128i_i64[0];
      }
      v58->m128i_i64[1] = v117.m128i_i64[1];
      n[1] += 32LL;
      goto LABEL_44;
    }
    sub_A5EC30((void ***)n, (const __m128i *)n[1], &v117);
    if ( (__m128i *)v117.m128i_i64[0] == &v118 )
      goto LABEL_44;
    operator delete((void *)v117.m128i_i64[0]);
    v55 += 4;
    if ( v54 != v55 )
      continue;
    break;
  }
LABEL_57:
  a2 = (__int64)v102;
LABEL_58:
  v65 = sub_100C260(v103, a2, v107, v104, v105, (char ***)n);
  v66 = n[1];
  v67 = (void **)n[0];
  v68 = v65;
  if ( n[1] != n[0] )
  {
    do
    {
      while ( *v67 != v67 + 2 )
      {
        operator delete(*v67);
        v67 += 4;
        if ( v67 == (void **)v66 )
          goto LABEL_61;
      }
      v67 += 4;
    }
    while ( (void **)v66 != v67 );
LABEL_61:
    v67 = (void **)n[0];
  }
  if ( v67 )
    operator delete(v67);
  if ( v112[0] )
    operator delete(v112[0]);
  if ( dest[0] != v106 + 2 )
    operator delete(dest[0]);
  return v68;
}

