char *__fastcall sub_A692A0(char *a1, __int64 a2, char *a3, __int64 a4, __int64 a5, __int64 *a6, __int64 a7)
{
  char *v7; // r10
  char *result; // rax
  __int64 *v9; // rcx
  _QWORD *v10; // rdx
  char *v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r8
  char *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 *v23; // rcx
  char *v24; // rdx
  __int64 v25; // r11
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  char *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax

  v7 = a3;
  result = a1;
  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return result;
    v9 = a6;
    v10 = (_QWORD *)a2;
    v11 = &v7[-a2];
    v12 = (__int64)&v7[-a2] >> 4;
    if ( (__int64)&v7[-a2] <= 0 )
    {
      v17 = 0;
      v15 = 0;
      v16 = (a2 - (__int64)result) >> 4;
      if ( a2 - (__int64)result <= 0 )
        return result;
    }
    else
    {
      do
      {
        v13 = *v10;
        v9 += 2;
        v10 += 2;
        *(v9 - 2) = v13;
        *((_DWORD *)v9 - 2) = *((_DWORD *)v10 - 2);
        --v12;
      }
      while ( v12 );
      v14 = v11 - 16;
      if ( !v11 )
        v14 = nullptr;
      v15 = (__int64)(v14 + 16);
      v16 = (a2 - (__int64)result) >> 4;
      v17 = v15 >> 4;
      if ( a2 - (__int64)result <= 0 )
        goto LABEL_10;
    }
    do
    {
      v18 = *(_QWORD *)(a2 - 16);
      a2 -= 16;
      v7 -= 16;
      *(_QWORD *)v7 = v18;
      *((_DWORD *)v7 + 2) = *(_DWORD *)(a2 + 8);
      --v16;
    }
    while ( v16 );
LABEL_10:
    v19 = v17;
    v20 = result;
    if ( v15 > 0 )
    {
      do
      {
        v21 = *a6;
        v20 += 16;
        a6 += 2;
        *((_QWORD *)v20 - 2) = v21;
        *((_DWORD *)v20 - 2) = *((_DWORD *)a6 - 2);
        --v19;
      }
      while ( v19 );
      v22 = 16 * (v17 - 1);
      if ( v17 <= 0 )
        v22 = 0;
      result += v22 + 16;
    }
    return result;
  }
  if ( a4 > a7 )
    return sub_98AEC0(a1, (char *)a2, a3);
  if ( !a4 )
    return v7;
  v23 = a6;
  v24 = a1;
  v25 = a2 - (_QWORD)a1;
  v26 = (a2 - (__int64)a1) >> 4;
  if ( a2 - (__int64)result <= 0 )
  {
    v29 = 0;
    v31 = 0;
    v30 = (__int64)&v7[-a2] >> 4;
    if ( (__int64)&v7[-a2] <= 0 )
      return v7;
    goto LABEL_23;
  }
  do
  {
    v27 = *(_QWORD *)v24;
    v23 += 2;
    v24 += 16;
    *(v23 - 2) = v27;
    *((_DWORD *)v23 - 2) = *((_DWORD *)v24 - 2);
    --v26;
  }
  while ( v26 );
  v28 = v25 - 16;
  if ( !v25 )
    v28 = 0;
  v29 = v28 + 16;
  a6 = (__int64 *)((char *)a6 + v28 + 16);
  v30 = (__int64)&v7[-a2] >> 4;
  v31 = v29 >> 4;
  if ( (__int64)&v7[-a2] > 0 )
  {
    do
    {
LABEL_23:
      v32 = *(_QWORD *)a2;
      result += 16;
      a2 += 16;
      *((_QWORD *)result - 2) = v32;
      *((_DWORD *)result - 2) = *(_DWORD *)(a2 - 8);
      --v30;
    }
    while ( v30 );
  }
  v33 = v31;
  v34 = v7;
  if ( v29 <= 0 )
    return v7;
  do
  {
    v35 = *(a6 - 2);
    a6 -= 2;
    v34 -= 16;
    *(_QWORD *)v34 = v35;
    *((_DWORD *)v34 + 2) = *((_DWORD *)a6 + 2);
    --v33;
  }
  while ( v33 );
  v36 = 16 * (1 - v31);
  if ( v31 <= 0 )
    v36 = 0;
  return &v7[v36 - 16];
}

