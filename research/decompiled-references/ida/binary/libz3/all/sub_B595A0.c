__m128 *__fastcall sub_B595A0(__m128 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // r11
  __int64 v10; // rax
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  int *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r13
  size_t v25; // r11
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 *v30; // rcx
  unsigned int v31; // edx
  size_t *v32; // r14
  __int64 v33; // r9
  size_t *v34; // rcx
  unsigned int v35; // esi
  __int64 v36; // rax
  size_t *v37; // rdi
  size_t *v38; // rax
  size_t *v39; // r8
  size_t v40; // rdx
  __int64 v41; // rax
  int v42; // edi
  _QWORD *v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // r8
  _QWORD *j; // rdx
  _QWORD *v50; // r14
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rdi
  int v55; // esi
  __int64 v56; // rax
  int v57; // r8d
  int v58; // r9d
  __int64 v59; // rax
  __int64 v61; // rax
  size_t v62; // rax
  unsigned int v63; // ecx
  size_t v64; // rsi
  _DWORD *v65; // rax
  __int64 v66; // rcx
  size_t *v67; // rax
  int v68; // esi
  size_t *v69; // r10
  __int64 v70; // rdi
  const __m128i *v71; // r8
  __m128i *v72; // rdi
  __int64 *v73; // rax
  const __m128i *v74; // r12
  __int64 v75; // rdi
  const __m128i *v76; // rbx
  __int64 v77; // r8
  __m128i *v78; // rbp
  int v79; // r10d
  __int64 v80; // rdx
  __m128i *v81; // rsi
  __m128i *v82; // rdx
  _QWORD *v83; // rax
  _QWORD *v84; // rdx
  char **exception; // rbx
  int v86; // [rsp-8h] [rbp-F0h]
  int v87; // [rsp+0h] [rbp-E8h]
  int v88[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v89; // [rsp+10h] [rbp-D8h]
  int v90[2]; // [rsp+18h] [rbp-D0h]
  size_t v91; // [rsp+20h] [rbp-C8h]
  size_t *v92; // [rsp+28h] [rbp-C0h]
  __int64 *v93; // [rsp+30h] [rbp-B8h]
  __int64 v94; // [rsp+38h] [rbp-B0h]
  int v95; // [rsp+40h] [rbp-A8h]
  int v96; // [rsp+44h] [rbp-A4h]
  int *v97; // [rsp+48h] [rbp-A0h]
  int v98; // [rsp+50h] [rbp-98h]
  int v99; // [rsp+58h] [rbp-90h] BYREF
  int v100[2]; // [rsp+60h] [rbp-88h] BYREF
  int v101[2]; // [rsp+68h] [rbp-80h]
  int v102[2]; // [rsp+70h] [rbp-78h]
  int v103; // [rsp+78h] [rbp-70h]
  int v104[2]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v105; // [rsp+88h] [rbp-60h] BYREF
  __int64 v106; // [rsp+90h] [rbp-58h]
  __int64 v107; // [rsp+98h] [rbp-50h] BYREF
  __int64 v108; // [rsp+A0h] [rbp-48h]
  void *v109; // [rsp+A8h] [rbp-40h]
  int v110; // [rsp+B0h] [rbp-38h]
  __int64 v111; // [rsp+B8h] [rbp-30h]

  v4 = a2;
  v6 = a3;
  v89 = a4;
  v7 = sub_15D1F10(a3);
  v8 = (__int64 *)a2[30];
  v9 = v7;
  v10 = *((unsigned int *)a2 + 62);
  v11 = *(_DWORD *)(v9 + 12);
  v12 = v10 - 1;
  v10 *= 16;
  v13 = (__int64 *)((char *)v8 + v10);
  v14 = 16LL * (v11 & v12);
  v15 = &v8[(unsigned __int64)v14 / 8];
  if ( v14 != v10 )
  {
    for ( i = &v8[(unsigned __int64)v14 / 8]; v13 != i; i += 2 )
    {
      v17 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v11 && v9 == v17 )
          goto LABEL_24;
      }
      else if ( !v17 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v15 != v8; v8 += 2 )
  {
    v61 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v61 + 12) == v11 && v9 == v61 )
      {
        i = v8;
LABEL_24:
        v24 = i[1];
        v19 = v104;
        goto LABEL_25;
      }
    }
    else if ( !v61 )
    {
      break;
    }
  }
