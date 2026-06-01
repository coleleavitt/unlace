char ***__fastcall sub_C9F300(char ***a1, char ***a2)
{
  char **v3; // rax
  char **v4; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // r13d
  char **v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdx

  if ( a1 == a2 )
    return a1;
  v3 = *a2;
  if ( a2 + 2 != (char ***)*a2 )
  {
    v4 = *a1;
    if ( v4 != (char **)(a1 + 2) )
    {
      free(v4);
      v3 = *a2;
    }
    *a1 = v3;
    *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
    *a2 = (char **)(a2 + 2);
    a2[1] = nullptr;
    return a1;
  }
  v6 = *((unsigned int *)a2 + 2);
  v7 = *((unsigned int *)a1 + 2);
  v8 = *((_DWORD *)a2 + 2);
  if ( v6 <= v7 )
  {
    if ( *((_DWORD *)a2 + 2) )
      memmove(*a1, a2 + 2, 16 * v6);
  }
  else
  {
    if ( v6 > *((unsigned int *)a1 + 3) )
    {
      *((_DWORD *)a1 + 2) = 0;
      v10 = 0;
      sub_2237220(a1, a1 + 2, v6, 16);
      v3 = *a2;
      v6 = *((unsigned int *)a2 + 2);
      v9 = *a1;
    }
    else
    {
      v9 = *a1;
      v10 = 2 * v7;
      if ( v7 )
      {
        memmove(v9, v3, 16 * v7);
        v3 = *a2;
        v6 = *((unsigned int *)a2 + 2);
        v9 = *a1;
      }
    }
    v11 = 2 * v6;
    if ( &v3[v10] != &v3[v11] )
      memcpy(&v9[v10], &v3[v10], v11 * 8 - v10 * 8);
  }
  *((_DWORD *)a1 + 2) = v8;
  *((_DWORD *)a2 + 2) = 0;
  return a1;
}
