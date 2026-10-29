void __fastcall sub_E7C0E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // eax
  unsigned __int64 v8; // r14
  int v9; // edx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r11
  __int64 v15; // rdi
  __int64 v16; // rsi
  __m128i *v17; // rdx
  __m128i *v18; // rax
  _BYTE *v19; // rsi
  __m128i *v20; // r10
  __int64 v21; // rdi
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // r12
  void **v29; // r13
  _BYTE *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r9
  int v35; // edx
  void **v36; // rbx
  _QWORD *v37; // [rsp+0h] [rbp-50h]
  _QWORD *v38; // [rsp+0h] [rbp-50h]
  __int64 v39; // [rsp+8h] [rbp-48h]
  unsigned __int64 v40; // [rsp+10h] [rbp-40h]

  if ( a1 == a2 )
    return;
  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a2 + 8);
  if ( *(_QWORD *)a1 != a1 + 16 && *(_QWORD *)a2 != a2 + 16 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v2;
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v3;
    *(_DWORD *)(a2 + 8) = v4;
    v5 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 12) = v5;
    return;
  }
  if ( *(_DWORD *)(a1 + 12) < v3 )
  {
    sub_A8C1F0(a1, v3);
    v8 = *(unsigned int *)(a1 + 8);
    v9 = v8;
    if ( *(_DWORD *)(a2 + 12) >= (unsigned int)v8 )
      goto LABEL_7;
    goto LABEL_29;
  }
  v8 = *(unsigned int *)(a1 + 8);
  v9 = v8;
  if ( *(_DWORD *)(a2 + 12) < (unsigned int)v8 )
  {
LABEL_29:
    sub_A8C1F0(a2, v8);
    v8 = *(unsigned int *)(a1 + 8);
    v9 = *(_DWORD *)(a1 + 8);
  }
LABEL_7:
  v10 = *(unsigned int *)(a2 + 8);
  v11 = v8;
  if ( v10 <= v8 )
    v11 = *(unsigned int *)(a2 + 8);
  v40 = v11;
  if ( !v11 )
    goto LABEL_21;
  v12 = 0;
  v13 = 32 * v11;
  do
  {
    v17 = (__m128i *)(v12 + *(_QWORD *)a2);
    v18 = (__m128i *)(v12 + *(_QWORD *)a1);
    if ( v18 != v17 )
    {
      v19 = (_BYTE *)v18->m128i_i64[0];
      v20 = v17 + 1;
      v21 = v17->m128i_i64[0];
      if ( (__m128i *)v18->m128i_i64[0] != &v18[1] )
      {
        v14 = v18[1].m128i_i64[0];
        if ( v20 == (__m128i *)v21 )
        {
          v18[1] = _mm_loadu_si128(v17 + 1);
          v17->m128i_i64[0] = (__int64)v19;
          v18->m128i_i64[0] = (__int64)v18[1].m128i_i64;
        }
        else
        {
          v18->m128i_i64[0] = v21;
          v17->m128i_i64[0] = (__int64)v19;
          v18[1].m128i_i64[0] = v17[1].m128i_i64[0];
        }
        v17[1].m128i_i64[0] = v14;
        v15 = v17->m128i_i64[1];
        v16 = v18->m128i_i64[1];
        goto LABEL_14;
      }
      if ( v20 != (__m128i *)v21 )
      {
        v22 = v17[1].m128i_i64[0];
        v17[1] = _mm_loadu_si128(v18 + 1);
        v18->m128i_i64[0] = v21;
        v17->m128i_i64[0] = (__int64)v20;
        v18[1].m128i_i64[0] = v22;
        v16 = v18->m128i_i64[1];
        v15 = v17->m128i_i64[1];
LABEL_14:
        v18->m128i_i64[1] = v15;
        v17->m128i_i64[1] = v16;
        goto LABEL_15;
      }
      v16 = v17->m128i_i64[1];
      if ( v18->m128i_i64[1] )
      {
        v23 = _mm_loadu_si128(v18 + 1);
        if ( v16 )
        {
          v24 = _mm_loadu_si128(v17 + 1);
          v17[1] = v23;
          v16 = v18->m128i_i64[1];
          v18[1] = v24;
          v15 = v17->m128i_i64[1];
          goto LABEL_14;
        }
        v17[1] = v23;
        v17->m128i_i64[1] = v18->m128i_i64[1];
        v18->m128i_i64[1] = 0;
        *(_BYTE *)v18->m128i_i64[0] = 0;
      }
      else
      {
        v15 = 0;
        if ( !v16 )
          goto LABEL_14;
        v18[1] = _mm_loadu_si128(v17 + 1);
        v18->m128i_i64[1] = v17->m128i_i64[1];
        v30 = (_BYTE *)v17->m128i_i64[0];
        v17->m128i_i64[1] = 0;
        *v30 = 0;
      }
    }
LABEL_15:
    v12 += 32;
  }
  while ( v12 != v13 );
  v8 = *(unsigned int *)(a1 + 8);
  v10 = *(unsigned int *)(a2 + 8);
  v9 = *(_DWORD *)(a1 + 8);
