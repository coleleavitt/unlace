__int64 __fastcall sub_210BE80(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // r8
  unsigned __int64 *v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r15d
  __int64 v19; // rax
  __m128 v20; // xmm0
  _QWORD *v21; // r12
  unsigned __int64 v22; // rbp
  unsigned int v23; // r13d
  __int64 v24; // rdi
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 result; // rax
  const __m128i *v29; // rsi
  const __m128i *v30; // rsi
  int v31; // eax
  int v32; // edx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r13
  __int64 v38; // rsi
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __m128 *v41; // rdx
  unsigned __int64 v42; // rsi
  unsigned __int64 *v43; // rcx
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rsi
  void *v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // r15
  _QWORD *v54; // r9
  __int64 v55; // r10
  _QWORD *v56; // rsi
  _QWORD *v57; // rdx
  int i; // r13d
  __int64 v59; // rsi
  unsigned int v60; // r8d
  __int64 v61; // rdi
  __int64 v62; // r11
  int v63; // esi
  int v64; // esi
  int v65; // r8d
  unsigned int v66; // edi
  __int64 v67; // r12
  _QWORD *v68; // rdx
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rdx
  char *v72; // r9
  __int64 v73; // r11
  _QWORD *v74; // rsi
  char *v75; // rdx
  int v76; // r15d
  __int64 v77; // rsi
  unsigned int v78; // r8d
  __int64 v79; // rdi
  __int64 v80; // r10
  int v81; // esi
  int v82; // esi
  int v83; // edi
  unsigned int v84; // r13d
  unsigned __int64 *v85; // r8
  int v86; // r9d
  unsigned __int64 v87; // rbp
  __int64 v88; // r12
  _QWORD *v89; // rdx
  unsigned __int64 *v90; // r9
  int v91; // r10d
  __int64 v92; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+8h] [rbp-A0h]
  _QWORD *v94; // [rsp+10h] [rbp-98h]
  char *v95; // [rsp+18h] [rbp-90h]
  __m128 v96; // [rsp+20h] [rbp-88h] BYREF
  __int64 v97; // [rsp+30h] [rbp-78h]
  __int64 v98; // [rsp+38h] [rbp-70h]
  __m128i v99; // [rsp+40h] [rbp-68h] BYREF
  __m128i v100; // [rsp+50h] [rbp-58h] BYREF
  __m128i v101; // [rsp+60h] [rbp-48h] BYREF

  v7 = a2[1];
  v99.m128i_i64[0] = a4;
  v99.m128i_i64[1] = a5;
  v101.m128i_i16[0] = 261;
  v92 = sub_2108A30(v7, (const void ***)&v99);
  v12 = sub_2108670(v7, (__int64)&v99, v8, v9, v10, v11);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 208LL))(a2, v12, 0);
  v15 = *(_QWORD *)(v7 + 1768);
  v93 = v12;
  v16 = a1 + 520;
  v17 = *(_QWORD *)(v7 + 1760);
  v101.m128i_i64[0] = a3;
  v99.m128i_i64[1] = v15;
  v18 = *(_DWORD *)(a1 + 536);
  v19 = a2[36];
  v20 = _mm_loadh_ps((const double *)&v92);
  v99.m128i_i64[0] = v17;
  v100 = (__m128i)v20;
  v21 = *(_QWORD **)(a1 + 520);
  v101.m128i_i8[8] = 0;
  v22 = *(_QWORD *)(v19 + 8);
  if ( !v18 )
    goto LABEL_18;
  v13 = v18 - 1;
  v23 = ((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4);
  LODWORD(v24) = v13 & v23;
  v25 = &v21[2 * ((unsigned int)v13 & v23)];
  v26 = *v25;
  if ( v22 == *v25 )
  {
LABEL_3:
    sub_20FDB40(&v96, v25, &v21[2 * v18], v16, 1);
    v27 = 32LL * *(unsigned int *)(v96.m128_u64[0] + 8);
    goto LABEL_4;
  }
  v31 = 1;
  v14 = nullptr;
  if ( v26 != -4096 )
  {
    while ( 1 )
    {
      if ( !v14 && v26 == -8192 )
        v14 = v25;
      v24 = (unsigned int)v13 & ((_DWORD)v24 + v31);
      v25 = &v21[2 * v24];
      v26 = *v25;
      if ( v22 == *v25 )
        goto LABEL_3;
      if ( v26 == -4096 )
        break;
      ++v31;
    }
    if ( v14 )
      v25 = v14;
  }
  v32 = *(_DWORD *)(a1 + 528) + 1;
  if ( 4 * v32 >= 3 * v18 )
  {
LABEL_18:
    v92 = a1 + 520;
    v49 = (((((((2 * v18 - 1) | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 2)
            | (2 * v18 - 1)
            | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 4)
          | (((2 * v18 - 1) | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 2)
          | (2 * v18 - 1)
          | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 8)
        | (((((2 * v18 - 1) | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 2)
          | (2 * v18 - 1)
          | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 4)
        | (((2 * v18 - 1) | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 2)
        | (2 * v18 - 1)
        | ((unsigned __int64)(2 * v18 - 1) >> 1);
    v50 = ((v49 >> 16) | v49) + 1;
    if ( (unsigned int)v50 < 0x40 )
      LODWORD(v50) = 64;
    *(_DWORD *)(a1 + 536) = v50;
    v51 = sub_22300B0(16LL * (unsigned int)v50, 8, 64, v16, v13, v14);
    v16 = v92;
    *(_QWORD *)(a1 + 520) = v51;
    if ( v21 )
    {
      v52 = (_QWORD *)v51;
      *(_QWORD *)(a1 + 528) = 0;
      v53 = 2LL * v18;
      v54 = &v21[v53];
      v55 = *(unsigned int *)(a1 + 536);
      v56 = (_QWORD *)(v51 + 16 * v55);
      if ( (_QWORD *)v51 != v56 )
      {
        do
        {
          *v52 = -4096;
          v52 += 2;
        }
        while ( v56 != v52 );
      }
      v57 = v21;
      for ( i = v55 - 1; v54 != v57; v57 += 2 )
      {
        v59 = *v57;
        if ( *v57 != -8192 && v59 != -4096 )
        {
          if ( !(_DWORD)v55 )
          {
            *(_QWORD *)&dword_0 = *v57;
            BUG();
          }
          v60 = i & (((unsigned int)v59 >> 9) ^ ((unsigned int)v59 >> 4));
          v61 = v51 + 16LL * v60;
          v62 = *(_QWORD *)v61;
          if ( *(_QWORD *)v61 != v59 && v62 != -4096 )
          {
            LODWORD(v93) = 1;
            v92 = 0;
            v94 = v57;
            while ( 1 )
            {
              if ( !v92 )
              {
                if ( v62 != -8192 )
                  v61 = v92;
                v92 = v61;
              }
              v60 = i & (v93 + v60);
              v61 = v51 + 16LL * v60;
              v62 = *(_QWORD *)v61;
              if ( v59 == *(_QWORD *)v61 )
              {
                v57 = v94;
                goto LABEL_28;
              }
              if ( v62 == -4096 )
                break;
              LODWORD(v93) = v93 + 1;
            }
            v57 = v94;
            if ( v92 )
              v61 = v92;
          }
LABEL_28:
          *(_QWORD *)v61 = v59;
          v63 = *((_DWORD *)v57 + 2);
          ++*(_DWORD *)(a1 + 528);
          *(_DWORD *)(v61 + 8) = v63;
        }
      }
      v92 = v16;
      operator delete(v21, v53 * 8, 8);
      v21 = *(_QWORD **)(a1 + 520);
      v64 = *(_DWORD *)(a1 + 536);
      v16 = v92;
      v32 = *(_DWORD *)(a1 + 528) + 1;
    }
    else
    {
      v67 = *(unsigned int *)(a1 + 536);
      *(_QWORD *)(a1 + 528) = 0;
      v64 = v67;
      v21 = (_QWORD *)(v51 + 16 * v67);
      if ( (_QWORD *)v51 != v21 )
      {
        v68 = (_QWORD *)v51;
        do
        {
          *v68 = -4096;
          v68 += 2;
        }
        while ( v21 != v68 );
        v21 = (_QWORD *)v51;
      }
      v32 = 1;
    }
    if ( v64 )
    {
      v65 = v64 - 1;
      v66 = (v64 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
      v25 = &v21[2 * v66];
      v33 = *v25;
      if ( v22 != *v25 )
      {
        if ( v33 != -4096 )
        {
          v90 = &v21[2 * (v65 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4)))];
          v91 = 1;
          v25 = nullptr;
          while ( 1 )
          {
            if ( !v25 && v33 == -8192 )
              v25 = v90;
            v66 = v65 & (v91 + v66);
            v90 = &v21[2 * v66];
            v33 = *v90;
            if ( v22 == *v90 )
            {
              v25 = &v21[2 * v66];
              goto LABEL_11;
            }
            if ( v33 == -4096 )
              break;
            ++v91;
          }
          if ( v25 )
            goto LABEL_10;
          v25 = &v21[2 * v66];
        }
        goto LABEL_34;
      }
LABEL_11:
      *(_DWORD *)(a1 + 528) = v32;
      if ( v33 != -4096 )
        --*(_DWORD *)(a1 + 532);
      goto LABEL_13;
    }
LABEL_120:
    ++*(_DWORD *)(a1 + 528);
    BUG();
  }
  if ( v18 - *(_DWORD *)(a1 + 532) - v32 > v18 >> 3 )
  {
LABEL_10:
    v33 = *v25;
    goto LABEL_11;
  }
  v92 = a1 + 520;
  v69 = (((((((((((unsigned __int64)(unsigned int)v13 >> 1) | (unsigned int)v13) >> 2)
             | ((unsigned __int64)(unsigned int)v13 >> 1)
             | (unsigned int)v13) >> 4)
           | ((((unsigned __int64)(unsigned int)v13 >> 1) | (unsigned int)v13) >> 2)
           | ((unsigned __int64)(unsigned int)v13 >> 1)
           | (unsigned int)v13) >> 8)
         | ((((((unsigned __int64)(unsigned int)v13 >> 1) | (unsigned int)v13) >> 2)
           | ((unsigned __int64)(unsigned int)v13 >> 1)
           | (unsigned int)v13) >> 4)
         | ((((unsigned __int64)(unsigned int)v13 >> 1) | (unsigned int)v13) >> 2)
         | ((unsigned __int64)(unsigned int)v13 >> 1)
         | (unsigned int)v13) >> 16)
       | ((((((((unsigned __int64)(unsigned int)v13 >> 1) | (unsigned int)v13) >> 2)
           | ((unsigned __int64)(unsigned int)v13 >> 1)
           | (unsigned int)v13) >> 4)
         | ((((unsigned __int64)(unsigned int)v13 >> 1) | (unsigned int)v13) >> 2)
         | ((unsigned __int64)(unsigned int)v13 >> 1)
         | (unsigned int)v13) >> 8)
       | ((((((unsigned __int64)(unsigned int)v13 >> 1) | (unsigned int)v13) >> 2)
         | ((unsigned __int64)(unsigned int)v13 >> 1)
         | (unsigned int)v13) >> 4)
       | ((((unsigned __int64)(unsigned int)v13 >> 1) | (unsigned int)v13) >> 2)
       | ((unsigned __int64)(unsigned int)v13 >> 1)
       | (unsigned int)v13)
      + 1;
  if ( (unsigned int)v69 < 0x40 )
    LODWORD(v69) = 64;
  *(_DWORD *)(a1 + 536) = v69;
  v70 = sub_22300B0(16LL * (unsigned int)v69, 8, 64, v16, v13, v14);
  v16 = v92;
  *(_QWORD *)(a1 + 520) = v70;
  if ( v21 )
  {
    v71 = (_QWORD *)v70;
    *(_QWORD *)(a1 + 528) = 0;
    v92 = 16LL * v18;
    v72 = (char *)v21 + v92;
    v73 = *(unsigned int *)(a1 + 536);
    v74 = (_QWORD *)(v70 + 16 * v73);
    if ( (_QWORD *)v70 != v74 )
    {
      do
      {
        *v71 = -4096;
        v71 += 2;
      }
      while ( v74 != v71 );
    }
    v75 = (char *)v21;
    v76 = v73 - 1;
    do
    {
      v77 = *(_QWORD *)v75;
      if ( *(_QWORD *)v75 != -8192 && v77 != -4096 )
      {
        if ( !(_DWORD)v73 )
        {
          *(_QWORD *)&dword_0 = *(_QWORD *)v75;
          BUG();
        }
        v78 = v76 & (((unsigned int)v77 >> 9) ^ ((unsigned int)v77 >> 4));
        v79 = v70 + 16LL * v78;
        v80 = *(_QWORD *)v79;
        if ( v77 != *(_QWORD *)v79 && v80 != -4096 )
        {
          LODWORD(v94) = 1;
          v93 = 0;
          v95 = v75;
          while ( 1 )
          {
            if ( !v93 )
            {
              if ( v80 != -8192 )
                v79 = v93;
              v93 = v79;
            }
            v78 = v76 & ((_DWORD)v94 + v78);
            v79 = v70 + 16LL * v78;
            v80 = *(_QWORD *)v79;
            if ( v77 == *(_QWORD *)v79 )
            {
              v75 = v95;
              goto LABEL_59;
            }
            if ( v80 == -4096 )
              break;
            LODWORD(v94) = (_DWORD)v94 + 1;
          }
          v75 = v95;
          if ( v93 )
            v79 = v93;
        }
LABEL_59:
        *(_QWORD *)v79 = v77;
        v81 = *((_DWORD *)v75 + 2);
        ++*(_DWORD *)(a1 + 528);
        *(_DWORD *)(v79 + 8) = v81;
      }
      v75 += 16;
    }
    while ( v72 != v75 );
    v93 = v16;
    operator delete(v21, v92, 8);
    v82 = *(_DWORD *)(a1 + 536);
    v21 = *(_QWORD **)(a1 + 520);
    v16 = v93;
    v32 = *(_DWORD *)(a1 + 528) + 1;
  }
  else
  {
    v88 = *(unsigned int *)(a1 + 536);
    *(_QWORD *)(a1 + 528) = 0;
    v82 = v88;
    v21 = (_QWORD *)(v70 + 16 * v88);
    if ( (_QWORD *)v70 != v21 )
    {
      v89 = (_QWORD *)v70;
      do
      {
        *v89 = -4096;
        v89 += 2;
      }
      while ( v21 != v89 );
      v21 = (_QWORD *)v70;
    }
    v32 = 1;
  }
  if ( !v82 )
    goto LABEL_120;
  v83 = v82 - 1;
  v84 = (v82 - 1) & v23;
  v25 = &v21[2 * v84];
  v33 = *v25;
  if ( v22 == *v25 )
    goto LABEL_11;
  if ( v33 != -4096 )
  {
    v85 = &v21[2 * v84];
    v86 = 1;
    v25 = nullptr;
    while ( 1 )
    {
      if ( v33 == -8192 && !v25 )
        v25 = v85;
      v84 = v83 & (v86 + v84);
      v85 = &v21[2 * v84];
      v33 = *v85;
      if ( v22 == *v85 )
      {
        v25 = &v21[2 * v84];
        goto LABEL_11;
      }
      if ( v33 == -4096 )
        break;
      ++v86;
    }
    if ( v25 )
      goto LABEL_10;
    v25 = &v21[2 * v84];
  }
LABEL_34:
  *(_DWORD *)(a1 + 528) = v32;
LABEL_13:
  *((_DWORD *)v25 + 2) = 0;
  v34 = *(unsigned int *)(a1 + 536);
  *v25 = v22;
  sub_20FDB40(&v96, v25, &v21[2 * v34], v16, 1);
  v35 = *(unsigned int *)(a1 + 552);
  v36 = *(unsigned int *)(a1 + 556);
  v97 = 0;
  v37 = v96.m128_u64[0];
  v38 = v35 + 1;
  v96 = (__m128)v22;
  v39 = v35;
  v98 = 0;
  if ( v35 + 1 > v36 )
  {
    v87 = *(_QWORD *)(a1 + 544);
    if ( v87 > (unsigned __int64)&v96 || (unsigned __int64)&v96 >= v87 + 32 * v35 )
    {
      sub_210BD70(a1 + 544, v38);
      v35 = *(unsigned int *)(a1 + 552);
      v40 = *(_QWORD *)(a1 + 544);
      v41 = &v96;
      v39 = *(_DWORD *)(a1 + 552);
    }
    else
    {
      sub_210BD70(a1 + 544, v38);
      v40 = *(_QWORD *)(a1 + 544);
      v35 = *(unsigned int *)(a1 + 552);
      v41 = (__m128 *)((char *)&v96 + v40 - v87);
      v39 = *(_DWORD *)(a1 + 552);
    }
  }
  else
  {
    v40 = *(_QWORD *)(a1 + 544);
    v41 = &v96;
  }
  v42 = v41->m128_u64[0];
  v27 = 32 * v35;
  v43 = (unsigned __int64 *)(32 * v35 + v40);
  v43[1] = 0;
  v43[2] = 0;
  v43[3] = 0;
  *v43 = v42;
  v43[1] = v41->m128_u64[1];
  v44 = v41[1].m128_u64[0];
  v41->m128_u64[1] = 0;
  v45 = v43[2];
  v43[2] = v44;
  v46 = v41[1].m128_u64[1];
  v41[1].m128_u64[0] = v45;
  v47 = v43[3];
  v43[3] = v46;
  v41[1].m128_u64[1] = v47;
  v48 = (void *)v96.m128_u64[1];
  *(_DWORD *)(a1 + 552) = v39 + 1;
  if ( v48 )
  {
    operator delete(v48);
    v39 = *(_DWORD *)(a1 + 552) - 1;
    v27 = 32LL * v39;
  }
  *(_DWORD *)(v37 + 8) = v39;
LABEL_4:
  result = *(_QWORD *)(a1 + 544) + v27;
  v29 = *(const __m128i **)(result + 16);
  if ( v29 == *(const __m128i **)(result + 24) )
    return sub_210B870(result + 8, v29, &v99);
  v30 = v29 + 3;
  v30[-3] = _mm_load_si128(&v99);
  v30[-2] = _mm_load_si128(&v100);
  v30[-1] = _mm_load_si128(&v101);
  *(_QWORD *)(result + 16) = v30;
  return result;
}
