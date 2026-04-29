unsigned __int64 __fastcall sub_30C440(__int64 a1, int **a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  int v7; // r15d
  unsigned int i; // ebx
  int v9; // r12d
  unsigned int v10; // ebp
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r12
  bool v15; // cf
  __int64 v16; // rax
  int *v17; // rdx
  unsigned int v18; // ebp
  int v19; // ecx
  int v20; // r14d
  unsigned int j; // ebx
  unsigned int v22; // eax
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  int *v26; // rax
  int *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebp
  signed int k; // eax
  __int64 *v38; // r14
  __int64 v39; // rax
  __int64 v40; // rsi
  signed int v41; // ebx
  __int64 v42; // r14
  int *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  int v47; // ebx
  int v48; // ebp
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rdi
  __int64 *v52; // r12
  __int64 v53; // rax
  int *v54; // rax
  int *v55; // rsi
  __int64 v56; // rdx
  __m128i v57; // xmm1
  int *v58; // rax
  __m128i v59; // xmm0
  __int64 v60; // rax
  __m128i v61; // xmm0
  __m128i v62; // xmm1
  __int64 v63; // rdi
  __int64 v64; // rbp
  __int64 v65; // rbx
  __int64 *v66; // rdx
  __int64 v67; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v73; // [rsp+18h] [rbp-F8h] BYREF
  __int128 v74; // [rsp+20h] [rbp-F0h]
  __int64 v75; // [rsp+38h] [rbp-D8h] BYREF
  __m128i v76; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+58h] [rbp-B8h] BYREF
  __int128 v78; // [rsp+60h] [rbp-B0h]
  __int64 v79; // [rsp+78h] [rbp-98h] BYREF
  __int128 v80; // [rsp+80h] [rbp-90h]
  __int64 v81[2]; // [rsp+90h] [rbp-80h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-70h]
  int *v83; // [rsp+A8h] [rbp-68h] BYREF
  __m128i v84; // [rsp+B0h] [rbp-60h] BYREF
  int v85; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v86; // [rsp+D0h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  v3 = *(_QWORD *)a1;
  v79 = 0;
  v81[0] = 0;
  v81[1] = 0;
  v82 = a1;
  v83 = nullptr;
  v85 = 0;
  v80 = 0;
  v84 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64))(v3 + 64))(a1);
  v5 = 0;
  v6 = v4;
  LODWORD(v77) = -1;
  if ( (unsigned __int64)v4 > 0 )
  {
    v43 = v83;
    if ( &v77 < (__int64 *)v83 || &v77 >= (__int64 *)&v83[v84.m128i_i64[1]] )
    {
      if ( v84.m128i_i64[1] >= (unsigned __int64)v4
        || (v70 = qvector_reserve(&v83, v83, v4, 4),
            v5 = v84.m128i_i64[0],
            v83 = (int *)v70,
            v43 = (int *)v70,
            v84.m128i_i64[0] < v6) )
      {
        while ( 1 )
        {
          v43[v5++] = -1;
          if ( v6 == v5 )
            break;
          v43 = v83;
        }
      }
    }
    else if ( v84.m128i_i64[1] >= (unsigned __int64)v4
           || (v69 = qvector_reserve(&v83, v83, v4, 4),
               v5 = v84.m128i_i64[0],
               v83 = (int *)v69,
               v43 = (int *)v69,
               v84.m128i_i64[0] < v6) )
    {
      while ( 1 )
      {
        v43[v5++] = -1;
        if ( v6 == v5 )
          break;
        v43 = v83;
      }
    }
    v84.m128i_i64[0] = v6;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 56LL))(v82);
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v82 + 160LL))(v82, 0);
        v7 != i;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v82 + 160LL))(v82, i + 1) )
  {
    if ( (unsigned __int8)sub_60750(v81, i) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v82 + 96LL))(v82, i);
      v10 = 0;
      if ( v9 > 0 )
      {
        do
        {
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v82 + 112LL))(v82, i, v10);
          sub_30B830((__int64)&v79, v11);
          ++v10;
        }
        while ( v9 != v10 );
      }
      v12 = v80;
      v13 = v79;
      if ( *((_QWORD *)&v80 + 1) < (unsigned __int64)(v80 + 1) )
      {
        v79 = qvector_reserve(&v79, v79, v80 + 1, 4);
        v13 = v79;
        v12 = v80;
      }
      *(_DWORD *)(v13 + 4 * v12) = i;
      *(_QWORD *)&v80 = v80 + 1;
    }
  }
  v14 = v80 - 1;
  if ( (__int64)v80 - 1 >= 0 )
  {
    do
    {
      while ( 1 )
      {
        v16 = *(int *)(v79 + 4 * v14);
        v17 = &v83[v16];
        v18 = *(_DWORD *)(v79 + 4 * v14);
        if ( *v17 == -1 )
        {
          v19 = v85++;
          *v17 = v19;
          v83[v16] = v19;
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v82 + 104LL))(v82, v18);
          if ( v20 > 0 )
            break;
        }
        v15 = v14-- == 0;
        if ( v15 )
          goto LABEL_18;
      }
      for ( j = 0; j != v20; ++j )
      {
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v82 + 120LL))(v82, v18, j);
        sub_30BE40((__int64)&v79, v22, v18);
      }
      v15 = v14-- == 0;
    }
    while ( !v15 );
  }