LABEL_21:
  if ( v10 < v8 )
  {
    v25 = *(_QWORD *)a1;
    v26 = (_QWORD *)(*(_QWORD *)a2 + 32 * v10);
    v27 = *(_QWORD *)a1 + 32 * v8;
    v28 = *(_QWORD *)a1 + 32 * v40;
    if ( v28 != v27 )
    {
      do
      {
        v37 = v26;
        v28 += 32;
        *v26 = v26 + 2;
        sub_E78BF0(v26, *(_BYTE **)(v28 - 32), *(_QWORD *)(v28 - 32) + *(_QWORD *)(v28 - 24));
        v26 = v37 + 4;
      }
      while ( v27 != v28 );
      v25 = *(_QWORD *)a1;
      v9 = v8 + *(_DWORD *)(a2 + 8) - v10;
      v27 = *(_QWORD *)a1 + 32 * v40;
    }
    *(_DWORD *)(a2 + 8) = v9;
    v29 = (void **)(v25 + 32LL * *(unsigned int *)(a1 + 8));
    while ( v29 != (void **)v27 )
    {
      while ( 1 )
      {
        v29 -= 4;
        if ( *v29 == v29 + 2 )
          break;
        operator delete(*v29);
        if ( v29 == (void **)v27 )
          goto LABEL_37;
      }
    }
LABEL_37:
    *(_DWORD *)(a1 + 8) = v40;
  }
  else if ( v10 > v8 )
  {
    v31 = *(_QWORD *)a2;
    v32 = (_QWORD *)(*(_QWORD *)a1 + 32 * v8);
    v33 = *(_QWORD *)a2 + 32 * v10;
    v34 = *(_QWORD *)a2 + 32 * v40;
    if ( v34 == v33 )
    {
      v35 = v8;
    }
    else
    {
      do
      {
        v39 = v34;
        *v32 = v32 + 2;
        v38 = v32;
        sub_E78BF0(v32, *(_BYTE **)v34, *(_QWORD *)v34 + *(_QWORD *)(v34 + 8));
        v34 = v39 + 32;
        v32 = v38 + 4;
      }
      while ( v33 != v39 + 32 );
      v31 = *(_QWORD *)a2;
      v35 = *(_DWORD *)(a1 + 8);
      v33 = *(_QWORD *)a2 + 32 * v40;
    }
    *(_DWORD *)(a1 + 8) = v35 + v10 - v8;
    v36 = (void **)(v31 + 32LL * *(unsigned int *)(a2 + 8));
    while ( v36 != (void **)v33 )
    {
      while ( 1 )
      {
        v36 -= 4;
        if ( *v36 == v36 + 2 )
          break;
        operator delete(*v36);
        if ( v36 == (void **)v33 )
          goto LABEL_49;
      }
    }
LABEL_49:
    *(_DWORD *)(a2 + 8) = v40;
  }
}
