void __fastcall sub_1E0C0A0(_BYTE *a1)
{
  __m128 *v2; // rbx
  __int64 v3; // rdx
  void **v4; // rax
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rbp
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __m128i *v14; // rax
  __int64 v15; // rsi
  __m128i v16; // xmm3
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // r8
  __int64 v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rbp
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r11
  __int64 v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r15
  __m128 *v34; // r14
  __m128 *v35; // r10
  unsigned __int64 v36; // r12
  __int64 v37; // rdi
  unsigned __int64 v38; // r15
  __int64 v39; // rdi
  __int64 v40; // rsi
  __m128 *v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdi
  int v45; // esi
  __m128 *v46; // rax
  __int64 v47; // rdx
  __m128i v48; // xmm7
  __int64 v49; // r8
  __int64 v50; // rdi
  __int64 v51; // r10
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rdi
  __int64 v55; // r12
  void *v56; // rdi
  void **v57; // rbx
  unsigned __int64 v58; // rbp
  void *v59; // rdi
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // r11
  unsigned __int64 *v65; // r12
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r13
  int v69; // edi
  __m128 *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbp
  void **v73; // rbx
  unsigned __int64 v74; // r12
  void *v75; // rdi
  unsigned __int64 v76; // r15
  unsigned __int64 v77; // rax
  __int64 v78; // rbp
  __int64 v79; // r15
  unsigned __int64 *v80; // r14
  __int64 v81; // rsi
  __int64 v82; // rsi
  __int64 v83; // rax
  __m128 *v84; // [rsp+0h] [rbp-60h] BYREF
  __int64 v85; // [rsp+8h] [rbp-58h]
  __int64 v86; // [rsp+10h] [rbp-50h] BYREF
  __int64 v87; // [rsp+18h] [rbp-48h]
  __int64 v88; // [rsp+20h] [rbp-40h]

  if ( !a1[8] )
    return;
  sub_1E05B10(
    (__int64 *)(*(_QWORD *)a1 + 3288LL),
    (__int64 *)(*(_QWORD *)(*(_QWORD *)a1 + 12752LL) + 272LL * *(unsigned int *)(*(_QWORD *)a1 + 12760LL) - 272));
  v2 = *(__m128 **)a1;
  v3 = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 12760LL) - 1);
  v2[797].m128_i32[2] = v3;
  v4 = (void **)(v2[797].m128_u64[0] + 272 * v3);
  if ( *v4 != v4 + 2 )
  {
    free(*v4);
    v2 = *(__m128 **)a1;
  }
  v5 = v2[934].m128_u32[2];
  v6 = v2[11].m128_i32[2] == 1;
  v84 = v2;
  v7 = v2[791].m128_i64[0];
  v8 = v2[791].m128_i64[1];
  v9 = v2[792].m128_i64[0];
  v10 = v2[792].m128_i64[1];
  v11 = v5;
  v12 = v2[790].m128_i64[1];
  if ( v6 )
  {
    v13 = 80 * v5 - 80;
    v14 = (__m128i *)(v13 + v2[934].m128_u64[0]);
    v15 = v14->m128i_i64[1];
    if ( (*(_BYTE *)(v2[14].m128_u64[1] + 22) & 1) != 0 )
      goto LABEL_7;
  }
  else
  {
    v13 = 80 * v5 - 80;
    v14 = (__m128i *)(v13 + v2[934].m128_u64[0]);
    v15 = v14->m128i_i64[1];
  }
  if ( a1[9] )
  {
    v47 = (unsigned int)(v11 - 1);
    v2[791] = (__m128)_mm_loadu_si128(v14 + 1);
    v2[792] = (__m128)_mm_loadu_si128(v14 + 2);
    v48 = _mm_loadu_si128(v14 + 3);
    v14[1].m128i_i64[0] = v7;
    v14[1].m128i_i64[1] = v8;
    v14[2].m128i_i64[0] = v9;
    v14[2].m128i_i64[1] = v10;
    v49 = v2[794].m128_i64[0];
    v50 = v2[794].m128_i64[1];
    v51 = v2[793].m128_i64[0];
    v52 = v2[793].m128_i64[1];
    v2[793] = (__m128)v48;
    v2[794] = (__m128)_mm_loadu_si128(v14 + 4);
    v14[4].m128i_i64[0] = v49;
    v53 = v14->m128i_i64[0];
    v14[3].m128i_i64[0] = v51;
    v14[3].m128i_i64[1] = v52;
    v14[4].m128i_i64[1] = v50;
    v54 = v2[790].m128_i64[0];
    v2[790].m128_u64[0] = v53;
    v14->m128i_i64[0] = v54;
    v55 = v2[934].m128_u64[0] + 80 * v47;
    v56 = *(void **)v55;
    v2[790].m128_u64[1] = v15;
    v14->m128i_i64[1] = v12;
    v2[934].m128_i32[2] = v47;
    if ( !v56 )
      return;
    v57 = *(void ***)(v55 + 40);
    v58 = *(_QWORD *)(v55 + 72) + 8LL;
    if ( v58 > (unsigned __int64)v57 )
    {
      do
      {
        v59 = *v57++;
        operator delete(v59);
      }
      while ( v58 > (unsigned __int64)v57 );
      v56 = *(void **)v55;
    }
    goto LABEL_25;
  }
