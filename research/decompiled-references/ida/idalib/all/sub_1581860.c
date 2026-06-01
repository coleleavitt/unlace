void **__fastcall sub_1581860(void **a1, char **a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  int v5; // r12d
  char *v6; // rax
  char *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // rdx

  if ( a1 != (void **)a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *((unsigned int *)a1 + 2);
    v5 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) )
        memmove(*a1, *a2, 16 * v3);
    }
    else
    {
      if ( v3 > *((unsigned int *)a1 + 3) )
      {
        *((_DWORD *)a1 + 2) = 0;
        v8 = 0;
        sub_2237220(a1, a1 + 2, v3, 16);
        v3 = *((unsigned int *)a2 + 2);
        v7 = (char *)*a1;
        v6 = *a2;
      }
      else
      {
        v6 = *a2;
        v7 = (char *)*a1;
        v8 = 16 * v4;
        if ( v4 )
        {
          memmove(v7, *a2, 16 * v4);
          v3 = *((unsigned int *)a2 + 2);
          v7 = (char *)*a1;
          v6 = *a2;
        }
      }
      v9 = 16 * v3;
      if ( &v6[v8] != &v6[v9] )
        memcpy(&v7[v8], &v6[v8], v9 - v8);
    }
    *((_DWORD *)a1 + 2) = v5;
  }
  return a1;
}
