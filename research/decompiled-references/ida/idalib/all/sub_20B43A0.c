char *__fastcall sub_20B43A0(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, _DWORD *a6, __int64 a7)
{
  char *v7; // r12
  char *v8; // rbp
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rdx
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  char *result; // rax
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  char *v25; // rax
  int v26; // edi
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // eax

  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( a4 > a5 && a5 <= a7 )
  {
    if ( !a5 )
      return v9;
    v10 = a3 - a2;
    v11 = a2 - a1;
    v12 = (a3 - a2) >> 4;
    v13 = (v8 - a1) >> 4;
    if ( v10 <= 0 )
    {
      if ( v11 <= 0 )
        return v9;
      v18 = 0;
      v17 = 0;
    }
    else
    {
      v14 = a6;
      v15 = v8;
      do
      {
        v16 = *v15;
        v14 += 4;
        v15 += 4;
        *(v14 - 4) = v16;
        *((_QWORD *)v14 - 1) = *((_QWORD *)v15 - 1);
        --v12;
      }
      while ( v12 );
      v17 = (char *)v14 - (char *)a6;
      v18 = v17 >> 4;
      if ( v11 <= 0 )
      {
LABEL_9:
        if ( v17 > 0 )
        {
          result = v9;
          do
          {
            v20 = *a6;
            result += 16;
            a6 += 4;
            *((_DWORD *)result - 4) = v20;
            *((_QWORD *)result - 1) = *((_QWORD *)a6 - 1);
            --v18;
          }
          while ( v18 );
          return result;
        }
        return v9;
      }
    }
    do
    {
      v8 -= 16;
      v7 -= 16;
      *(_DWORD *)v7 = *(_DWORD *)v8;
      *((_QWORD *)v7 + 1) = *((_QWORD *)v8 + 1);
      --v13;
    }
    while ( v13 );
    goto LABEL_9;
  }
  if ( a4 > a7 )
  {
    sub_209ED00(a1, a2, a3);
    return &a1[v7 - a2];
  }
  if ( !a4 )
    return v7;
  v21 = a3 - a2;
  v22 = (a2 - a1) >> 4;
  v23 = (a3 - v8) >> 4;
  if ( v8 - a1 <= 0 )
  {
    if ( v21 <= 0 )
      return v7;
    v24 = a6;
    v28 = 0;
    v27 = 0;
    goto LABEL_19;
  }
  v24 = a6;
  v25 = a1;
  do
  {
    v26 = *(_DWORD *)v25;
    v24 += 4;
    v25 += 16;
    *(v24 - 4) = v26;
    *((_QWORD *)v24 - 1) = *((_QWORD *)v25 - 1);
    --v22;
  }
  while ( v22 );
  v27 = (char *)v24 - (char *)a6;
  v28 = ((char *)v24 - (char *)a6) >> 4;
  if ( v21 > 0 )
  {
    do
    {
LABEL_19:
      v29 = *(_DWORD *)v8;
      v9 += 16;
      v8 += 16;
      *((_DWORD *)v9 - 4) = v29;
      *((_QWORD *)v9 - 1) = *((_QWORD *)v8 - 1);
      --v23;
    }
    while ( v23 );
  }
  if ( v27 <= 0 )
    return v7;
  result = v7;
  do
  {
    v24 -= 4;
    result -= 16;
    *(_DWORD *)result = *v24;
    *((_QWORD *)result + 1) = *((_QWORD *)v24 + 1);
    --v28;
  }
  while ( v28 );
  return result;
}
