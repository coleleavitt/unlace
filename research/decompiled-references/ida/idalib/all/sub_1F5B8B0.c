void __fastcall sub_1F5B8B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // r9d
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rdi
  __int64 v23; // rcx
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // r9
  __int64 v27; // rdi
  unsigned int v28; // r13d
  unsigned __int64 v29; // r15
  __int64 v30; // rdx
  unsigned __int64 v31; // r15
  __int64 v32; // rcx
  unsigned int v33; // r14d
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r15
  unsigned int v36; // eax
  unsigned __int64 v37; // r15
  __m128i v38; // xmm1
  _BYTE *v39; // r14
  unsigned __int64 v40; // rdx
  __m128i v41; // xmm0
  __m128i *v42; // rcx
  const __m128i *v43; // rax
  _QWORD *v44; // r14
  __int64 v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r15
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // r10
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rcx
  unsigned __int64 v56; // r14
  __int64 v57; // rax
  int v58; // r13d
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r14
  int v61; // edx
  unsigned __int64 v62; // r14
  _QWORD *v63; // r14
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r14
  __int64 v72; // r12
  __int64 v73; // rax
  __int64 v74; // r10
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rcx
  unsigned __int64 v78; // r15
  int v79; // r13d
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // r15
  int v82; // ecx
  unsigned __int64 v83; // r15
  __int64 v84; // rdx
  unsigned __int64 v85; // rsi
  _BYTE *v86; // r15
  unsigned __int64 v87; // rdx
  __m128i *v88; // rcx
  const __m128i *v89; // rax
  __int64 v90; // r15
  __int64 v91; // rcx
  __int64 v92; // r12
  unsigned __int64 v93; // r14
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // r9
  unsigned int v97; // r13d
  unsigned __int64 v98; // r14
  unsigned __int64 v99; // r14
  int v100; // eax
  unsigned __int64 v101; // r14
  unsigned int v102; // [rsp+0h] [rbp-E8h]
  __int64 v103; // [rsp+0h] [rbp-E8h]
  __int64 v104; // [rsp+0h] [rbp-E8h]
  __int64 v105; // [rsp+0h] [rbp-E8h]
  __int64 v106; // [rsp+8h] [rbp-E0h]
  __int64 v107; // [rsp+8h] [rbp-E0h]
  int v109; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v110; // [rsp+28h] [rbp-C0h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v112; // [rsp+48h] [rbp-A0h]
  _BYTE v113[152]; // [rsp+50h] [rbp-98h] BYREF

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  if ( (_DWORD)v5 )
  {
    v6 = *(_QWORD *)(v3 + 8);
    v7 = a2 + 32;
    v8 = *(_DWORD *)(v6 + 13072);
    v9 = v8 - v5;
    do
    {
      v10 = v8--;
      v7 += 8;
      *(_QWORD *)(v7 - 8) = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8 * v10 - 8);
    }
    while ( v9 != v8 );
    *(_DWORD *)(v6 + 13072) = v9;
  }
  v11 = sub_1EE7490(v3);
  v13 = *a1;
  *(_DWORD *)(a2 + 16) = v11;
  v14 = *(unsigned int *)(v13 + 24);
  *(_DWORD *)(v13 + 24) = v14 + 1;
  *(_BYTE *)(a2 + 20) = (*(_QWORD *)(*(_QWORD *)(v13 + 32) + 8 * v14) != 0) | *(_BYTE *)(a2 + 20) & 0xFE;
  ptr = v113;
  v112 = 0x400000000LL;
