void __fastcall sub_A01910(__int64 **a1, char **a2)
{
  char *v2; // rbx
  char *v3; // r14
  __int64 *v4; // r15
  unsigned __int64 v5; // rdx
  char *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  unsigned __int64 v11; // r13
  bool v12; // cf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r12
  __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  char *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // r13
  unsigned __int64 v24; // rbx
  __int64 v25; // r14
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 *v30; // rbx
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-48h]
  double v37[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = a2[1];
  v3 = *a2;
  v4 = a1[1];
  if ( *a2 == v2 )
    return;
  v5 = (v2 - v3) >> 4;
  if ( v5 <= ((char *)a1[2] - (char *)v4) >> 4 )
  {
    v6 = *a2;
    v7 = a1[1];
    if ( &_pthread_key_create )
    {
      do
      {
        *v7 = *(_QWORD *)v6;
        v8 = *((_QWORD *)v6 + 1);
        v7[1] = v8;
        if ( v8 )
          _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
        v6 += 16;
        v7 += 2;
      }
      while ( v2 != v6 );
    }
    else
    {
      do
      {
        *v7 = *(_QWORD *)v6;
        v32 = *((_QWORD *)v6 + 1);
        v7[1] = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v6 += 16;
        v7 += 2;
      }
      while ( v2 != v6 );
    }
    a1[1] = (__int64 *)((char *)a1[1] + v2 - v3);
    sub_A01430(v3, (__int64)v3, v4);
    return;
  }
  v9 = *a1;
  v11 = ((char *)v4 - (char *)*a1) >> 4;
  if ( v5 > 0xFFFFFFFFFFFFFFFLL - v11 )
    std::__throw_length_error("vector::_M_range_insert");
  if ( v5 < v11 )
    v5 = ((char *)v4 - (char *)*a1) >> 4;
  v12 = __CFADD__(v11, v5);
  v13 = v11 + v5;
  if ( v12 || v13 > 0xFFFFFFFFFFFFFFFLL )
  {
    v34 = -16;
LABEL_43:
    v35 = operator new(v34);
    v9 = *a1;
    v14 = v35;
    v36 = v35 + v34;
    goto LABEL_14;
  }
  v36 = 0;
  v14 = 0;
  if ( v13 )
  {
    v34 = 16 * v13;
    goto LABEL_43;
  }
LABEL_14:
  if ( v4 == v9 )
  {
    v19 = v14;
  }
  else
  {
    v15 = v9;
    v16 = v14;
    do
    {
      v17 = *v15;
      *(_QWORD *)(v16 + 8) = 0;
      v15 += 2;
      v16 += 16LL;
      *(_QWORD *)(v16 - 16) = v17;
      v18 = *(v15 - 1);
      *(v15 - 1) = 0;
      *(_QWORD *)(v16 - 8) = v18;
      *(v15 - 2) = 0;
    }
    while ( v4 != v15 );
    v19 = v14 + (((char *)(v4 - 2) - (char *)v9) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  v20 = v3;
  v21 = (_QWORD *)v19;
  if ( &_pthread_key_create )
  {
    do
    {
      *v21 = *(_QWORD *)v20;
      v22 = *((_QWORD *)v20 + 1);
      v21[1] = v22;
      if ( v22 )
        _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
      v20 += 16;
      v21 += 2;
    }
    while ( v2 != v20 );
  }
  else
  {
    do
    {
      *v21 = *(_QWORD *)v20;
      v33 = *((_QWORD *)v20 + 1);
      v21[1] = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      v20 += 16;
      v21 += 2;
    }
    while ( v2 != v20 );
  }
  v23 = a1[1];
  v24 = (v2 - 16 - v3) & 0xFFFFFFFFFFFFFFF0LL;
  v25 = v19 + v24 + 16;
  if ( v4 != v23 )
  {
    v26 = v4;
    v27 = v19 + v24 + 16;
    do
    {
      v28 = *v26;
      *(_QWORD *)(v27 + 8) = 0;
      v26 += 2;
      v27 += 16;
      *(_QWORD *)(v27 - 16) = v28;
      v29 = *(v26 - 1);
      *(v26 - 1) = 0;
      *(_QWORD *)(v27 - 8) = v29;
      *(v26 - 2) = 0;
    }
    while ( v23 != v26 );
    v25 += (((char *)(v23 - 2) - (char *)v4) & 0xFFFFFFFFFFFFFFF0LL) + 16;
  }
  v30 = *a1;
  if ( v23 != *a1 )
  {
    do
    {
      while ( 1 )
      {
        v31 = (volatile signed __int32 *)v30[1];
        if ( !v31 )
          break;
        sub_4204D0(v31);
        v30 += 2;
        if ( v23 == v30 )
          goto LABEL_29;
      }
      v30 += 2;
    }
    while ( v23 != v30 );
LABEL_29:
    v30 = *a1;
  }
  if ( v30 )
    operator delete(v30);
  *(_QWORD *)&v37[0] = v25;
  a1[2] = (__int64 *)v36;
  *(__m128 *)a1 = _mm_loadh_ps(v37);
}

