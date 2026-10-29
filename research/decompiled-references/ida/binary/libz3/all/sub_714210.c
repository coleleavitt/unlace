__m128i *__fastcall sub_714210(__m128i *a1, const __m128i *a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned int v8; // r9d
  unsigned __int64 v9; // r15
  __int64 v10; // r10
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 *v15; // rbx
  int v16; // ecx
  __int64 v17; // rax
  __int64 *v18; // rsi
  __int64 *i; // rax
  __int64 v20; // rdx
  const double *v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // edx
  const double *v24; // rdi
  __int64 v25; // rdx
  const double *v26; // r11
  const double *k; // rax
  double v28; // rdx
  __int64 *v29; // r12
  unsigned __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  char v35; // r10
  __int64 v36; // r12
  int v37; // esi
  __int64 v38; // rax
  __int64 *v39; // rdi
  __int64 *m; // rax
  __int64 v41; // rcx
  int v42; // eax
  __m128i v43; // xmm1
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  __int64 *j; // rax
  __int64 v48; // rdx
  __m128 v49; // xmm0
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rdi
  unsigned int v53; // r9d
  __int64 v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // rsi
  int v57; // eax
  _QWORD *v58; // rsi
  __int64 v59; // rcx
  unsigned int v60; // r11d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rsi
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rbx
  unsigned int v67; // r9d
  __m128 v68; // xmm0
  int v69; // [rsp+0h] [rbp-138h]
  const __m128i *v70; // [rsp+8h] [rbp-130h]
  int v71; // [rsp+8h] [rbp-130h]
  int v72; // [rsp+10h] [rbp-128h]
  int v73[2]; // [rsp+10h] [rbp-128h]
  unsigned int v74; // [rsp+10h] [rbp-128h]
  unsigned int v75; // [rsp+10h] [rbp-128h]
  unsigned int v76; // [rsp+10h] [rbp-128h]
  int v77; // [rsp+18h] [rbp-120h]
  int v78; // [rsp+1Ch] [rbp-11Ch]
  int v79[2]; // [rsp+20h] [rbp-118h]
  char v80[8]; // [rsp+28h] [rbp-110h]
  int v81[2]; // [rsp+30h] [rbp-108h]
  int v82; // [rsp+38h] [rbp-100h]
  unsigned int v83; // [rsp+3Ch] [rbp-FCh]
  unsigned int v84; // [rsp+3Ch] [rbp-FCh]
  __m128i *v85; // [rsp+40h] [rbp-F8h]
  __int64 v86; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v87; // [rsp+58h] [rbp-E0h]
  __m128i *v88; // [rsp+60h] [rbp-D8h]
  unsigned int v89; // [rsp+68h] [rbp-D0h]
  int v90; // [rsp+6Ch] [rbp-CCh]
  __int64 v91; // [rsp+70h] [rbp-C8h]
  __int64 v92; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v93; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v94; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v95; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v96[2]; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v97; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v98; // [rsp+C0h] [rbp-78h] BYREF
  unsigned int v99; // [rsp+C8h] [rbp-70h]
  __int64 v100; // [rsp+CCh] [rbp-6Ch]
  __m128i v101[5]; // [rsp+E0h] [rbp-58h] BYREF

  v5 = a2->m128i_i64[0];
  v88 = a1;
  v70 = a2;
  v92 = a3;
  v87 = v5;
  v94 = v5;
  v95 = 0;
  v96[0] = v5;
  v6 = sub_186B270(0x80u);
  v100 = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 80) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  v91 = a2->m128i_i64[0];
  v7 = a2[10].m128i_i64[0];
  if ( v7 )
    v78 = *(_DWORD *)(v7 - 4);
  else
    v78 = 0;
  v85 = (__m128i *)&a2[10];
  sub_712A90((const __m128i *)a2[10].m128i_i64, &v92);
  v8 = 8;
  v9 = 0;
  v86 = 0;
  v10 = a2[10].m128i_i64[0];
LABEL_4:
  v11 = 0;
  if ( v10 )
  {
LABEL_42:
    v11 = *(_DWORD *)(v10 - 4);
    goto LABEL_43;
  }
  while ( v78 )
  {
    while ( 1 )
    {
      v12 = v8 - 1;
      v13 = *(_QWORD *)(v10 + 8LL * (unsigned int)(v11 - 1));
      v14 = 16LL * v8;
      v15 = (__int64 *)(v6 + v14);
      v16 = *(_DWORD *)(v13 + 12);
      v17 = 16LL * ((v8 - 1) & v16);
      v18 = (__int64 *)(v6 + v17);
      if ( v17 != v14 )
      {
        for ( i = (__int64 *)(v6 + v17); v15 != i; i += 2 )
        {
          v20 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v20 + 12) == v16 && v13 == v20 )
            {
LABEL_60:
              v11 = --*(_DWORD *)(v10 - 4);
              goto LABEL_43;
            }
          }
          else if ( !v20 )
          {
            goto LABEL_13;
          }
        }
      }
      if ( v18 != (__int64 *)v6 )
      {
        for ( j = (__int64 *)v6; v18 != j; j += 2 )
        {
          v48 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v48 + 12) == v16 && v13 == v48 )
              goto LABEL_60;
          }
          else if ( !v48 )
          {
            break;
          }
        }
      }
