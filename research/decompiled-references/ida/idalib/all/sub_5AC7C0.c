unsigned __int64 __fastcall sub_5AC7C0(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  unsigned __int64 v5; // rbx
  __m128i **v6; // r12
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  __m128i *v9; // rax
  __m128i *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i v15; // xmm0
  __m128i *v16; // r13
  __m128i *i; // r15
  char *v18; // rdx
  void *v19; // rdi
  __int64 *v20; // r13
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 *v24; // rbp
  __int64 *v25; // r12
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // r10
  __m128i v30; // xmm0
  int v31; // r11d
  __int64 v32; // rax
  __int64 *v33; // rdx
  __int64 *v34; // rax
  __int64 v35; // r10
  __m128i v36; // xmm0
  int v37; // r11d
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __m128i v41; // xmm0
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 *v45; // rdx
  __int64 v46; // r8
  __m128i **v48; // r15
  unsigned __int64 v49; // rbp
  __m128i *v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  char *v54; // rax
  __int64 v55; // rdx
  __m128i v56; // xmm0
  __m128i *v57; // r12
  __m128i *j; // r13
  void **v59; // rcx
  void *v60; // rdx
  unsigned __int64 v61; // rsi
  __int64 v62; // r13
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 v65; // rdx
  char *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdi
  __m128i v69; // xmm0
  int v70; // r9d
  char *v71; // rdx
  __int64 v72; // rbp
  __int64 v73; // rbx
  char *v74; // rax
  void *v75; // rdi
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v79; // [rsp+18h] [rbp-50h]
  unsigned __int64 v80; // [rsp+28h] [rbp-40h]

  v4 = a1[14] == 0;
  v80 = __readfsqword(0x28u);
  v5 = a1[12];
  if ( v4 )
  {
    if ( !a1[1] )
    {
      if ( !a3 )
        return v80 - __readfsqword(0x28u);
      v20 = nullptr;
      v21 = *a2;
      v22 = a2[1];
      v23 = *a2;
      v24 = (__int64 *)(*a2 + 40LL);
      v25 = (__int64 *)(v22 + 40);
      goto LABEL_20;
    }
    v6 = (__m128i **)(a1 + 2);
    v7 = 0;
    do
    {
      switch_dbctx(*(int *)(a2[v7] + 8LL));
      v8 = a2[v7];
      if ( v5 != *(_QWORD *)(v8 + 48) )
        sub_5A8180((__int64 *)(v8 + 40), v5);
      v9 = *v6;
      v10 = (__m128i *)((char *)*v6 + 40 * (_QWORD)v6[1]);
      if ( *v6 != v10 )
      {
        do
        {
          v11 = v9[2].m128i_i64[0];
          v12 = v9->m128i_i64[0];
          v9 = (__m128i *)((char *)v9 + 40);
          v13 = *(_QWORD *)(v8 + 40) + 32 * v11;
          v14 = *(_QWORD *)v13;
          v15 = _mm_loadu_si128((const __m128i *)(v13 + 8));
          *(_QWORD *)v13 = v12;
          *(_QWORD *)(v13 + 8) = v9[-2].m128i_i64[0];
          *(_QWORD *)(v13 + 16) = v9[-2].m128i_i64[1];
          LODWORD(v12) = v9[-1].m128i_i32[0];
          v9[-3].m128i_i64[1] = v14;
          v9[-2] = v15;
          LODWORD(v14) = *(_DWORD *)(v13 + 24);
          *(_DWORD *)(v13 + 24) = v12;
          v9[-1].m128i_i32[0] = v14;
        }
        while ( v10 != v9 );
        v10 = *v6;
        v9 = *v6;
      }
      if ( v10 )
      {
        v16 = v6[1];
        if ( v16 )
        {
          for ( i = nullptr; i != v16; i = (__m128i *)((char *)i + 1) )
          {
            v18 = &v10->m128i_i8[40 * (_QWORD)i];
            v19 = *(void **)v18;
            if ( *(_QWORD *)v18 )
            {
              *((_QWORD *)v18 + 1) = 0;
              qfree(v19);
              v9 = *v6;
            }
            v10 = v9;
          }
        }
        v6[1] = nullptr;
        qfree(v10);
        *v6 = nullptr;
        v6[2] = nullptr;
      }
      ++v7;
      v6 += 3;
    }
    while ( v7 < a1[1] );
    goto LABEL_17;
  }
  ptr = nullptr;
  v79 = 0;
  if ( v5 )
  {
    sub_5A8180((__int64 *)&ptr, v5);
    if ( !a1[1] )
      goto LABEL_61;
  }
  else if ( !a1[1] )
  {
LABEL_17:
    if ( !a3 )
      return v80 - __readfsqword(0x28u);
    goto LABEL_18;
  }
  v48 = (__m128i **)(a1 + 2);
  v49 = 0;
  do
  {
    switch_dbctx(*(int *)(a2[v49] + 8LL));
    v50 = *v48;
    v51 = (__int64)&(*v48)->m128i_i64[5 * (_QWORD)v48[1]];
    if ( (__m128i *)v51 != *v48 )
    {
      do
      {
        v52 = v50[2].m128i_i64[0];
        v53 = v50->m128i_i64[0];
        v50 = (__m128i *)((char *)v50 + 40);
        v54 = (char *)ptr + 32 * v52;
        v55 = *(_QWORD *)v54;
        v56 = _mm_loadu_si128((const __m128i *)(v54 + 8));
        *(_QWORD *)v54 = v53;
        *((_QWORD *)v54 + 1) = v50[-2].m128i_i64[0];
        *((_QWORD *)v54 + 2) = v50[-2].m128i_i64[1];
        LODWORD(v53) = v50[-1].m128i_i32[0];
        v50[-3].m128i_i64[1] = v55;
        v50[-2] = v56;
        LODWORD(v55) = *((_DWORD *)v54 + 6);
        *((_DWORD *)v54 + 6) = v53;
        v50[-1].m128i_i32[0] = v55;
      }
      while ( (__m128i *)v51 != v50 );
      v50 = *v48;
    }
    if ( v50 )
    {
      v57 = v48[1];
      if ( v57 )
      {
        for ( j = nullptr; j != v57; j = (__m128i *)((char *)j + 1) )
        {
          v59 = (void **)v50 + 5 * (_QWORD)j;
          v60 = *v59;
          if ( *v59 )
          {
            v59[1] = nullptr;
            qfree(v60);
            v50 = *v48;
          }
        }
      }
      v48[1] = nullptr;
      qfree(v50);
      *v48 = nullptr;
      v48[2] = nullptr;
    }
    v61 = v5 - a1[14];
    v62 = a2[v49];
    if ( v61 != *(_QWORD *)(v62 + 48) )
      sub_5A8180((__int64 *)(v62 + 40), v61);
    if ( v5 )
    {
      v63 = 0;
      v64 = 0;
      do
      {
        if ( *(_DWORD *)(a1[11] + 4 * v63) )
        {
          v65 = v64++;
          v66 = (char *)ptr + 32 * v63;
          v67 = *(_QWORD *)(v62 + 40) + 32 * v65;
          v68 = *(_QWORD *)v67;
          v69 = _mm_loadu_si128((const __m128i *)(v67 + 8));
          *(_QWORD *)v67 = *(_QWORD *)v66;
          *(_QWORD *)(v67 + 8) = *((_QWORD *)v66 + 1);
          *(_QWORD *)(v67 + 16) = *((_QWORD *)v66 + 2);
          v70 = *((_DWORD *)v66 + 6);
          *(_QWORD *)v66 = v68;
          *(__m128i *)(v66 + 8) = v69;
          LODWORD(v68) = *(_DWORD *)(v67 + 24);
          *(_DWORD *)(v67 + 24) = v70;
          *((_DWORD *)v66 + 6) = v68;
        }
        ++v63;
      }
      while ( v63 != v5 );
    }
    else
    {
      v64 = 0;
    }
    if ( *(_QWORD *)(v62 + 48) != v64 )
    {
      if ( !under_debugger )
        interr(1962);
      BUG();
    }
    ++v49;
    v48 += 3;
  }
  while ( v49 < a1[1] );
LABEL_61:
  v71 = (char *)ptr;
  if ( !ptr )
    goto LABEL_17;
  v72 = v79;
  if ( (_QWORD)v79 )
  {
    v73 = 0;
    do
    {
      v74 = &v71[32 * v73];
      v75 = *(void **)v74;
      if ( *(_QWORD *)v74 )
      {
        *((_QWORD *)v74 + 1) = 0;
        qfree(v75);
        v71 = (char *)ptr;
      }
      ++v73;
    }
    while ( v72 != v73 );
  }
  *(_QWORD *)&v79 = 0;
  qfree(v71);
  if ( !a3 )
    return v80 - __readfsqword(0x28u);
LABEL_18:
  v20 = nullptr;
  v21 = *a2;
  v22 = a2[1];
  v23 = *a2;
  v24 = (__int64 *)(*a2 + 40LL);
  v25 = (__int64 *)(v22 + 40);
  if ( a1[1] > 2u )
    v20 = (__int64 *)(a2[2] + 40LL);
LABEL_20:
  v26 = *(_QWORD *)(v21 + 48);
  if ( v26 )
  {
    v27 = 0;
    v26 = 0;
    do
    {
      while ( 1 )
      {
        v43 = *(_QWORD *)(v21 + 40);
        v44 = 32 * v27;
        v45 = (__int64 *)(v43 + 32 * v27);
        if ( (unsigned __int64)v45[1] > 1 )
          break;
        if ( *((_DWORD *)v45 + 6) )
          break;
        v46 = v44 + *(_QWORD *)(v22 + 40);
        if ( *(_QWORD *)(v46 + 8) > 1u || *(_DWORD *)(v46 + 24) )
          break;
        if ( ++v27 >= *(_QWORD *)(v21 + 48) )
          goto LABEL_31;
      }
      if ( v26 < v27 )
      {
        v28 = (__int64 *)(32 * v26 + v43);
        v29 = *v28;
        v30 = _mm_loadu_si128((const __m128i *)(v28 + 1));
        *v28 = *v45;
        v28[1] = v45[1];
        v28[2] = v45[2];
        v31 = *((_DWORD *)v45 + 6);
        *(__m128i *)(v45 + 1) = v30;
        *v45 = v29;
        LODWORD(v29) = *((_DWORD *)v28 + 6);
        *((_DWORD *)v28 + 6) = v31;
        *((_DWORD *)v45 + 6) = v29;
        v32 = *(_QWORD *)(v22 + 40);
        v33 = (__int64 *)(v32 + 32 * v26);
        v34 = (__int64 *)(v44 + v32);
        v35 = *v33;
        v36 = _mm_loadu_si128((const __m128i *)(v33 + 1));
        *v33 = *v34;
        v33[1] = v34[1];
        v33[2] = v34[2];
        v37 = *((_DWORD *)v34 + 6);
        *v34 = v35;
        *(__m128i *)(v34 + 1) = v36;
        LODWORD(v35) = *((_DWORD *)v33 + 6);
        *((_DWORD *)v33 + 6) = v37;
        *((_DWORD *)v34 + 6) = v35;
        if ( v20 )
        {
          v38 = *v20 + 32 * v26;
          v39 = v44 + *v20;
          v40 = *(_QWORD *)v38;
          v41 = _mm_loadu_si128((const __m128i *)(v38 + 8));
          *(_QWORD *)v38 = *(_QWORD *)v39;
          *(_QWORD *)(v38 + 8) = *(_QWORD *)(v39 + 8);
          *(_QWORD *)(v38 + 16) = *(_QWORD *)(v39 + 16);
          v42 = *(_DWORD *)(v39 + 24);
          *(_QWORD *)v39 = v40;
          *(__m128i *)(v39 + 8) = v41;
          LODWORD(v40) = *(_DWORD *)(v38 + 24);
          *(_DWORD *)(v38 + 24) = v42;
          *(_DWORD *)(v39 + 24) = v40;
        }
      }
      ++v26;
      ++v27;
    }
    while ( v27 < *(_QWORD *)(v21 + 48) );
LABEL_31:
    v21 = *a2;
  }
  switch_dbctx(*(int *)(v21 + 8));
  if ( *(_QWORD *)(v23 + 48) != v26 )
    sub_5A8180(v24, v26);
  switch_dbctx(*(int *)(a2[1] + 8LL));
  if ( *(_QWORD *)(v22 + 48) != v26 )
    sub_5A8180(v25, v26);
  if ( v20 )
  {
    switch_dbctx(*(int *)(a2[2] + 8LL));
    if ( v20[1] != v26 )
      return sub_5A8180(v20, v26);
  }
  return v80 - __readfsqword(0x28u);
}
