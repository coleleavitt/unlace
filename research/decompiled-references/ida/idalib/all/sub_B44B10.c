__int64 __fastcall sub_B44B10(__int64 a1, char ***a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // rbp
  __int64 *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _DWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // r12
  unsigned int v20; // ebp
  __int64 v21; // r13
  unsigned __int8 *v22; // r9
  int v23; // r10d
  unsigned int v24; // edx
  unsigned __int8 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // r15d
  __int64 v30; // rcx
  unsigned int v31; // ecx
  unsigned __int8 *v32; // rcx
  const __m128i *v33; // r14
  __int32 v34; // eax
  unsigned __int64 v35; // rcx
  const __m128i *v36; // r14
  unsigned __int8 *v37; // r13
  unsigned __int8 *v38; // r8
  char **v39; // rax
  __int8 v40; // al
  unsigned int v41; // edx
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rax
  char **v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  void **v48; // rdi
  size_t v49; // r9
  char *v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // eax
  int v54; // esi
  void **v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rcx
  const __m128i *v60; // r15
  const __m128i *v61; // r14
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __m128i *v64; // rax
  __m128i *v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm0
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // edi
  __m128 v72; // xmm0
  __int64 v73; // rcx
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // rdx
  __m128i *v76; // rcx
  __int64 v77; // rdi
  const __m128i *v78; // rax
  __int64 v79; // rcx
  char ***v80; // rsi
  __int8 *v81; // r14
  char **v82; // rax
  __int64 v83; // rdx
  __m128i v84; // xmm0
  __int64 v85; // rcx
  const __m128i *v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  __m128i *v90; // rax
  __m128i *v91; // rax
  __int64 v92; // rdx
  __m128i v93; // xmm0
  __int64 v94; // rcx
  __int8 *v95; // rsi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rdx
  __m128i *v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rdi
  __int64 v104; // rdi
  char ***v105; // rsi
  __int8 *v106; // r14
  char **v107; // rax
  __int8 *v108; // rsi
  __int64 v109; // rcx
  void **p_src; // [rsp+0h] [rbp-D8h]
  __int64 v111; // [rsp+8h] [rbp-D0h]
  unsigned int v112; // [rsp+10h] [rbp-C8h]
  __int64 v113; // [rsp+10h] [rbp-C8h]
  __int64 v114; // [rsp+10h] [rbp-C8h]
  size_t v115; // [rsp+10h] [rbp-C8h]
  unsigned __int8 *v116; // [rsp+10h] [rbp-C8h]
  unsigned __int8 *v117; // [rsp+10h] [rbp-C8h]
  __int32 v118; // [rsp+10h] [rbp-C8h]
  unsigned __int8 *v119; // [rsp+10h] [rbp-C8h]
  unsigned __int8 *v120; // [rsp+10h] [rbp-C8h]
  __int64 v121; // [rsp+18h] [rbp-C0h]
  int v122; // [rsp+18h] [rbp-C0h]
  int v123; // [rsp+18h] [rbp-C0h]
  int v124; // [rsp+18h] [rbp-C0h]
  unsigned int v125; // [rsp+18h] [rbp-C0h]
  int v126; // [rsp+18h] [rbp-C0h]
  __int64 v127; // [rsp+18h] [rbp-C0h]
  unsigned int v128; // [rsp+18h] [rbp-C0h]
  char **v129; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v130; // [rsp+30h] [rbp-A8h]
  const __m128i *v131; // [rsp+38h] [rbp-A0h]
  __int64 v132; // [rsp+40h] [rbp-98h]
  char ***v133; // [rsp+48h] [rbp-90h]
  unsigned __int8 *v134; // [rsp+50h] [rbp-88h]
  int v135; // [rsp+58h] [rbp-80h]
  int v136; // [rsp+5Ch] [rbp-7Ch]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  __m128i si128; // [rsp+68h] [rbp-70h]

  v6 = a3;
  v8 = 24LL * a3;
  v10 = *(__int64 **)(a1 + 16);
  v11 = *v10;
  v10[10] += v8;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[1] >= v8 + v12 && v11 )
  {
    *v10 = v8 + v12;
    v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v132 = v13;
  }
  else
  {
    v132 = sub_986170((__int64)v10, v8, v8, 3, a5, a6);
    v13 = v132;
  }
  v14 = (_DWORD *)v13;
  if ( v6 )
  {
    do
    {
      *v14 = 0;
      v14 += 6;
      *(v14 - 5) = 0;
      *((_QWORD *)v14 - 2) = 0;
      *((_QWORD *)v14 - 1) = 0;
    }
    while ( (_DWORD *)(v13 + v8) != v14 );
  }
  if ( !a3 )
    return v132;
  v15 = *((unsigned int *)a2 + 8);
  if ( *((_DWORD *)a2 + 113) >= (unsigned int)v15 )
    return v132;
  v17 = a3 - 1;
  v18 = 1;
  v19 = v132;
  v20 = *((_DWORD *)a2 + 113);
  v21 = 1;
  v111 = v17 + 1;
  p_src = &src;
  v133 = a2 + 3;
  while ( 2 )
  {
    v22 = (unsigned __int8 *)a2[55];
    v23 = v21 - 1;
    v24 = v20;
    v129 = a2[54];
    v135 = *((_DWORD *)a2 + 112);
    v25 = v22;
    while ( v24 < (unsigned int)v15 )
    {
      do
      {
        if ( (byte_2411740[2 * *v25] & 7) == 0 )
          goto LABEL_17;
        v26 = (__int64)a2[54];
        a2[55] = (char **)++v25;
      }
      while ( v25 != (unsigned __int8 *)v26 );
      *((_DWORD *)a2 + 113) = ++v24;
      if ( v24 >= (unsigned int)v15 )
      {
        if ( *((_BYTE *)a2 + 16) )
          goto LABEL_28;
        v33 = (const __m128i *)a2[1];
        v34 = v33[3].m128i_i32[1];
        if ( v34 == 1 )
        {
          v56 = v33[5].m128i_u32[0];
          v18 = v33[3].m128i_u32[0];
          v113 = v33[4].m128i_i64[0];
          v57 = v33[3].m128i_i64[1];
          if ( (_DWORD)v56 )
          {
            v58 = _mm_loadu_si128((const __m128i *)(v33[4].m128i_i64[1] + 24LL * (unsigned int)v56 - 24));
            v59 = *(_QWORD *)(v33[4].m128i_i64[1] + 24LL * (unsigned int)v56 - 24 + 16);
            v33[5].m128i_i32[0] = v56 - 1;
            v33[4].m128i_i64[0] = v59;
            v33[3] = v58;
          }
          else
          {
            v77 = v33->m128i_i64[0];
            LODWORD(v134) = v23;
            v131 = (const __m128i *)v22;
            v130 = v57;
            v125 = v18;
            sub_B433F0(v77, (__int64)v33[3].m128i_i64, v56, v26, (unsigned __int8 *)v18, v22, (__int64)p_src);
            v18 = v125;
            v57 = v130;
            v22 = (unsigned __int8 *)v131;
            v23 = (int)v134;
          }
          v60 = (const __m128i *)a2[1];
          v61 = v60 + 3;
          if ( v60[3].m128i_i32[1] != 2 )
          {
            v73 = v60[5].m128i_u32[0];
            v74 = v60[4].m128i_u64[1];
            v75 = v73 + 1;
            v76 = (__m128i *)(v74 + 24 * v73);
            if ( v75 > v60[5].m128i_u32[1] )
            {
              LODWORD(v134) = v23;
              v131 = (const __m128i *)v22;
              v95 = &v60[5].m128i_i8[8];
              v130 = v57;
              v128 = v18;
              if ( v74 > (unsigned __int64)v61 || v76 <= v61 )
              {
                sub_2237220(&v60[4].m128i_u64[1], v95, v75, 24);
                v18 = v128;
                v57 = v130;
                v22 = (unsigned __int8 *)v131;
                v23 = (int)v134;
                v76 = (__m128i *)(v60[4].m128i_i64[1] + 24LL * v60[5].m128i_u32[0]);
              }
              else
              {
                sub_2237220(&v60[4].m128i_u64[1], v95, v75, 24);
                v96 = v60[4].m128i_i64[1];
                v23 = (int)v134;
                v22 = (unsigned __int8 *)v131;
                v61 = (const __m128i *)((char *)v61 + v96 - v74);
                v57 = v130;
                v76 = (__m128i *)(v96 + 24LL * v60[5].m128i_u32[0]);
                v18 = v128;
              }
            }
            *v76 = _mm_loadu_si128(v61);
            v76[1].m128i_i64[0] = v61[1].m128i_i64[0];
            v60[3].m128i_i64[1] = v57;
            ++v60[5].m128i_i32[0];
            v60[3].m128i_i32[0] = v18;
            v60[3].m128i_i32[1] = 1;
            v60[4].m128i_i64[0] = v113;
            v24 = *((_DWORD *)a2 + 113);
            v15 = *((unsigned int *)a2 + 8);
            v25 = (unsigned __int8 *)a2[55];
            *((_BYTE *)a2 + 16) = 1;
            continue;
          }
          v15 = *((unsigned int *)a2 + 8);
        }
        else
        {
          if ( v34 != 2 )
          {
            *((_BYTE *)a2 + 16) = 1;
LABEL_28:
            v25 = (unsigned __int8 *)v26;
            break;
          }
          v61 = v33 + 3;
        }
        v62 = v15 + 1;
        v63 = (unsigned __int64)a2[3];
        v64 = (__m128i *)(v63 + 24 * v15);
        if ( v15 + 1 > (unsigned __int64)*((unsigned int *)a2 + 9) )
        {
          v80 = a2 + 5;
          v126 = v23;
          v117 = v22;
          if ( v63 > (unsigned __int64)v61 || v64 <= v61 )
          {
            sub_2237220(v133, v80, v62, 24);
            v23 = v126;
            v22 = v117;
            v64 = (__m128i *)&a2[3][3 * *((unsigned int *)a2 + 8)];
          }
          else
          {
            v81 = &v61->m128i_i8[-v63];
            sub_2237220(v133, v80, v62, 24);
            v82 = a2[3];
            v22 = v117;
            v61 = (const __m128i *)&v81[(_QWORD)v82];
            v23 = v126;
            v64 = (__m128i *)&v82[3 * *((unsigned int *)a2 + 8)];
          }
        }
        *v64 = _mm_loadu_si128(v61);
        v64[1].m128i_i64[0] = v61[1].m128i_i64[0];
        v65 = (__m128i *)a2[1];
        ++*((_DWORD *)a2 + 8);
        v66 = v65[5].m128i_u32[0];
        if ( (_DWORD)v66 )
        {
          v67 = _mm_loadu_si128((const __m128i *)(v65[4].m128i_i64[1] + 24LL * (unsigned int)v66 - 24));
          v68 = *(_QWORD *)(v65[4].m128i_i64[1] + 24LL * (unsigned int)v66 - 24 + 16);
          v65[5].m128i_i32[0] = v66 - 1;
          v65[4].m128i_i64[0] = v68;
          v65[3] = v67;
        }
        else
        {
          v124 = v23;
          v116 = v22;
          sub_B433F0(
            v65->m128i_i64[0],
            (__int64)v65[3].m128i_i64,
            v66,
            v63,
            (unsigned __int8 *)v18,
            v22,
            (__int64)p_src);
          v22 = v116;
          v23 = v124;
        }
        v15 = *((unsigned int *)a2 + 8);
        v24 = *((_DWORD *)a2 + 113);
        v27 = (__int64)&a2[3][3 * v24];
        v25 = *(unsigned __int8 **)(v27 + 16);
        if ( (_DWORD)v15 == 1 )
        {
          a2[53] = (char **)v25;
          v69 = *(unsigned int *)(v27 + 8);
          a2[55] = (char **)v25;
          a2[54] = (char **)&v25[v69];
          *((_DWORD *)a2 + 112) = *(_DWORD *)v27;
          v25 = *(unsigned __int8 **)(v27 + 16);
        }
      }
      else
      {
        v27 = (__int64)&a2[3][3 * v24];
        v25 = *(unsigned __int8 **)(v27 + 16);
      }
      a2[53] = (char **)v25;
      v28 = *(unsigned int *)(v27 + 8);
      a2[55] = (char **)v25;
      a2[54] = (char **)&v25[v28];
      *((_DWORD *)a2 + 112) = *(_DWORD *)v27;
    }
LABEL_17:
    v29 = *((_DWORD *)a2 + 112) + (_DWORD)v25 - *((_DWORD *)a2 + 106);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
    src = p_src + 3;
    v30 = -4;
    if ( (byte_2411740[2 * *(v25 - 1)] & 7) != 0 )
    {
      v31 = 1;
      do
        ++v31;
      while ( (byte_2411740[2 * v25[-v31]] & 7) != 0 );
      v30 = -3LL - v31;
    }
    v32 = &v25[v30];
    if ( *(_DWORD *)v32 == 1918988380 )
    {
      if ( v24 >= (unsigned int)v15 )
      {
        v71 = v135;
        a2[55] = (char **)v22;
        *((_DWORD *)a2 + 113) = v20;
        v72 = _mm_loadh_ps((const double *)&v129);
        *((_DWORD *)a2 + 112) = v71;
        *(__m128 *)(a2 + 53) = v72;
        return v132;
      }
    }
    else
    {
      if ( *(_DWORD *)v32 != 1918988352 )
        return v132;
      if ( v24 >= (unsigned int)v15 )
      {
LABEL_53:
        a2[55] = (char **)v22;
        v54 = v135;
        v55 = (void **)src;
        *((_DWORD *)a2 + 113) = v20;
        *(__m128 *)(a2 + 53) = _mm_loadh_ps((const double *)&v129);
        *((_DWORD *)a2 + 112) = v54;
        if ( v55 != p_src + 3 )
          free(v55);
        return v132;
      }
    }
    v35 = 32;
    v121 = v21;
    v36 = nullptr;
    v37 = v22;
    v38 = (unsigned __int8 *)(p_src + 3);
    while ( 1 )
    {
      v40 = *v25;
      if ( (unsigned __int64)v36->m128i_u64 + 1 > v35 )
      {
        LOBYTE(v130) = v40;
        LODWORD(v131) = v23;
        sub_2236E10(p_src, p_src + 3, &v36->m128i_i8[1], 1);
        v36 = (const __m128i *)si128.m128i_i64[0];
        v23 = (int)v131;
        v40 = v130;
      }
      v36->m128i_i8[(_QWORD)src] = v40;
      v36 = (const __m128i *)(si128.m128i_i64[0] + 1);
      v39 = a2[55];
      ++si128.m128i_i64[0];
      v25 = (unsigned __int8 *)v39 + 1;
      if ( v25 == (unsigned __int8 *)a2[54] )
      {
        a2[55] = (char **)v25;
        v41 = *((_DWORD *)a2 + 8);
        v22 = v37;
        v42 = v121;
        v43 = (unsigned int)(*((_DWORD *)a2 + 113) + 1);
        *((_DWORD *)a2 + 113) = v43;
        if ( (unsigned int)v43 < v41 )
        {
          v44 = (__int64)&a2[3][3 * v43];
          v45 = *(char ***)(v44 + 16);
LABEL_38:
          a2[53] = v45;
          v46 = *(unsigned int *)(v44 + 8);
          a2[55] = v45;
          a2[54] = (char **)((char *)v45 + v46);
          *((_DWORD *)a2 + 112) = *(_DWORD *)v44;
LABEL_39:
          v47 = (unsigned int)v36;
          goto LABEL_40;
        }
        if ( *((_BYTE *)a2 + 16) )
          goto LABEL_39;
        v78 = (const __m128i *)a2[1];
        v79 = v78[3].m128i_u32[1];
        if ( (_DWORD)v79 == 1 )
        {
          v83 = v78[5].m128i_u32[0];
          v118 = v78[3].m128i_i32[0];
          v127 = v78[4].m128i_i64[0];
          v130 = v78[3].m128i_i64[1];
          if ( (_DWORD)v83 )
          {
            v84 = _mm_loadu_si128((const __m128i *)(v78[4].m128i_i64[1] + 24LL * (unsigned int)v83 - 24));
            v85 = *(_QWORD *)(v78[4].m128i_i64[1] + 24LL * (unsigned int)v83 - 24 + 16);
            v78[5].m128i_i32[0] = v83 - 1;
            v78[4].m128i_i64[0] = v85;
            v78[3] = v84;
          }
          else
          {
            v104 = v78->m128i_i64[0];
            LODWORD(v134) = v23;
            v131 = (const __m128i *)v22;
            sub_B433F0(v104, (__int64)v78[3].m128i_i64, v83, v79, v38, v22, (__int64)p_src);
            v22 = (unsigned __int8 *)v131;
            v23 = (int)v134;
          }
          v86 = (const __m128i *)a2[1];
          v36 = v86 + 3;
          if ( v86[3].m128i_i32[1] != 2 )
          {
            v98 = v86[5].m128i_u32[0];
            v99 = v86[4].m128i_u64[1];
            v100 = v98 + 1;
            v101 = (__m128i *)(v99 + 24 * v98);
            if ( v100 > v86[5].m128i_u32[1] )
            {
              v108 = &v86[5].m128i_i8[8];
              v136 = v23;
              v134 = v22;
              v131 = v86;
              if ( v99 > (unsigned __int64)v36 || v101 <= v36 )
              {
                sub_2237220(&v86[4].m128i_u64[1], v108, v100, 24);
                v86 = v131;
                v22 = v134;
                v101 = (__m128i *)(v131[4].m128i_i64[1] + 24LL * v131[5].m128i_u32[0]);
              }
              else
              {
                sub_2237220(&v86[4].m128i_u64[1], v108, v100, 24);
                v86 = v131;
                v22 = v134;
                v109 = v131[4].m128i_i64[1];
                v36 = (const __m128i *)((char *)v36 + v109 - v99);
                v101 = (__m128i *)(24LL * v131[5].m128i_u32[0] + v109);
              }
            }
            *v101 = _mm_loadu_si128(v36);
            v102 = v36[1].m128i_i64[0];
            LODWORD(v36) = si128.m128i_i32[0];
            v101[1].m128i_i64[0] = v102;
            v47 = (unsigned int)v36;
            v86[3].m128i_i32[0] = v118;
            v103 = v130;
            ++v86[5].m128i_i32[0];
            v86[3].m128i_i64[1] = v103;
            v86[3].m128i_i32[1] = 1;
            v86[4].m128i_i64[0] = v127;
            *((_BYTE *)a2 + 16) = 1;
LABEL_40:
            if ( !(_DWORD)v47 )
              goto LABEL_53;
            goto LABEL_41;
          }
          v41 = *((_DWORD *)a2 + 8);
        }
        else
        {
          if ( (_DWORD)v79 != 2 )
          {
            *((_BYTE *)a2 + 16) = 1;
            v47 = (unsigned int)v36;
            goto LABEL_40;
          }
          v36 = v78 + 3;
        }
        v87 = v41;
        v88 = (unsigned __int64)a2[3];
        v89 = v41 + 1LL;
        v90 = (__m128i *)(v88 + 24 * v87);
        if ( v89 > *((unsigned int *)a2 + 9) )
        {
          v105 = a2 + 5;
          v120 = v22;
          if ( v88 > (unsigned __int64)v36 || v90 <= v36 )
          {
            sub_2237220(v133, v105, v89, 24);
            v22 = v120;
            v90 = (__m128i *)&a2[3][3 * *((unsigned int *)a2 + 8)];
          }
          else
          {
            v106 = &v36->m128i_i8[-v88];
            sub_2237220(v133, v105, v89, 24);
            v107 = a2[3];
            v22 = v120;
            v36 = (const __m128i *)&v106[(_QWORD)v107];
            v90 = (__m128i *)&v107[3 * *((unsigned int *)a2 + 8)];
          }
        }
        *v90 = _mm_loadu_si128(v36);
        v90[1].m128i_i64[0] = v36[1].m128i_i64[0];
        v91 = (__m128i *)a2[1];
        ++*((_DWORD *)a2 + 8);
        v92 = v91[5].m128i_u32[0];
        if ( (_DWORD)v92 )
        {
          v93 = _mm_loadu_si128((const __m128i *)(v91[4].m128i_i64[1] + 24LL * (unsigned int)v92 - 24));
          v94 = *(_QWORD *)(v91[4].m128i_i64[1] + 24LL * (unsigned int)v92 - 24 + 16);
          v91[5].m128i_i32[0] = v92 - 1;
          v91[4].m128i_i64[0] = v94;
          v91[3] = v93;
        }
        else
        {
          v119 = v22;
          sub_B433F0(v91->m128i_i64[0], (__int64)v91[3].m128i_i64, v92, v88, v38, v22, (__int64)p_src);
          v22 = v119;
        }
        v44 = (__int64)&a2[3][3 * *((unsigned int *)a2 + 113)];
        v45 = *(char ***)(v44 + 16);
        if ( *((_DWORD *)a2 + 8) == 1 )
        {
          a2[53] = v45;
          v97 = *(unsigned int *)(v44 + 8);
          a2[55] = v45;
          LODWORD(v36) = si128.m128i_i32[0];
          a2[54] = (char **)((char *)v45 + v97);
          *((_DWORD *)a2 + 112) = *(_DWORD *)v44;
          v45 = *(char ***)(v44 + 16);
        }
        else
        {
          LODWORD(v36) = si128.m128i_i32[0];
        }
        goto LABEL_38;
      }
      a2[55] = (char **)v25;
      if ( *((_DWORD *)a2 + 113) >= *((_DWORD *)a2 + 8) )
        break;
      v35 = si128.m128i_u64[1];
    }
    v47 = (unsigned int)v36;
    v22 = v37;
    v42 = v121;
    if ( !(_DWORD)v36 )
      goto LABEL_53;
LABEL_41:
    v48 = (void **)*a2;
    v49 = (unsigned int)(v47 + 1);
    v50 = **a2;
    v48[10] = (char *)v48[10] + v49;
    if ( v48[1] < &v50[v49] || !v50 )
    {
      v122 = v47;
      v114 = (unsigned int)(v47 + 1);
      v70 = sub_986170((__int64)v48, v114, v114, 0, v47, v49);
      LODWORD(v47) = v122;
      v49 = v114;
      v50 = (char *)v70;
      v51 = si128.m128i_i64[0];
      v52 = si128.m128i_i64[0] + 1;
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) <= si128.m128i_i64[1] )
        goto LABEL_44;