LABEL_7:
  v2[791] = (__m128)_mm_loadu_si128(v14 + 1);
  v2[792] = (__m128)_mm_loadu_si128(v14 + 2);
  v16 = _mm_loadu_si128(v14 + 3);
  v14[1].m128i_i64[0] = v7;
  v14[1].m128i_i64[1] = v8;
  v14[2].m128i_i64[0] = v9;
  v14[2].m128i_i64[1] = v10;
  v17 = v2[793].m128_i64[1];
  v18 = v2[794].m128_i64[0];
  v19 = v2[794].m128_i64[1];
  v20 = v2[793].m128_i64[0];
  v2[793] = (__m128)v16;
  v2[794] = (__m128)_mm_loadu_si128(v14 + 4);
  v14[4].m128i_i64[0] = v18;
  v21 = v14->m128i_i64[0];
  v14[3].m128i_i64[0] = v20;
  v14[3].m128i_i64[1] = v17;
  v14[4].m128i_i64[1] = v19;
  v22 = v2[790].m128_i64[0];
  v2[790].m128_u64[0] = v21;
  v14->m128i_i64[0] = v22;
  v23 = (_QWORD *)(v2[934].m128_u64[0] + v13);
  v24 = v23[6];
  v25 = v23[2];
  v2[790].m128_u64[1] = v15;
  v26 = v23[5];
  v14->m128i_i64[1] = v12;
  v27 = v23[4];
  v28 = v2[793].m128_i64[0];
  v29 = v2[793].m128_i64[1];
  v30 = (v24 - v23[7]) >> 4;
  v31 = v2[791].m128_i64[0];
  v32 = v2[794].m128_i64[0];
  v33 = (v23[9] - v26) >> 3;
  v85 = v2[792].m128_i64[0];
  v34 = (__m128 *)v2[794].m128_u64[1];
  v35 = (__m128 *)v2[792].m128_u64[1];
  v36 = 32 * (v33 - 1) + v30 + ((v27 - v25) >> 4);
  if ( v28 != v31 )
  {
    v37 = (v28 - v29) >> 4;
    v38 = ((v32 - v28) >> 4) - 1;
    v86 = v37;
    if ( v36 > v38 )
    {
      if ( v36 - v38 > 0xFFFFFFFFFFFFFFFLL - (((v85 - v31) >> 4) + v86 + 32 * ((((char *)v34 - (char *)v35) >> 3) - 1)) )
        std::__throw_length_error("deque::_M_new_elements_at_back");
      v76 = (v36 - v38 + 31) >> 5;
      v77 = v76 + 1;
      if ( v76 + 1 > v2[790].m128_u64[1] - ((__int64)((__int64)v34 - v2[790].m128_u64[0]) >> 3) )
      {
        v88 = v26;
        v87 = v27;
        v86 = v76 + 1;
        v85 = v24;
        sub_160A9F0((__int64)&v2[790], v76, 0);
        v26 = v88;
        v27 = v87;
        v34 = (__m128 *)v2[794].m128_u64[1];
        v77 = v76 + 1;
        v24 = v85;
      }
      if ( v76 )
      {
        v86 = v25;
        v85 = v24;
        v78 = 8;
        v79 = 8 * v77;
        v87 = v27;
        v88 = v26;
        while ( 1 )
        {
          v80 = (unsigned __int64 *)((char *)v34 + v78);
          v78 += 8;
          *v80 = operator new(0x200u);
          if ( v79 == v78 )
            break;
          v34 = (__m128 *)v2[794].m128_u64[1];
        }
        v28 = v2[793].m128_i64[0];
        v29 = v2[793].m128_i64[1];
        v32 = v2[794].m128_i64[0];
        v34 = (__m128 *)v2[794].m128_u64[1];
        v24 = v85;
        v25 = v86;
        v27 = v87;
        v26 = v88;
        v37 = (v28 - v29) >> 4;
        v2 = *(__m128 **)a1;
      }
      else
      {
        v28 = v2[793].m128_i64[0];
        v29 = v2[793].m128_i64[1];
        v32 = v2[794].m128_i64[0];
        v2 = *(__m128 **)a1;
        v37 = (v28 - v29) >> 4;
      }
    }
    v39 = v36 + v37;
    if ( v39 < 0 )
    {
      v40 = ~((unsigned __int64)~v39 >> 5);
      goto LABEL_12;
    }
    if ( v39 > 31 )
    {
      v40 = v39 >> 5;
LABEL_12:
      v41 = (__m128 *)((char *)v34 + 8 * v40);
      v29 = v41->m128_u64[0];
      v42 = v41->m128_u64[0] + 16 * (v39 - 32 * v40);
      v85 = v41->m128_u64[0] + 512;
      v86 = v42;
      goto LABEL_13;
    }
    v85 = v32;
    v81 = v28 + 16 * v36;
    v41 = v34;
    v86 = v81;
LABEL_13:
    if ( v24 == v25 )
    {
LABEL_18:
      v86 = v29;
      v46 = v84;
      v84 = v41;
      v46[793] = _mm_loadh_ps((const double *)&v86);
      v46[794] = _mm_loadh_ps((const double *)&v84);
      goto LABEL_39;
    }
    v43 = v28 + 16;
    while ( 1 )
    {
      v44 = *(_QWORD *)v25;
      v45 = *(_DWORD *)(v25 + 8);
      v25 += 16;
      *(_QWORD *)(v43 - 16) = v44;
      *(_DWORD *)(v43 - 8) = v45;
      if ( v25 == v27 )
      {
        v25 = *(_QWORD *)(v26 + 8);
        v26 += 8;
        v27 = v25 + 512;
        if ( v32 == v43 )
        {
LABEL_55:
          v34 = (__m128 *)((char *)v34 + 8);
          v28 = v34->m128_u64[0];
          v32 = v34->m128_u64[0] + 512;
          goto LABEL_13;
        }
      }
      else if ( v32 == v43 )
      {
        goto LABEL_55;
      }
      v43 += 16;
      if ( v24 == v25 )
        goto LABEL_18;
    }
  }
  v60 = v2[791].m128_i64[1];
  v61 = (v31 - v60) >> 4;
  if ( v36 > v61 )
  {
    v88 = v26;
    v87 = v27;
    v86 = v24;
    sub_160AB70((__m128 *)v2[790].m128_u64, v36 - v61);
    v83 = v2[792].m128_i64[0];
    v31 = v2[791].m128_i64[0];
    v60 = v2[791].m128_i64[1];
    v35 = (__m128 *)v2[792].m128_u64[1];
    v26 = v88;
    v2 = *(__m128 **)a1;
    v85 = v83;
    v27 = v87;
    v24 = v86;
    v61 = (v31 - v60) >> 4;
  }
  v62 = v61 - v36;
  if ( v62 < 0 )
  {
    v82 = ~((unsigned __int64)~v62 >> 5);
LABEL_53:
    v35 = (__m128 *)((char *)v35 + 8 * v82);
    v60 = v35->m128_u64[0];
    v63 = v35->m128_u64[0] + 16 * (v62 - 32 * v82);
    v85 = v35->m128_u64[0] + 512;
    goto LABEL_32;
  }
  if ( v62 > 31 )
  {
    v82 = v62 >> 5;
    goto LABEL_53;
  }
  v63 = v31 - 16 * v36;
