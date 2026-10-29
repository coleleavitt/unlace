_QWORD *__fastcall sub_B205D0(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _BOOL4 v12; // edx
  _DWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx
  __m128i v19; // xmm0
  __int64 v20; // r15
  __int64 v21; // rbp
  __int64 v22; // r13
  _DWORD *v23; // rax
  int v24; // edx
  int v25; // eax
  _DWORD *v26; // rax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  bool v30; // bp
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // rcx
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rax
  _QWORD *v45; // rdx
  _QWORD *v46; // r12
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // r12
  void *v53; // rdi
  int v54; // eax
  int v55; // r8d
  int v56; // r9d
  void *v57; // r14
  __m128i v58; // xmm0
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // r12
  void *v63; // r13
  int v64; // eax
  int v65; // r8d
  int v66; // r9d
  void *v67; // r13
  __m128i v68; // xmm0
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r12
  void *v73; // rdi
  int v74; // eax
  int v75; // r8d
  int v76; // r9d
  void *v77; // r14
  __m128i v78; // xmm0
  __int64 v79; // rax
  __int64 v80; // rax
  void *v81; // [rsp+0h] [rbp-108h]
  __int64 v82; // [rsp+8h] [rbp-100h] BYREF
  __m128i v83; // [rsp+10h] [rbp-F8h] BYREF
  __m128i *v84; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v85; // [rsp+28h] [rbp-E0h]
  __m128i v86; // [rsp+30h] [rbp-D8h] BYREF
  char v87; // [rsp+47h] [rbp-C1h]
  __int64 v88; // [rsp+48h] [rbp-C0h]
  _QWORD *v89; // [rsp+50h] [rbp-B8h]
  __int64 v90; // [rsp+58h] [rbp-B0h]
  __int64 *v91; // [rsp+60h] [rbp-A8h]
  void *v92; // [rsp+68h] [rbp-A0h]
  __int64 v93; // [rsp+70h] [rbp-98h] BYREF
  __int64 v94; // [rsp+78h] [rbp-90h] BYREF
  __int64 v95; // [rsp+80h] [rbp-88h] BYREF
  __int64 v96; // [rsp+88h] [rbp-80h] BYREF
  __m128i v97; // [rsp+90h] [rbp-78h] BYREF
  int v98[4]; // [rsp+A0h] [rbp-68h] BYREF
  int v99[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-50h]
  int v101; // [rsp+C0h] [rbp-48h] BYREF
  char v102; // [rsp+C4h] [rbp-44h]
  __int64 v103; // [rsp+C8h] [rbp-40h]

  v91 = a2 + 1;
  v7 = a2[4];
  v89 = a1;
  v8 = sub_15D1F10(*(_QWORD *)(*(_QWORD *)v7 + 32LL));
  v12 = 0;
  v13 = *(_DWORD **)(v8 + 24);
  if ( v13 && *v13 == 5 )
    v12 = v13[1] == 1;
  v14 = a2[2];
  v90 = *a2;
  if ( !v14 )
  {
    LODWORD(v82) = v12;
    sub_16669E0(v91);
    v14 = a2[2];
    v12 = v82;
  }
  v15 = sub_166A700(v14, (unsigned int)&qword_1C7F2A0, v12, v9, v10, v11);
  v18 = *a2;
  v88 = v15;
  v82 = v18;
  v19 = (__m128i)_mm_loadh_ps((const double *)&v82);
  if ( v15 )
    *(_DWORD *)(v15 + 8) += 2;
  if ( a3 < a4 )
  {
    v83.m128i_i8[0] = 1;
    v20 = v88;
    v21 = 8LL * a3;
    v87 = 0;
    v85 = 8 * (a3 + (unsigned __int64)(a4 - 1 - a3) + 1);
    v84 = &v97;
    while ( 1 )
    {
      v22 = *(_QWORD *)(a2[4] + v21);
      if ( *(_WORD *)(v22 + 4) )
        goto LABEL_20;
      v23 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
      if ( !v23 )
        goto LABEL_20;
      if ( *v23 )
        goto LABEL_13;
      if ( v23[1] != 2 || *(_DWORD *)(v22 + 24) != 2 )
        goto LABEL_59;
      v69 = a2[5];
      v70 = *(_QWORD *)(v22 + 40);
      v71 = *(_QWORD *)(v22 + 32);
      v97 = v19;
      v86.m128i_i64[0] = v70;
      sub_B1F930(a2, 4 * v21 + v69, v71, v84->m128i_i64, v16, v17);
      v99[0] = 0;
      v72 = a2[5] + 4 * v21;
      LOBYTE(v99[1]) &= 0xFCu;
      v102 &= 0xFCu;
      v73 = qword_1C7F2C0;
      v82 = v97.m128i_i64[1];
      v100 = 0;
      v101 = 1;
      v103 = 0;
      if ( (*(_BYTE *)(v72 + 4) & 1) != 0 )
      {
        v92 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v99, v72);
        v73 = v92;
        if ( (*(_BYTE *)(v72 + 20) & 1) != 0 )
        {
LABEL_88:
          sub_182C690(v73, &v101, v72 + 16);
          goto LABEL_75;
        }
      }
      else
      {
        v99[0] = *(_DWORD *)v72;
        if ( (*(_BYTE *)(v72 + 20) & 1) != 0 )
          goto LABEL_88;
      }
      v74 = *(_DWORD *)(v72 + 16);
      v102 &= ~1u;
      v101 = v74;
LABEL_75:
      sub_1831620(qword_1C7F2C0, v99);
      sub_B1F930(a2, (__int64)v99, v86.m128i_i64[0], v84->m128i_i64, v75, v76);
      v77 = qword_1C7F2C0;
      v78 = _mm_load_si128(&v97);
      v82 = v97.m128i_i64[1];
      v20 = v97.m128i_i64[0];
      v86 = v78;
      sub_182CBA0(qword_1C7F2C0, v99);
      sub_182CBA0(v77, &v101);
      v19 = _mm_load_si128(&v86);
      if ( *(_WORD *)(v22 + 4) )
        goto LABEL_20;
      v23 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL);
      if ( !v23 )
        goto LABEL_20;
LABEL_13:
      if ( *v23 != 5 )
        goto LABEL_59;
      v24 = v23[1];
      if ( v24 == 4 )
      {
        if ( *(_DWORD *)(v22 + 24) != 2 )
          goto LABEL_17;
        v50 = *(_QWORD *)(v22 + 32);
        v83.m128i_i64[0] = *(_QWORD *)(v22 + 40);
        goto LABEL_53;
      }
      if ( v24 == 5 && *(_DWORD *)(v22 + 24) == 2 )
      {
        v50 = *(_QWORD *)(v22 + 40);
        v83.m128i_i64[0] = *(_QWORD *)(v22 + 32);
LABEL_53:
        v51 = a2[5];
        v97 = v19;
        sub_B1F930(a2, 4 * v21 + v51, v50, v84->m128i_i64, v16, v17);
        v99[0] = 0;
        v52 = a2[5] + 4 * v21;
        LOBYTE(v99[1]) &= 0xFCu;
        v102 &= 0xFCu;
        v53 = qword_1C7F2C0;
        v82 = v97.m128i_i64[1];
        v100 = 0;
        v101 = 1;
        v103 = 0;
        if ( (*(_BYTE *)(v52 + 4) & 1) != 0 )
        {
          v86.m128i_i64[0] = (__int64)qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v99, v52);
          v53 = (void *)v86.m128i_i64[0];
        }
        else
        {
          v99[0] = *(_DWORD *)v52;
        }
        if ( (*(_BYTE *)(v52 + 20) & 1) != 0 )
        {
          sub_182C690(v53, &v101, v52 + 16);
        }
        else
        {
          v54 = *(_DWORD *)(v52 + 16);
          v102 &= ~1u;
          v101 = v54;
        }
        sub_1831620(qword_1C7F2C0, v99);
        sub_B1F930(a2, (__int64)v99, v83.m128i_i64[0], v84->m128i_i64, v55, v56);
        v57 = qword_1C7F2C0;
        v58 = _mm_load_si128(&v97);
        v82 = v97.m128i_i64[1];
        v20 = v97.m128i_i64[0];
        v83 = v58;
        sub_182CBA0(qword_1C7F2C0, v99);
        sub_182CBA0(v57, &v101);
        v19 = _mm_load_si128(&v83);
        if ( *(_WORD *)(v22 + 4) )
        {
          v87 = 1;
          v83.m128i_i8[0] = 0;
          goto LABEL_20;
        }
        v59 = *(_QWORD *)(v22 + 16);
        v83.m128i_i8[0] = 0;
        v87 = 1;
        v23 = *(_DWORD **)(v59 + 24);
        if ( v23 )
        {
LABEL_59:
          if ( *v23 == 5 )
            goto LABEL_17;
          v21 += 8;
          if ( v21 == v85 )
            goto LABEL_21;
        }
        else
        {
LABEL_20:
          v21 += 8;
          if ( v21 == v85 )
            goto LABEL_21;
        }
      }
      else
      {
LABEL_17:
        v25 = v23[1];
        if ( v25 == 2 )
        {
          if ( *(_DWORD *)(v22 + 24) == 2 )
          {
            v60 = *(_QWORD *)(v22 + 32);
            v83.m128i_i64[0] = *(_QWORD *)(v22 + 40);
            goto LABEL_64;
          }
          goto LABEL_20;
        }
        if ( v25 != 3 || *(_DWORD *)(v22 + 24) != 2 )
          goto LABEL_20;
        v60 = *(_QWORD *)(v22 + 40);
        v83.m128i_i64[0] = *(_QWORD *)(v22 + 32);
LABEL_64:
        v61 = a2[5];
        v97 = v19;
        sub_B1F930(a2, 4 * v21 + v61, v60, v84->m128i_i64, v16, v17);
        v99[0] = 0;
        v62 = a2[5] + 4 * v21;
        LOBYTE(v99[1]) &= 0xFCu;
        v102 &= 0xFCu;
        v63 = qword_1C7F2C0;
        v82 = v97.m128i_i64[1];
        v100 = 0;
        v101 = 1;
        v103 = 0;
        if ( (*(_BYTE *)(v62 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, v99, v62);
        else
          v99[0] = *(_DWORD *)v62;
        if ( (*(_BYTE *)(v62 + 20) & 1) != 0 )
        {
          sub_182C690(v63, &v101, v62 + 16);
        }
        else
        {
          v64 = *(_DWORD *)(v62 + 16);
          v102 &= ~1u;
          v101 = v64;
        }
        sub_1831620(qword_1C7F2C0, v99);
        sub_B1F930(a2, (__int64)v99, v83.m128i_i64[0], v84->m128i_i64, v65, v66);
        v67 = qword_1C7F2C0;
        v21 += 8;
        v68 = _mm_load_si128(&v97);
        v82 = v97.m128i_i64[1];
        v20 = v97.m128i_i64[0];
        v86 = v68;
        sub_182CBA0(qword_1C7F2C0, v99);
        sub_182CBA0(v67, &v101);
        v83.m128i_i8[0] = 0;
        v19 = _mm_load_si128(&v86);
        if ( v21 == v85 )
          goto LABEL_21;
      }
    }
  }
  v83.m128i_i8[0] = 1;
  v20 = v88;
  v87 = 0;