LABEL_13:
      v21 = (const double *)v70[4].m128i_i64[0];
      v22 = v70[4].m128i_u32[2];
      v23 = v22 - 1;
      v22 *= 16;
      v24 = (const double *)((char *)v21 + v22);
      v25 = 16LL * (v16 & v23);
      v26 = &v21[(unsigned __int64)v25 / 8];
      if ( v25 != v22 )
      {
        for ( k = &v21[(unsigned __int64)v25 / 8]; v24 != k; k += 2 )
        {
          v28 = *k;
          if ( *(_QWORD *)k > 1u )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v28 + 12LL) == v16 && v13 == *(_QWORD *)&v28 )
            {
LABEL_62:
              v98 = v6;
              v49 = _mm_loadh_ps(k + 1);
              v99 = v8;
              v97 = (__m128i)v49;
              sub_686B20((__int64)&v98, &v97);
              goto LABEL_63;
            }
          }
          else if ( v28 == 0.0 )
          {
            goto LABEL_20;
          }
        }
      }
      if ( v21 != v26 )
        break;
LABEL_20:
      v90 = *(_DWORD *)(v13 + 24);
      if ( !v9 )
        goto LABEL_72;
LABEL_21:
      v29 = (__int64 *)v9;
      v30 = v9 + 8LL * *(unsigned int *)(v9 - 4);
      if ( v9 < v30 )
      {
        do
        {
          while ( 1 )
          {
            v31 = *v29;
            if ( *v29 )
            {
              if ( (*(_DWORD *)(v31 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v29 >= v30 )
              goto LABEL_27;
          }
          *(_DWORD *)v80 = v8;
          *(_QWORD *)v79 = v30;
          v72 = v12;
          sub_15D7BC0(v87, v31);
          v30 = *(_QWORD *)v79;
          ++v29;
          v8 = *(_DWORD *)v80;
          v12 = v72;
        }
        while ( (unsigned __int64)v29 < *(_QWORD *)v79 );
      }
LABEL_27:
      *(_DWORD *)(v9 - 4) = 0;
      v33 = v13 + 32;
      v34 = 8LL * *(unsigned int *)(v13 + 24);
      *(_QWORD *)v73 = v13 + 32 + v34;
      if ( v34 )
        goto LABEL_28;
      if ( v90 )
        goto LABEL_41;
LABEL_74:
      v51 = v91;
      v52 = v86;
      v74 = v8;
      ++*(_DWORD *)(v13 + 8);
      sub_710AA0(v52, v51);
      v86 = v13;
      v53 = v74;
LABEL_97:
      v98 = v6;
      v68 = _mm_loadh_ps((const double *)&v86);
      v99 = v53;
      v101[0] = (__m128i)v68;
      sub_686B20((__int64)&v98, v101);
LABEL_63:
      v6 = v98;
      v8 = v99;
      v10 = v70[10].m128i_i64[0];
      v11 = --*(_DWORD *)(v10 - 4);
LABEL_43:
      if ( v78 == v11 )
        goto LABEL_44;
    }
    while ( 1 )
    {
      v50 = *(_QWORD *)v21;
      if ( *(_QWORD *)v21 <= 1u )
        break;
      if ( *(_DWORD *)(v50 + 12) == v16 && v13 == v50 )
      {
        k = v21;
        goto LABEL_62;
      }
LABEL_68:
      v21 += 2;
      if ( v26 == v21 )
        goto LABEL_20;
    }
    if ( v50 )
      goto LABEL_68;
    v90 = *(_DWORD *)(v13 + 24);
    if ( v9 )
      goto LABEL_21;
LABEL_72:
    v33 = v13 + 32;
    *(_QWORD *)v73 = v13 + 32 + 8LL * (unsigned int)v90;
    if ( !(8LL * (unsigned int)v90) )
    {
      if ( !v90 )
        goto LABEL_74;
      goto LABEL_4;
    }
LABEL_28:
    v35 = 0;
    do
    {
      v36 = *(_QWORD *)v33;
      v37 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
      v97.m128i_i64[0] = *(_QWORD *)v33;
      v38 = 16LL * (v37 & (unsigned int)v12);
      v39 = (__int64 *)(v6 + v38);
      if ( v14 != v38 )
      {
        for ( m = (__int64 *)(v6 + v38); v15 != m; m += 2 )
        {
          v41 = *m;
          if ( (unsigned __int64)*m > 1 )
          {
            if ( *(_DWORD *)(v41 + 12) == v37 && v36 == v41 )
            {
LABEL_75:
              v54 = m[1];
              if ( v54 )
                ++*(_DWORD *)(v54 + 8);
              if ( v9 )
              {
                v55 = *(_DWORD *)(v9 - 4);
                if ( v55 == *(_DWORD *)(v9 - 8) )
                {
                  v60 = (3 * v55 + 1) >> 1;
                  v61 = 8 * v60 + 8;
                  if ( 8 * v55 + 8 >= (unsigned int)v61 || v55 >= v60 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_109F38(v101[0].m128i_i64, "Overflow encountered when expanding vector", v4);
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v101);
                    sub_233E40((__int64)v101);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v89 = v8;
                  v83 = (3 * v55 + 1) >> 1;
                  v82 = v12;
                  *(_QWORD *)v81 = v33;
                  *(_QWORD *)v80 = v54;
                  LOBYTE(v79[0]) = v35;
                  v62 = (unsigned int *)sub_186B300((void *)(v9 - 8), v61);
                  v63 = v62[1];
                  v9 = (unsigned __int64)(v62 + 2);
                  v35 = v79[0];
                  v54 = *(_QWORD *)v80;
                  v33 = *(_QWORD *)v81;
                  v12 = v82;
                  *v62 = v83;
                  LODWORD(v62) = v63;
                  v8 = v89;
                  v58 = (_QWORD *)(v9 + 8 * v63);
                  v57 = (_DWORD)v62 + 1;
                }
                else
                {
                  v56 = v55;
                  v57 = v55 + 1;
                  v58 = (_QWORD *)(v9 + 8 * v56);
                }
              }
              else
              {
                v84 = v8;
                v82 = v12;
                *(_QWORD *)v81 = v33;
                *(_QWORD *)v80 = v54;
                LOBYTE(v79[0]) = v35;
                v64 = (_QWORD *)sub_186B270(0x18u);
                v35 = v79[0];
                v54 = *(_QWORD *)v80;
                *v64 = 2;
                v9 = (unsigned __int64)(v64 + 1);
                v33 = *(_QWORD *)v81;
                v12 = v82;
                v57 = 1;
                v8 = v84;
                v58 = (_QWORD *)v9;
              }
              *v58 = v54;
              *(_DWORD *)(v9 - 4) = v57;
              v35 |= v36 != v54;
              goto LABEL_37;
            }
          }
          else if ( !v41 )
          {
            goto LABEL_36;
          }
        }
      }
      if ( v39 != (__int64 *)v6 )
      {
        for ( m = (__int64 *)v6; v39 != m; m += 2 )
        {
          v59 = *m;
          if ( (unsigned __int64)*m > 1 )
          {
            if ( *(_DWORD *)(v59 + 12) == v37 && v36 == v59 )
              goto LABEL_75;
          }
          else if ( !v59 )
          {
            break;
          }
        }
      }
LABEL_36:
      v82 = v8;
      v81[0] = v12;
      *(_QWORD *)v80 = v33;
      LOBYTE(v79[0]) = v35;
      sub_712A90(v85, &v97);
      v35 = v79[0];
      v33 = *(_QWORD *)v80;
      v12 = v81[0];
      v8 = v82;
LABEL_37:
      v33 += 8;
    }
    while ( *(_QWORD *)v73 != v33 );
    if ( v9 )
      v42 = *(_DWORD *)(v9 - 4);
    else
      v42 = 0;
    if ( v90 == v42 )
    {
      if ( !v35 )
        goto LABEL_74;
      v65 = sub_15DC610(
              v70->m128i_i64[0],
              *(_QWORD *)(v13 + 16),
              v90,
              v9,
              v12,
              v8,
              v69,
              (int)v70,
              v8,
              v77,
              v79[0],
              v80[0],
              v81[0],
              v82,
              (int)v85,
              &v97);
      v66 = v65;
      if ( v65 )
      {
        ++*(_DWORD *)(v65 + 8);
        sub_710AA0(v86, v91);
        ++*(_DWORD *)(v66 + 8);
        v67 = v75;
        v93 = v66;
      }
      else
      {
        sub_710AA0(v86, v91);
        v93 = 0;
        v67 = v75;
      }
      v76 = v67;
      sub_712A90(&v95, &v93);
      v86 = v66;
      v53 = v76;
      goto LABEL_97;
    }
LABEL_41:
    v10 = v70[10].m128i_i64[0];
    v11 = 0;
    if ( v10 )
      goto LABEL_42;
  }
LABEL_44:
  v43 = _mm_loadl_epi64(v70);
  v44 = sub_7109E0((_QWORD *)v6, v8, v92)[1];
  *v88 = _mm_unpacklo_epi64((__m128i)v44, v43);
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  v45 = v86;
  if ( v86 )
  {
    v71 = *(_DWORD *)(v86 + 8);
    *(_DWORD *)(v86 + 8) = v71 - 1;
    if ( v71 == 1 )
      sub_15D7BC0(v91, v45);
  }
  if ( v6 )
    sub_186B220((void *)v6);
  v96[1] = v9;
  sub_2334C0(v96);
  sub_2334C0(&v94);
  return v88;
}

