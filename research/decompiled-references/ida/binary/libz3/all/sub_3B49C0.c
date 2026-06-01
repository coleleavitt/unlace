__int64 __fastcall sub_3B49C0(__int64 a1, __int32 a2)
{
  __int64 v4; // rax
  const __m128i *v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rcx
  const __m128i *v8; // rsi
  const __m128i *v9; // rdi
  const __m128i *v10; // rax
  __int32 v11; // ecx
  __int64 v12; // r13
  __int32 v14; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  __m128i v20; // xmm0
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 *v26; // rcx
  __int64 v27; // r15
  int v28; // edx
  unsigned int v29; // r9d
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int v33; // edx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r10
  __int64 v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned int v40; // r15d
  unsigned int v41; // ecx
  unsigned int *v42; // rax
  __int64 v43; // rcx
  char v44; // al
  char v45; // al
  __int64 v46; // r14
  __m128i *v47; // rbx
  unsigned int v48; // r10d
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // r10
  __m128i *v52; // rsi
  __m128i *v53; // rax
  __m128i *v54; // rcx
  int v55; // edx
  __int32 v56; // eax
  __m128i *v57; // rax
  int v58; // r8d
  __m128i *v59; // rdx
  const __m128i *v60; // r15
  __m128i *v61; // r11
  __int64 v62; // rax
  __m128i *v63; // rdx
  __m128i *v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  int v67; // r9d
  __m128i *v68; // r8
  __int64 v69; // rdx
  const __m128i *v70; // rbx
  __m128i *v71; // rcx
  __int64 v72; // rdx
  __m128i *v73; // rsi
  __m128i *v74; // rdx
  _QWORD *v75; // rdx
  char **exception; // rbp
  __int64 v77; // rdx
  __int64 v78; // [rsp+0h] [rbp-88h]
  int v79; // [rsp+0h] [rbp-88h]
  int v80; // [rsp+0h] [rbp-88h]
  unsigned int v81; // [rsp+0h] [rbp-88h]
  size_t v82; // [rsp+0h] [rbp-88h]
  __m128i *v83; // [rsp+0h] [rbp-88h]
  __int64 v84; // [rsp+8h] [rbp-80h]
  __int64 v85; // [rsp+8h] [rbp-80h]
  size_t v86; // [rsp+8h] [rbp-80h]
  int v87; // [rsp+8h] [rbp-80h]
  __int64 v88; // [rsp+10h] [rbp-78h]
  __int64 v89; // [rsp+10h] [rbp-78h]
  int v90; // [rsp+10h] [rbp-78h]
  __int64 v91; // [rsp+18h] [rbp-70h]
  __int64 v92[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(unsigned int *)(a1 + 8);
  v5 = *(const __m128i **)a1;
  v6 = v4 - 1;
  v4 *= 24;
  v7 = 3LL * (a2 & v6);
  v8 = (const __m128i *)(*(_QWORD *)a1 + v4);
  v7 *= 8;
  v9 = (const __m128i *)(*(_QWORD *)a1 + v7);
  if ( v7 != v4 )
  {
    v10 = v9;
    do
    {
      v11 = v10->m128i_i32[1];
      if ( v11 == 2 )
      {
        if ( a2 == v10->m128i_i32[0] && a2 == v10->m128i_i32[2] )
          return v10[1].m128i_i64[0];
      }
      else if ( !v11 )
      {
        goto LABEL_18;
      }
      v10 = (const __m128i *)((char *)v10 + 24);
    }
    while ( v8 != v10 );
  }
  for ( ; v9 != v5; v5 = (const __m128i *)((char *)v5 + 24) )
  {
    v14 = v5->m128i_i32[1];
    if ( v14 == 2 )
    {
      if ( a2 == v5->m128i_i32[0] && a2 == v5->m128i_i32[2] )
      {
        v10 = v5;
        return v10[1].m128i_i64[0];
      }
    }
    else if ( !v14 )
    {
      break;
    }
  }
LABEL_18:
  v15 = sub_186B270(0x290u);
  *(_QWORD *)(v15 + 8) = v15;
  v16 = v15 + 32;
  v12 = v15;
  *(_QWORD *)(v15 + 16) = 0;
  *(_BYTE *)(v15 + 24) = 0;
  sub_186A780(v15 + 32, (unsigned int)(2 * a2));
  *(_QWORD *)(v12 + 576) = 0;
  *(_QWORD *)(v12 + 584) = v16;
  *(_QWORD *)(v12 + 592) = v16;
  *(_QWORD *)(v12 + 600) = v16;
  *(_QWORD *)(v12 + 608) = v16;
  v17 = (_QWORD *)sub_186B270(0x80u);
  v17[1] = 0;
  v17[3] = 0;
  v17[5] = 0;
  v17[7] = 0;
  v17[9] = 0;
  v17[11] = 0;
  v17[13] = 0;
  v17[15] = 0;
  *(_QWORD *)(v12 + 616) = v17;
  *(_QWORD *)(v12 + 624) = 8;
  *(_DWORD *)(v12 + 632) = 0;
  *(_QWORD *)(v12 + 640) = 0;
  *(_QWORD *)(v12 + 648) = 0;
  v78 = sub_1829AC0(v16);
  v18 = sub_186B270(0x60u);
  v19 = *(_DWORD *)(v12 + 628);
  *(_QWORD *)v18 = v16;
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
  *(_QWORD *)(v18 + 8) = v78;
  *(_QWORD *)(v18 + 16) = v12;
  *(_QWORD *)(v18 + 24) = 0;
  *(_DWORD *)(v18 + 32) = 0;
  *(_DWORD *)(v18 + 36) = v19;
  *(__m128i *)(v18 + 40) = v20;
  *(__m128i *)(v18 + 56) = v20;
  v21 = (_QWORD *)sub_186B270(0x80u);
  v22 = *(_QWORD **)(v12 + 16);
  ++*(_DWORD *)(v18 + 32);
  v21[1] = 0;
  v21[3] = 0;
  v21[5] = 0;
  v21[7] = 0;
  v21[9] = 0;
  v21[11] = 0;
  v21[13] = 0;
  v21[15] = 0;
  *(_QWORD *)(v18 + 72) = v21;
  *(_QWORD *)(v18 + 80) = 8;
  *(_DWORD *)(v18 + 88) = 0;
  *(_QWORD *)v12 = v18;
  if ( v22 )
  {
    v23 = *((_DWORD *)v22 - 1);
    if ( v23 == *((_DWORD *)v22 - 2) )
    {
      v40 = (3 * v23 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v23 + 8 >= v41 || v23 >= v40 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C7E7E(v92, "Overflow encountered when expanding vector", v77);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v92);
        sub_233E40((__int64)v92);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v22 - 1, v41);
      v43 = v42[1];
      v22 = v42 + 2;
      *v42 = v40;
      *(_QWORD *)(v12 + 16) = v42 + 2;
      LODWORD(v42) = v43;
      v26 = &v22[v43];
      v25 = (_DWORD)v42 + 1;
    }
    else
    {
      v24 = v23;
      v25 = v23 + 1;
      v26 = &v22[v24];
    }
  }
  else
  {
    v75 = (_QWORD *)sub_186B270(0x18u);
    *v75 = 2;
    v25 = 1;
    v22 = v75 + 1;
    *(_QWORD *)(v12 + 16) = v22;
    v26 = v22;
  }
  *v26 = v18;
  v27 = *(_QWORD *)v12;
  *((_DWORD *)v22 - 1) = v25;
  v28 = *(_DWORD *)(v12 + 624);
  v29 = 2 * v28;
  if ( 3 * v28 < (unsigned int)(4 * (*(_DWORD *)(v12 + 628) + *(_DWORD *)(v12 + 632))) )
  {
    v65 = v29;
    v87 = 2 * v28;
    v82 = 16LL * v29;
    v66 = sub_186B270(v82);
    v67 = v87;
    v68 = (__m128i *)v66;
    v69 = v66 + 16 * v65;
    if ( v87 )
    {
      if ( ((16 * (_BYTE)v65) & 0x10) == 0 || (*(_QWORD *)(v66 + 8) = 0, v66 += 16, v66 != v69) )
      {
        do
        {
          *(_QWORD *)(v66 + 8) = 0;
          v66 += 32;
          *(_QWORD *)(v66 - 8) = 0;
        }
        while ( v66 != v69 );
      }
    }
    v70 = *(const __m128i **)(v12 + 616);
    v71 = (__m128i *)&v70[*(unsigned int *)(v12 + 624)];
    if ( v70 != v71 )
    {
      do
      {
        if ( v70->m128i_i64[1] > 1uLL )
        {
          v72 = 16LL * (v70->m128i_i32[0] & (unsigned int)(v87 - 1));
          v73 = &v68[(unsigned __int64)v72 / 0x10];
          if ( v82 == v72 )
          {
LABEL_99:
            if ( v68 == v73 )
            {
LABEL_115:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v74 = v68;
            while ( v74->m128i_i64[1] )
            {
              if ( v73 == ++v74 )
                goto LABEL_115;
            }
          }
          else
          {
            v74 = &v68[(unsigned __int64)v72 / 0x10];
            while ( v74->m128i_i64[1] )
            {
              if ( &v68[v82 / 0x10] == ++v74 )
                goto LABEL_99;
            }
          }
          *v74 = _mm_loadu_si128(v70);
        }
        ++v70;
      }
      while ( v71 != v70 );
      v71 = *(__m128i **)(v12 + 616);
    }
    if ( v71 )
    {
      v83 = v68;
      sub_186B220(v71);
      v67 = v87;
      v68 = v83;
    }
    *(_QWORD *)(v12 + 616) = v68;
    *(_DWORD *)(v12 + 624) = v67;
    *(_DWORD *)(v12 + 632) = 0;
  }
  v30 = sub_182A670(*(_QWORD *)(v12 + 600), *(_QWORD *)(v27 + 8));
  v31 = *(unsigned int *)(v12 + 624);
  v32 = *(_QWORD *)(v12 + 616);
  v33 = v31 - 1;
  v31 *= 16;
  v34 = v32 + v31;
  v35 = 16LL * (v30 & v33);
  v36 = v32 + v35;
  if ( v35 == v31 )
  {
    v37 = 0;
    while ( 1 )
    {
LABEL_32:
      if ( v36 == v32 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v39 = *(_QWORD *)(v32 + 8);
      if ( v39 > 1 )
      {
        if ( v30 == *(_DWORD *)v32 )
        {
          v89 = v37;
          v85 = v36;
          v80 = v30;
          v45 = sub_182A660(*(_QWORD *)(v12 + 608), *(_QWORD *)(v39 + 8), *(_QWORD *)(v27 + 8));
          v30 = v80;
          v36 = v85;
          v37 = v89;
          if ( v45 )
            goto LABEL_40;
        }
      }
      else
      {
        if ( !v39 )
        {
LABEL_43:
          if ( v37 )
            --*(_DWORD *)(v12 + 632);
          else
            v37 = v32;
          *(_QWORD *)(v37 + 8) = v27;
          *(_DWORD *)v37 = v30;
          ++*(_DWORD *)(v12 + 628);
          goto LABEL_46;
        }
        v37 = v32;
      }
      v32 += 16;
    }
  }
  v32 += v35;
  v37 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v38 = *(_QWORD *)(v32 + 8);
      if ( v38 > 1 )
        break;
      if ( !v38 )
        goto LABEL_43;
      v37 = v32;
      v32 += 16;
      if ( v34 == v32 )
      {
LABEL_29:
        v32 = *(_QWORD *)(v12 + 616);
        goto LABEL_32;
      }
    }
    if ( v30 == *(_DWORD *)v32 )
    {
      v91 = v37;
      v88 = v34;
      v84 = v36;
      v79 = v30;
      v44 = sub_182A660(*(_QWORD *)(v12 + 608), *(_QWORD *)(v38 + 8), *(_QWORD *)(v27 + 8));
      v30 = v79;
      v36 = v84;
      v34 = v88;
      v37 = v91;
      if ( v44 )
        break;
    }
    v32 += 16;
    if ( v34 == v32 )
      goto LABEL_29;
  }
LABEL_40:
  *(_QWORD *)(v32 + 8) = v27;
LABEL_46:
  v46 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v46 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v86 = 24LL * (unsigned int)(2 * v46);
    v57 = (__m128i *)sub_186B270(v86);
    v58 = 2 * v46;
    v49 = v86;
    v47 = v57;
    if ( 2 * (_DWORD)v46 )
    {
      v59 = &v57[3 * (v46 & 0x7FFFFFFF)];
      do
      {
        v57->m128i_i64[0] = 0;
        v57 += 3;
        v57[-2].m128i_i64[1] = 0;
      }
      while ( v59 != v57 );
    }
    v60 = *(const __m128i **)a1;
    v48 = v58 - 1;
    v50 = (__int64)&v47->m128i_i64[v86 / 8];
    v61 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
    if ( *(__m128i **)a1 != v61 )
    {
      do
      {
        if ( v60->m128i_i32[1] == 2 )
        {
          v62 = 24LL * (v60->m128i_i32[0] & v48);
          v63 = (__m128i *)((char *)v47 + v62);
          if ( v86 == v62 )
          {
LABEL_108:
            if ( v47 == v63 )
            {
LABEL_117:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v64 = v47;
            while ( v64->m128i_i32[1] )
            {
              v64 = (__m128i *)((char *)v64 + 24);
              if ( v63 == v64 )
                goto LABEL_117;
            }
          }
          else
          {
            v64 = (__m128i *)((char *)v47 + v62);
            while ( v64->m128i_i32[1] )
            {
              v64 = (__m128i *)((char *)v64 + 24);
              if ( (__m128i *)v50 == v64 )
                goto LABEL_108;
            }
          }
          *v64 = _mm_loadu_si128(v60);
          v64[1].m128i_i64[0] = v60[1].m128i_i64[0];
        }
        v60 = (const __m128i *)((char *)v60 + 24);
      }
      while ( v61 != v60 );
      v61 = *(__m128i **)a1;
    }
    if ( v61 )
    {
      v90 = v58;
      v81 = v58 - 1;
      sub_186B220(v61);
      v58 = v90;
      v49 = v86;
      v48 = v81;
    }
    *(_QWORD *)a1 = v47;
    *(_DWORD *)(a1 + 8) = v58;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v47 = *(__m128i **)a1;
    v48 = v46 - 1;
    v49 = 24 * v46;
    v50 = *(_QWORD *)a1 + 24 * v46;
  }
  v51 = a2 & v48;
  v52 = (__m128i *)((char *)v47 + 24 * v51);
  if ( 24 * v51 != v49 )
  {
    v53 = (__m128i *)((char *)v47 + 24 * v51);
    v54 = nullptr;
    while ( 1 )
    {
      v55 = v53->m128i_i32[1];
      if ( v55 == 2 )
      {
        if ( a2 == v53->m128i_i32[0] && a2 == v53->m128i_i32[2] )
        {
          v53->m128i_i32[2] = a2;
          v53[1].m128i_i64[0] = v12;
          v53->m128i_i32[1] = 2;
          return v12;
        }
      }
      else
      {
        if ( !v55 )
        {
          if ( v54 )
            goto LABEL_67;
          v54 = v53;
          goto LABEL_68;
        }
        v54 = v53;
      }
      v53 = (__m128i *)((char *)v53 + 24);
      if ( v53 == (__m128i *)v50 )
        goto LABEL_60;
    }
  }
  v54 = nullptr;
  while ( 1 )
  {
LABEL_60:
    if ( v52 == v47 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v56 = v47->m128i_i32[1];
    if ( v56 != 2 )
      break;
    if ( a2 == v47->m128i_i32[0] && a2 == v47->m128i_i32[2] )
    {
      v47->m128i_i32[2] = a2;
      v47[1].m128i_i64[0] = v12;
      v47->m128i_i32[1] = 2;
      return v12;
    }
LABEL_59:
    v47 = (__m128i *)((char *)v47 + 24);
  }
  if ( v56 )
  {
    v54 = v47;
    goto LABEL_59;
  }
  if ( v54 )
LABEL_67:
    --*(_DWORD *)(a1 + 16);
  else
    v54 = v47;
LABEL_68:
  v54->m128i_i32[2] = a2;
  v54[1].m128i_i64[0] = v12;
  v54->m128i_i32[1] = 2;
  v54->m128i_i32[0] = a2;
  ++*(_DWORD *)(a1 + 12);
  return v12;
}