LABEL_8:
  v18 = v4[2];
  *(_QWORD *)v100 = v9;
  v19 = v104;
  *(_QWORD *)v90 = v9;
  v20 = sub_15D2CD0(v18, 5, 1, 0, 0);
  v21 = v4[2];
  *(_QWORD *)v101 = v20;
  v22 = sub_15D2CD0(v21, 5, 1, 0, 0);
  v23 = *v4;
  *(_QWORD *)v102 = v22;
  *(_QWORD *)v88 = *(_QWORD *)(v23 + 840);
  sub_180C5A0(v104, "");
  sub_180C5A0(&v99, "value-limit");
  v24 = sub_15E3D10(
          v23,
          (int)&v99,
          (int)v104,
          3,
          (int)v100,
          v88[0],
          1,
          v86,
          v87,
          v88[0],
          v89,
          v90[0],
          v91,
          (int)v92,
          (char)v93,
          v94,
          v95,
          (int)v97,
          v98,
          v99,
          v100[0],
          v101[0],
          v102[0],
          v103,
          v104[0],
          v105,
          v106,
          v107,
          v108,
          v109,
          v110,
          v111);
  v25 = *(_QWORD *)v90;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v26 = (_QWORD *)v4[20];
  if ( v26 )
  {
    v27 = *((_DWORD *)v26 - 1);
    if ( v27 == *((_DWORD *)v26 - 2) )
    {
      v63 = (3 * v27 + 1) >> 1;
      v64 = 8 * v63 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v64 || v27 >= v63 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v104, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v104);
        sub_233E40((__int64)v104);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v90[0] = (3 * v27 + 1) >> 1;
      *(_QWORD *)v88 = v25;
      v65 = (_DWORD *)sub_186B300(v26 - 1, v64);
      v25 = *(_QWORD *)v88;
      v26 = v65 + 2;
      *v65 = v90[0];
      v66 = (unsigned int)v65[1];
      v4[20] = (__int64)(v65 + 2);
      LODWORD(v65) = v66;
      v30 = &v26[v66];
      v29 = (_DWORD)v65 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v26[v28];
    }
  }
  else
  {
    *(_QWORD *)v88 = v25;
    v83 = (_QWORD *)sub_186B270(0x18u);
    v25 = *(_QWORD *)v88;
    v84 = v83;
    *v83 = 2;
    v29 = 1;
    v26 = v84 + 1;
    v4[20] = (__int64)v26;
    v30 = v26;
  }
  *v30 = v24;
  *((_DWORD *)v26 - 1) = v29;
  v31 = *((_DWORD *)v4 + 62);
  if ( 3 * v31 < 4 * (*((_DWORD *)v4 + 63) + *((_DWORD *)v4 + 64)) )
  {
    v91 = v25;
    v90[0] = 2 * v31;
    *(_QWORD *)v88 = 32LL * v31;
    v67 = (size_t *)sub_186B270(*(size_t *)v88);
    v68 = v90[0];
    v33 = *(_QWORD *)v88;
    v25 = v91;
    v32 = v67;
    v69 = (size_t *)((char *)v67 + *(_QWORD *)v88);
    if ( v90[0] )
    {
      if ( (v88[0] & 0x10) == 0 || (*(_OWORD *)v67 = 0, v67 += 2, v69 != v67) )
      {
        do
        {
          *(_OWORD *)v67 = 0;
          v67 += 4;
          *((_OWORD *)v67 - 1) = 0;
        }
        while ( v69 != v67 );
      }
    }
    v70 = *((unsigned int *)v4 + 62);
    v71 = (const __m128i *)v4[30];
    v34 = v69;
    v88[0] = v68 - 1;
    v72 = (__m128i *)&v71[v70];
    if ( v71 != v72 )
    {
      v73 = v4;
      v74 = v72;
      v75 = v6;
      *(_QWORD *)v90 = v25;
      v76 = v71;
      v77 = v75;
      v19 = (int *)a1;
      v78 = (__m128i *)v69;
      v79 = v68;
      do
      {
        if ( v76->m128i_i64[0] > 1uLL )
        {
          v80 = 16LL * (unsigned int)(*(_DWORD *)(v76->m128i_i64[0] + 12) & v88[0]);
          v81 = (__m128i *)&v32[(unsigned __int64)v80 / 8];
          if ( v33 == v80 )
          {
LABEL_78:
            if ( v32 == (size_t *)v81 )
            {
LABEL_92:
              v97 = v104;
              v96 = v79;
              v94 = v75;
              v93 = v73;
              v92 = v34;
              v91 = v33;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v82 = (__m128i *)v32;
            while ( v82->m128i_i64[0] )
            {
              if ( v81 == ++v82 )
                goto LABEL_92;
            }
          }
          else
          {
            v82 = (__m128i *)&v32[(unsigned __int64)v80 / 8];
            while ( v82->m128i_i64[0] )
            {
              if ( v78 == ++v82 )
                goto LABEL_78;
            }
          }
          *v82 = _mm_loadu_si128(v76);
        }
        ++v76;
      }
      while ( v74 != v76 );
      a1 = (__m128 *)v19;
      v72 = (__m128i *)v73[30];
      LODWORD(v19) = (unsigned int)v104;
      v4 = v73;
      v25 = *(_QWORD *)v90;
      v6 = v77;
      v68 = v79;
    }
    if ( v72 )
    {
      LODWORD(v93) = v68;
      v92 = v34;
      v91 = v33;
      *(_QWORD *)v90 = v25;
      sub_186B220(v72);
      v34 = v92;
      v33 = v91;
      v25 = *(_QWORD *)v90;
    }
    v4[30] = (__int64)v32;
    *((_DWORD *)v4 + 62) = v68;
    *((_DWORD *)v4 + 64) = 0;
  }
  else
  {
    v32 = (size_t *)v4[30];
    v88[0] = v31 - 1;
    v33 = 16LL * v31;
    v34 = (size_t *)((char *)v32 + v33);
  }
  v35 = *(_DWORD *)(v25 + 12);
  v36 = 16LL * (v35 & v88[0]);
  v37 = &v32[(unsigned __int64)v36 / 8];
  if ( v36 != v33 )
  {
    v38 = &v32[(unsigned __int64)v36 / 8];
    v39 = nullptr;
    while ( 1 )
    {
      v40 = *v38;
      if ( *v38 > 1 )
      {
        if ( *(_DWORD *)(v40 + 12) == v35 && v25 == v40 )
        {
          *v38 = v25;
          v38[1] = v24;
          goto LABEL_25;
        }
      }
      else
      {
        if ( !v40 )
        {
          if ( v39 )
            goto LABEL_89;
          v39 = v38;
          goto LABEL_90;
        }
        v39 = v38;
      }
      v38 += 2;
      if ( v38 == v34 )
        goto LABEL_57;
    }
  }
  v39 = nullptr;
  while ( 1 )
  {
LABEL_57:
    if ( v37 == v32 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v62 = *v32;
    if ( *v32 <= 1 )
      break;
    if ( *(_DWORD *)(v62 + 12) == v35 && v25 == v62 )
    {
      *v32 = v25;
      v32[1] = v24;
      goto LABEL_25;
    }
LABEL_56:
    v32 += 2;
  }
  if ( v62 )
  {
    v39 = v32;
    goto LABEL_56;
  }
  if ( v39 )
LABEL_89:
    --*((_DWORD *)v4 + 64);
  else
    v39 = v32;
LABEL_90:
  *v39 = v25;
  v39[1] = v24;
  ++*((_DWORD *)v4 + 63);
LABEL_25:
  v41 = *v4;
  v42 = *(_DWORD *)(v6 + 12);
  *(_QWORD *)v104 = v6;
  v43 = (_QWORD *)v4[24];
  v105 = 0;
  *(_QWORD *)v88 = v41;
  v44 = *((unsigned int *)v4 + 50);
  v106 = 0;
  v107 = 1;
  v45 = v44 - 1;
  v46 = 40 * v44;
  v108 = 0;
  v47 = 40LL * (v42 & v45);
  v48 = &v43[(unsigned __int64)v47 / 8];
  if ( v47 != v46 )
  {
    for ( j = &v43[(unsigned __int64)v47 / 8]; &v43[(unsigned __int64)v46 / 8] != j; j += 5 )
    {
      v50 = (_QWORD *)*j;
      if ( *j > 1u )
      {
        if ( *((_DWORD *)v50 + 3) == v42 && (_QWORD *)v6 == v50 )
        {
          v50 = j;
          goto LABEL_32;
        }
      }
      else if ( !v50 )
      {
        goto LABEL_32;
      }
    }
  }
  if ( v43 == v48 )
  {
LABEL_45:
    v50 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v50 = (_QWORD *)*v43;
        if ( *v43 > 1u )
          break;
        if ( !v50 )
          goto LABEL_32;
        v43 += 5;
        if ( v48 == v43 )
          goto LABEL_45;
      }
      if ( *((_DWORD *)v50 + 3) == v42 && (_QWORD *)v6 == v50 )
        break;
      v43 += 5;
      if ( v48 == v43 )
        goto LABEL_45;
    }
    v50 = v43;
  }
LABEL_32:
  *(_QWORD *)v90 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v105);
  sub_182CBA0(*(_QWORD *)v90, &v107);
  v54 = v4[3];
  v55 = (_DWORD)v50 + 8;
  if ( !v54 )
  {
    *(_QWORD *)v90 = v50 + 1;
    sub_16669E0(v4 + 2);
    v54 = v4[3];
    v55 = (_DWORD)v50 + 8;
  }
  v56 = sub_166A700(v54, v55, 1, v51, v52, v53);
  *(_QWORD *)v104 = v6;
  v106 = v56;
  v105 = v89;
  v59 = sub_15DC610(
          v88[0],
          v24,
          3,
          (int)v19,
          v57,
          v58,
          v87,
          v88[0],
          v89,
          v90[0],
          v91,
          (char)v92,
          (int)v93,
          v94,
          v95,
          v97);
  *a1 = _mm_loadh_ps((const double *)v88);
  if ( v59 )
    ++*(_DWORD *)(v59 + 8);
  return a1;
}

