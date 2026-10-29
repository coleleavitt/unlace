__m128 *__fastcall sub_7E9960(__m128 *a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rbx
  __int64 *i; // r13
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdi
  _BYTE v33[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+10h] [rbp-58h] BYREF
  __int64 v35; // [rsp+18h] [rbp-50h]
  __int64 v36; // [rsp+20h] [rbp-48h] BYREF
  __int64 v37; // [rsp+28h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD **)(a2 + 2640);
  v34 = 0;
  v35 = v6;
  v36 = 0;
  v37 = v6;
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a2 + 2632);
          v11 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_8;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_8:
    v7 = *(_QWORD **)(a2 + 2640);
    if ( v7 )
LABEL_9:
      *((_DWORD *)v7 - 1) = 0;
  }
  v12 = *(_QWORD **)(a2 + 2656);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *(_QWORD *)(a2 + 2648);
          v11 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_17;
      }
      sub_15D7BC0(v15, v14);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_17:
    v12 = *(_QWORD **)(a2 + 2656);
    if ( v12 )
LABEL_18:
      *((_DWORD *)v12 - 1) = 0;
  }
  sub_13A61F0(a2 + 2680, a3, a2 + 2632, a2 + 2648, (unsigned int)&v34, (unsigned int)&v36);
  sub_13AC880(v33, *(_QWORD *)(a2 + 24), v16, v17, v18, v19);
  sub_13AD310(v33, v34, &v34, &v36);
  v20 = *(__int64 **)(a2 + 2640);
  if ( v20 )
  {
    for ( i = &v20[*((unsigned int *)v20 - 1)]; i != v20; ++v20 )
    {
      v22 = *(_QWORD *)(a2 + 16);
      v23 = sub_7E58C0(v22, *v20);
      sub_7E5160(v22, v23, nullptr, v24, v25, v26);
    }
  }
  v27 = v34;
  *a1 = _mm_loadh_ps((const double *)(a2 + 24));
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  sub_13AC9F0(v33);
  v28 = v36;
  if ( v36 )
  {
    v29 = v37;
    v11 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v29, v28);
  }
  v30 = v34;
  if ( v34 )
  {
    v31 = v35;
    v11 = (*(_DWORD *)(v34 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v31, v30);
  }
  return a1;
}

