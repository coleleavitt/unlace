__int64 __fastcall sub_1393350(__int64 a1, char **a2)
{
  char *v3; // rax
  char *v5; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r12d
  char *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  char *v14; // rsi
  __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi

  if ( (char **)a1 == a2 )
    return a1;
  v3 = *a2;
  if ( a2 + 2 != (char **)*a2 )
  {
    v5 = *(char **)a1;
    if ( v5 != (char *)(a1 + 16) )
    {
      free(v5);
      v3 = *a2;
    }
    *(_QWORD *)a1 = v3;
    *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
    *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
    *a2 = (char *)(a2 + 2);
    a2[1] = nullptr;
    return a1;
  }
  v7 = *((unsigned int *)a2 + 2);
  v8 = *(unsigned int *)(a1 + 8);
  v9 = *((_DWORD *)a2 + 2);
  if ( v7 <= v8 )
  {
    if ( *((_DWORD *)a2 + 2) )
    {
      v16 = *(char **)a1;
      v17 = 3 * v7;
      v18 = 0;
      v19 = 4 * v17;
      do
      {
        *(_QWORD *)&v16[v18] = *(_QWORD *)&v3[v18];
        v16[v18 + 8] = v3[v18 + 8];
        v18 += 12;
      }
      while ( v18 != v19 );
    }
  }
  else
  {
    if ( v7 > *(unsigned int *)(a1 + 12) )
    {
      *(_DWORD *)(a1 + 8) = 0;
      sub_2237220(a1, a1 + 16, v7, 12);
      v3 = *a2;
      v10 = *(char **)a1;
      v13 = 0;
      v7 = *((unsigned int *)a2 + 2);
      v8 = 0;
      v14 = *a2;
    }
    else
    {
      v10 = *(char **)a1;
      if ( v8 )
      {
        v11 = 0;
        v12 = 12 * v8;
        v8 = v12;
        v13 = v12;
        do
        {
          *(_QWORD *)&v10[v11] = *(_QWORD *)&v3[v11];
          v10[v11 + 8] = v3[v11 + 8];
          v11 += 12;
        }
        while ( v12 != v11 );
        v7 = *((unsigned int *)a2 + 2);
        v14 = &v3[v12];
      }
      else
      {
        v14 = *a2;
        v13 = 0;
      }
    }
    v15 = 12 * v7;
    if ( v14 != &v3[v15] )
      memcpy(&v10[v8], v14, v15 - v13);
  }
  *(_DWORD *)(a1 + 8) = v9;
  *((_DWORD *)a2 + 2) = 0;
  return a1;
}
