unsigned __int64 __fastcall sub_B24C40(__int64 a1, char ***a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // rbp
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  _DWORD *v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rdx
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  unsigned __int8 *v20; // r9
  unsigned __int8 *v21; // rbp
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r15
  int v27; // ebp
  unsigned __int8 *v28; // r8
  __int64 v29; // rax
  char **v30; // rax
  unsigned int v31; // r8d
  int v32; // eax
  void **v33; // rdi
  void **v34; // rax
  __int64 v35; // rdi
  char **v36; // rsi
  __int64 v37; // rcx
  const __m128i *v38; // rbp
  __int32 v39; // esi
  __int64 v40; // rcx
  int v41; // esi
  void **v42; // rdi
  size_t v43; // r9
  char *v44; // r14
  __int64 v45; // rax
  int v46; // eax
  unsigned __int32 v47; // eax
  __int32 v48; // r11d
  __int64 v49; // r10
  __m128i v50; // xmm0
  __int64 v51; // rdx
  const __m128i *v52; // rax
  const __m128i *v53; // rbp
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  __m128i *v57; // rax
  __m128i *v58; // rax
  __int64 v59; // rdx
  __m128i v60; // xmm0
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned int v63; // eax
  __int32 v64; // r11d
  __int64 v65; // r10
  __m128i v66; // xmm0
  __int64 v67; // rdx
  const __m128i *v68; // rax
  const __m128i *v69; // r15
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  __m128i *v73; // rax
  __m128i *v74; // rax
  __int64 v75; // rdx
  __m128i v76; // xmm0
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // rdx
  __m128i *v83; // rcx
  __int64 v84; // rdi
  __int64 v85; // rcx
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rdx
  __m128i *v88; // rcx
  __int64 v89; // rdi
  __int8 *v90; // r15
  char **v91; // rax
  __int8 *v92; // rbp
  char **v93; // rax
  __int8 *v94; // rsi
  __int64 v95; // rdx
  __int8 *v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // [rsp+0h] [rbp-F8h]
  __int64 v99; // [rsp+10h] [rbp-E8h]
  unsigned __int8 *v100; // [rsp+18h] [rbp-E0h]
  unsigned int v101; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v102; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v103; // [rsp+18h] [rbp-E0h]
  unsigned int v104; // [rsp+18h] [rbp-E0h]
  __int32 v105; // [rsp+18h] [rbp-E0h]
  __int32 v106; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v107; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v108; // [rsp+18h] [rbp-E0h]
  __int8 *v109; // [rsp+18h] [rbp-E0h]
  __int8 *v110; // [rsp+18h] [rbp-E0h]
  char v111; // [rsp+20h] [rbp-D8h]
  size_t v112; // [rsp+20h] [rbp-D8h]
  unsigned __int8 *v113; // [rsp+20h] [rbp-D8h]
  __int64 v114; // [rsp+20h] [rbp-D8h]
  __int32 v115; // [rsp+20h] [rbp-D8h]
  __int32 v116; // [rsp+20h] [rbp-D8h]
  unsigned __int8 *v117; // [rsp+28h] [rbp-D0h]
  __int64 v118; // [rsp+28h] [rbp-D0h]
  __int64 v119; // [rsp+28h] [rbp-D0h]
  __int64 v120; // [rsp+28h] [rbp-D0h]
  unsigned __int8 *v121; // [rsp+28h] [rbp-D0h]
  char **v122; // [rsp+38h] [rbp-C0h] BYREF
  int v123; // [rsp+40h] [rbp-B8h]
  int v124; // [rsp+44h] [rbp-B4h]
  void **p_ptr; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v126; // [rsp+50h] [rbp-A8h]
  char ***v127; // [rsp+58h] [rbp-A0h]
  char ***v128; // [rsp+60h] [rbp-98h]
  const __m128i *v129; // [rsp+68h] [rbp-90h]
  __int64 v130; // [rsp+70h] [rbp-88h]
  unsigned __int8 *v131; // [rsp+78h] [rbp-80h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __m128i si128; // [rsp+88h] [rbp-70h]
  _BYTE v134[96]; // [rsp+98h] [rbp-60h] BYREF

  v6 = a3;
  v8 = 24LL * a3;
  v10 = *(unsigned __int64 **)(a1 + 16);
  v11 = *v10;
  v10[10] += v8;
  v12 = v8 + ((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10[1] >= v12 && v11 )
  {
    v126 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    *v10 = v12;
    v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v126 = sub_962430((__int64)v10, v8, v8, 3, a5, a6);
    v13 = v126;
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
    return v126;
  v15 = *((_DWORD *)a2 + 113);
  v16 = *((unsigned int *)a2 + 8);
  if ( (unsigned int)v16 <= v15 )
    return v126;
  v18 = v126;
  v19 = 1;
  v127 = a2 + 3;
  v99 = a3 - 1 + 1LL;
  p_ptr = &ptr;
  v128 = a2 + 5;
  while ( 2 )
  {
    v20 = (unsigned __int8 *)a2[55];
    v123 = v19 - 1;
    v21 = v20;
    v122 = a2[54];
    v124 = *((_DWORD *)a2 + 112);
    v22 = v15;
    while ( v22 < (unsigned int)v16 )
    {
      do
      {
        if ( (byte_23ED5E0[2 * *v21] & 7) == 0 )
          goto LABEL_17;
        v23 = (__int64)a2[54];
        a2[55] = (char **)++v21;
      }
      while ( v21 != (unsigned __int8 *)v23 );
      *((_DWORD *)a2 + 113) = ++v22;
      if ( v22 >= (unsigned int)v16 )
      {
        if ( *((_BYTE *)a2 + 16) )
          goto LABEL_35;
        v38 = (const __m128i *)a2[1];
        v39 = v38[3].m128i_i32[1];
        if ( v39 == 1 )
        {
          v47 = v38[5].m128i_u32[0];
          v48 = v38[3].m128i_i32[0];
          a5 = v38[4].m128i_i64[0];
          v49 = v38[3].m128i_i64[1];
          if ( v47 )
          {
            v50 = _mm_loadu_si128((const __m128i *)(v38[4].m128i_i64[1] + 24LL * v47 - 24));
            v51 = *(_QWORD *)(v38[4].m128i_i64[1] + 24LL * v47 - 24 + 16);
            v38[5].m128i_i32[0] = v47 - 1;
            v38[4].m128i_i64[0] = v51;
            v38[3] = v50;
          }
          else
          {
            v89 = v38->m128i_i64[0];
            v129 = (const __m128i *)v20;
            v119 = v49;
            v114 = a5;
            v106 = v48;
            sub_B1F6B0(v89, (__int64)v38[3].m128i_i64, v16, v23, (unsigned __int8 *)a5, v20, v98);
            v48 = v106;
            a5 = v114;
            v49 = v119;
            v20 = (unsigned __int8 *)v129;
          }
          v52 = (const __m128i *)a2[1];
          v53 = v52 + 3;
          if ( v52[3].m128i_i32[1] != 2 )
          {
            v85 = v52[5].m128i_u32[0];
            v86 = v52[4].m128i_u64[1];
            v87 = v85 + 1;
            v88 = (__m128i *)(v86 + 24 * v85);
            if ( v87 > v52[5].m128i_u32[1] )
            {
              v131 = v20;
              v109 = &v52[4].m128i_i8[8];
              v94 = &v52[5].m128i_i8[8];
              v130 = v49;
              v129 = v52;
              v120 = a5;
              v115 = v48;
              if ( v86 > (unsigned __int64)v53 || v88 <= v53 )
              {
                sub_22134E0(v109, v94, v87, 24);
                v52 = v129;
                v48 = v115;
                a5 = v120;
                v49 = v130;
                v20 = v131;
                v88 = (__m128i *)(v129[4].m128i_i64[1] + 24LL * v129[5].m128i_u32[0]);
              }
              else
              {
                sub_22134E0(v109, v94, v87, 24);
                v52 = v129;
                v20 = v131;
                v49 = v130;
                a5 = v120;
                v95 = v129[4].m128i_i64[1];
                v48 = v115;
                v53 = (const __m128i *)((char *)v53 + v95 - v86);
                v88 = (__m128i *)(v95 + 24LL * v129[5].m128i_u32[0]);
              }
            }
            *v88 = _mm_loadu_si128(v53);
            v88[1].m128i_i64[0] = v53[1].m128i_i64[0];
            v52[3].m128i_i32[0] = v48;
            ++v52[5].m128i_i32[0];
            v52[3].m128i_i32[1] = 1;
            v52[3].m128i_i64[1] = v49;
            v52[4].m128i_i64[0] = a5;
            v22 = *((_DWORD *)a2 + 113);
            v16 = *((unsigned int *)a2 + 8);
            v21 = (unsigned __int8 *)a2[55];
            *((_BYTE *)a2 + 16) = 1;
            continue;
          }
          LODWORD(v16) = *((_DWORD *)a2 + 8);
        }
        else
        {
          if ( v39 != 2 )
          {
            *((_BYTE *)a2 + 16) = 1;
LABEL_35:
            LODWORD(v21) = v23;
            break;
          }
          v53 = v38 + 3;
        }
        v54 = (unsigned int)v16;
        v55 = (unsigned __int64)a2[3];
        v56 = (unsigned int)v16 + 1LL;
        v57 = (__m128i *)(v55 + 24 * v54);
        if ( v56 > *((unsigned int *)a2 + 9) )
        {
          v108 = v20;
          if ( v55 > (unsigned __int64)v53 || v57 <= v53 )
          {
            sub_22134E0(v127, v128, v56, 24);
            v20 = v108;
            v57 = (__m128i *)&a2[3][3 * *((unsigned int *)a2 + 8)];
          }
          else
          {
            v92 = &v53->m128i_i8[-v55];
            sub_22134E0(v127, v128, v56, 24);
            v93 = a2[3];
            v20 = v108;
            v53 = (const __m128i *)&v92[(_QWORD)v93];
            v57 = (__m128i *)&v93[3 * *((unsigned int *)a2 + 8)];
          }
        }
        *v57 = _mm_loadu_si128(v53);
        v57[1].m128i_i64[0] = v53[1].m128i_i64[0];
        v58 = (__m128i *)a2[1];
        ++*((_DWORD *)a2 + 8);
        v59 = v58[5].m128i_u32[0];
        if ( (_DWORD)v59 )
        {
          v60 = _mm_loadu_si128((const __m128i *)(v58[4].m128i_i64[1] + 24LL * (unsigned int)v59 - 24));
          v61 = *(_QWORD *)(v58[4].m128i_i64[1] + 24LL * (unsigned int)v59 - 24 + 16);
          v58[5].m128i_i32[0] = v59 - 1;
          v58[4].m128i_i64[0] = v61;
          v58[3] = v60;
        }
        else
        {
          v103 = v20;
          sub_B1F6B0(v58->m128i_i64[0], (__int64)v58[3].m128i_i64, v59, v55, (unsigned __int8 *)a5, v20, v98);
          v20 = v103;
        }
        v16 = *((unsigned int *)a2 + 8);
        v22 = *((_DWORD *)a2 + 113);
        v24 = (__int64)&a2[3][3 * v22];
        v21 = *(unsigned __int8 **)(v24 + 16);
        if ( (_DWORD)v16 == 1 )
        {
          a2[53] = (char **)v21;
          v62 = *(unsigned int *)(v24 + 8);
          a2[55] = (char **)v21;
          a2[54] = (char **)&v21[v62];
          *((_DWORD *)a2 + 112) = *(_DWORD *)v24;
          v21 = *(unsigned __int8 **)(v24 + 16);
        }
      }
      else
      {
        v24 = (__int64)&a2[3][3 * v22];
        v21 = *(unsigned __int8 **)(v24 + 16);
      }
      a2[53] = (char **)v21;
      v25 = *(unsigned int *)(v24 + 8);
      a2[55] = (char **)v21;
      a2[54] = (char **)&v21[v25];
      *((_DWORD *)a2 + 112) = *(_DWORD *)v24;
    }
LABEL_17:
    v26 = 0;
    v27 = *((_DWORD *)a2 + 112) + (_DWORD)v21 - *((_DWORD *)a2 + 106);
    ptr = v134;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
    while ( v22 < (unsigned int)v16 )
    {
      v28 = byte_23ED5E0;
      v29 = *(unsigned __int8 *)a2[55];
      if ( (byte_23ED5E0[2 * v29] & 7) != 0 )
        break;
      while ( 1 )
      {
        if ( (unsigned __int64)(v26 + 1) > si128.m128i_i64[1] )
        {
          v117 = v28;
          v111 = v29;
          v100 = v20;
          sub_22130D0(p_ptr, v134, v26 + 1, 1);
          v28 = v117;
          LOBYTE(v29) = v111;
          v26 = si128.m128i_i64[0];
          v20 = v100;
        }
        *((_BYTE *)ptr + v26) = v29;
        v26 = si128.m128i_i64[0] + 1;
        v30 = a2[55];
        ++si128.m128i_i64[0];
        a2[55] = (char **)((char *)v30 + 1);
        if ( (char **)((char *)v30 + 1) == a2[54] )
          break;
        if ( *((_DWORD *)a2 + 113) < *((_DWORD *)a2 + 8) )
        {
          v29 = *((unsigned __int8 *)v30 + 1);
          if ( (v28[2 * v29] & 7) == 0 )
            continue;
        }
        goto LABEL_25;
      }
      v16 = *((unsigned int *)a2 + 8);
      v22 = *((_DWORD *)a2 + 113) + 1;
      *((_DWORD *)a2 + 113) = v22;
      if ( v22 < (unsigned int)v16 )
      {
        v35 = (__int64)&a2[3][3 * v22];
        v36 = *(char ***)(v35 + 16);
        goto LABEL_30;
      }
      if ( !*((_BYTE *)a2 + 16) )
      {
        v40 = (__int64)a2[1];
        v41 = *(_DWORD *)(v40 + 52);
        if ( v41 == 1 )
        {
          v63 = *(_DWORD *)(v40 + 80);
          v64 = *(_DWORD *)(v40 + 48);
          v28 = *(unsigned __int8 **)(v40 + 64);
          v65 = *(_QWORD *)(v40 + 56);
          if ( v63 )
          {
            v66 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v40 + 72) + 24LL * v63 - 24));
            v67 = *(_QWORD *)(*(_QWORD *)(v40 + 72) + 24LL * v63 - 24 + 16);
            *(_DWORD *)(v40 + 80) = v63 - 1;
            *(_QWORD *)(v40 + 64) = v67;
            *(__m128i *)(v40 + 48) = v66;
          }
          else
          {
            v84 = *(_QWORD *)v40;
            v129 = (const __m128i *)v20;
            v118 = v65;
            v113 = v28;
            v105 = v64;
            sub_B1F6B0(v84, v40 + 48, v16, v40, v28, v20, v98);
            v64 = v105;
            v28 = v113;
            v65 = v118;
            v20 = (unsigned __int8 *)v129;
          }
          v68 = (const __m128i *)a2[1];
          v69 = v68 + 3;
          if ( v68[3].m128i_i32[1] == 2 )
          {
            LODWORD(v16) = *((_DWORD *)a2 + 8);
LABEL_65:
            v70 = (unsigned int)v16;
            v71 = (unsigned __int64)a2[3];
            v72 = (unsigned int)v16 + 1LL;
            v73 = (__m128i *)(v71 + 24 * v70);
            if ( v72 > *((unsigned int *)a2 + 9) )
            {
              v107 = v20;
              if ( v71 > (unsigned __int64)v69 || v73 <= v69 )
              {
                sub_22134E0(v127, v128, v72, 24);
                v20 = v107;
                v73 = (__m128i *)&a2[3][3 * *((unsigned int *)a2 + 8)];
              }
              else
              {
                v90 = &v69->m128i_i8[-v71];
                sub_22134E0(v127, v128, v72, 24);
                v91 = a2[3];
                v20 = v107;
                v69 = (const __m128i *)&v90[(_QWORD)v91];
                v73 = (__m128i *)&v91[3 * *((unsigned int *)a2 + 8)];
              }
            }
            *v73 = _mm_loadu_si128(v69);
            v73[1].m128i_i64[0] = v69[1].m128i_i64[0];
            v74 = (__m128i *)a2[1];
            ++*((_DWORD *)a2 + 8);
            v75 = v74[5].m128i_u32[0];
            if ( (_DWORD)v75 )
            {
              v76 = _mm_loadu_si128((const __m128i *)(v74[4].m128i_i64[1] + 24LL * (unsigned int)v75 - 24));
              v77 = *(_QWORD *)(v74[4].m128i_i64[1] + 24LL * (unsigned int)v75 - 24 + 16);
              v74[5].m128i_i32[0] = v75 - 1;
              v74[4].m128i_i64[0] = v77;
              v74[3] = v76;
            }
            else
            {
              v102 = v20;
              sub_B1F6B0(v74->m128i_i64[0], (__int64)v74[3].m128i_i64, v75, v71, v28, v20, v98);
              v20 = v102;
            }
            LODWORD(v16) = *((_DWORD *)a2 + 8);
            v22 = *((_DWORD *)a2 + 113);
            v35 = (__int64)&a2[3][3 * v22];
            v36 = *(char ***)(v35 + 16);
            if ( (_DWORD)v16 == 1 )
            {
              a2[53] = v36;
              v79 = *(unsigned int *)(v35 + 8);
              a2[55] = v36;
              v26 = si128.m128i_i64[0];
              a2[54] = (char **)((char *)v36 + v79);
              *((_DWORD *)a2 + 112) = *(_DWORD *)v35;
              v36 = *(char ***)(v35 + 16);
            }
            else
            {
              v26 = si128.m128i_i64[0];
            }
LABEL_30:
            a2[53] = v36;
            v37 = *(unsigned int *)(v35 + 8);
            a2[55] = v36;
            a2[54] = (char **)((char *)v36 + v37);
            *((_DWORD *)a2 + 112) = *(_DWORD *)v35;
          }
          else
          {
            v80 = v68[5].m128i_u32[0];
            v81 = v68[4].m128i_u64[1];
            v82 = v80 + 1;
            v83 = (__m128i *)(v81 + 24 * v80);
            if ( v82 > v68[5].m128i_u32[1] )
            {
              v131 = v20;
              v110 = &v68[4].m128i_i8[8];
              v96 = &v68[5].m128i_i8[8];
              v130 = v65;
              v129 = v68;
              v121 = v28;
              v116 = v64;
              if ( v81 > (unsigned __int64)v69 || v83 <= v69 )
              {
                sub_22134E0(v110, v96, v82, 24);
                v68 = v129;
                v20 = v131;
                v65 = v130;
                v28 = v121;
                v64 = v116;
                v83 = (__m128i *)(v129[4].m128i_i64[1] + 24LL * v129[5].m128i_u32[0]);
              }
              else
              {
                sub_22134E0(v110, v96, v82, 24);
                v68 = v129;
                v64 = v116;
                v28 = v121;
                v65 = v130;
                v97 = v129[4].m128i_i64[1];
                v20 = v131;
                v69 = (const __m128i *)((char *)v69 + v97 - v81);
                v83 = (__m128i *)(v97 + 24LL * v129[5].m128i_u32[0]);
              }
            }
            *v83 = _mm_loadu_si128(v69);
            v16 = v69[1].m128i_i64[0];
            v26 = si128.m128i_i64[0];
            v83[1].m128i_i64[0] = v16;
            v68[3].m128i_i32[0] = v64;
            ++v68[5].m128i_i32[0];
            v68[3].m128i_i32[1] = 1;
            v68[3].m128i_i64[1] = v65;
            v68[4].m128i_i64[0] = (__int64)v28;
            v22 = *((_DWORD *)a2 + 113);
            *((_BYTE *)a2 + 16) = 1;
            LODWORD(v16) = *((_DWORD *)a2 + 8);
          }
        }
        else
        {
          if ( v41 == 2 )
          {
            v69 = (const __m128i *)(v40 + 48);
            goto LABEL_65;
          }
          *((_BYTE *)a2 + 16) = 1;
        }
      }
    }
LABEL_25:
    v31 = v26;
    if ( (_DWORD)v26 )
    {
      v42 = (void **)*a2;
      v43 = (unsigned int)(v26 + 1);
      v44 = **a2;
      v42[10] = (char *)v42[10] + v43;
      if ( v42[1] >= &v44[v43] && v44 )
      {
        *v42 = &v44[v43];
      }
      else
      {
        v78 = sub_962430((__int64)v42, (unsigned int)(v26 + 1), (unsigned int)(v26 + 1), 0, (unsigned int)v26, v43);
        v31 = v26;
        v43 = (unsigned int)(v26 + 1);
        v44 = (char *)v78;
      }
      v45 = si128.m128i_i64[0];
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        v112 = v43;
        v104 = v31;
        sub_22130D0(p_ptr, v134, si128.m128i_i64[0] + 1, 1);
        v43 = v112;
        v31 = v104;
        v45 = si128.m128i_i64[0];
      }
      v101 = v31;
      *((_BYTE *)ptr + v45) = 0;
      memcpy(v44, ptr, v43);
      a5 = v101;
      if ( ptr != v134 )
      {
        free(ptr);
        a5 = v101;
      }
      v46 = v27 + a5 - 1;
      *(_DWORD *)v18 = v27;
      if ( (_DWORD)a5 == 1 )
        v46 = v27;
      *(_QWORD *)(v18 + 8) = v44;
      *(_QWORD *)(v18 + 16) = (unsigned int)v26;
      *(_DWORD *)(v18 + 4) = v46;
      if ( v99 != v19 )
      {
        v15 = *((_DWORD *)a2 + 113);
        v16 = *((unsigned int *)a2 + 8);
        v18 += 24LL;
        if ( v15 < (unsigned int)v16 )
        {
          ++v19;
          continue;
        }
      }
    }
    else
    {
      v32 = v124;
      a2[55] = (char **)v20;
      v33 = (void **)ptr;
      *((_DWORD *)a2 + 113) = v15;
      *((_DWORD *)a2 + 112) = v32;
      v34 = p_ptr;
      *(__m128 *)(a2 + 53) = _mm_loadh_ps((const double *)&v122);
      if ( v33 != v34 + 3 )
        free(v33);
    }
    return v126;
  }
}

