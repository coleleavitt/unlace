void __fastcall sub_113C4B0(__int64 a1, char *a2, char *a3, char *a4)
{
  __int64 v4; // rbx
  char *v5; // r8
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // r9
  __int64 v8; // rbp
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  char *v12; // rbp
  char *v13; // rax
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char *v20; // rdi
  unsigned __int64 v24; // r15
  bool v25; // cf
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r12
  char *v29; // r9
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  char *v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  char *v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rsi
  char *v43; // rax
  __int64 i; // r9
  __int64 v45; // r12
  __int64 v46; // rbx
  char *v47; // rax
  char *v48; // r11
  char *j; // rcx
  __int64 v50; // rbx
  __int64 v51; // r9
  __int64 v52; // rax
  unsigned __int64 v53; // r15
  unsigned __int64 v54; // rax
  unsigned __int64 v55[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( a3 == a4 )
    return;
  v4 = a4 - a3;
  v5 = *(char **)(a1 + 8);
  v6 = (a4 - a3) >> 4;
  v7 = v6;
  if ( v6 <= (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 4 )
  {
    v8 = v5 - a2;
    v9 = (v5 - a2) >> 4;
    v10 = v9;
    if ( v6 >= v9 )
    {
      v43 = &a3[v8];
      for ( i = *(_QWORD *)(a1 + 8); a4 != v43; *(_QWORD *)(i - 8) = v46 )
      {
        v45 = *(_QWORD *)v43;
        v46 = *((_QWORD *)v43 + 1);
        v43 += 16;
        i += 16;
        *(_QWORD *)(i - 16) = v45;
      }
      v47 = a2;
      v48 = &v5[16 * (v6 - v9)];
      *(_QWORD *)(a1 + 8) = v48;
      for ( j = v48; v5 != v47; *((_QWORD *)j - 1) = v51 )
      {
        v50 = *(_QWORD *)v47;
        v51 = *((_QWORD *)v47 + 1);
        v47 += 16;
        j += 16;
        *((_QWORD *)j - 2) = v50;
      }
      *(_QWORD *)(a1 + 8) = &v48[v8];
      if ( v8 > 0 )
      {
        v52 = 0;
        do
        {
          *(__m128i *)&a2[v52] = _mm_loadu_si128((const __m128i *)&a3[v52]);
          v52 += 16;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = &v5[-v4];
      v13 = &v5[-v4];
      do
      {
        v14 = *(_QWORD *)v13;
        v15 = *((_QWORD *)v13 + 1);
        v13 += 16;
        v11 += 16;
        *(_QWORD *)(v11 - 16) = v14;
        *(_QWORD *)(v11 - 8) = v15;
      }
      while ( v5 != v13 );
      *(_QWORD *)(a1 + 8) = &v5[v4];
      v16 = -16;
      v17 = (v12 - a2) >> 4;
      if ( v12 - a2 > 0 )
      {
        do
        {
          *(__m128i *)&v5[v16] = _mm_loadu_si128((const __m128i *)&v12[v16]);
          v16 -= 16;
          --v17;
        }
        while ( v17 );
      }
      if ( v4 > 0 )
      {
        v18 = 0;
        do
        {
          *(__m128i *)&a2[v18] = _mm_loadu_si128((const __m128i *)&a3[v18]);
          v18 += 16;
          --v7;
        }
        while ( v7 );
      }
    }
    return;
  }
  v20 = *(char **)a1;
  v24 = (v5 - v20) >> 4;
  if ( v6 > 0xFFFFFFFFFFFFFFFLL - v24 )
    std::__throw_length_error("vector::_M_range_insert");
  if ( v6 < v24 )
    v6 = (v5 - v20) >> 4;
  v25 = __CFADD__(v24, v6);
  v26 = v24 + v6;
  if ( v25 || v26 > 0xFFFFFFFFFFFFFFFLL )
  {
    v53 = -16;
LABEL_41:
    v54 = operator new(v53);
    v20 = *(char **)a1;
    v5 = *(char **)(a1 + 8);
    v28 = v54;
    v27 = v54 + v53;
    goto LABEL_18;
  }
  v27 = 0;
  v28 = 0;
  if ( v26 )
  {
    v53 = 16 * v26;
    goto LABEL_41;
  }
LABEL_18:
  if ( a2 == v20 )
  {
    v33 = v28;
  }
  else
  {
    v29 = v20;
    v30 = v28;
    do
    {
      v31 = *(_QWORD *)v29;
      v32 = *((_QWORD *)v29 + 1);
      v29 += 16;
      v30 += 16LL;
      *(_QWORD *)(v30 - 16) = v31;
      *(_QWORD *)(v30 - 8) = v32;
    }
    while ( a2 != v29 );
    v33 = v28 + ((a2 - 16 - v20) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  v34 = v33;
  v35 = a3;
  do
  {
    v36 = *((_QWORD *)v35 + 1);
    v37 = *(_QWORD *)v35;
    v35 += 16;
    v34 += 16LL;
    *(_QWORD *)(v34 - 16) = v37;
    *(_QWORD *)(v34 - 8) = v36;
  }
  while ( a4 != v35 );
  v38 = v33 + ((a4 - 16 - a3) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  if ( a2 != v5 )
  {
    v39 = a2;
    v40 = v38;
    do
    {
      v41 = *((_QWORD *)v39 + 1);
      v42 = *(_QWORD *)v39;
      v39 += 16;
      v40 += 16LL;
      *(_QWORD *)(v40 - 16) = v42;
      *(_QWORD *)(v40 - 8) = v41;
    }
    while ( v5 != v39 );
    v38 += ((v5 - a2 - 16) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  if ( v20 )
    operator delete(v20);
  v55[0] = v38;
  *(_QWORD *)(a1 + 16) = v27;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)v55);
}
