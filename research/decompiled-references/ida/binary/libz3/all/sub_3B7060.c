__int64 __fastcall sub_3B7060(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, int a6, __m128 a7)
{
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // r13d
  unsigned int v14; // ebp
  void *v15; // rbx
  __int64 v17; // rax
  char *v18; // rdx
  unsigned int v19; // ecx
  char *v20; // rsi
  __int64 v21; // rcx
  char *v22; // rdi
  char *v23; // rax
  int v24; // ecx
  __int64 *v25; // r9
  __int64 v26; // rax
  char *v27; // rdx
  unsigned int v28; // ecx
  char *v29; // rsi
  __int64 v30; // rcx
  char *v31; // rdi
  char *v32; // rax
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __m128i *v36; // rbx
  unsigned int v37; // r13d
  __int64 v38; // rcx
  __int64 *v39; // r15
  int v40; // esi
  __int64 v41; // r9
  __m128i *v42; // rdi
  __m128i *v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  int v48; // eax
  __m128i *v49; // rax
  int v50; // r10d
  __m128i *v51; // r8
  const __m128i *v52; // rax
  __m128i *v53; // r11
  __int64 v54; // rdx
  __m128i *v55; // rsi
  __m128i *v56; // rdx
  __int64 v57; // r15
  __m128 *v58; // rbx
  unsigned int v59; // r8d
  __int64 v60; // r11
  __m128 *v61; // r15
  __int64 v62; // rax
  __m128 *v63; // rsi
  __m128 *v64; // rax
  __m128 *v65; // rdi
  __int32 v66; // edx
  __int64 v67; // rcx
  __m128 *v68; // rbx
  unsigned int v69; // eax
  __m128 *v70; // rcx
  __int64 v71; // rdx
  __m128 *v72; // rdi
  __m128 *v73; // rdx
  __m128 *v74; // r10
  __int32 v75; // eax
  __int32 v76; // eax
  __int32 v77; // eax
  __int64 v78; // rax
  int v79; // r8d
  _QWORD *v80; // rdx
  const __m128i *v81; // r10
  __m128i *v82; // r11
  __int64 v83; // rdx
  __m128 *v84; // rsi
  __m128 *v85; // rdx
  __m128 *v86; // rax
  int v87; // r9d
  __m128 *v88; // rdx
  const __m128i *v89; // rax
  __m128i *v90; // r10
  __int64 v91; // rdx
  __m128 *v92; // rsi
  __m128 *v93; // rdx
  __int64 v96; // [rsp+8h] [rbp-B0h]
  __int64 v97; // [rsp+10h] [rbp-A8h]
  size_t v98; // [rsp+10h] [rbp-A8h]
  __int64 *v99; // [rsp+10h] [rbp-A8h]
  size_t v100; // [rsp+10h] [rbp-A8h]
  __int64 v101; // [rsp+10h] [rbp-A8h]
  int v102; // [rsp+18h] [rbp-A0h]
  __int64 *v103; // [rsp+18h] [rbp-A0h]
  __int64 v104; // [rsp+18h] [rbp-A0h]
  unsigned int v105; // [rsp+18h] [rbp-A0h]
  size_t v106; // [rsp+20h] [rbp-98h]
  size_t v107; // [rsp+20h] [rbp-98h]
  __int64 *v108; // [rsp+20h] [rbp-98h]
  int v109; // [rsp+28h] [rbp-90h]
  __int64 *v110; // [rsp+28h] [rbp-90h]
  int v111; // [rsp+28h] [rbp-90h]
  __int64 *v112; // [rsp+30h] [rbp-88h]
  __m128 *v113; // [rsp+30h] [rbp-88h]
  int v114; // [rsp+38h] [rbp-80h]
  char v115; // [rsp+5Ch] [rbp-5Ch] BYREF
  _QWORD v116[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v117[9]; // [rsp+70h] [rbp-48h] BYREF

  v116[0] = 0;
  v116[1] = 0;
  v117[0] = 1;
  v117[1] = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(a3) + 24) + 8LL);
  if ( *(_BYTE *)(v10 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v13 = *(_DWORD *)v10;
  v14 = sub_1673B50((int)a1 + 24, a6, (unsigned int)v116, (unsigned int)&v115, v11, v12);
  v15 = qword_1C7F2C0;
  if ( !(_BYTE)v14 )
    goto LABEL_3;
  v14 = (v117[0] & 0x100000000LL) == 0;
  if ( (v117[0] & 0x100000000LL) != 0 )
    goto LABEL_3;
  v14 = 0;
  if ( LODWORD(v117[0]) != 1 )
    goto LABEL_3;
  v14 = sub_182CFA0(qword_1C7F2C0, v116);
  v15 = qword_1C7F2C0;
  if ( !(_BYTE)v14 )
    goto LABEL_3;
  v97 = sub_182D020(qword_1C7F2C0, v116);
  v17 = *(unsigned int *)(a1 + 176);
  v18 = *(char **)(a1 + 168);
  v19 = v17 - 1;
  v17 *= 24;
  v20 = &v18[v17];
  v21 = 24LL * (v13 & v19);
  v22 = &v18[v21];
  if ( v21 != v17 )
  {
    v23 = &v18[v21];
    do
    {
      v24 = *((_DWORD *)v23 + 1);
      if ( v24 == 2 )
      {
        if ( v13 == *(_DWORD *)v23 && v13 == *((_DWORD *)v23 + 2) )
          goto LABEL_14;
      }
      else if ( !v24 )
      {
        goto LABEL_92;
      }
      v23 += 24;
    }
    while ( v20 != v23 );
  }
  for ( ; v22 != v18; v18 += 24 )
  {
    v47 = *((_DWORD *)v18 + 1);
    if ( v47 == 2 )
    {
      if ( v13 == *(_DWORD *)v18 && v13 == *((_DWORD *)v18 + 2) )
      {
        v23 = v18;
LABEL_14:
        v25 = *((__int64 **)v23 + 2);
        goto LABEL_15;
      }
    }
    else if ( !v47 )
    {
      break;
    }
  }
LABEL_92:
  v103 = (__int64 *)sub_186B270(0x290u);
  sub_3B3820(v103, v13);
  v67 = *(unsigned int *)(a1 + 176);
  v25 = v103;
  if ( 3 * (int)v67 < (unsigned int)(4 * (*(_DWORD *)(a1 + 180) + *(_DWORD *)(a1 + 184))) )
  {
    v114 = *(_DWORD *)(a1 + 176);
    v112 = v103;
    v109 = 2 * v67;
    v106 = 24LL * (unsigned int)(2 * v67);
    v104 = v106;
    v78 = sub_186B270(v106);
    v79 = v109;
    v25 = v112;
    v68 = (__m128 *)v78;
    if ( v109 )
    {
      v80 = (_QWORD *)v78;
      do
      {
        *v80 = 0;
        v80 += 6;
        *(v80 - 3) = 0;
      }
      while ( (_QWORD *)(v78 + 48LL * (v114 & 0x7FFFFFFF)) != v80 );
    }
    v81 = *(const __m128i **)(a1 + 168);
    v69 = v109 - 1;
    v82 = (__m128i *)((char *)v81 + 24 * *(unsigned int *)(a1 + 176));
    v70 = (__m128 *)((char *)v68 + v106);
    if ( v81 != v82 )
    {
      do
      {
        if ( v81->m128i_i32[1] == 2 )
        {
          v83 = 24LL * (v81->m128i_i32[0] & v69);
          v84 = (__m128 *)((char *)v68 + v83);
          if ( v106 == v83 )
          {
LABEL_167:
            if ( v68 == v84 )
            {
LABEL_184:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v85 = v68;
            while ( v85->m128_i32[1] )
            {
              v85 = (__m128 *)((char *)v85 + 24);
              if ( v84 == v85 )
                goto LABEL_184;
            }
          }
          else
          {
            v85 = (__m128 *)((char *)v68 + v83);
            while ( v85->m128_i32[1] )
            {
              v85 = (__m128 *)((char *)v85 + 24);
              if ( v70 == v85 )
                goto LABEL_167;
            }
          }
          a7 = (__m128)_mm_loadu_si128(v81);
          *v85 = a7;
          v85[1].m128_u64[0] = v81[1].m128i_u64[0];
        }
        v81 = (const __m128i *)((char *)v81 + 24);
      }
      while ( v82 != v81 );
      v82 = *(__m128i **)(a1 + 168);
    }
    if ( v82 )
    {
      v113 = (__m128 *)((char *)v68 + v106);
      v108 = v25;
      sub_186B220(v82);
      v79 = v109;
      v70 = v113;
      v69 = v109 - 1;
      v25 = v108;
    }
    *(_QWORD *)(a1 + 168) = v68;
    *(_DWORD *)(a1 + 176) = v79;
    *(_DWORD *)(a1 + 184) = 0;
  }
  else
  {
    v68 = *(__m128 **)(a1 + 168);
    v69 = v67 - 1;
    v104 = 24 * v67;
    v70 = (__m128 *)((char *)v68 + 24 * v67);
  }
  v71 = 24LL * (v13 & v69);
  v72 = (__m128 *)((char *)v68 + v71);
  if ( v71 != v104 )
  {
    v73 = (__m128 *)((char *)v68 + v71);
    v74 = nullptr;
    while ( 1 )
    {
      v75 = v73->m128_i32[1];
      if ( v75 == 2 )
      {
        if ( v13 == v73->m128_i32[0] && v13 == v73->m128_i32[2] )
        {
          v73->m128_i32[2] = v13;
          v73[1].m128_u64[0] = (unsigned __int64)v25;
          v73->m128_i32[1] = 2;
          goto LABEL_15;
        }
      }
      else
      {
        if ( !v75 )
        {
          if ( v74 )
            goto LABEL_154;
          v74 = v73;
          goto LABEL_155;
        }
        v74 = v73;
      }
      v73 = (__m128 *)((char *)v73 + 24);
      if ( v73 == v70 )
        goto LABEL_109;
    }
  }
  v74 = nullptr;
  while ( 1 )
  {
LABEL_109:
    if ( v72 == v68 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v76 = v68->m128_i32[1];
    if ( v76 != 2 )
      break;
    if ( v13 == v68->m128_i32[0] && v13 == v68->m128_i32[2] )
    {
      v68->m128_i32[2] = v13;
      v68[1].m128_u64[0] = (unsigned __int64)v25;
      v68->m128_i32[1] = 2;
      goto LABEL_15;
    }
LABEL_108:
    v68 = (__m128 *)((char *)v68 + 24);
  }
  if ( v76 )
  {
    v74 = v68;
    goto LABEL_108;
  }
  if ( v74 )
LABEL_154:
    --*(_DWORD *)(a1 + 184);
  else
    v74 = v68;
LABEL_155:
  v74->m128_i32[2] = v13;
  v74[1].m128_u64[0] = (unsigned __int64)v25;
  v74->m128_i32[1] = 2;
  v74->m128_i32[0] = v13;
  ++*(_DWORD *)(a1 + 180);
LABEL_15:
  v96 = sub_1829C40(v25 + 4, v97, a4, a5);
  v26 = *(unsigned int *)(a1 + 176);
  v27 = *(char **)(a1 + 168);
  v28 = v26 - 1;
  v26 *= 24;
  v29 = &v27[v26];
  v30 = 24LL * (v13 & v28);
  v31 = &v27[v30];
  if ( v30 != v26 )
  {
    v32 = &v27[v30];
    do
    {
      v33 = *((_DWORD *)v32 + 1);
      if ( v33 == 2 )
      {
        if ( v13 == *(_DWORD *)v32 && v13 == *((_DWORD *)v32 + 2) )
          goto LABEL_22;
      }
      else if ( !v33 )
      {
        goto LABEL_81;
      }
      v32 += 24;
    }
    while ( v29 != v32 );
  }
  for ( ; v31 != v27; v27 += 24 )
  {
    v48 = *((_DWORD *)v27 + 1);
    if ( v48 == 2 )
    {
      if ( v13 == *(_DWORD *)v27 && v13 == *((_DWORD *)v27 + 2) )
      {
        v32 = v27;
LABEL_22:
        v34 = *((_QWORD *)v32 + 2);
        goto LABEL_23;
      }
    }
    else if ( !v48 )
    {
      break;
    }
  }
LABEL_81:
  v99 = (__int64 *)sub_186B270(0x290u);
  sub_3B3820(v99, v13);
  v57 = *(unsigned int *)(a1 + 176);
  v34 = (__int64)v99;
  if ( 3 * (int)v57 < (unsigned int)(4 * (*(_DWORD *)(a1 + 180) + *(_DWORD *)(a1 + 184))) )
  {
    v110 = v99;
    v100 = 24LL * (unsigned int)(2 * v57);
    v86 = (__m128 *)sub_186B270(v100);
    v87 = 2 * v57;
    v60 = v100;
    v58 = v86;
    v34 = (__int64)v110;
    if ( 2 * (_DWORD)v57 )
    {
      v88 = &v86[3 * (v57 & 0x7FFFFFFF)];
      do
      {
        v86->m128_u64[0] = 0;
        v86 += 3;
        v86[-2].m128_u64[1] = 0;
      }
      while ( v86 != v88 );
    }
    v89 = *(const __m128i **)(a1 + 168);
    v59 = v87 - 1;
    v90 = (__m128i *)((char *)v89 + 24 * *(unsigned int *)(a1 + 176));
    v61 = (__m128 *)((char *)v58 + v100);
    if ( v89 != v90 )
    {
      do
      {
        if ( v89->m128i_i32[1] == 2 )
        {
          v91 = 24LL * (v89->m128i_i32[0] & v59);
          v92 = (__m128 *)((char *)v58 + v91);
          if ( v100 == v91 )
          {
LABEL_172:
            if ( v58 == v92 )
            {
LABEL_185:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v93 = v58;
            while ( v93->m128_i32[1] )
            {
              v93 = (__m128 *)((char *)v93 + 24);
              if ( v92 == v93 )
                goto LABEL_185;
            }
          }
          else
          {
            v93 = (__m128 *)((char *)v58 + v91);
            while ( v93->m128_i32[1] )
            {
              v93 = (__m128 *)((char *)v93 + 24);
              if ( v61 == v93 )
                goto LABEL_172;
            }
          }
          a7 = (__m128)_mm_loadu_si128(v89);
          *v93 = a7;
          v93[1].m128_u64[0] = v89[1].m128i_u64[0];
        }
        v89 = (const __m128i *)((char *)v89 + 24);
      }
      while ( v90 != v89 );
      v90 = *(__m128i **)(a1 + 168);
    }
    if ( v90 )
    {
      v111 = v87;
      v107 = v100;
      v105 = v87 - 1;
      v101 = v34;
      sub_186B220(v90);
      v87 = v111;
      v60 = v107;
      v59 = v105;
      v34 = v101;
    }
    *(_QWORD *)(a1 + 168) = v58;
    *(_DWORD *)(a1 + 176) = v87;
    *(_DWORD *)(a1 + 184) = 0;
  }
  else
  {
    v58 = *(__m128 **)(a1 + 168);
    v59 = v57 - 1;
    v60 = 24 * v57;
    v61 = (__m128 *)((char *)v58 + 24 * v57);
  }
  v62 = 24LL * (v13 & v59);
  v63 = (__m128 *)((char *)v58 + v62);
  if ( v62 != v60 )
  {
    v64 = (__m128 *)((char *)v58 + v62);
    v65 = nullptr;
    while ( 1 )
    {
      v66 = v64->m128_i32[1];
      if ( v66 == 2 )
      {
        if ( v13 == v64->m128_i32[0] && v13 == v64->m128_i32[2] )
        {
          v64->m128_i32[2] = v13;
          v64[1].m128_u64[0] = v34;
          v64->m128_i32[1] = 2;
          goto LABEL_23;
        }
      }
      else
      {
        if ( !v66 )
        {
          if ( v65 )
            goto LABEL_151;
          v65 = v64;
          goto LABEL_152;
        }
        v65 = v64;
      }
      v64 = (__m128 *)((char *)v64 + 24);
      if ( v64 == v61 )
        goto LABEL_117;
    }
  }
  v65 = nullptr;
LABEL_117:
  while ( 2 )
  {
    if ( v63 == v58 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v77 = v58->m128_i32[1];
    if ( v77 == 2 )
    {
      if ( v13 == v58->m128_i32[0] && v13 == v58->m128_i32[2] )
      {
        v58->m128_i32[2] = v13;
        v58[1].m128_u64[0] = v34;
        v58->m128_i32[1] = 2;
        goto LABEL_23;
      }
      goto LABEL_116;
    }
    if ( v77 )
    {
      v65 = v58;
LABEL_116:
      v58 = (__m128 *)((char *)v58 + 24);
      continue;
    }
    break;
  }
  if ( v65 )
LABEL_151:
    --*(_DWORD *)(a1 + 184);
  else
    v65 = v58;
LABEL_152:
  v65->m128_i32[2] = v13;
  v65[1].m128_u64[0] = v34;
  v65->m128_i32[1] = 2;
  v65->m128_i32[0] = v13;
  ++*(_DWORD *)(a1 + 180);
LABEL_23:
  sub_3B62E0(v34, v96, a7);
  v35 = *(unsigned int *)(a1 + 208);
  if ( 3 * (int)v35 < (unsigned int)(4 * (*(_DWORD *)(a1 + 212) + *(_DWORD *)(a1 + 216))) )
  {
    v102 = 2 * v35;
    v98 = 16LL * (unsigned int)(2 * v35);
    v49 = (__m128i *)sub_186B270(v98);
    v38 = v98;
    v50 = v102;
    v36 = v49;
    v51 = &v49[v98 / 0x10];
    if ( v102 )
    {
      if ( (v98 & 0x10) == 0 || (*v49 = 0, ++v49, v51 != v49) )
      {
        do
        {
          *v49 = 0;
          v49 += 2;
          v49[-1] = 0;
        }
        while ( v51 != v49 );
      }
    }
    v52 = *(const __m128i **)(a1 + 200);
    v37 = v102 - 1;
    v39 = (__int64 *)v51;
    v53 = (__m128i *)&v52[*(unsigned int *)(a1 + 208)];
    if ( v52 != v53 )
    {
      do
      {
        if ( v52->m128i_i64[0] > 1uLL )
        {
          v54 = 16LL * (*(_DWORD *)(v52->m128i_i64[0] + 12) & v37);
          v55 = &v36[(unsigned __int64)v54 / 0x10];
          if ( v98 == v54 )
          {
LABEL_72:
            if ( v36 == v55 )
            {
LABEL_147:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v56 = v36;
            while ( v56->m128i_i64[0] )
            {
              if ( v55 == ++v56 )
                goto LABEL_147;
            }
          }
          else
          {
            v56 = &v36[(unsigned __int64)v54 / 0x10];
            while ( v56->m128i_i64[0] )
            {
              if ( v51 == ++v56 )
                goto LABEL_72;
            }
          }
          *v56 = _mm_loadu_si128(v52);
        }
        ++v52;
      }
      while ( v53 != v52 );
      v53 = *(__m128i **)(a1 + 200);
    }
    if ( v53 )
    {
      sub_186B220(v53);
      v50 = v102;
      v38 = v98;
    }
    *(_QWORD *)(a1 + 200) = v36;
    *(_DWORD *)(a1 + 208) = v50;
    *(_DWORD *)(a1 + 216) = 0;
  }
  else
  {
    v36 = *(__m128i **)(a1 + 200);
    v37 = v35 - 1;
    v38 = 16 * v35;
    v39 = (__int64 *)((char *)v36->m128i_i64 + v38);
  }
  v40 = *(_DWORD *)(a2 + 12);
  v41 = 16LL * (v40 & v37);
  v42 = &v36[(unsigned __int64)v41 / 0x10];
  if ( v41 == v38 )
  {
    v44 = nullptr;
LABEL_33:
    if ( v42 == v36 )
    {
LABEL_57:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v46 = v36->m128i_i64[0];
      if ( v36->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v46 + 12) == v40 && a2 == v46 )
        {
          v36->m128i_i64[0] = a2;
          v36->m128i_i64[1] = v96;
          goto LABEL_58;
        }
      }
      else
      {
        if ( !v46 )
        {
          if ( v44 )
            goto LABEL_104;
          v44 = (__int64 *)v36;
          goto LABEL_105;
        }
        v44 = (__int64 *)v36;
      }
      if ( v42 == ++v36 )
        goto LABEL_57;
    }
  }
  v43 = &v36[(unsigned __int64)v41 / 0x10];
  v44 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v45 = v43->m128i_i64[0];
      if ( v43->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v45 + 12) == v40 && a2 == v45 )
      {
        v43->m128i_i64[0] = a2;
        v43->m128i_i64[1] = v96;
        goto LABEL_58;
      }
      if ( ++v43 == (__m128i *)v39 )
        goto LABEL_33;
    }
    if ( !v45 )
      break;
    v44 = (__int64 *)v43++;
    if ( v43 == (__m128i *)v39 )
      goto LABEL_33;
  }
  if ( v44 )
LABEL_104:
    --*(_DWORD *)(a1 + 216);
  else
    v44 = (__int64 *)v43;
LABEL_105:
  *v44 = a2;
  v44[1] = v96;
  ++*(_DWORD *)(a1 + 212);
LABEL_58:
  v15 = qword_1C7F2C0;
LABEL_3:
  sub_182CBA0(v15, v116);
  sub_182CBA0(v15, v117);
  return v14;
}

