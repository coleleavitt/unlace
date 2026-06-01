__int64 *__fastcall sub_1ED1520(__int64 *a1, char *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 *v8; // rbx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 *v11; // rsi
  int v12; // edx
  __int64 *v13; // rdi
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r10
  __int64 *v17; // r13
  __int64 *v18; // r14
  unsigned __int64 v19; // r12
  int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // r9
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // r8
  __int64 *v26; // rdi
  __int64 v27; // rsi
  _QWORD *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // r10
  _QWORD *v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // r10
  _QWORD *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // r10
  int n; // r9d
  int v39; // r10d
  __int64 v40; // r9
  int m; // r10d
  int v42; // r11d
  __int64 v43; // r10
  int i; // r10d
  int v45; // r11d
  __int64 v46; // r10
  int j; // r10d
  int v48; // r11d
  __int64 v49; // r10
  int k; // r10d
  int v51; // r11d
  __int64 v52; // r10

  v4 = a2 - (char *)a1;
  v5 = (a2 - (char *)a1) >> 5;
  v7 = v4 >> 3;
  v8 = a1;
  if ( v5 <= 0 )
  {
LABEL_17:
    if ( v7 != 2 )
    {
      if ( v7 != 3 )
      {
        if ( v7 != 1 )
          return (__int64 *)a2;
LABEL_43:
        v18 = (__int64 *)a2;
        if ( (unsigned __int8)sub_1EA8570((__int64 *)a3, *v8) )
          goto LABEL_6;
        return v18;
      }
      if ( (unsigned __int8)sub_1EA8570((__int64 *)a3, *v8) )
        goto LABEL_6;
      ++v8;
    }
    if ( (unsigned __int8)sub_1EA8570((__int64 *)a3, *v8) )
      goto LABEL_6;
    ++v8;
    goto LABEL_43;
  }
  v9 = *(_DWORD *)(a3 + 16);
  v10 = *(_QWORD *)a3;
  v11 = &a1[4 * v5];
  v12 = v9 - 1;
  while ( 1 )
  {
    v13 = (__int64 *)(*v8 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = *v13;
    if ( v9 )
    {
      v15 = v12 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v16 = *(_QWORD *)(v10 + 8LL * v15);
      if ( v14 == v16 )
        goto LABEL_5;
      if ( v16 != -4096 )
      {
        for ( i = 1; ; i = v45 )
        {
          v45 = i + 1;
          v15 = v12 & (i + v15);
          v46 = *(_QWORD *)(v10 + 8LL * v15);
          if ( v14 == v46 )
            break;
          if ( v46 == -4096 )
            goto LABEL_22;
        }
LABEL_5:
        operator delete(v13, 0x38u);
        goto LABEL_6;
      }
LABEL_22:
      v29 = (_QWORD *)(v8[1] & 0xFFFFFFFFFFFFFFF8LL);
      v30 = v12 & (((unsigned int)*v29 >> 9) ^ ((unsigned int)*v29 >> 4));
      v31 = *(_QWORD *)(v10 + 8LL * v30);
      if ( *v29 == v31 )
        goto LABEL_23;
      if ( v31 != -4096 )
      {
        for ( j = 1; ; j = v48 )
        {
          v48 = j + 1;
          v30 = v12 & (j + v30);
          v49 = *(_QWORD *)(v10 + 8LL * v30);
          if ( *v29 == v49 )
            break;
          if ( v49 == -4096 )
            goto LABEL_25;
        }
LABEL_23:
        ++v8;
        operator delete(v29, 0x38u);
        goto LABEL_6;
      }
LABEL_25:
      v32 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFF8LL);
      v33 = v12 & (((unsigned int)*v32 >> 9) ^ ((unsigned int)*v32 >> 4));
      v34 = *(_QWORD *)(v10 + 8LL * v33);
      if ( *v32 == v34 )
        goto LABEL_26;
      if ( v34 != -4096 )
      {
        for ( k = 1; ; k = v51 )
        {
          v51 = k + 1;
          v33 = v12 & (k + v33);
          v52 = *(_QWORD *)(v10 + 8LL * v33);
          if ( *v32 == v52 )
            break;
          if ( v52 == -4096 )
            goto LABEL_28;
        }
LABEL_26:
        v8 += 2;
        operator delete(v32, 0x38u);
        goto LABEL_6;
      }
LABEL_28:
      v35 = (_QWORD *)(v8[3] & 0xFFFFFFFFFFFFFFF8LL);
      v36 = v12 & (((unsigned int)*v35 >> 9) ^ ((unsigned int)*v35 >> 4));
      v37 = *(_QWORD *)(v10 + 8LL * v36);
      if ( v37 == *v35 )
        goto LABEL_29;
      if ( v37 != -4096 )
        break;
    }
LABEL_15:
    v8 += 4;
    if ( v11 == v8 )
    {
      v7 = (a2 - (char *)v8) >> 3;
      goto LABEL_17;
    }
  }
  for ( m = 1; ; m = v42 )
  {
    v42 = m + 1;
    v36 = v12 & (m + v36);
    v43 = *(_QWORD *)(v10 + 8LL * v36);
    if ( *v35 == v43 )
      break;
    if ( v43 == -4096 )
      goto LABEL_15;
  }
LABEL_29:
  v8 += 3;
  operator delete(v35, 0x38u);
LABEL_6:
  if ( a2 != (char *)v8 )
  {
    v17 = v8 + 1;
    if ( a2 != (char *)(v8 + 1) )
    {
      v18 = v8;
      v19 = (unsigned __int64)&v8[((unsigned __int64)(a2 - 16 - (char *)v8) >> 3) + 2];
      while ( 1 )
      {
        while ( 1 )
        {
          v23 = *v17;
          v24 = *(_DWORD *)(a3 + 16);
          v25 = *(_QWORD *)a3;
          v26 = (__int64 *)(*v17 & 0xFFFFFFFFFFFFFFF8LL);
          v27 = *v26;
          if ( v24 )
            break;
LABEL_12:
          ++v17;
          *v18++ = v23;
          if ( v17 == (__int64 *)v19 )
            return v18;
        }
        v20 = v24 - 1;
        v21 = (v24 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
        v22 = *(_QWORD *)(v25 + 8LL * v21);
        if ( v27 != v22 )
        {
          if ( v22 == -4096 )
            goto LABEL_12;
          for ( n = 1; ; n = v39 )
          {
            v39 = n + 1;
            v21 = v20 & (n + v21);
            v40 = *(_QWORD *)(v25 + 8LL * v21);
            if ( v27 == v40 )
              break;
            if ( v40 == -4096 )
              goto LABEL_12;
          }
        }
        ++v17;
        operator delete(v26, 0x38u);
        if ( v17 == (__int64 *)v19 )
          return v18;
      }
    }
    return v8;
  }
  return (__int64 *)a2;
}
