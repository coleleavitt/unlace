__int64 __fastcall sub_B219C0(char ***a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int8 *v9; // r9
  char ***v12; // r14
  unsigned __int8 *v13; // rbp
  unsigned __int8 *v14; // r15
  unsigned __int8 *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __m128i *v18; // r9
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r15
  char **v22; // rcx
  int v23; // r12d
  char **v24; // rax
  __m128 v25; // xmm0
  const __m128i *v26; // rdi
  __int32 v27; // esi
  char **v28; // rdi
  __int64 v29; // rsi
  const __m128i *v30; // r15
  __int32 v31; // esi
  void **v32; // rdi
  size_t v33; // r15
  char *v34; // rbx
  __int64 v35; // rax
  int v36; // ebp
  unsigned __int32 v37; // eax
  __int32 v38; // r11d
  __int64 v39; // r10
  __m128i v40; // xmm0
  __int64 v41; // rdx
  const __m128i *v42; // rax
  const __m128i *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rcx
  const __m128i *v48; // r10
  const __m128i *v49; // rbp
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int8 *v52; // r8
  unsigned __int64 v53; // rcx
  __m128i *v54; // rax
  __m128i *v55; // rax
  __int64 v56; // rdx
  __m128i v57; // xmm0
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rcx
  __m128i *v63; // rax
  __m128i *v64; // rax
  __int64 v65; // rdx
  __m128i v66; // xmm0
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 m128i_i64; // rsi
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v74; // r11
  unsigned __int64 v75; // rdx
  __m128i *v76; // rcx
  __int64 v77; // rcx
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rdx
  char ***v80; // rsi
  char **v81; // rax
  char ***v82; // rdi
  char ***v83; // rsi
  signed __int64 v84; // r15
  char **v85; // rax
  __int8 *v86; // rsi
  __int64 v87; // rcx
  __int8 *v88; // rdi
  __int8 *v89; // rsi
  __int8 *v90; // rbp
  __int64 v91; // rcx
  __int64 v92; // [rsp+0h] [rbp-D8h]
  _BYTE *v93; // [rsp+0h] [rbp-D8h]
  __m128i *v94; // [rsp+8h] [rbp-D0h]
  unsigned __int8 *v95; // [rsp+8h] [rbp-D0h]
  __int32 v96; // [rsp+8h] [rbp-D0h]
  __m128i *v97; // [rsp+8h] [rbp-D0h]
  __m128i *v98; // [rsp+8h] [rbp-D0h]
  __int8 *v99; // [rsp+8h] [rbp-D0h]
  unsigned __int8 *v100; // [rsp+8h] [rbp-D0h]
  char **v101; // [rsp+18h] [rbp-C0h] BYREF
  char **v102; // [rsp+20h] [rbp-B8h]
  const __m128i *v103; // [rsp+28h] [rbp-B0h]
  __int64 v104; // [rsp+30h] [rbp-A8h]
  __int64 v105; // [rsp+38h] [rbp-A0h]
  __int64 v106; // [rsp+40h] [rbp-98h]
  const __m128i *v107; // [rsp+48h] [rbp-90h]
  __int64 v108; // [rsp+50h] [rbp-88h]
  __m128i *v109; // [rsp+58h] [rbp-80h]
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  __m128i si128; // [rsp+68h] [rbp-70h]
  _BYTE v112[96]; // [rsp+78h] [rbp-60h] BYREF

  v5 = 0;
  LODWORD(v6) = *((_DWORD *)a1 + 113);
  v7 = *((unsigned int *)a1 + 8);
  if ( (unsigned int)v7 <= (unsigned int)v6 )
    return v5;
  v9 = (unsigned __int8 *)a1[55];
  v12 = a1 + 3;
  v13 = v9;
  v14 = v9;
  v101 = a1[54];
  v102 = a1[56];
  while ( 1 )
  {
    do
    {
      if ( (byte_23ED5E0[2 * *v13] & 7) == 0 )
      {
LABEL_10:
        v18 = (__m128i *)v14;
        goto LABEL_11;
      }
      v15 = (unsigned __int8 *)a1[54];
      a1[55] = (char **)++v13;
    }
    while ( v13 != v15 );
    LODWORD(v6) = v6 + 1;
    *((_DWORD *)a1 + 113) = v6;
    if ( (unsigned int)v6 < (unsigned int)v7 )
    {
      v16 = (__int64)&a1[3][3 * (unsigned int)v6];
      v13 = *(unsigned __int8 **)(v16 + 16);
      goto LABEL_8;
    }
    if ( *((_BYTE *)a1 + 16) )
      break;
    v26 = (const __m128i *)a1[1];
    v27 = v26[3].m128i_i32[1];
    if ( v27 == 1 )
    {
      v44 = v26[5].m128i_u32[0];
      a5 = v26[3].m128i_u32[0];
      v9 = (unsigned __int8 *)v26[4].m128i_i64[0];
      v45 = v26[3].m128i_i64[1];
      if ( (_DWORD)v44 )
      {
        v46 = _mm_loadu_si128((const __m128i *)(v26[4].m128i_i64[1] + 24LL * (unsigned int)v44 - 24));
        v47 = *(_QWORD *)(v26[4].m128i_i64[1] + 24LL * (unsigned int)v44 - 24 + 16);
        v26[5].m128i_i32[0] = v44 - 1;
        v26[4].m128i_i64[0] = v47;
        v26[3] = v46;
      }
      else
      {
        m128i_i64 = (__int64)v26[3].m128i_i64;
        v70 = v26->m128i_i64[0];
        v103 = (const __m128i *)v45;
        v95 = v9;
        LODWORD(v92) = a5;
        sub_B1F6B0(v70, m128i_i64, v44, v7, (unsigned __int8 *)a5, v9, v92);
        a5 = (unsigned int)v92;
        v9 = v95;
        v45 = (__int64)v103;
      }
      v48 = (const __m128i *)a1[1];
      v49 = v48 + 3;
      if ( v48[3].m128i_i32[1] != 2 )
      {
        v73 = v48[5].m128i_u32[0];
        v74 = v48[4].m128i_u64[1];
        v75 = v73 + 1;
        v76 = (__m128i *)(v74 + 24 * v73);
        if ( v75 > v48[5].m128i_u32[1] )
        {
          v88 = &v48[4].m128i_i8[8];
          v89 = &v48[5].m128i_i8[8];
          v104 = v45;
          v103 = v48;
          v100 = v9;
          LODWORD(v92) = a5;
          if ( v74 > (unsigned __int64)v49 || v76 <= v49 )
          {
            sub_22134E0(v88, v89, v75, 24);
            v48 = v103;
            a5 = (unsigned int)v92;
            v9 = v100;
            v45 = v104;
            v76 = (__m128i *)(v103[4].m128i_i64[1] + 24LL * v103[5].m128i_u32[0]);
          }
          else
          {
            v90 = &v49->m128i_i8[-v74];
            sub_22134E0(v88, v89, v75, 24);
            v48 = v103;
            v45 = v104;
            v9 = v100;
            a5 = (unsigned int)v92;
            v91 = v103[4].m128i_i64[1];
            v49 = (const __m128i *)&v90[v91];
            v76 = (__m128i *)(24LL * v103[5].m128i_u32[0] + v91);
          }
        }
        *v76 = _mm_loadu_si128(v49);
        v76[1].m128i_i64[0] = v49[1].m128i_i64[0];
        v48[3].m128i_i32[0] = a5;
        ++v48[5].m128i_i32[0];
        v48[3].m128i_i32[1] = 1;
        v48[3].m128i_i64[1] = v45;
        v48[4].m128i_i64[0] = (__int64)v9;
        LODWORD(v6) = *((_DWORD *)a1 + 113);
        v7 = *((unsigned int *)a1 + 8);
        v13 = (unsigned __int8 *)a1[55];
        *((_BYTE *)a1 + 16) = 1;
        goto LABEL_9;
      }
      v7 = *((unsigned int *)a1 + 8);
    }
    else
    {
      if ( v27 != 2 )
      {
        *((_BYTE *)a1 + 16) = 1;
        v18 = (__m128i *)v14;
        goto LABEL_27;
      }
      v49 = v26 + 3;
    }
    v59 = 3 * v7;
    v60 = v7 + 1;
    v61 = (unsigned __int64)a1[3];
    v62 = *((unsigned int *)a1 + 9);
    v63 = (__m128i *)(v61 + 8 * v59);
    if ( v60 > v62 )
    {
      v80 = a1 + 5;
      if ( v61 > (unsigned __int64)v49 || v63 <= v49 )
      {
        sub_22134E0(v12, v80, v60, 24);
        v63 = (__m128i *)&a1[3][3 * *((unsigned int *)a1 + 8)];
      }
      else
      {
        sub_22134E0(v12, v80, v60, 24);
        v81 = a1[3];
        v49 = (const __m128i *)((char *)v49 + (_QWORD)v81 - v61);
        v63 = (__m128i *)&v81[3 * *((unsigned int *)a1 + 8)];
      }
    }
    *v63 = _mm_loadu_si128(v49);
    v63[1].m128i_i64[0] = v49[1].m128i_i64[0];
    v64 = (__m128i *)a1[1];
    ++*((_DWORD *)a1 + 8);
    v65 = v64[5].m128i_u32[0];
    if ( (_DWORD)v65 )
    {
      v66 = _mm_loadu_si128((const __m128i *)(v64[4].m128i_i64[1] + 24LL * (unsigned int)v65 - 24));
      v67 = *(_QWORD *)(v64[4].m128i_i64[1] + 24LL * (unsigned int)v65 - 24 + 16);
      v64[5].m128i_i32[0] = v65 - 1;
      v64[4].m128i_i64[0] = v67;
      v64[3] = v66;
    }
    else
    {
      sub_B1F6B0(v64->m128i_i64[0], (__int64)v64[3].m128i_i64, v65, v62, (unsigned __int8 *)a5, v9, v92);
    }
    v7 = *((unsigned int *)a1 + 8);
    LODWORD(v6) = *((_DWORD *)a1 + 113);
    v16 = (__int64)&a1[3][3 * (unsigned int)v6];
    v13 = *(unsigned __int8 **)(v16 + 16);
    if ( (_DWORD)v7 == 1 )
    {
      a1[53] = (char **)v13;
      v68 = *(unsigned int *)(v16 + 8);
      a1[55] = (char **)v13;
      a1[54] = (char **)&v13[v68];
      *((_DWORD *)a1 + 112) = *(_DWORD *)v16;
      v13 = *(unsigned __int8 **)(v16 + 16);
    }
LABEL_8:
    a1[53] = (char **)v13;
    v17 = *(unsigned int *)(v16 + 8);
    a1[55] = (char **)v13;
    a1[54] = (char **)&v13[v17];
    *((_DWORD *)a1 + 112) = *(_DWORD *)v16;
LABEL_9:
    if ( (unsigned int)v6 >= (unsigned int)v7 )
      goto LABEL_10;
  }
  v18 = (__m128i *)v14;
LABEL_27:
  LODWORD(v13) = (_DWORD)v15;
LABEL_11:
  v103 = (const __m128i *)a1[53];
  v19 = *((_DWORD *)a1 + 112);
  ptr = v112;
  v93 = v112;
  LODWORD(v104) = v19;
  v20 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
  while ( (unsigned int)v6 < (unsigned int)v7 )
  {
    v21 = *(unsigned __int8 *)a1[55];
    if ( (byte_23ED5E0[2 * v21] & 7) != 0 )
      break;
    while ( 1 )
    {
      if ( (unsigned __int64)(v20 + 1) > si128.m128i_i64[1] )
      {
        v94 = v18;
        sub_22130D0(&ptr, v93, v20 + 1, 1);
        v20 = si128.m128i_i64[0];
        v18 = v94;
      }
      *((_BYTE *)ptr + v20) = v21;
      v22 = a1[55];
      v20 = ++si128.m128i_i64[0];
      a1[55] = (char **)((char *)v22 + 1);
      if ( (char **)((char *)v22 + 1) == a1[54] )
        break;
      if ( *((_DWORD *)a1 + 113) < *((_DWORD *)a1 + 8) )
      {
        v21 = *((unsigned __int8 *)v22 + 1);
        if ( (byte_23ED5E0[2 * v21] & 7) == 0 )
          continue;
      }
      goto LABEL_19;
    }
    v7 = *((unsigned int *)a1 + 8);
    v6 = (unsigned int)(*((_DWORD *)a1 + 113) + 1);
    *((_DWORD *)a1 + 113) = v6;
    if ( (unsigned int)v6 < (unsigned int)v7 )
    {
      a5 = (__int64)&a1[3][3 * (unsigned int)v6];
      v28 = *(char ***)(a5 + 16);
      goto LABEL_30;
    }
    if ( *((_BYTE *)a1 + 16) )
      continue;
    v30 = (const __m128i *)a1[1];
    v31 = v30[3].m128i_i32[1];
    if ( v31 != 1 )
    {
      if ( v31 != 2 )
      {
        *((_BYTE *)a1 + 16) = 1;
        continue;
      }
      v43 = v30 + 3;
LABEL_51:
      v50 = 3 * v7;
      v51 = v7 + 1;
      v52 = (unsigned __int8 *)a1[3];
      v53 = *((unsigned int *)a1 + 9);
      v54 = (__m128i *)&v52[8 * v50];
      if ( v51 > v53 )
      {
        v82 = a1 + 3;
        v83 = a1 + 5;
        v98 = v18;
        if ( v52 > (unsigned __int8 *)v43 || v54 <= v43 )
        {
          sub_22134E0(v82, v83, v51, 24);
          v18 = v98;
          v54 = (__m128i *)&a1[3][3 * *((unsigned int *)a1 + 8)];
        }
        else
        {
          v84 = (char *)v43 - (char *)v52;
          sub_22134E0(v82, v83, v51, 24);
          v85 = a1[3];
          v18 = v98;
          v43 = (const __m128i *)((char *)v85 + v84);
          v54 = (__m128i *)&v85[3 * *((unsigned int *)a1 + 8)];
        }
      }
      *v54 = _mm_loadu_si128(v43);
      v54[1].m128i_i64[0] = v43[1].m128i_i64[0];
      v55 = (__m128i *)a1[1];
      ++*((_DWORD *)a1 + 8);
      v56 = v55[5].m128i_u32[0];
      if ( (_DWORD)v56 )
      {
        v57 = _mm_loadu_si128((const __m128i *)(v55[4].m128i_i64[1] + 24LL * (unsigned int)v56 - 24));
        v58 = *(_QWORD *)(v55[4].m128i_i64[1] + 24LL * (unsigned int)v56 - 24 + 16);
        v55[5].m128i_i32[0] = v56 - 1;
        v55[4].m128i_i64[0] = v58;
        v55[3] = v57;
      }
      else
      {
        v97 = v18;
        sub_B1F6B0(v55->m128i_i64[0], (__int64)v55[3].m128i_i64, v56, v53, v52, v18, (__int64)v93);
        v18 = v97;
      }
      LODWORD(v7) = *((_DWORD *)a1 + 8);
      LODWORD(v6) = *((_DWORD *)a1 + 113);
      a5 = (__int64)&a1[3][3 * (unsigned int)v6];
      v28 = *(char ***)(a5 + 16);
      if ( (_DWORD)v7 == 1 )
      {
        a1[53] = v28;
        v72 = *(unsigned int *)(a5 + 8);
        a1[55] = v28;
        a1[54] = (char **)((char *)v28 + v72);
        *((_DWORD *)a1 + 112) = *(_DWORD *)a5;
        v20 = si128.m128i_i64[0];
        v28 = *(char ***)(a5 + 16);
      }
      else
      {
        v20 = si128.m128i_i64[0];
      }
LABEL_30:
      a1[53] = v28;
      v29 = *(unsigned int *)(a5 + 8);
      a1[55] = v28;
      a1[54] = (char **)((char *)v28 + v29);
      *((_DWORD *)a1 + 112) = *(_DWORD *)a5;
      continue;
    }
    v37 = v30[5].m128i_u32[0];
    v38 = v30[3].m128i_i32[0];
    a5 = v30[4].m128i_i64[0];
    v39 = v30[3].m128i_i64[1];
    if ( v37 )
    {
      v40 = _mm_loadu_si128((const __m128i *)(v30[4].m128i_i64[1] + 24LL * v37 - 24));
      v41 = *(_QWORD *)(v30[4].m128i_i64[1] + 24LL * v37 - 24 + 16);
      v30[5].m128i_i32[0] = v37 - 1;
      v30[4].m128i_i64[0] = v41;
      v30[3] = v40;
    }
    else
    {
      v71 = v30->m128i_i64[0];
      v107 = v18;
      v106 = v39;
      v105 = a5;
      v96 = v38;
      sub_B1F6B0(v71, (__int64)v30[3].m128i_i64, v6, v7, (unsigned __int8 *)a5, v18, (__int64)v93);
      v38 = v96;
      a5 = v105;
      v39 = v106;
      v18 = (__m128i *)v107;
    }
    v42 = (const __m128i *)a1[1];
    v43 = v42 + 3;
    if ( v42[3].m128i_i32[1] == 2 )
    {
      v7 = *((unsigned int *)a1 + 8);
      goto LABEL_51;
    }
    v77 = v42[5].m128i_u32[0];
    v78 = v42[4].m128i_u64[1];
    v79 = v77 + 1;
    v7 = v78 + 24 * v77;
    if ( v79 > v42[5].m128i_u32[1] )
    {
      v109 = v18;
      v99 = &v42[4].m128i_i8[8];
      v86 = &v42[5].m128i_i8[8];
      v108 = v39;
      v107 = v42;
      v106 = a5;
      LODWORD(v105) = v38;
      if ( v78 > (unsigned __int64)v43 || v7 <= (unsigned __int64)v43 )
      {
        sub_22134E0(v99, v86, v79, 24);
        v42 = v107;
        v18 = v109;
        v39 = v108;
        a5 = v106;
        v38 = v105;
        v7 = v107[4].m128i_i64[1] + 24LL * v107[5].m128i_u32[0];
      }
      else
      {
        sub_22134E0(v99, v86, v79, 24);
        v42 = v107;
        v38 = v105;
        a5 = v106;
        v39 = v108;
        v87 = v107[4].m128i_i64[1];
        v18 = v109;
        v43 = (const __m128i *)((char *)v43 + v87 - v78);
        v7 = 24LL * v107[5].m128i_u32[0] + v87;
      }
    }
    *(__m128i *)v7 = _mm_loadu_si128(v43);
    *(_QWORD *)(v7 + 16) = v43[1].m128i_i64[0];
    v42[3].m128i_i32[0] = v38;
    ++v42[5].m128i_i32[0];
    v42[3].m128i_i32[1] = 1;
    v42[3].m128i_i64[1] = v39;
    v42[4].m128i_i64[0] = a5;
    v20 = si128.m128i_i64[0];
    LODWORD(v6) = *((_DWORD *)a1 + 113);
    LODWORD(v7) = *((_DWORD *)a1 + 8);
    *((_BYTE *)a1 + 16) = 1;
  }
LABEL_19:
  v23 = v20;
  if ( (_DWORD)v20 )
  {
    v32 = (void **)*a1;
    v33 = (unsigned int)(v20 + 1);
    v34 = **a1;
    v32[10] = (char *)v32[10] + v33;
    if ( v32[1] >= &v34[v33] && v34 )
      *v32 = &v34[v33];
    else
      v34 = (char *)sub_962430((__int64)v32, v33, v33, 0, a5, (__int64)v18);
    v35 = si128.m128i_i64[0];
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
    {
      sub_22130D0(&ptr, v112, si128.m128i_i64[0] + 1, 1);
      v35 = si128.m128i_i64[0];
    }
    *((_BYTE *)ptr + v35) = 0;
    memcpy(v34, ptr, v33);
    v36 = v104 + (_DWORD)v13 - (_DWORD)v103;
    *(_QWORD *)(a2 + 16) = v34;
    *(_DWORD *)a2 = v36;
    v5 = 1;
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)(a2 + 12) = v23;
    *(_DWORD *)(a2 + 8) = v23;
  }
  else
  {
    v24 = v102;
    a1[55] = (char **)v18;
    v25 = _mm_loadh_ps((const double *)&v101);
    a1[56] = v24;
    *(__m128 *)(a1 + 53) = v25;
    v5 = 0;
  }
  if ( ptr != v112 )
    free(ptr);
  return v5;
}