LABEL_18:
  v23 = v85;
  v73 = 0;
  v74 = 0;
  if ( !v85 )
  {
    v26 = v83;
    v27 = &v83[v84.m128i_i64[0]];
    if ( v27 == v83 )
    {
      v75 = 0;
      v76 = 0;
      goto LABEL_30;
    }
    goto LABEL_23;
  }
  v73 = qvector_reserve(&v73, 0, v85, 4);
  v24 = v74;
  if ( (unsigned __int64)v74 < v23 )
  {
    *(_DWORD *)(v73 + 4 * v74) = 0;
    v25 = v24 + 1;
    if ( v25 < v23 )
    {
      do
        *(_DWORD *)(v73 + 4 * v25++) = 0;
      while ( v23 != v25 );
    }
  }
  v26 = v83;
  *(_QWORD *)&v74 = v23;
  v27 = &v83[v84.m128i_i64[0]];
  if ( v83 != v27 )
  {
    do
    {
LABEL_23:
      v28 = *v26++;
      ++*(_DWORD *)(v73 + 4 * v28);
    }
    while ( v26 != v27 );
    v75 = 0;
    v76 = 0;
    if ( !v23 )
      goto LABEL_30;
    goto LABEL_25;
  }
  v75 = 0;
  v76 = 0;
LABEL_25:
  v29 = qvector_reserve(&v75, 0, v23, 24);
  v30 = v76.m128i_i64[0];
  v75 = v29;
  if ( v76.m128i_i64[0] < v23 )
  {
    v31 = 24 * v76.m128i_i64[0];
    v32 = 24 * v76.m128i_i64[0] + v29;
    *(_QWORD *)v32 = 0;
    *(_OWORD *)(v32 + 8) = 0;
    v33 = v30 + 1;
    if ( v30 + 1 < v23 )
    {
      v34 = v31 + 24;
      do
      {
        ++v33;
        v35 = v34 + v75;
        v34 += 24;
        *(_QWORD *)v35 = 0;
        *(_OWORD *)(v35 + 8) = 0;
      }
      while ( v23 != v33 );
    }
  }
  v76.m128i_i64[0] = v23;
