__int64 __fastcall sub_217160(char *a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r11
  char *v4; // rbp
  int v5; // ebx
  char *v6; // r12
  __int64 result; // rax
  char *v8; // r13
  int v9; // eax
  int v10; // r8d
  __int64 *v11; // rcx
  __int64 v12; // xmm0_8
  __int64 *v13; // rdx
  __int64 *v14; // rdx
  __int64 v15; // xmm0_8
  __int64 *v16; // rax
  int v17; // eax
  char *v18; // rax
  char *i; // rdx
  int v20; // r9d
  int v21; // r10d
  char *j; // rcx
  __int64 *v23; // r10
  __int64 v24; // xmm0_8
  __int64 *v25; // r9
  unsigned __int64 v26; // rdx
  int v27; // eax
  char *v28; // rcx
  int v29; // edx
  int v30; // r8d
  __int64 v31; // xmm1_8
  __int64 v32; // rdx
  __int64 v33; // xmm1_8
  __int64 *v34; // rcx
  __int64 v35; // xmm0_8
  _QWORD v36[32]; // [rsp+0h] [rbp-228h]
  _QWORD v37[37]; // [rsp+100h] [rbp-128h]

  v3 = (unsigned __int64)&a1[4 * a3 - 4];
  v4 = a1;
  v5 = 0;
  v6 = (char *)v3;
  v36[0] = a1;
  v37[0] = v3;
  while ( 1 )
  {
    result = v6 - v4;
    if ( v6 - v4 <= 40 )
      break;
    v8 = &v4[4 * (result >> 3)];
    v9 = *(_DWORD *)v4;
    v10 = *(_DWORD *)v8;
    if ( *(_DWORD *)v4 > *(_DWORD *)v8 )
    {
      *(_DWORD *)v4 = v10;
      *(_DWORD *)v8 = v9;
      v10 = v9;
      v11 = (__int64 *)(a2 + 8 * ((v4 - a1) >> 2));
      v12 = *v11;
      v13 = (__int64 *)(a2 + 8 * ((v8 - a1) >> 2));
      *v11 = *v13;
      *v13 = v12;
    }
    if ( *(_DWORD *)v6 < v10 )
    {
      *(_DWORD *)v8 = *(_DWORD *)v6;
      *(_DWORD *)v6 = v10;
      v10 = *(_DWORD *)v8;
      v14 = (__int64 *)(a2 + 8 * ((v8 - a1) >> 2));
      v15 = *v14;
      v16 = (__int64 *)(a2 + 8 * ((v6 - a1) >> 2));
      *v14 = *v16;
      *v16 = v15;
      v17 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 > v10 )
      {
        v33 = *v14;
        *(_DWORD *)v4 = v10;
        *(_DWORD *)v8 = v17;
        v10 = v17;
        v34 = (__int64 *)(a2 + 8 * ((v4 - a1) >> 2));
        v35 = *v34;
        *v34 = v33;
        *v14 = v35;
      }
    }
    v18 = v4;
    for ( i = v6; ; i = j )
    {
      do
      {
        v18 += 4;
        v20 = *(_DWORD *)v18;
      }
      while ( *(_DWORD *)v18 < v10 );
      v21 = *((_DWORD *)i - 1);
      for ( j = i - 4; v21 > v10; j -= 4 )
      {
        i = j;
        v21 = *((_DWORD *)j - 1);
      }
      *(_DWORD *)v18 = v21;
      *(_DWORD *)j = v20;
      v23 = (__int64 *)(a2 + 8 * ((v18 - a1) >> 2));
      v24 = *v23;
      v25 = (__int64 *)(a2 + 8 * ((j - a1) >> 2));
      *v23 = *v25;
      *v25 = v24;
      if ( j - v18 <= 4 )
        break;
    }
    v26 = (unsigned __int64)(i - 8);
    v27 = v5 + 1;
    if ( (unsigned __int64)v8 <= v26 )
    {
      v37[v27] = v6;
      v36[v27] = j;
      v37[v5] = v26;
    }
    else
    {
      v36[v27] = v4;
      v37[v27] = v26;
      v36[v5] = j;
    }
    ++v5;
LABEL_3:
    v6 = (char *)v37[v5];
    v4 = (char *)v36[v5];
  }
  if ( --v5 != -1 )
    goto LABEL_3;
  if ( (unsigned __int64)a1 < v3 )
  {
    v28 = a1;
    do
    {
      while ( 1 )
      {
        v29 = *(_DWORD *)v28;
        v30 = *((_DWORD *)v28 + 1);
        if ( v30 < *(_DWORD *)v28 )
          break;
        v28 += 4;
        if ( v3 <= (unsigned __int64)v28 )
          return result;
      }
      v31 = *(_QWORD *)(a2 + 8 * ((v28 - a1) >> 2) + 8);
      result = (__int64)v28;
      do
      {
        *(_DWORD *)(result + 4) = v29;
        v32 = result;
        result -= 4;
        *(_QWORD *)(a2 + 8 * ((v32 - (__int64)a1) >> 2) + 8) = *(_QWORD *)(a2 + 8 * ((v32 - (__int64)a1) >> 2));
        if ( (unsigned __int64)a1 > result )
          break;
        v29 = *(_DWORD *)result;
      }
      while ( *(_DWORD *)result > v30 );
      v28 += 4;
      *(_DWORD *)(result + 4) = v30;
      *(_QWORD *)(a2 + 8 * ((result - (__int64)a1) >> 2) + 8) = v31;
    }
    while ( v3 > (unsigned __int64)v28 );
  }
  return result;
}