LABEL_68:
      v123 = v47;
      v115 = v49;
      sub_2236E10(p_src, p_src + 3, v52, 1);
      v51 = si128.m128i_i64[0];
      LODWORD(v47) = v123;
      v49 = v115;
      goto LABEL_44;
    }
    *v48 = &v50[v49];
    v51 = si128.m128i_i64[0];
    v52 = si128.m128i_i64[0] + 1;
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      goto LABEL_68;
LABEL_44:
    v112 = v47;
    *((_BYTE *)src + v51) = 0;
    memcpy(v50, src, v49);
    v18 = v112;
    if ( src != p_src + 3 )
    {
      free(src);
      v18 = v112;
    }
    v53 = v29 + v18 - 1;
    *(_DWORD *)v19 = v29;
    if ( (_DWORD)v18 == 1 )
      v53 = v29;
    *(_QWORD *)(v19 + 8) = v50;
    *(_QWORD *)(v19 + 16) = (unsigned int)v36;
    *(_DWORD *)(v19 + 4) = v53;
    if ( v111 != v42 )
    {
      v20 = *((_DWORD *)a2 + 113);
      v15 = *((unsigned int *)a2 + 8);
      v19 += 24;
      if ( v20 < (unsigned int)v15 )
      {
        v21 = v42 + 1;
        continue;
      }
    }
    return v132;
  }
}
