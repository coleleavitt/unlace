__int64 __fastcall sub_1063990(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v5; // rdi
  void **v6; // r12
  __m128i *v7; // r14
  void **v8; // r13
  char *v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char *v12; // rdx
  char *v13; // rax
  char *v14; // rax
  char *v15; // rax
  unsigned __int64 v16; // rbx
  char *v17; // rdx
  _BYTE *v18; // rbp
  char *v19; // rcx
  __m128i *v20; // rbx
  void *v21; // rax
  void *v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  char *v30; // rax
  __m128i *v31; // rbp
  __m128i *v32; // rbx
  __m128i *v33; // rax
  __int64 v34; // rsi
  void *v35; // rax
  void *v36; // rdi
  __m128i *v38; // rbx
  void *v39; // rax
  void *v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __m128i *v43; // rax
  __int64 v44; // rsi
  __m128i *v45; // rbx
  __int64 v46; // rsi
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __m128i *v52; // rax
  void **v53; // rcx
  void **v54; // rbp
  _QWORD *v55; // r12
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  _BYTE *v58; // rsi
  void **v59; // rdi
  void **v60; // rsi
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  bool v63; // cf
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  __m128i *v67; // rdx
  const __m128i *v68; // rax
  unsigned __int64 v69; // r8
  __m128i *v70; // rdi
  const __m128i *v71; // rsi
  _QWORD *m128i_i64; // rax
  void **v73; // rbx
  __m128i *v74; // rbp
  _QWORD *v75; // r12
  __int64 v76; // rdx
  _BYTE *v77; // rsi
  _QWORD *v78; // rdi
  void **v79; // rsi
  __m128i *v80; // rdx
  const __m128i *v81; // rax
  unsigned __int64 v82; // rsi
  __m128i *v83; // rdi
  const __m128i *v84; // rcx
  void **v85; // rax
  __m128i *v86; // r14
  void **v87; // rbx
  __m128 v88; // xmm0
  void **v89; // [rsp+0h] [rbp-128h]
  __m128i *v90; // [rsp+18h] [rbp-110h] BYREF
  void **v91; // [rsp+20h] [rbp-108h]
  unsigned __int64 v92; // [rsp+28h] [rbp-100h]
  __m128i *v93; // [rsp+30h] [rbp-F8h]
  void **v94; // [rsp+38h] [rbp-F0h]
  void **v95; // [rsp+40h] [rbp-E8h]
  void **v96; // [rsp+48h] [rbp-E0h]
  __m128i *v97; // [rsp+50h] [rbp-D8h]
  __int8 *v98; // [rsp+58h] [rbp-D0h]
  _QWORD v99[2]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE *v100; // [rsp+70h] [rbp-B8h] BYREF
  char *v101; // [rsp+78h] [rbp-B0h]
  __m128i *v102; // [rsp+80h] [rbp-A8h]
  void *ptr; // [rsp+90h] [rbp-98h] BYREF
  __int64 v104; // [rsp+98h] [rbp-90h]
  _BYTE v105[16]; // [rsp+A0h] [rbp-88h] BYREF
  void *v106; // [rsp+B0h] [rbp-78h] BYREF
  __m128i *v107; // [rsp+B8h] [rbp-70h]
  char v108; // [rsp+C0h] [rbp-68h]
  void *v109[2]; // [rsp+D0h] [rbp-58h] BYREF
  __m128i v110; // [rsp+E0h] [rbp-48h] BYREF

  *(_OWORD *)a1 = 0;
  v99[1] = a4;
  v99[0] = a3;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  if ( a4 == 7
    && *(_DWORD *)v99[0] == 1634100580
    && *(_WORD *)(v99[0] + 4LL) == 27765
    && *(_BYTE *)(v99[0] + 6LL) == 116 )
  {
    return a1;
  }
  ptr = v105;
  v104 = 0x100000000LL;
  sub_2223490(v99, &ptr, ",", 1, 0xFFFFFFFFLL, 1);
  v5 = ptr;
  v89 = (void **)((char *)ptr + 16 * (unsigned int)v104);
  if ( v89 != ptr )
  {
    v6 = (void **)ptr;
    v7 = (__m128i *)v109;
    v8 = &v106;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = nullptr;
        v10 = sub_2223270(v6, asc_22BE270, 6, 0);
        v11 = (unsigned __int64)v6[1];
        if ( v10 < v11 )
        {
          v11 = v10;
          v9 = (char *)v6[1] - v10;
        }
        v12 = (char *)*v6 + v11;
        v109[1] = v9;
        v109[0] = v12;
        v13 = (char *)(sub_22233F0(v7, asc_22BE270, 6, -1) + 1);
        v100 = v109[0];
        if ( v13 > v109[1] )
          v13 = (char *)v109[1];
        v14 = &v13[(char *)v109[1] - (char *)v9];
        if ( v14 > v109[1] )
          v14 = (char *)v109[1];
        v101 = v14;
        v15 = (char *)sub_2222D70(&v100, "=", 1, 0);
        if ( v15 != (char *)-1LL )
          break;
        v16 = (unsigned __int64)v101;
        v18 = v100;
        if ( (unsigned __int64)v101 > 2 )
          goto LABEL_56;
LABEL_83:
        if ( v18 )
          goto LABEL_57;
        v108 = 0;
        v106 = v8 + 2;
        v107 = nullptr;
LABEL_58:
        v43 = (__m128i *)sub_978080(v8, 0, 0, "+", 1u);
        v109[0] = &v7[1];
        if ( (__m128i *)v43->m128i_i64[0] == &v43[1] )
        {
          v110 = _mm_loadu_si128(v43 + 1);
        }
        else
        {
          v109[0] = (void *)v43->m128i_i64[0];
          v110.m128i_i64[0] = v43[1].m128i_i64[0];
        }
        v109[1] = (void *)v43->m128i_i64[1];
        v43[1].m128i_i8[0] = 0;
        v44 = *(_QWORD *)(a1 + 8);
        v43->m128i_i64[0] = (__int64)v43[1].m128i_i64;
        v43->m128i_i64[1] = 0;
        if ( v44 == *(_QWORD *)(a1 + 16) )
        {
          sub_A5EC30((void ***)a1, (const __m128i *)v44, v7);
          if ( v109[0] != &v7[1] )
            operator delete(v109[0]);
        }
        else
        {
          *(_QWORD *)v44 = v44 + 16;
          if ( v109[0] == &v7[1] )
          {
            *(__m128i *)(v44 + 16) = _mm_load_si128(&v110);
          }
          else
          {
            *(void **)v44 = v109[0];
            *(_QWORD *)(v44 + 16) = v110.m128i_i64[0];
          }
          *(void **)(v44 + 8) = v109[1];
          *(_QWORD *)(a1 + 8) += 32LL;
        }
        if ( v106 != v8 + 2 )
          operator delete(v106);
        if ( v16 != 4 || *(_DWORD *)v18 != 2020827500 )
          goto LABEL_80;
        v45 = v7 + 1;
        v46 = *(_QWORD *)(a1 + 8);
        v109[0] = &v7[1];
        v7[1].m128i_i32[0] = 2020830251;
        v109[1] = &byte_4;
        v110.m128i_i8[4] = 0;
        if ( v46 != *(_QWORD *)(a1 + 16) )
        {
          *(_QWORD *)v46 = v46 + 16;
          if ( v109[0] == v45 )
          {
            *(__m128i *)(v46 + 16) = _mm_load_si128(&v110);
          }
          else
          {
            *(void **)v46 = v109[0];
            *(_QWORD *)(v46 + 16) = v110.m128i_i64[0];
          }
          *(void **)(v46 + 8) = v109[1];
          *(_QWORD *)(a1 + 8) += 32LL;
          goto LABEL_80;
        }
        sub_A5EC30((void ***)a1, (const __m128i *)v46, v7);
        v36 = v109[0];
        if ( v109[0] != v45 )
          goto LABEL_89;
LABEL_80:
        v6 += 2;
        if ( v89 == v6 )
        {
LABEL_42:
          v5 = ptr;
          goto LABEL_43;
        }
      }
      v16 = (unsigned __int64)v101;
      v17 = v15 + 1;
      if ( v15 + 1 > v101 )
      {
        v18 = v100;
      }
      else
      {
        v18 = v100;
        v19 = (char *)(v101 - v17);
        if ( v15 > v101 )
          v15 = v101;
        v109[0] = v100;
        v110 = (__m128i)__PAIR128__((unsigned __int64)v19, &v17[(_QWORD)v100]);
        v109[1] = v15;
        if ( v19 )
        {
          v20 = nullptr;
          v21 = (void *)sub_2223270(v7, asc_22BE270, 6, 0);
          v22 = v109[1];
          if ( v21 < v109[1] )
          {
            v22 = v21;
            v20 = (__m128i *)((char *)v109[1] - (char *)v21);
          }
          v107 = v20;
          v106 = (char *)v109[0] + (unsigned __int64)v22;
          v23 = sub_22233F0(v8, asc_22BE270, 6, -1) + 1;
          if ( v23 > (unsigned __int64)v107 )
            v23 = (unsigned __int64)v107;
          v24 = (char *)v107 - (char *)v20 + v23;
          if ( v24 > (unsigned __int64)v107 )
            v24 = (unsigned __int64)v107;
          if ( v24 == 4 && *(_DWORD *)v106 == 1751347809 )
          {
            v25 = 0;
            v26 = sub_2223270(&v7[1], asc_22BE270, 6, 0);
            v27 = v110.m128i_i64[1];
            if ( v26 < v110.m128i_i64[1] )
            {
              v25 = v110.m128i_i64[1] - v26;
              v27 = v26;
            }
            v106 = (void *)(v110.m128i_i64[0] + v27);
            v107 = (__m128i *)v25;
            v28 = sub_22233F0(v8, asc_22BE270, 6, -1) + 1;
            if ( v28 > (unsigned __int64)v107 )
              v28 = (unsigned __int64)v107;
            v29 = v28;
            v30 = &v107->m128i_i8[-v25];
            v31 = (__m128i *)v106;
            v32 = (__m128i *)&v30[v29];
            v101 = (char *)v106;
            if ( v32 > v107 )
              v32 = v107;
            v102 = v32;
            if ( (unsigned __int8)sub_2282E80(v106, v32) )
            {
LABEL_85:
              *(_OWORD *)v109 = 0;
              v110.m128i_i64[0] = 0;
              if ( (unsigned __int8)sub_2283230(v101, v102, v7) )
              {
                v53 = *(void ***)(a1 + 8);
                v91 = (void **)v109[1];
                v90 = (__m128i *)v109[0];
                if ( v109[0] != v109[1] )
                {
                  v92 = ((char *)v109[1] - (char *)v109[0]) >> 4;
                  if ( v92 <= (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v53) >> 5 )
                  {
                    v90 = v31;
                    v54 = v53;
                    v91 = v6;
                    v55 = v109[0];
                    v93 = v32;
                    v56 = v109[1];
                    do
                    {
                      v57 = v55[1];
                      v58 = (_BYTE *)*v55;
                      v55 += 2;
                      *v54 = v54 + 2;
                      v59 = v54;
                      v54 += 4;
                      sub_1061350(v59, v58, (__int64)&v58[v57]);
                    }
                    while ( v56 != v55 );
                    v31 = v90;
                    v6 = v91;
                    v32 = v93;
                    *(_QWORD *)(a1 + 8) += 32 * v92;
                    goto LABEL_86;
                  }
                  v60 = *(void ***)a1;
                  v61 = ((__int64)v53 - *(_QWORD *)a1) >> 5;
                  if ( v92 > 0x7FFFFFFFFFFFFFFLL - v61 )
                    std::__throw_length_error("vector::_M_range_insert");
                  v62 = v92;
                  if ( v92 < v61 )
                    v62 = ((__int64)v53 - *(_QWORD *)a1) >> 5;
                  v63 = __CFADD__(v62, v61);
                  v64 = v62 + v61;
                  if ( v63 || v64 > 0x7FFFFFFFFFFFFFFLL )
                  {
                    v65 = -32;
LABEL_135:
                    v94 = v53;
                    v93 = (__m128i *)v65;
                    v66 = operator new(v65);
                    v60 = *(void ***)a1;
                    v92 = v66;
                    v53 = v94;
                    v98 = &v93->m128i_i8[v66];
                  }
                  else
                  {
                    if ( v64 )
                    {
                      v65 = 32 * v64;
                      goto LABEL_135;
                    }
                    v98 = nullptr;
                    v92 = 0;
                  }
                  if ( v53 == v60 )
                  {
                    m128i_i64 = (_QWORD *)v92;
                    v93 = (__m128i *)v92;
                  }
                  else
                  {
                    v67 = (__m128i *)v92;
                    v68 = (const __m128i *)(v60 + 2);
                    v69 = ((unsigned __int64)((char *)(v53 - 4) - (char *)v60) >> 5) + 1;
                    v70 = (__m128i *)(v92 + 32 * v69);
                    do
                    {
                      v67->m128i_i64[0] = (__int64)v67[1].m128i_i64;
                      v71 = (const __m128i *)v68[-1].m128i_i64[0];
                      if ( v71 == v68 )
                      {
                        v67[1] = _mm_loadu_si128(v68);
                      }
                      else
                      {
                        v67->m128i_i64[0] = (__int64)v71;
                        v67[1].m128i_i64[0] = v68->m128i_i64[0];
                      }
                      v67 += 2;
                      v67[-2].m128i_i64[1] = v68[-1].m128i_i64[1];
                      v68[-1].m128i_i64[0] = (__int64)v68;
                      v68 += 2;
                      v68[-3].m128i_i64[1] = 0;
                      v68[-2].m128i_i8[0] = 0;
                    }
                    while ( v70 != v67 );
                    v93 = (__m128i *)(v92 + 32 * v69);
                    m128i_i64 = v93->m128i_i64;
                  }
                  v96 = v53;
                  v97 = v32;
                  v73 = v91;
                  v94 = (void **)v31;
                  v74 = v90;
                  v95 = v6;
                  v75 = m128i_i64;
                  do
                  {
                    v76 = v74->m128i_i64[1];
                    v77 = (_BYTE *)v74->m128i_i64[0];
                    v78 = v75;
                    *v75 = v75 + 2;
                    ++v74;
                    v75 += 4;
                    sub_1061350(v78, v77, (__int64)&v77[v76]);
                  }
                  while ( v73 != (void **)v74 );
                  v79 = *(void ***)(a1 + 8);
                  v31 = (__m128i *)v94;
                  v6 = v95;
                  v32 = v97;
                  v80 = &v93[2 * ((unsigned __int64)((char *)(v91 - 2) - (char *)v90) >> 4) + 2];
                  v90 = v80;
                  if ( v96 != v79 )
                  {
                    v81 = (const __m128i *)(v96 + 2);
                    v82 = ((unsigned __int64)((char *)(v79 - 4) - (char *)v96) >> 5) + 1;
                    v83 = &v80[2 * v82];
                    do
                    {
                      v80->m128i_i64[0] = (__int64)v80[1].m128i_i64;
                      v84 = (const __m128i *)v81[-1].m128i_i64[0];
                      if ( v84 == v81 )
                      {
                        v80[1] = _mm_loadu_si128(v81);
                      }
                      else
                      {
                        v80->m128i_i64[0] = (__int64)v84;
                        v80[1].m128i_i64[0] = v81->m128i_i64[0];
                      }
                      v80 += 2;
                      v80[-2].m128i_i64[1] = v81[-1].m128i_i64[1];
                      v81[-1].m128i_i64[0] = (__int64)v81;
                      v81 += 2;
                      v81[-3].m128i_i64[1] = 0;
                      v81[-2].m128i_i8[0] = 0;
                    }
                    while ( v83 != v80 );
                    v90 += 2 * v82;
                    v79 = *(void ***)(a1 + 8);
                  }
                  v85 = *(void ***)a1;
                  if ( *(void ***)a1 != v79 )
                  {
                    v91 = v8;
                    v93 = v7;
                    v86 = v32;
                    v87 = v85;
                    do
                    {
                      while ( *v87 != v87 + 2 )
                      {
                        operator delete(*v87);
                        v87 += 4;
                        if ( v87 == v79 )
                          goto LABEL_158;
                      }
                      v87 += 4;
                    }
                    while ( v87 != v79 );
LABEL_158:
                    v32 = v86;
                    v7 = v93;
                    v8 = v91;
                    v79 = *(void ***)a1;
                  }
                  if ( v79 )
                    operator delete(v79);
                  v88 = _mm_loadh_ps((const double *)&v90);
                  *(_QWORD *)(a1 + 16) = v98;
                  *(__m128 *)a1 = v88;
                }
              }
LABEL_86:
              if ( *(_QWORD *)(a1 + 32) )
              {
                *(_QWORD *)(a1 + 80) = 5;
                *(_QWORD *)(a1 + 72) = "arch=";
              }
              else if ( v32 == (__m128i *)byte_8
                     && (v31->m128i_i64[0] == 0x302E31763436616CLL || v31->m128i_i64[0] == 0x312E31763436616CLL) )
              {
                *(_QWORD *)(a1 + 32) = 11;
                *(_QWORD *)(a1 + 24) = "loongarch64";
              }
              else
              {
                *(_QWORD *)(a1 + 24) = v31;
                *(_QWORD *)(a1 + 32) = v32;
              }
              v36 = v109[0];
              if ( !v109[0] )
                goto LABEL_80;
LABEL_89:
              operator delete(v36);
              goto LABEL_80;
            }
            if ( v32 == (__m128i *)byte_8 )
            {
              if ( v31->m128i_i64[0] == 0x302E31763436616CLL || v31->m128i_i64[0] == 0x312E31763436616CLL )
                goto LABEL_85;
            }
            else if ( !v31 )
            {
              v108 = 0;
              v106 = v8 + 2;
              v107 = nullptr;
              goto LABEL_34;
            }
            v106 = v8 + 2;
            sub_1061350(v8, v31, (__int64)v32->m128i_i64 + (_QWORD)v31);
LABEL_34:
            v33 = (__m128i *)sub_978080(v8, 0, 0, "!arch=", 6u);
            v109[0] = &v7[1];
            if ( (__m128i *)v33->m128i_i64[0] == &v33[1] )
            {
              v110 = _mm_loadu_si128(v33 + 1);
            }
            else
            {
              v109[0] = (void *)v33->m128i_i64[0];
              v110.m128i_i64[0] = v33[1].m128i_i64[0];
            }
            v109[1] = (void *)v33->m128i_i64[1];
            v33[1].m128i_i8[0] = 0;
            v34 = *(_QWORD *)(a1 + 8);
            v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
            v33->m128i_i64[1] = 0;
            if ( v34 != *(_QWORD *)(a1 + 16) )
            {
              *(_QWORD *)v34 = v34 + 16;
              v35 = v109[0];
              if ( v109[0] != &v7[1] )
                goto LABEL_38;
LABEL_103:
              *(__m128i *)(v34 + 16) = _mm_load_si128(&v110);
              goto LABEL_39;
            }
            goto LABEL_120;
          }
          v38 = nullptr;
          v39 = (void *)sub_2223270(v7, asc_22BE270, 6, 0);
          v40 = v109[1];
          if ( v39 < v109[1] )
          {
            v40 = v39;
            v38 = (__m128i *)((char *)v109[1] - (char *)v39);
          }
          v107 = v38;
          v106 = (char *)v109[0] + (unsigned __int64)v40;
          v41 = sub_22233F0(v8, asc_22BE270, 6, -1) + 1;
          if ( v41 > (unsigned __int64)v107 )
            v41 = (unsigned __int64)v107;
          v42 = (char *)v107 - (char *)v38 + v41;
          if ( v42 > (unsigned __int64)v107 )
            v42 = (unsigned __int64)v107;
          if ( v42 == 4 && *(_DWORD *)v106 == 1701737844 )
          {
            v47 = 0;
            v48 = sub_2223270(&v7[1], asc_22BE270, 6, 0);
            v49 = v110.m128i_i64[1];
            if ( v48 < v110.m128i_i64[1] )
            {
              v49 = v48;
              v47 = v110.m128i_i64[1] - v48;
            }
            v107 = (__m128i *)v47;
            v106 = (void *)(v110.m128i_i64[0] + v49);
            v50 = sub_22233F0(v8, asc_22BE270, 6, -1) + 1;
            if ( v50 > (unsigned __int64)v107 )
              v50 = (unsigned __int64)v107;
            v51 = (unsigned __int64)v107->m128i_u64 + v50 - v47;
            if ( v51 > (unsigned __int64)v107 )
              v51 = (unsigned __int64)v107;
            if ( *(_QWORD *)(a1 + 48) )
            {
              *(_QWORD *)(a1 + 80) = 5;
              *(_QWORD *)(a1 + 72) = "tune=";
            }
            else
            {
              *(_QWORD *)(a1 + 40) = v106;
              *(_QWORD *)(a1 + 48) = v51;
            }
            goto LABEL_80;
          }
          v16 = (unsigned __int64)v101;
          v18 = v100;
        }
      }
      if ( v16 <= 2 )
        goto LABEL_83;
LABEL_56:
      if ( *(_WORD *)v18 != 28526 || v18[2] != 45 )
      {
LABEL_57:
        v106 = v8 + 2;
        sub_1061350(v8, v18, (__int64)&v18[v16]);
        goto LABEL_58;
      }
      if ( v18 == (_BYTE *)-3LL )
      {
        v108 = 0;
        v106 = v8 + 2;
        v107 = nullptr;
      }
      else
      {
        v106 = v8 + 2;
        sub_1061350(v8, v18 + 3, (__int64)&v18[v16]);
      }
      v52 = (__m128i *)sub_978080(v8, 0, 0, "-", 1u);
      v109[0] = &v7[1];
      if ( (__m128i *)v52->m128i_i64[0] == &v52[1] )
      {
        v110 = _mm_loadu_si128(v52 + 1);
      }
      else
      {
        v109[0] = (void *)v52->m128i_i64[0];
        v110.m128i_i64[0] = v52[1].m128i_i64[0];
      }
      v109[1] = (void *)v52->m128i_i64[1];
      v52[1].m128i_i8[0] = 0;
      v34 = *(_QWORD *)(a1 + 8);
      v52->m128i_i64[0] = (__int64)v52[1].m128i_i64;
      v52->m128i_i64[1] = 0;
      if ( v34 != *(_QWORD *)(a1 + 16) )
      {
        *(_QWORD *)v34 = v34 + 16;
        v35 = v109[0];
        if ( v109[0] == &v7[1] )
          goto LABEL_103;
LABEL_38:
        *(_QWORD *)v34 = v35;
        *(_QWORD *)(v34 + 16) = v110.m128i_i64[0];
LABEL_39:
        *(void **)(v34 + 8) = v109[1];
        *(_QWORD *)(a1 + 8) += 32LL;
        goto LABEL_40;
      }
LABEL_120:
      sub_A5EC30((void ***)a1, (const __m128i *)v34, v7);
      if ( v109[0] != &v7[1] )
        operator delete(v109[0]);
LABEL_40:
      v36 = v106;
      if ( v106 != v8 + 2 )
        goto LABEL_89;
      v6 += 2;
      if ( v89 == v6 )
        goto LABEL_42;
    }
  }
LABEL_43:
  if ( v5 != v105 )
    free(v5);
  return a1;
}