LABEL_30:
  v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  for ( k = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
        ;
        k = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, (unsigned int)(v41 + 1)) )
  {
    v41 = k;
    if ( v36 == k )
      break;
    v42 = v83[k];
    if ( *(int *)(v73 + 4 * v42) > 1 || (unsigned __int8)sub_30C3C0(a1, k) )
    {
      v38 = (__int64 *)(v75 + 24 * v42);
      v39 = v38[1];
      v40 = *v38;
      if ( v38[2] < (unsigned __int64)(v39 + 1) )
      {
        v44 = qvector_reserve(v38, v40, v39 + 1, 4);
        *v38 = v44;
        v40 = v44;
        v39 = v38[1];
      }
      *(_DWORD *)(v40 + 4 * v39) = v41;
      ++v38[1];
    }
    else
    {
      *(_DWORD *)(v73 + 4 * v42) = 0;
      v83[v41] = -1;
    }
  }
  v77 = 0;
  v78 = 0;
  if ( v23 )
  {
    v77 = qvector_reserve(&v77, 0, v23, 4);
    v45 = v78;
    if ( (unsigned __int64)v78 < v23 )
    {
      *(_DWORD *)(v77 + 4 * v78) = -1;
      v46 = v45 + 1;
      if ( v46 < v23 )
      {
        do
          *(_DWORD *)(v77 + 4 * v46++) = -1;
        while ( v23 != v46 );
      }
    }
    *(_QWORD *)&v78 = v23;
  }
  v47 = 0;
  v48 = 0;
  v49 = 0;
  if ( (_QWORD)v74 )
  {
    do
    {
      while ( *(_DWORD *)(v73 + 4 * v49) )
      {
        v50 = v47++;
        *(_DWORD *)(v77 + 4 * v49) = v50 - v48;
        v49 = v47;
        if ( v47 >= (unsigned __int64)v74 )
          goto LABEL_59;
      }
      v51 = v75;
      v52 = (__int64 *)(v75 + 24 * (v49 - v48));
      v53 = *v52;
      if ( *v52 )
      {
        v52[1] = 0;
        qfree(v53);
        v51 = v75;
      }
      ++v47;
      ++v48;
      memmove(v52, v52 + 3, v51 + 24 * v76.m128i_i64[0]-- - (_QWORD)v52 - 24);
      v49 = v47;
    }
    while ( v47 < (unsigned __int64)v74 );
LABEL_59:
    if ( v48 )
    {
      v54 = v83;
      v55 = &v83[v84.m128i_i64[0]];
      if ( v55 != v83 )
      {
        do
        {
          v56 = *v54;
          if ( (_DWORD)v56 != -1 )
            *v54 = *(_DWORD *)(v77 + 4 * v56);
          ++v54;
        }
        while ( v55 != v54 );
      }
    }
  }
  if ( a2 )
  {
    v57 = _mm_loadu_si128(&v84);
    v58 = *a2;
    v59 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v83;
    *(__m128i *)(a2 + 1) = v57;
    v83 = v58;
    v84 = v59;
  }
  if ( a3 )
  {
    v60 = *(_QWORD *)a3;
    v61 = _mm_loadu_si128((const __m128i *)(a3 + 8));
    v62 = _mm_loadu_si128(&v76);
    *(_QWORD *)a3 = v75;
    v75 = v60;
    *(__m128i *)(a3 + 8) = v62;
    v76 = v61;
  }
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  v63 = v75;
  if ( v75 )
  {
    v64 = v76.m128i_i64[0];
    if ( v76.m128i_i64[0] )
    {
      v65 = 0;
      do
      {
        v66 = (__int64 *)(v63 + 24 * v65);
        v67 = *v66;
        if ( *v66 )
        {
          v66[1] = 0;
          qfree(v67);
          v63 = v75;
        }
        ++v65;
      }
      while ( v64 != v65 );
    }
    v76.m128i_i64[0] = 0;
    qfree(v63);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  if ( v83 )
  {
    v84.m128i_i64[0] = 0;
    qfree(v83);
  }
  qfree(v81[0]);
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  return v86 - __readfsqword(0x28u);
}
