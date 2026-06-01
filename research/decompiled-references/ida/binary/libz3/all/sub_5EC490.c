const double *__fastcall sub_5EC490(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int32 a4,
        __m128 **a5,
        __int64 a6,
        __int64 a7)
{
  char **exception; // rbp
  unsigned __int32 v10; // ebx
  __m128 *v11; // r14
  unsigned __int32 v12; // r15d
  const double *result; // rax
  __int64 v14; // r12
  unsigned int *v15; // rsi
  __int16 v16; // dx
  __int64 v17; // r12
  unsigned int **v18; // rdx
  const double **v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rax
  int v22; // r9d
  unsigned int v23; // edx
  const double *v24; // rdi
  __int64 v25; // rdx
  const double **v26; // r11
  __int64 v27; // rdx
  const double **v28; // r15
  __m128i v29; // xmm1
  unsigned int v30; // r12d
  _QWORD *v31; // rax
  int v32; // eax
  __m128 *v33; // rsi
  unsigned int v34; // eax
  __int64 v35; // rsi
  size_t v36; // rdi
  __int64 v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  __int32 v43; // ecx
  unsigned int v44; // eax
  __int64 *v45; // r15
  unsigned int v46; // r14d
  unsigned int v47; // ebp
  __int64 v48; // rbx
  __int64 v49; // rdx
  int v50; // eax
  __m128 *v51; // rcx
  __m128i v52; // xmm1
  unsigned __int32 v53; // r9d
  __int64 v54; // rdi
  int v55; // eax
  __m128 *v56; // rdi
  unsigned int v57; // eax
  unsigned __int32 v58; // ecx
  __int64 v59; // rax
  __int64 v60; // r11
  _DWORD *v61; // rsi
  __int64 v62; // rdi
  unsigned __int64 v63; // rax
  __int64 v64; // rdi
  __int32 v65; // r10d
  __int64 v66; // rdx
  __int64 *v67; // rbx
  unsigned __int32 v68; // ecx
  unsigned __int32 v69; // eax
  unsigned int v70; // r8d
  unsigned int v71; // ebp
  unsigned int v72; // eax
  unsigned int *v73; // rax
  __int64 v74; // rcx
  unsigned int *v75; // r15
  __int64 v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rsi
  _QWORD *v86; // rax
  _QWORD *v87; // rcx
  _QWORD *v88; // rax
  int v90; // [rsp+8h] [rbp-F0h]
  __m128i v91; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v92; // [rsp+20h] [rbp-D8h]
  __int64 v93; // [rsp+28h] [rbp-D0h]
  __m128i v94; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v95; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v96; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v97; // [rsp+60h] [rbp-98h] BYREF
  _DWORD *v98; // [rsp+70h] [rbp-88h]
  __m128 *v99; // [rsp+78h] [rbp-80h]
  __m128i v100; // [rsp+80h] [rbp-78h] BYREF
  __int64 v101[11]; // [rsp+A0h] [rbp-58h] BYREF

  v10 = a4;
  v11 = *a5;
  v90 = a6;
  v92 = a7;
  if ( v11 )
  {
    v12 = v11[-1].m128_u32[3];
    result = (const double *)v11[a4].m128_u64;
    while ( v10 < v12 )
    {
      v14 = *(_QWORD *)result;
      v15 = *((unsigned int **)result + 1);
      v16 = *(_WORD *)(*(_QWORD *)result + 4LL);
      if ( v16 != 1 )
      {
        if ( !v16 )
        {
          v44 = *v15;
          v94.m128i_i32[0] = v10;
          v91.m128i_i32[0] = v12;
          v45 = (__int64 *)a5;
          LODWORD(v93) = a2;
          v46 = v44;
          v47 = v44;
          while ( 1 )
          {
            v48 = v46;
            v49 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * v46);
            if ( !*(_WORD *)(v49 + 4) && *(_QWORD *)(v49 + 16) == *(_QWORD *)(v14 + 16) )
            {
              v50 = *(_DWORD *)(v14 + 24);
              if ( *(_DWORD *)(v49 + 24) == v50 )
              {
                if ( v50 )
                {
                  v51 = (__m128 *)*v45;
                  v52 = (__m128i)_mm_loadh_ps((const double *)(v49 + 32));
                  if ( *v45 )
                  {
                    v53 = 0;
                    goto LABEL_61;
                  }
                  v95.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * v46);
                  v96 = v52;
                  v86 = (_QWORD *)sub_186B270(0x28u);
                  v49 = v95.m128i_i64[0];
                  v52 = _mm_load_si128(&v96);
                  v53 = 0;
                  v87 = v86;
                  *v86 = 2;
                  v55 = 1;
                  v51 = (__m128 *)(v87 + 1);
                  *v45 = (__int64)v51;
                  v56 = v51;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      *v56 = (__m128)v52;
                      ++v53;
                      v51[-1].m128_i32[3] = v55;
                      if ( v53 >= *(_DWORD *)(v14 + 24) )
                        goto LABEL_69;
                      v52 = (__m128i)_mm_loadh_ps((const double *)(v49 + 8LL * v53 + 32));
LABEL_61:
                      v57 = v51[-1].m128_u32[3];
                      if ( v57 == v51[-1].m128_i32[2] )
                        break;
                      v54 = v57;
                      v55 = v57 + 1;
                      v56 = &v51[v54];
                    }
                    v95.m128i_i32[0] = (3 * v57 + 1) >> 1;
                    v58 = 16 * v95.m128i_i32[0] + 8;
                    if ( 16 * v57 + 8 >= v58 || v57 >= (3 * v57 + 1) >> 1 )
                      break;
                    LODWORD(v98) = v53;
                    v96.m128i_i64[0] = v49;
                    v97 = v52;
                    v59 = sub_186B270(v58);
                    v60 = *v45;
                    v49 = v96.m128i_i64[0];
                    v53 = (unsigned int)v98;
                    v52 = _mm_load_si128(&v97);
                    v61 = (_DWORD *)v59;
                    v51 = (__m128 *)(v59 + 8);
                    if ( *v45 )
                    {
                      v62 = *(unsigned int *)(v60 - 4);
                      *(_DWORD *)(v59 + 4) = v62;
                      v63 = 0;
                      v64 = 16 * v62;
                      if ( v64 )
                      {
                        do
                        {
                          *(__m128i *)&v61[v63 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v60 + v63));
                          v63 += 16LL;
                        }
                        while ( v63 != v64 );
                      }
                      v99 = v51;
                      v97.m128i_i32[0] = v53;
                      v98 = v61;
                      v96.m128i_i64[0] = v49;
                      v100 = v52;
                      sub_186B220((void *)(v60 - 8));
                      v61 = v98;
                      v51 = v99;
                      v49 = v96.m128i_i64[0];
                      v53 = v97.m128i_i32[0];
                      v52 = _mm_load_si128(&v100);
                      v56 = &v99[v98[1]];
                      v55 = v98[1] + 1;
                    }
                    else
                    {
                      *(_DWORD *)(v59 + 4) = 0;
                      v56 = (__m128 *)(v59 + 8);
                      v55 = 1;
                    }
                    v65 = v95.m128i_i32[0];
                    *v45 = (__int64)v51;
                    *v61 = v65;
                  }
LABEL_88:
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v101, "Overflow encountered when expanding vector");
LABEL_89:
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v101);
                  sub_233E40((__int64)v101);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
LABEL_69:
                sub_5EC490(a1, v93, a3, v94.m128i_i32[0] + 1, (_DWORD)v45, v90, v92);
                v66 = *v45;
                if ( *v45 )
                {
                  v96.m128i_i32[0] = *(_DWORD *)(v66 - 4);
                  if ( v96.m128i_i32[0] < (unsigned __int32)v91.m128i_i32[0] )
                  {
                    LODWORD(v98) = v47;
                    v97.m128i_i64[0] = v46;
                    v67 = v45;
                    goto LABEL_72;
                  }
                  *(_DWORD *)(v66 - 4) = v91.m128i_i32[0];
                }
                else
                {
                  v96.m128i_i32[0] = 0;
                  v88 = (_QWORD *)sub_186B270(0x28u);
                  v97.m128i_i64[0] = v46;
                  v67 = v45;
                  *v88 = 2;
                  v66 = (__int64)(v88 + 1);
                  LODWORD(v98) = v47;
                  *v45 = (__int64)(v88 + 1);
LABEL_72:
                  while ( 1 )
                  {
                    v68 = *(_DWORD *)(v66 - 8);
                    v69 = v91.m128i_i32[0];
                    if ( v68 >= v91.m128i_i32[0] )
                      break;
                    v70 = (3 * v68 + 1) >> 1;
                    v71 = v70;
                    v72 = 16 * v70 + 8;
                    if ( 16 * v68 + 8 >= v72 || v68 >= v70 )
                      goto LABEL_88;
                    v73 = (unsigned int *)sub_186B270(v72);
                    v74 = *v67;
                    v75 = v73;
                    v66 = (__int64)(v73 + 2);
                    if ( *v67 )
                    {
                      v76 = *(unsigned int *)(v74 - 4);
                      v73[1] = v76;
                      v77 = 0;
                      v78 = 16 * v76;
                      if ( v78 )
                      {
                        do
                        {
                          *(__m128i *)&v75[v77 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v74 + v77));
                          v77 += 16LL;
                        }
                        while ( v78 != v77 );
                      }
                      v95.m128i_i64[0] = v66;
                      sub_186B220((void *)(v74 - 8));
                      v66 = v95.m128i_i64[0];
                      *v75 = v71;
                      *v67 = v66;
                    }
                    else
                    {
                      v73[1] = 0;
                      *v67 = v66;
                      *v73 = v71;
                    }
                  }
                  v79 = v96.m128i_u32[0];
                  *(_DWORD *)(v66 - 4) = v91.m128i_i32[0];
                  v45 = v67;
                  v80 = 16LL * v69;
                  v47 = (unsigned int)v98;
                  v48 = v97.m128i_i64[0];
                  v79 *= 16;
                  v81 = v66 + v80;
                  v82 = v66 + v79;
                  if ( v79 != v80 )
                  {
                    v83 = 0;
                    v84 = ((unsigned __int64)(v81 - 16 - v82) >> 4) + 1;
                    do
                    {
                      v85 = v83++;
                      *(_OWORD *)(v82 + 16 * v85) = 0;
                    }
                    while ( v83 < v84 );
                  }
                }
              }
            }
            result = *(const double **)(a1 + 312);
            if ( result )
            {
              if ( v46 < *((_DWORD *)result - 1) )
              {
                result = *(const double **)(a1 + 328);
                v46 = *((_DWORD *)result + v48);
              }
            }
            if ( v47 == v46 )
              return result;
          }
        }
        return result;
      }
      v17 = *(unsigned int *)(v14 + 16);
      ++v10;
      result += 2;
      v18 = (unsigned int **)(*(_QWORD *)(a1 + 352) + 8 * v17);
      if ( !*v18 )
      {
        *v18 = v15;
        sub_5EC490(a1, a2, a3, v10, (_DWORD)a5, a6, v92);
        result = *(const double **)(a1 + 352);
        result[v17] = 0.0;
        return result;
      }
    }
  }
  if ( a2 == *(_DWORD *)(a3 + 24) )
    return (const double *)sub_5EB960(a1, a6, v92);
  v19 = *(const double ***)(a1 + 360);
  v20 = *(_QWORD *)(*(_QWORD *)(a3 + 8LL * a2 + 32) + 16LL);
  v93 = *(_QWORD *)(a3 + 8LL * a2 + 32);
  v21 = *(unsigned int *)(a1 + 368);
  v22 = *(_DWORD *)(v20 + 12);
  v23 = v21 - 1;
  result = (const double *)(16 * v21);
  v24 = (const double *)((char *)result + (_QWORD)v19);
  v25 = 16LL * (v22 & v23);
  v26 = &v19[(unsigned __int64)v25 / 8];
  if ( (const double *)v25 != result )
  {
    result = (const double *)&v19[(unsigned __int64)v25 / 8];
    do
    {
      while ( 1 )
      {
        v27 = *(_QWORD *)result;
        if ( *(_QWORD *)result <= 1u )
          break;
        if ( *(_DWORD *)(v27 + 12) == v22 && v20 == v27 )
          goto LABEL_26;
        result += 2;
        if ( v24 == result )
          goto LABEL_17;
      }
      if ( !v27 )
        return result;
      result += 2;
    }
    while ( v24 != result );
  }
