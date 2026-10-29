__int64 __fastcall clang_createIndexWithOptions(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // r15
  size_t v4; // rax
  size_t v5; // r14
  double *v6; // rdx
  _BYTE *v7; // rdi
  double *v8; // rax
  size_t v9; // xmm0_8
  double v10; // rcx
  const char *v11; // rbp
  size_t v12; // rax
  size_t v13; // r14
  double *v14; // rdx
  double *v15; // rdi
  size_t v16; // rdx
  double v17; // rcx
  double *v19; // rdi
  double *v20; // rdi
  double v21; // [rsp+8h] [rbp-60h]
  double v22; // [rsp+8h] [rbp-60h]
  void *v23; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  double dest[9]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(_DWORD *)a1 != 24 )
    return v1;
  v1 = sub_5F8830(*(_BYTE *)(a1 + 6) & 1, (*(_BYTE *)(a1 + 6) & 2) != 0, *(_BYTE *)(a1 + 4), *(_BYTE *)(a1 + 5));
  *(_BYTE *)(v1 + 2) = (*(_BYTE *)(a1 + 6) & 4) != 0;
  v3 = *(_BYTE **)(a1 + 8);
  if ( !v3 )
  {
    n = 0;
    v9 = 0;
    v23 = dest;
    LOBYTE(dest[0]) = 0;
    v7 = *(_BYTE **)(v1 + 88);
    if ( (void **)(v1 + 88) == &v23 )
    {
LABEL_34:
      v8 = dest;
      goto LABEL_10;
    }
LABEL_24:
    *(_QWORD *)(v1 + 96) = v9;
    v7[v9] = 0;
    v8 = (double *)v23;
    goto LABEL_10;
  }
  v4 = strlen(*(const char **)(a1 + 8));
  v23 = dest;
  v21 = *(double *)&v4;
  v5 = v4;
  if ( v4 > 0xF )
  {
    v23 = (void *)std::string::_M_create();
    v20 = (double *)v23;
    dest[0] = v21;
  }
  else
  {
    if ( v4 == 1 )
    {
      LOBYTE(dest[0]) = *v3;
      v6 = dest;
      goto LABEL_6;
    }
    v6 = dest;
    if ( !v4 )
      goto LABEL_6;
    v20 = dest;
  }
  memcpy(v20, v3, v5);
  v4 = *(_QWORD *)&v21;
  v6 = (double *)v23;
LABEL_6:
  n = v4;
  v7 = (_BYTE *)(v1 + 104);
  *((_BYTE *)v6 + v4) = 0;
  v8 = *(double **)(v1 + 88);
  v9 = n;
  if ( v8 == (double *)(v1 + 104) )
  {
    if ( v23 != dest )
    {
      *(_QWORD *)(v1 + 88) = v23;
      *(__m128 *)(v1 + 96) = _mm_loadh_ps(dest);
LABEL_33:
      v23 = dest;
      goto LABEL_34;
    }
    v8 = dest;
  }
  else
  {
    if ( v23 != dest )
    {
      *(_QWORD *)(v1 + 88) = v23;
      v10 = *(double *)(v1 + 104);
      *(__m128 *)(v1 + 96) = _mm_loadh_ps(dest);
      if ( v8 )
      {
        v23 = v8;
        dest[0] = v10;
        goto LABEL_10;
      }
      goto LABEL_33;
    }
    v7 = *(_BYTE **)(v1 + 88);
    v8 = dest;
  }
  if ( &v23 != (void **)(v1 + 88) )
  {
    if ( n )
    {
      if ( n == 1 )
        *v7 = LOBYTE(dest[0]);
      else
        memcpy(v7, dest, n);
      v9 = n;
      v7 = *(_BYTE **)(v1 + 88);
    }
    goto LABEL_24;
  }
LABEL_10:
  n = 0;
  *(_BYTE *)v8 = 0;
  if ( v23 != dest )
    operator delete(v23, *(_QWORD *)&dest[0] + 1LL);
  v11 = *(const char **)(a1 + 16);
  if ( v11 )
  {
    v12 = strlen(v11);
    v23 = dest;
    v22 = *(double *)&v12;
    v13 = v12;
    if ( v12 > 0xF )
    {
      v23 = (void *)std::string::_M_create();
      v19 = (double *)v23;
      dest[0] = v22;
LABEL_26:
      memcpy(v19, v11, v13);
      v12 = *(_QWORD *)&v22;
      v14 = (double *)((char *)v23 + *(_QWORD *)&v22);
      goto LABEL_16;
    }
    if ( v12 == 1 )
    {
      LOBYTE(dest[0]) = *v11;
      v14 = (double *)((char *)dest + 1);
      goto LABEL_16;
    }
    v19 = dest;
    if ( v12 )
      goto LABEL_26;
  }
  else
  {
    v23 = dest;
  }
  v14 = dest;
  v12 = 0;
LABEL_16:
  n = v12;
  *(_BYTE *)v14 = 0;
  v15 = *(double **)(v1 + 120);
  v16 = n;
  if ( v15 == (double *)(v1 + 136) )
  {
    if ( v23 != dest )
    {
      *(_QWORD *)(v1 + 120) = v23;
      *(__m128 *)(v1 + 128) = _mm_loadh_ps(dest);
      goto LABEL_37;
    }
LABEL_38:
    if ( &v23 == (void **)(v1 + 120) )
    {
      v15 = (double *)v23;
    }
    else
    {
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)v15 = LOBYTE(dest[0]);
        else
          memcpy(v15, dest, n);
        v16 = n;
        v15 = *(double **)(v1 + 120);
      }
      *(_QWORD *)(v1 + 128) = v16;
      *((_BYTE *)v15 + v16) = 0;
      v15 = (double *)v23;
    }
    goto LABEL_20;
  }
  if ( v23 == dest )
    goto LABEL_38;
  *(_QWORD *)(v1 + 120) = v23;
  v17 = *(double *)(v1 + 136);
  *(__m128 *)(v1 + 128) = _mm_loadh_ps(dest);
  if ( v15 )
  {
    v23 = v15;
    dest[0] = v17;
    goto LABEL_20;
  }
LABEL_37:
  v23 = dest;
  v15 = dest;
LABEL_20:
  n = 0;
  *(_BYTE *)v15 = 0;
  if ( v23 != dest )
    operator delete(v23, *(_QWORD *)&dest[0] + 1LL);
  return v1;
}