LABEL_32:
  v64 = v85;
  v65 = (unsigned __int64 *)v35;
  v66 = v63;
  while ( v24 != v25 )
  {
    v67 = v66 + 16;
    while ( 1 )
    {
      v68 = *(_QWORD *)v25;
      v69 = *(_DWORD *)(v25 + 8);
      v25 += 16;
      *(_QWORD *)(v67 - 16) = v68;
      *(_DWORD *)(v67 - 8) = v69;
      if ( v25 == v27 )
        break;
      if ( v64 == v67 )
        goto LABEL_57;
LABEL_37:
      v67 += 16;
      if ( v24 == v25 )
        goto LABEL_38;
    }
    v25 = *(_QWORD *)(v26 + 8);
    v26 += 8;
    v27 = v25 + 512;
    if ( v64 != v67 )
      goto LABEL_37;
LABEL_57:
    v66 = *++v65;
    v64 = *v65 + 512;
  }
LABEL_38:
  v86 = v60;
  v70 = v84;
  v84 = v35;
  v70[791] = _mm_loadh_ps((const double *)&v86);
  v70[792] = _mm_loadh_ps((const double *)&v84);
LABEL_39:
  v71 = (unsigned int)(v2[934].m128_i32[2] - 1);
  v2[934].m128_i32[2] = v71;
  v72 = v2[934].m128_u64[0] + 80 * v71;
  v56 = *(void **)v72;
  if ( *(_QWORD *)v72 )
  {
    v73 = *(void ***)(v72 + 40);
    v74 = *(_QWORD *)(v72 + 72) + 8LL;
    if ( v74 > (unsigned __int64)v73 )
    {
      do
      {
        v75 = *v73++;
        operator delete(v75);
      }
      while ( v74 > (unsigned __int64)v73 );
      operator delete(*(void **)v72);
      return;
    }
LABEL_25:
    operator delete(v56);
  }
}
