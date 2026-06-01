void **__fastcall sub_1AC2FD0(void **a1, char **a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  int v5; // r12d
  __int64 v6; // r13
  char *v7; // rdi
  char *v8; // rax
  __int64 v9; // rdx

  if ( a1 != (void **)a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *((unsigned int *)a1 + 2);
    v5 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) )
        memmove(*a1, *a2, 8 * v3);
    }
    else
    {
      if ( v3 > *((unsigned int *)a1 + 3) )
      {
        *((_DWORD *)a1 + 2) = 0;
        v6 = 0;
        sub_2237220(a1, a1 + 2, v3, 8);
        v3 = *((unsigned int *)a2 + 2);
        v7 = (char *)*a1;
        v8 = *a2;
      }
      else
      {
        v6 = 8 * v4;
        v7 = (char *)*a1;
        v8 = *a2;
        if ( v4 )
        {
          memmove(v7, *a2, 8 * v4);
          v3 = *((unsigned int *)a2 + 2);
          v7 = (char *)*a1;
          v8 = *a2;
        }
      }
      v9 = 8 * v3;
      if ( &v8[v6] != &v8[v9] )
        memcpy(&v7[v6], &v8[v6], v9 - v6);
    }
    *((_DWORD *)a1 + 2) = v5;
  }
  return a1;
}
