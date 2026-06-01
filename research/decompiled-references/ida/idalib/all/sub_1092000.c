size_t __fastcall sub_1092000(__int64 a1, __int64 a2)
{
  int i; // r13d
  char **v3; // rbx
  size_t result; // rax
  char *v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  const char *v8; // r14
  int v9; // ebp
  const char **v10; // rbx
  size_t v11; // [rsp+8h] [rbp-40h]

  for ( i = 2; i != 82; ++i )
  {
    while ( 1 )
    {
      v5 = sub_FF7B80(i);
      v6 = *(unsigned int *)(a2 + 8);
      v7 = *(unsigned int *)(a2 + 12);
      v8 = v5;
      v9 = *(_DWORD *)(a2 + 8);
      if ( v6 < v7 )
        break;
      result = 0;
      if ( v8 )
        result = strlen(v8);
      if ( v7 < v6 + 1 )
      {
        v11 = result;
        sub_2237220(a2, a2 + 16, v6 + 1, 16);
        v6 = *(unsigned int *)(a2 + 8);
        result = v11;
      }
      ++i;
      v10 = (const char **)(*(_QWORD *)a2 + 16 * v6);
      *v10 = v8;
      v10[1] = (const char *)result;
      ++*(_DWORD *)(a2 + 8);
      if ( i == 82 )
        return result;
    }
    v3 = (char **)(*(_QWORD *)a2 + 16 * v6);
    *v3 = v5;
    result = 0;
    if ( v8 )
      result = strlen(v8);
    v3[1] = (char *)result;
    *(_DWORD *)(a2 + 8) = v9 + 1;
  }
  return result;
}
