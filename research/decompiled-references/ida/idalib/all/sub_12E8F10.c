__int64 __fastcall sub_12E8F10(__int64 a1, __int64 a2)
{
  void *v2; // rax
  unsigned __int64 v3; // rax
  void *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned int v6; // r13d
  int v7; // r15d
  void *v8; // r12
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  unsigned int v18; // r9d
  int k; // r10d
  __int64 v20; // rbp
  int v21; // r11d
  unsigned int v22; // r9d
  int i; // edx
  int v24; // eax
  unsigned int v25; // r9d
  int j; // edx
  int v27; // eax
  unsigned int v28; // r9d
  int m; // edx
  int v30; // eax
  unsigned int v31; // r9d
  int v32; // eax
  __int64 v33; // [rsp+0h] [rbp-78h]
  int v34; // [rsp+0h] [rbp-78h]
  unsigned int v35; // [rsp+Ch] [rbp-6Ch]
  __int64 v36; // [rsp+10h] [rbp-68h]
  int v37; // [rsp+18h] [rbp-60h]
  int v38; // [rsp+1Ch] [rbp-5Ch]
  char v39; // [rsp+2Fh] [rbp-49h] BYREF
  void *src; // [rsp+30h] [rbp-48h] BYREF
  size_t n; // [rsp+38h] [rbp-40h]

  v2 = *(void **)a2;
  v39 = 61;
  src = v2;
  n = *(_QWORD *)(a2 + 8);
  v3 = sub_2246AB0(&src, &v39, 1, 0);
  v4 = src;
  v5 = n;
  if ( v3 != -1 )
  {
    if ( n <= v3 )
      v3 = n;
    v5 = v3;
  }
  v6 = v5;
  v7 = sub_2248890(src, v5);
  v8 = (void *)operator new[](v5);
  memcpy(v8, v4, v5);
  if ( *(_DWORD *)(a1 + 312) )
  {
    v14 = *(_QWORD *)(a1 + 304);
    v15 = *(unsigned int *)(a1 + 320);
    v16 = v14 + 16 * v15;
    if ( !(_DWORD)v15 )
    {
LABEL_45:
      LODWORD(v5) = 0;
      goto LABEL_22;
    }
    v17 = v15 - 1;
    v18 = (v15 - 1) & v7;
    if ( v8 == (void *)-4096LL )
    {
      for ( i = 1; ; ++i )
      {
        v20 = v14 + 16LL * v18;
        v24 = *(_DWORD *)(v20 + 12);
        if ( v7 == v24 && *(_QWORD *)v20 == -4096 )
          break;
        if ( !v24 )
        {
          if ( *(_QWORD *)v20 == -4096 )
            goto LABEL_45;
          if ( *(_QWORD *)v20 != -8192 && !*(_DWORD *)(v20 + 8) )
          {
            LODWORD(v5) = 0;
            goto LABEL_22;
          }
        }
        v25 = i + v18;
        v18 = v17 & v25;
      }
    }
    else if ( v8 == (void *)-8192LL )
    {
      for ( j = 1; ; ++j )
      {
        v20 = v14 + 16LL * v18;
        v27 = *(_DWORD *)(v20 + 12);
        if ( v7 == v27 && *(_QWORD *)v20 == -8192 )
          break;
        if ( !v27 )
        {
          if ( *(_QWORD *)v20 == -4096 )
            goto LABEL_45;
          if ( *(_QWORD *)v20 != -8192 && !*(_DWORD *)(v20 + 8) )
          {
            LODWORD(v5) = 0;
            goto LABEL_22;
          }
        }
        v28 = j + v18;
        v18 = v17 & v28;
      }
    }
    else if ( (_DWORD)v5 )
    {
      for ( k = 1; ; ++k )
      {
        v20 = v14 + 16LL * v18;
        v21 = *(_DWORD *)(v20 + 12);
        if ( v7 == v21 && (_DWORD)v5 == *(_DWORD *)(v20 + 8) )
        {
          v38 = k;
          v37 = v17;
          v36 = v16;
          v35 = v18;
          v34 = *(_DWORD *)(v20 + 12);
          v32 = memcmp(v8, *(const void **)v20, (unsigned int)v5);
          v21 = v34;
          v18 = v35;
          v16 = v36;
          v17 = v37;
          k = v38;
          if ( !v32 )
            break;
        }
        if ( !v21 )
        {
          if ( *(_QWORD *)v20 == -4096 )
            goto LABEL_45;
          if ( *(_QWORD *)v20 != -8192 && !*(_DWORD *)(v20 + 8) )
          {
            LODWORD(v5) = 0;
            goto LABEL_22;
          }
        }
        v22 = k + v18;
        v18 = v17 & v22;
      }
    }
    else
    {
      for ( m = 1; ; ++m )
      {
        v20 = v14 + 16LL * v18;
        v30 = *(_DWORD *)(v20 + 12);
        if ( v7 == v30 && !*(_DWORD *)(v20 + 8) )
          break;
        if ( !v30 )
        {
          if ( *(_QWORD *)v20 == -4096 )
            goto LABEL_45;
          if ( *(_QWORD *)v20 != -8192 && !*(_DWORD *)(v20 + 8) )
          {
            LODWORD(v5) = 0;
            goto LABEL_22;
          }
        }
        v31 = m + v18;
        v18 = v17 & v31;
      }
    }
    LOBYTE(v5) = v16 != v20;
    goto LABEL_22;
  }
  v9 = *(_QWORD *)(a1 + 328);
  v10 = 16LL * *(unsigned int *)(a1 + 336);
  v33 = v9 + v10;
  v11 = v10 >> 4;
  v5 = v10 >> 6;
  if ( v5 )
  {
    v5 = v9 + (v5 << 6);
    while ( v6 != *(_DWORD *)(v9 + 8) || v6 && memcmp(*(const void **)v9, v8, v6) )
    {
      if ( v6 == *(_DWORD *)(v9 + 24) && (!v6 || !memcmp(*(const void **)(v9 + 16), v8, v6)) )
      {
        LOBYTE(v5) = v9 + 16 != v33;
        goto LABEL_22;
      }
      if ( v6 == *(_DWORD *)(v9 + 40) && ((v12 = v9 + 32, !v6) || !memcmp(*(const void **)(v9 + 32), v8, v6))
        || v6 == *(_DWORD *)(v9 + 56) && ((v12 = v9 + 48, !v6) || !memcmp(*(const void **)(v9 + 48), v8, v6)) )
      {
        LOBYTE(v5) = v33 != v12;
        goto LABEL_22;
      }
      v9 += 64;
      if ( v9 == v5 )
      {
        v11 = (v33 - v9) >> 4;
        goto LABEL_42;
      }
    }
    goto LABEL_21;
  }
LABEL_42:
  if ( v11 != 2 )
  {
    if ( v11 != 3 )
    {
      if ( v11 != 1 )
        goto LABEL_45;
      goto LABEL_54;
    }
    if ( v6 == *(_DWORD *)(v9 + 8) && (!v6 || !memcmp(*(const void **)v9, v8, v6)) )
      goto LABEL_21;
    v9 += 16;
  }
  if ( v6 == *(_DWORD *)(v9 + 8) && (!v6 || !memcmp(*(const void **)v9, v8, v6)) )
    goto LABEL_21;
  v9 += 16;
LABEL_54:
  LODWORD(v5) = 0;
  if ( v6 == *(_DWORD *)(v9 + 8) && (!v6 || !memcmp(*(const void **)v9, v8, v6)) )
LABEL_21:
    LOBYTE(v5) = v33 != v9;
LABEL_22:
  if ( v8 != (void *)-8192LL && v8 != (void *)-4096LL )
    operator delete[](v8);
  return (unsigned int)v5;
}
