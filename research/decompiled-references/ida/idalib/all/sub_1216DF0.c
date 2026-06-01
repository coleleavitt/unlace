size_t __fastcall sub_1216DF0(__int64 a1, const char **a2, const char **a3)
{
  __int64 v4; // r14
  const char **v6; // rbp
  __int64 v7; // rbx
  size_t result; // rax
  int v9; // r15d
  const char **v10; // rbx
  unsigned __int64 v11; // r12
  const char *v12; // rdi

  v4 = a3 - a2;
  v6 = a2;
  v7 = *(unsigned int *)(a1 + 8);
  result = *(unsigned int *)(a1 + 12);
  v9 = v4 + v7;
  if ( v4 + v7 > result )
  {
    result = sub_2237220(a1, a1 + 16, v4 + v7, 16);
    v7 = *(unsigned int *)(a1 + 8);
    v9 = v4 + v7;
  }
  v10 = (const char **)(*(_QWORD *)a1 + 16 * v7);
  if ( a2 != a3 )
  {
    v11 = (unsigned __int64)&a2[((unsigned __int64)((char *)(a3 - 1) - (char *)a2) >> 3) + 1];
    do
    {
      while ( 1 )
      {
        v12 = *v6;
        *v10 = *v6;
        if ( !v12 )
          break;
        result = strlen(v12);
        ++v6;
        v10 += 2;
        *(v10 - 1) = (const char *)result;
        if ( v6 == (const char **)v11 )
          goto LABEL_7;
      }
      ++v6;
      v10[1] = nullptr;
      v10 += 2;
    }
    while ( (const char **)v11 != v6 );
  }
LABEL_7:
  *(_DWORD *)(a1 + 8) = v9;
  return result;
}