LABEL_6:
  while ( 1 )
  {
    v15 = *a1;
    v16 = *(unsigned int *)(*a1 + 40);
    v17 = *(unsigned int *)(*a1 + 24);
    v18 = 8 * v17;
    if ( (unsigned int)v16 <= (unsigned int)v17 )
      break;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v15 + 32);
      v19 = (unsigned int)(v17 + 1);
      *(_DWORD *)(v15 + 24) = v19;
      v20 = *(_QWORD *)(v12 + v18);
      if ( (_DWORD)v20 == 1 )
        break;
      if ( (int)v20 <= 1 )
      {
        if ( !(_DWORD)v20 )
        {
          v44 = *(_QWORD **)(v15 + 8);
          v45 = *(_QWORD *)(v15 + 16);
          *(_DWORD *)(v15 + 24) = v17 + 2;
          v46 = sub_1EE0AD0((__int64)v44, v45, *(_QWORD *)(v12 + 8 * v19));
          v47 = sub_1EE2910(v44, v46);
          v48 = *a1;
          v49 = v47;
          v50 = *(_QWORD *)(*a1 + 16);
          v51 = *(unsigned int *)(*a1 + 24);
          v52 = *(_QWORD *)(*a1 + 32);
          v53 = *(_QWORD *)(*a1 + 8);
          v54 = *(_QWORD *)(v50 + 856);
          v55 = (unsigned int)(v51 + 1);
          v56 = *(_QWORD *)(v52 + 8 * v51);
          *(_DWORD *)(*a1 + 24) = v55;
          v57 = v50;
          if ( v54 )
          {
            sub_1EDF870(v53, v50);
            v48 = *a1;
            v57 = *(_QWORD *)(*a1 + 16);
            v53 = *(_QWORD *)(*a1 + 8);
            v55 = *(unsigned int *)(*a1 + 24);
            v52 = *(_QWORD *)(*a1 + 32);
            v54 = *(_QWORD *)(v57 + 856);
          }
          v58 = __ROR4__(v56, 1);
          v59 = HIDWORD(v56);
          if ( v59 )
            v50 = *(_QWORD *)(*(_QWORD *)(v50 + 3320) + 8LL * (unsigned int)(v59 - 1));
          if ( v58 )
            v58 = v58 + *(_DWORD *)(v50 + 1648) - 2;
          v60 = *(_QWORD *)(v52 + 8 * v55);
          *(_DWORD *)(v48 + 24) = v55 + 1;
          if ( v54 )
          {
            v105 = v57;
            sub_1EDF870(v53, v57);
            v57 = v105;
          }
          v61 = __ROR4__(v60, 1);
          v62 = HIDWORD(v60);
          if ( v62 )
            v57 = *(_QWORD *)(*(_QWORD *)(v57 + 3320) + 8LL * (unsigned int)(v62 - 1));
          if ( v61 )
            v61 = v61 + *(_DWORD *)(v57 + 1648) - 2;
          v110.m128i_i32[3] = v61;
          v39 = ptr;
          v109 = 0;
          v40 = (unsigned int)v112 + 1LL;
          v110.m128i_i64[0] = v49 | 1;
          v42 = (__m128i *)((char *)ptr + 24 * (unsigned int)v112);
          v110.m128i_i32[2] = v58;
          v43 = (const __m128i *)&v109;
          if ( v40 <= HIDWORD(v112) )
            goto LABEL_79;
          if ( ptr > &v109 || v42 <= (__m128i *)&v109 )
          {
LABEL_82:
            sub_2237220(&ptr, v113, v40, 24);
            v42 = (__m128i *)((char *)ptr + 24 * (unsigned int)v112);
            v43 = (const __m128i *)&v109;
LABEL_79:
            *v42 = _mm_loadu_si128(v43);
            v42[1].m128i_i64[0] = v43[1].m128i_i64[0];
            LODWORD(v112) = v112 + 1;
            goto LABEL_6;
          }
LABEL_85:
          sub_2237220(&ptr, v113, v40, 24);
          v43 = (const __m128i *)((char *)ptr + (char *)&v109 - v39);
          v42 = (__m128i *)((char *)ptr + 24 * (unsigned int)v112);
          goto LABEL_79;
        }
      }
      else
      {
        if ( (_DWORD)v20 == 2 )
        {
          v90 = *(_QWORD *)(v15 + 16);
          v91 = (unsigned int)(v17 + 3);
          v92 = *(_QWORD *)(v12 + 8 * v19);
          v93 = *(_QWORD *)(v12 + 8LL * (unsigned int)(v17 + 2));
          v94 = *(_QWORD *)(v15 + 8);
          *(_DWORD *)(v15 + 24) = v91;
          v95 = *(_QWORD *)(v90 + 856);
          v96 = v90;
          if ( v95 )
          {
            sub_1EDF870(v94, v90);
            v15 = *a1;
            v96 = *(_QWORD *)(*a1 + 16);
            v94 = *(_QWORD *)(*a1 + 8);
            v91 = *(unsigned int *)(*a1 + 24);
            v12 = *(_QWORD *)(*a1 + 32);
            v95 = *(_QWORD *)(v96 + 856);
          }
          v97 = __ROR4__(v93, 1);
          v98 = HIDWORD(v93);
          if ( v98 )
            v90 = *(_QWORD *)(*(_QWORD *)(v90 + 3320) + 8LL * (unsigned int)(v98 - 1));
          if ( v97 )
            v97 = v97 + *(_DWORD *)(v90 + 1648) - 2;
          v99 = *(_QWORD *)(v12 + 8 * v91);
          *(_DWORD *)(v15 + 24) = v91 + 1;
          if ( v95 )
          {
            v103 = v96;
            sub_1EDF870(v94, v96);
            v96 = v103;
          }
          v100 = __ROR4__(v99, 1);
          v101 = HIDWORD(v99);
          if ( v101 )
            v96 = *(_QWORD *)(*(_QWORD *)(v96 + 3320) + 8LL * (unsigned int)(v101 - 1));
          if ( v100 )
            v100 = v100 + *(_DWORD *)(v96 + 1648) - 2;
          v39 = ptr;
          v110.m128i_i32[3] = v100;
          v109 = 1;
          v110.m128i_i32[0] = v92;
          v40 = (unsigned int)v112 + 1LL;
          *(__int64 *)((char *)v110.m128i_i64 + 4) = v97;
          v42 = (__m128i *)((char *)ptr + 24 * (unsigned int)v112);
          v43 = (const __m128i *)&v109;
          if ( v40 <= HIDWORD(v112) )
            goto LABEL_79;
          if ( ptr > &v109 || v42 <= (__m128i *)&v109 )
            goto LABEL_82;
          goto LABEL_85;
        }
        if ( (_DWORD)v20 == 3 )
        {
          v21 = *(_QWORD *)(v15 + 16);
          v22 = *(_QWORD *)(v12 + 8 * v19);
          v23 = (unsigned int)(v17 + 3);
          *(_DWORD *)(v15 + 24) = v23;
          v24 = *(_QWORD *)(v12 + 8LL * (unsigned int)(v17 + 2));
          v25 = *(_QWORD *)(v21 + 856);
          v102 = v22;
          v26 = v21;
          v27 = *(_QWORD *)(v15 + 8);
          if ( v25 )
          {
            sub_1EDF870(v27, v21);
            v15 = *a1;
            v26 = *(_QWORD *)(*a1 + 16);
            v27 = *(_QWORD *)(*a1 + 8);
            v23 = *(unsigned int *)(*a1 + 24);
            v12 = *(_QWORD *)(*a1 + 32);
            v25 = *(_QWORD *)(v26 + 856);
          }
          v28 = __ROR4__(v24, 1);
          v29 = HIDWORD(v24);
          if ( v29 )
            v21 = *(_QWORD *)(*(_QWORD *)(v21 + 3320) + 8LL * (unsigned int)(v29 - 1));
          if ( v28 )
            v28 = v28 + *(_DWORD *)(v21 + 1648) - 2;
          v30 = (unsigned int)(v23 + 1);
          v31 = *(_QWORD *)(v12 + 8 * v23);
          v32 = v26;
          *(_DWORD *)(v15 + 24) = v30;
          if ( v25 )
          {
            v107 = v26;
            sub_1EDF870(v27, v26);
            v15 = *a1;
            v26 = v107;
            v32 = *(_QWORD *)(*a1 + 16);
            v27 = *(_QWORD *)(*a1 + 8);
            v30 = *(unsigned int *)(*a1 + 24);
            v12 = *(_QWORD *)(*a1 + 32);
            v25 = *(_QWORD *)(v32 + 856);
          }
          v33 = __ROR4__(v31, 1);
          v34 = HIDWORD(v31);
          if ( v34 )
            v26 = *(_QWORD *)(*(_QWORD *)(v26 + 3320) + 8LL * (unsigned int)(v34 - 1));
          if ( v33 )
            v33 = v33 + *(_DWORD *)(v26 + 1648) - 2;
          v35 = *(_QWORD *)(v12 + 8 * v30);
          *(_DWORD *)(v15 + 24) = v30 + 1;
          if ( v25 )
          {
            v106 = v32;
            sub_1EDF870(v27, v32);
            v32 = v106;
          }
          v36 = __ROR4__(v35, 1);
          v37 = HIDWORD(v35);
          if ( v37 )
            v32 = *(_QWORD *)(*(_QWORD *)(v32 + 3320) + 8LL * (unsigned int)(v37 - 1));
          if ( v36 )
            v36 = v36 + *(_DWORD *)(v32 + 1648) - 2;
          v38 = _mm_cvtsi32_si128(v33);
          v109 = 2;
          v39 = ptr;
          v40 = (unsigned int)v112 + 1LL;
          v41 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v102), _mm_cvtsi32_si128(v28)),
                  _mm_unpacklo_epi32(v38, _mm_cvtsi32_si128(v36)));
          v42 = (__m128i *)((char *)ptr + 24 * (unsigned int)v112);
          v43 = (const __m128i *)&v109;
          v110 = v41;
          if ( v40 <= HIDWORD(v112) )
            goto LABEL_79;
          if ( ptr > &v109 || v42 <= (__m128i *)&v109 )
            goto LABEL_82;
          goto LABEL_85;
        }
      }
      LODWORD(v17) = v17 + 1;
      v18 += 8;
      if ( (unsigned int)v16 <= (unsigned int)v19 )
        goto LABEL_47;
    }
    v63 = *(_QWORD **)(v15 + 8);
    v64 = sub_1EE13A0((__int64)v63, *(_QWORD *)(v15 + 16), (__int64 *)(v15 + 32), (_DWORD *)(v15 + 24));
    v69 = sub_1EDB980(v63, v64, v65, v66, v67, v68);
    v70 = *a1;
    v71 = v69;
    v72 = *(_QWORD *)(*a1 + 16);
    v73 = *(unsigned int *)(*a1 + 24);
    v74 = *(_QWORD *)(*a1 + 32);
    v75 = *(_QWORD *)(*a1 + 8);
    v76 = *(_QWORD *)(v72 + 856);
    v77 = (unsigned int)(v73 + 1);
    v12 = v72;
    *(_DWORD *)(*a1 + 24) = v77;
    v78 = *(_QWORD *)(v74 + 8 * v73);
    if ( v76 )
    {
      sub_1EDF870(v75, v72);
      v70 = *a1;
      v12 = *(_QWORD *)(*a1 + 16);
      v75 = *(_QWORD *)(*a1 + 8);
      v77 = *(unsigned int *)(*a1 + 24);
      v74 = *(_QWORD *)(*a1 + 32);
      v76 = *(_QWORD *)(v12 + 856);
    }
    v79 = __ROR4__(v78, 1);
    v80 = HIDWORD(v78);
    if ( v80 )
      v72 = *(_QWORD *)(*(_QWORD *)(v72 + 3320) + 8LL * (unsigned int)(v80 - 1));
    if ( v79 )
      v79 = v79 + *(_DWORD *)(v72 + 1648) - 2;
    v81 = *(_QWORD *)(v74 + 8 * v77);
    *(_DWORD *)(v70 + 24) = v77 + 1;
    if ( v76 )
    {
      v104 = v12;
      sub_1EDF870(v75, v12);
      v12 = v104;
    }
    v82 = __ROR4__(v81, 1);
    v83 = HIDWORD(v81);
    if ( v83 )
      v12 = *(_QWORD *)(*(_QWORD *)(v12 + 3320) + 8LL * (unsigned int)(v83 - 1));
    if ( v82 )
      v82 = v82 + *(_DWORD *)(v12 + 1648) - 2;
    v84 = *(_QWORD *)(v71 + 40);
    v85 = 1;
    if ( (v84 & 7) == 0 )
      v85 = v84 & 0xFFFFFFFFFFFFFFF8LL | 1;
    v86 = ptr;
    v110.m128i_i64[0] = v85;
    v87 = (unsigned int)v112 + 1LL;
    v110.m128i_i64[1] = __PAIR64__(v82, v79);
    v88 = (__m128i *)((char *)ptr + 24 * (unsigned int)v112);
    v109 = 0;
    v89 = (const __m128i *)&v109;
    if ( v87 > HIDWORD(v112) )
    {
      if ( ptr > &v109 || v88 <= (__m128i *)&v109 )
      {
        sub_2237220(&ptr, v113, v87, 24);
        v88 = (__m128i *)((char *)ptr + 24 * (unsigned int)v112);
        v89 = (const __m128i *)&v109;
      }
      else
      {
        sub_2237220(&ptr, v113, v87, 24);
        v89 = (const __m128i *)((char *)ptr + (char *)&v109 - v86);
        v88 = (__m128i *)((char *)ptr + 24 * (unsigned int)v112);
      }
    }
    *v88 = _mm_loadu_si128(v89);
    v88[1].m128i_i64[0] = v89[1].m128i_i64[0];
    LODWORD(v112) = v112 + 1;
    *((_QWORD *)ptr + 3 * (unsigned int)v112 - 2) = v71;
  }
LABEL_47:
  sub_C08C90(a2, *(_QWORD **)(*(_QWORD *)(v15 + 8) + 144LL), (const __m128i *)ptr, v112, v12, v16);
  if ( ptr != v113 )
    free(ptr);
}
