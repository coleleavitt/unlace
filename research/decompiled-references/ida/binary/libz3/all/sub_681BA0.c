__int64 __fastcall sub_681BA0(
        const __m128i *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  const __m128i *v12; // rbp
  __m128 v13; // xmm1
  unsigned __int64 v14; // xmm7_8
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned int v20; // r15d
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r15
  int v27; // ebx
  char *v28; // r11
  __int32 *v29; // r15
  __int64 v30; // rax
  __int32 v31; // ebp
  __int32 *v32; // r14
  __m128i *v33; // rbx
  __int64 v34; // r13
  __int32 v35; // eax
  __m128i v36; // xmm2
  __int64 result; // rax
  __m128i *v38; // rbp
  int v39; // edi
  __int32 *v40; // r13
  __int64 v41; // rax
  __int32 *v42; // r13
  __int32 v43; // r12d
  __int32 *v44; // rbx
  __int64 v45; // rbp
  __int32 *v46; // r14
  __int32 *v47; // r15
  __int32 v48; // eax
  __m128i v49; // xmm3
  __int64 v50; // rax
  __int32 v51; // ebx
  __int64 v52; // r14
  __m128i v53; // xmm4
  __m128i v54; // xmm0
  __int32 v55; // edx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 *v59; // rbx
  __int64 v60; // r14
  __m128i *v61; // r12
  unsigned __int64 v62; // rbp
  __int64 v63; // r15
  __int64 v64; // rsi
  __int64 v65; // rdi
  unsigned int *v67; // r15
  __int64 v68; // rdx
  unsigned int v69; // esi
  unsigned int i; // r14d
  __int64 v71; // rax
  __int64 v72; // r14
  __int64 v73; // r13
  __int64 v74; // rdx
  __int64 v75; // r12
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  size_t v80; // rbx
  _QWORD *v81; // rax
  int v82; // r9d
  _QWORD *v83; // rsi
  __m128i *v84; // r10
  __m128i *v85; // r11
  size_t v86; // rax
  const __m128i *v87; // rbx
  size_t v88; // rbp
  __int64 v89; // rax
  __int64 v90; // rdx
  __m128i *v91; // rax
  __m128i v92; // xmm0
  __m128i v93; // xmm6
  __m128i v94; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int32 v95; // [rsp+14h] [rbp-B4h]
  __int64 v96; // [rsp+18h] [rbp-B0h]
  __m128i *v97; // [rsp+20h] [rbp-A8h]
  __m128i *v98; // [rsp+28h] [rbp-A0h]
  const __m128i *v99; // [rsp+30h] [rbp-98h]
  __int64 v100; // [rsp+38h] [rbp-90h]
  char *v101; // [rsp+40h] [rbp-88h]
  unsigned int *v102; // [rsp+48h] [rbp-80h]
  __m128i v103; // [rsp+50h] [rbp-78h] BYREF
  __m128i v104; // [rsp+60h] [rbp-68h] BYREF
  __m128i v105; // [rsp+70h] [rbp-58h] BYREF
  __m128i v106; // [rsp+80h] [rbp-48h] BYREF

  v12 = a1;
  v102 = a3;
  sub_681920((__int64)&v103, (__int64)a1, a2, a3, a4);
  v13 = (__m128)_mm_load_si128(&v103);
  v14 = _mm_movehl_ps(a12, v13).m128_u64[0];
  v96 = v104.m128i_i64[0];
  v95 = v104.m128i_u32[2];
  v15 = v14;
  v94 = (__m128i)v13;
  v16 = sub_678D40(a1, v13.m128_i64[0], v104.m128i_i64[0]);
  v17 = *(unsigned int *)(v16 + 24);
  v18 = v16;
  LODWORD(v16) = *(_DWORD *)(v16 + 32);
  v105 = _mm_load_si128(&v103);
  LODWORD(v16) = 4 * (*(_DWORD *)(v18 + 28) + v16);
  v106 = _mm_load_si128(&v104);
  if ( 3 * (int)v17 < (unsigned int)v16 )
  {
    LODWORD(v98) = v17;
    LODWORD(v97) = 2 * v17;
    v80 = 40LL * (unsigned int)(2 * v17);
    v21 = v80;
    v81 = (_QWORD *)sub_186B270(v80);
    v82 = 2 * v17;
    v19 = (__int64)v81;
    if ( 2 * (_DWORD)v17 )
    {
      v83 = &v81[10 * (v17 & 0x7FFFFFFF)];
      do
      {
        *v81 = 0;
        v81 += 10;
        *(v81 - 5) = 0;
      }
      while ( v83 != v81 );
    }
    v84 = *(__m128i **)(v18 + 16);
    v20 = v82 - 1;
    v22 = v19 + v80;
    v85 = (__m128i *)((char *)v84 + 40 * *(unsigned int *)(v18 + 24));
    if ( v84 != v85 )
    {
      v86 = v80;
      v87 = *(const __m128i **)(v18 + 16);
      v88 = v86;
      do
      {
        while ( v87->m128i_i32[1] != 2 )
        {
          v87 = (const __m128i *)((char *)v87 + 40);
          if ( v85 == v87 )
            goto LABEL_64;
        }
        v89 = 40LL * (v87->m128i_i32[0] & v20);
        v90 = v19 + v89;
        if ( v88 == v89 )
        {
LABEL_68:
          if ( v19 == v90 )
          {
LABEL_77:
            LODWORD(v101) = v82;
            v100 = (__int64)a1;
            v99 = (const __m128i *)v22;
            v98 = v85;
            v97 = (__m128i *)v19;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v91 = (__m128i *)v19;
          while ( v91->m128i_i32[1] )
          {
            v91 = (__m128i *)((char *)v91 + 40);
            if ( (__m128i *)v90 == v91 )
              goto LABEL_77;
          }
        }
        else
        {
          v91 = (__m128i *)(v19 + v89);
          while ( v91->m128i_i32[1] )
          {
            v91 = (__m128i *)((char *)v91 + 40);
            if ( (__m128i *)v22 == v91 )
              goto LABEL_68;
          }
        }
        v92 = _mm_loadu_si128(v87);
        v87 = (const __m128i *)((char *)v87 + 40);
        *v91 = v92;
        v91[1] = _mm_loadu_si128((const __m128i *)((char *)v87 - 24));
        v91[2].m128i_i64[0] = v87[-1].m128i_i64[1];
      }
      while ( v85 != v87 );
LABEL_64:
      v85 = *(__m128i **)(v18 + 16);
      v12 = a1;
    }
    if ( v85 )
    {
      LODWORD(v99) = v82;
      v98 = (__m128i *)v22;
      v97 = (__m128i *)v19;
      sub_186B220(v85);
      v82 = (int)v99;
      v22 = (__int64)v98;
      v19 = (__int64)v97;
    }
    *(_QWORD *)(v18 + 16) = v19;
    *(_DWORD *)(v18 + 24) = v82;
    *(_DWORD *)(v18 + 32) = 0;
  }
  else
  {
    v19 = *(_QWORD *)(v18 + 16);
    v20 = v17 - 1;
    v21 = 40 * v17;
    v22 = v19 + 40 * v17;
  }
  v23 = *(unsigned int *)(v14 + 24);
  v97 = (__m128i *)v19;
  v98 = (__m128i *)v22;
  v100 = 8LL * v95;
  v24 = sub_675480((_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 40LL) + v100), v23);
  v25 = (__int64)v97;
  v26 = v24 & v20;
  v27 = v24;
  v28 = &v97->m128i_i8[40 * v26];
  if ( 40 * v26 == v21 )
  {
    v42 = nullptr;
    goto LABEL_13;
  }
  v99 = v12;
  v29 = &v97->m128i_i32[10 * v26];
  v97 = &v105;
  v30 = v18;
  v31 = v27;
  v32 = nullptr;
  v101 = v28;
  v33 = v98;
  v34 = v30;
  while ( 1 )
  {
    v35 = v29[1];
    if ( v35 == 2 )
    {
      if ( *v29 == v31 )
      {
        v36 = _mm_load_si128(&v94);
        v106.m128i_i64[0] = v96;
        v105 = v36;
        v106.m128i_i32[2] = v95;
        result = sub_675CE0(v34 + 8, (__int64)(v29 + 2), (__int64)v97);
        if ( (_BYTE)result )
        {
          v38 = (__m128i *)v99;
          v39 = v95;
          v40 = v29;
          goto LABEL_26;
        }
      }
      goto LABEL_7;
    }
    if ( !v35 )
      break;
    v32 = v29;
LABEL_7:
    v29 += 10;
    if ( v29 == (__int32 *)v33 )
    {
      v41 = v34;
      v27 = v31;
      v28 = v101;
      v12 = v99;
      v25 = *(_QWORD *)(v34 + 16);
      v42 = v32;
      v18 = v41;
LABEL_13:
      if ( v28 == (char *)v25 )
      {
LABEL_81:
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v97 = (__m128i *)v14;
      v43 = v27;
      v44 = (__int32 *)v28;
      v98 = (__m128i *)v12;
      v45 = v18;
      v46 = v42;
      v47 = (__int32 *)v25;
      while ( 1 )
      {
        v48 = v47[1];
        if ( v48 == 2 )
        {
          if ( *v47 == v43 )
          {
            v49 = _mm_load_si128(&v94);
            v106.m128i_i64[0] = v96;
            v105 = v49;
            v106.m128i_i32[2] = v95;
            result = sub_675CE0(v45 + 8, (__int64)(v47 + 2), (__int64)&v105);
            if ( (_BYTE)result )
            {
              v15 = (__int64)v97;
              v38 = v98;
              v40 = v47;
              v39 = v95;
              goto LABEL_26;
            }
          }
        }
        else
        {
          if ( !v48 )
          {
            v40 = v46;
            v51 = v43;
            v52 = v45;
            v15 = (__int64)v97;
            v38 = v98;
            if ( v40 )
              --*(_DWORD *)(v52 + 32);
            else
              v40 = v47;
            v93 = _mm_load_si128(&v94);
            v106.m128i_i64[0] = v96;
            result = v95;
            v105 = v93;
            v106.m128i_i32[2] = v95;
            *(__m128i *)(v40 + 2) = v93;
            goto LABEL_25;
          }
          v46 = v47;
        }
        v47 += 10;
        if ( v44 == v47 )
          goto LABEL_81;
      }
    }
  }
  v50 = v34;
  v40 = v32;
  v51 = v31;
  v38 = (__m128i *)v99;
  v52 = v50;
  if ( v40 )
    --*(_DWORD *)(v50 + 32);
  else
    v40 = v29;
  v53 = _mm_load_si128(&v94);
  v106.m128i_i64[0] = v96;
  result = v95;
  v105 = v53;
  v106.m128i_i32[2] = v95;
  *(__m128i *)(v40 + 2) = v53;
LABEL_25:
  v54 = _mm_load_si128(&v106);
  *v40 = v51;
  v39 = result;
  v40[1] = 2;
  *(__m128i *)(v40 + 6) = v54;
  ++*(_DWORD *)(v52 + 28);
LABEL_26:
  v55 = v40[8];
  if ( v55 != v39 )
  {
    result = v38[2].m128i_i64[1];
    v56 = *(_QWORD *)(result + 8LL * (unsigned int)(*(_DWORD *)(v15 + 24) + v39));
    v57 = *(_QWORD *)(result + 8LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)v40 + 2) + 24LL) + v55));
    if ( result )
    {
      v58 = *(unsigned int *)(result - 4);
      v59 = (__int64 *)(result + v100);
      if ( result + v100 >= (unsigned __int64)(result + 8 * v58) )
        goto LABEL_35;
      v94.m128i_i64[0] = v15;
      v60 = v57;
      v61 = v38;
      v62 = result + 8 * v58;
      v63 = v56;
      do
      {
        while ( 1 )
        {
          v64 = *v59;
          if ( *v59 )
          {
            v65 = v61[2].m128i_i64[0];
            if ( (*(_DWORD *)(v64 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v59 >= v62 )
            goto LABEL_34;
        }
        sub_15D7BC0(v65, v64);
        ++v59;
      }
      while ( (unsigned __int64)v59 < v62 );
LABEL_34:
      v38 = v61;
      v57 = v60;
      v15 = v94.m128i_i64[0];
      v56 = v63;
      result = v38[2].m128i_i64[1];
      if ( result )
LABEL_35:
        *(_DWORD *)(result - 4) = v95;
    }
    if ( v57 != v56 )
    {
      sub_2FCDE0(v38[4].m128i_i64);
      v67 = v102;
      v68 = *((_QWORD *)v40 + 2);
      v69 = v102[6];
      if ( v69 )
      {
        for ( i = 0; i < v69; ++i )
        {
          if ( *(_QWORD *)(v68 + 8 * (i + 4LL)) != *(_QWORD *)(v15 + 8 * (i + 4LL)) )
          {
            v71 = sub_15E1B70(v38->m128i_i64[1]);
            v105.m128i_i64[0] = v71;
            if ( v71 )
              ++*(_DWORD *)(v71 + 8);
            sub_6761A0((unsigned int **)&v38[4].m128i_i64[1], &v105);
            v69 = v67[6];
            v68 = *((_QWORD *)v40 + 2);
          }
        }
      }
      v72 = v38->m128i_i64[1];
      v73 = v38[1].m128i_i64[1];
      sub_15E1B70(v72);
      v74 = v38[4].m128i_i64[1];
      v75 = v38[4].m128i_i64[0];
      if ( v74 )
        v76 = *(unsigned int *)(v74 - 4);
      else
        v76 = 0;
      v77 = sub_15EC1C0(v38[4].m128i_i64[0], v76);
      v78 = v77;
      if ( v77 )
        ++*(_DWORD *)(v77 + 8);
      v79 = sub_15E1B70(v72);
      v105.m128i_i64[0] = v79;
      if ( v79 )
        ++*(_DWORD *)(v79 + 8);
      sub_6761A0((unsigned int **)(v73 + 24), &v105);
      return sub_675460(v78, v75);
    }
  }
  return result;
}