LABEL_21:
  v26 = *(_DWORD **)(sub_15D1F10(v20) + 24);
  v30 = 0;
  if ( v26 && *v26 == 5 )
    v30 = v26[1] == 1;
  v31 = a2[2];
  if ( !v31 )
  {
    sub_16669E0(v91);
    v31 = a2[2];
  }
  v32 = sub_166A700(v31, (unsigned int)&qword_1C7F2A0, v30, v27, v28, v29);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v34 = v88;
  if ( !v88
    || (LODWORD(v84) = *(_DWORD *)(v88 + 8), v35 = (_DWORD)v84 == 1, *(_DWORD *)(v88 + 8) = (_DWORD)v84 - 1, !v35) )
  {
    if ( !v83.m128i_i8[0] )
      goto LABEL_31;
LABEL_83:
    v80 = sub_15E1B70(*a2);
    v37 = v80;
    if ( v80 )
      ++*(_DWORD *)(v80 + 8);
    v35 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v35 )
      goto LABEL_35;
    goto LABEL_36;
  }
  sub_15D7BC0(v90, v34);
  if ( v83.m128i_i8[0] )
    goto LABEL_83;
LABEL_31:
  if ( v87 )
  {
    v94 = v20;
    v95 = v33;
    sub_B1F2C0((__int64)a2, &v94, &v95);
    v36 = sub_15E1B70(a2[1]);
    v37 = v36;
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    v35 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v35 )
LABEL_35:
      sub_15D7BC0(v82, v20);
  }
  else
  {
    v96 = v20;
    *(_QWORD *)v99 = v33;
    sub_B1F2C0((__int64)a2, &v96, (__int64 *)v99);
    v79 = sub_15E1B70(a2[1]);
    v37 = v79;
    if ( v79 )
      ++*(_DWORD *)(v79 + 8);
    v35 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v35 )
      goto LABEL_35;
  }
