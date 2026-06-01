char **__fastcall sub_19A76D0(char **a1, __int64 a2)
{
  char *v3; // rax
  char **v5; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  int v9; // r12d
  char *v10; // r8
  char *v11; // rdx
  char *v12; // rsi
  unsigned __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // rdx
  char *v16; // rcx
  char *v17; // rsi
  int v18; // edx

  if ( a1 == (char **)a2 )
    return a1;
  v3 = *(char **)a2;
  if ( a2 + 16 != *(_QWORD *)a2 )
  {
    v5 = (char **)*a1;
    if ( v5 != a1 + 2 )
    {
      free(v5);
      v3 = *(char **)a2;
    }
    *a1 = v3;
    *((_DWORD *)a1 + 2) = *(_DWORD *)(a2 + 8);
    *((_DWORD *)a1 + 3) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = a2 + 16;
    *(_QWORD *)(a2 + 8) = 0;
    return a1;
  }
  v7 = *(unsigned int *)(a2 + 8);
  v8 = *((unsigned int *)a1 + 2);
  v9 = *(_DWORD *)(a2 + 8);
  if ( v7 <= v8 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      v16 = *a1;
      v17 = &v3[8 * v7];
      do
      {
        v18 = *(_DWORD *)v3;
        v3 += 8;
        v16 += 8;
        *((_DWORD *)v16 - 2) = v18;
        *(v16 - 4) = *(v3 - 4);
      }
      while ( v3 != v17 );
    }
  }
  else
  {
    if ( v7 > *((unsigned int *)a1 + 3) )
    {
      *((_DWORD *)a1 + 2) = 0;
      sub_2237220(a1, a1 + 2, v7, 8);
      v3 = *(char **)a2;
      v10 = *a1;
      v13 = 0;
      v7 = *(unsigned int *)(a2 + 8);
      v8 = 0;
      v12 = *(char **)a2;
    }
    else
    {
      v10 = *a1;
      if ( v8 )
      {
        v8 *= 8LL;
        v11 = *a1;
        v12 = *(char **)a2;
        v13 = v8;
        do
        {
          v14 = *(_DWORD *)v12;
          v12 += 8;
          v11 += 8;
          *((_DWORD *)v11 - 2) = v14;
          *(v11 - 4) = *(v12 - 4);
        }
        while ( v12 != &v3[v8] );
        v7 = *(unsigned int *)(a2 + 8);
      }
      else
      {
        v12 = *(char **)a2;
        v13 = 0;
      }
    }
    v15 = 8 * v7;
    if ( v12 != &v3[v15] )
      memcpy(&v10[v8], v12, v15 - v13);
  }
  *((_DWORD *)a1 + 2) = v9;
  *(_DWORD *)(a2 + 8) = 0;
  return a1;
}
