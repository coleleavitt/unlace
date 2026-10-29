char ***__fastcall sub_A624D0(char ***a1, char ***a2)
{
  char **v3; // rax
  char **v5; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  int v9; // r12d
  char **v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r9
  char *v13; // rsi
  __int64 v14; // rdx
  char **v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx

  if ( a1 == a2 )
    return a1;
  v3 = *a2;
  if ( a2 + 2 != (char ***)*a2 )
  {
    v5 = *a1;
    if ( v5 != (char **)(a1 + 2) )
    {
      free(v5);
      v3 = *a2;
    }
    *a1 = v3;
    *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
    *a2 = (char **)(a2 + 2);
    a2[1] = nullptr;
    return a1;
  }
  v7 = *((unsigned int *)a2 + 2);
  v8 = *((unsigned int *)a1 + 2);
  v9 = *((_DWORD *)a2 + 2);
  if ( v7 <= v8 )
  {
    if ( *((_DWORD *)a2 + 2) )
    {
      v15 = *a1;
      v16 = 8 * v7;
      v17 = 0;
      do
      {
        v15[v17 / 8] = v3[v17 / 8];
        v17 += 8LL;
      }
      while ( v17 != v16 );
    }
  }
  else
  {
    if ( v7 > *((unsigned int *)a1 + 3) )
    {
      *((_DWORD *)a1 + 2) = 0;
      sub_22134E0(a1, a1 + 2, v7, 8);
      v3 = *a2;
      v7 = *((unsigned int *)a2 + 2);
      v12 = 0;
      v10 = *a1;
      v8 = 0;
      v13 = (char *)*a2;
    }
    else
    {
      v10 = *a1;
      if ( v8 )
      {
        v8 *= 8LL;
        v11 = 0;
        v12 = v8;
        do
        {
          v10[v11 / 8] = v3[v11 / 8];
          v11 += 8LL;
        }
        while ( v8 != v11 );
        v3 = *a2;
        v10 = *a1;
        v13 = (char *)*a2 + v8;
      }
      else
      {
        v13 = (char *)*a2;
        v12 = 0;
      }
    }
    v14 = v7;
    if ( v13 != (char *)&v3[v14] )
      memcpy((char *)v10 + v8, v13, v14 * 8 - v12);
  }
  *((_DWORD *)a1 + 2) = v9;
  *((_DWORD *)a2 + 2) = 0;
  return a1;
}