LABEL_17:
  if ( v19 == v26 )
    return result;
  while ( 1 )
  {
    result = *v19;
    if ( (unsigned __int64)*v19 > 1 )
      break;
    if ( !result )
      return result;
LABEL_21:
    v19 += 2;
    if ( v26 == v19 )
      return result;
  }
  if ( *((_DWORD *)result + 3) != v22 || (const double *)v20 != result )
    goto LABEL_21;
  result = (const double *)v19;
LABEL_26:
  v28 = *((const double ***)result + 1);
  result = *v28;
  if ( *v28 && *((_DWORD *)result - 1) )
  {
    v29 = (__m128i)_mm_loadh_ps(result);
    if ( v11 )
    {
      v30 = 0;
      goto LABEL_33;
    }
    v94.m128i_i64[0] = (__int64)a5;
    v30 = 0;
    v91 = v29;
    v31 = (_QWORD *)sub_186B270(0x28u);
    a5 = (__m128 **)v94.m128i_i64[0];
    v29 = _mm_load_si128(&v91);
    v11 = (__m128 *)(v31 + 1);
    *v31 = 2;
    v32 = 1;
    *a5 = v11;
    v33 = v11;
    while ( 1 )
    {
      *v33 = (__m128)v29;
      v11[-1].m128_i32[3] = v32;
      ++v30;
      v91.m128i_i64[0] = (__int64)a5;
      sub_5EC490(a1, a2 + 1, a3, v10, (_DWORD)a5, v90, v92);
      a5 = (__m128 **)v91.m128i_i64[0];
      result = *v28;
      v11 = *(__m128 **)v91.m128i_i64[0];
      --*(_DWORD *)(*(_QWORD *)v91.m128i_i64[0] - 4LL);
      if ( !result || v30 >= *((_DWORD *)result - 1) )
        break;
      v29 = (__m128i)_mm_loadh_ps(&result[v30]);
LABEL_33:
      v34 = v11[-1].m128_u32[3];
      if ( v34 == v11[-1].m128_i32[2] )
      {
        v91.m128i_i32[0] = (3 * v34 + 1) >> 1;
        v36 = (unsigned int)(16 * v91.m128i_i32[0] + 8);
        if ( 16 * v34 + 8 >= (unsigned int)v36 || v34 >= (3 * v34 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v101, "Overflow encountered when expanding vector");
          goto LABEL_89;
        }
        v95.m128i_i64[0] = (__int64)a5;
        v94 = v29;
        v37 = sub_186B270(v36);
        a5 = (__m128 **)v95.m128i_i64[0];
        v29 = _mm_load_si128(&v94);
        v38 = (_DWORD *)v37;
        v11 = (__m128 *)(v37 + 8);
        v39 = *(_QWORD *)v95.m128i_i64[0];
        if ( *(_QWORD *)v95.m128i_i64[0] )
        {
          v40 = *(unsigned int *)(v39 - 4);
          *(_DWORD *)(v37 + 4) = v40;
          v41 = 0;
          v42 = 16 * v40;
          if ( v42 )
          {
            do
            {
              *(__m128i *)&v38[v41 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v39 + v41));
              v41 += 16LL;
            }
            while ( v41 != v42 );
          }
          v96.m128i_i64[0] = (__int64)a5;
          v94.m128i_i64[0] = (__int64)v38;
          v95 = v29;
          sub_186B220((void *)(v39 - 8));
          v38 = (_DWORD *)v94.m128i_i64[0];
          v29 = _mm_load_si128(&v95);
          a5 = (__m128 **)v96.m128i_i64[0];
          v33 = &v11[*(unsigned int *)(v94.m128i_i64[0] + 4)];
          v32 = *(_DWORD *)(v94.m128i_i64[0] + 4) + 1;
        }
        else
        {
          *(_DWORD *)(v37 + 4) = 0;
          v33 = (__m128 *)(v37 + 8);
          v32 = 1;
        }
        v43 = v91.m128i_i32[0];
        *a5 = v11;
        *v38 = v43;
      }
      else
      {
        v35 = v34;
        v32 = v34 + 1;
        v33 = &v11[v35];
      }
    }
  }
  return result;
}