LABEL_36:
  v38 = sub_15E1A70(*a2);
  v42 = v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  if ( v37 )
  {
    v35 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v35 )
      sub_15D7BC0(v82, v37);
  }
  v43 = *a2;
  *(_QWORD *)v99 = 0;
  sub_14B7810((int)v98, v43, (int)v99, v39, v40, v41, v81);
  sub_18572D0(v99);
  v93 = 0;
  sub_1862300(&v93, "gcd_rounding", 1);
  sub_14B5FE0(v98, &v93);
  v44 = *a2;
  v45 = v89;
  *(_QWORD *)v99 = 0;
  *v89 = 0;
  v46 = v45;
  v45[1] = v44;
  v100 = v44;
  sub_14BB8A0(v98, v42, v45, v99);
  sub_B20420(a2, v46);
  v47 = *(_QWORD *)v99;
  if ( *(_QWORD *)v99 )
  {
    v48 = v100;
    v35 = (*(_DWORD *)(*(_QWORD *)v99 + 8LL))-- == 1;
    if ( v35 )
      sub_15D7BC0(v48, v47);
  }
  sub_18572D0(&v93);
  sub_14B63F0(v98);
  if ( v42 )
  {
    v35 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v35 )
      sub_15D7BC0(v82, v42);
  }
  if ( v33 )
  {
    v35 = (*(_DWORD *)(v33 + 8))-- == 1;
    if ( v35 )
      sub_15D7BC0(v90, v33);
  }
  return v89;
}

