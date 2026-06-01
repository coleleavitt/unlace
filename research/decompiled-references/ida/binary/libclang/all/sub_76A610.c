char **__fastcall sub_76A610(__int64 a1, char *a2, size_t a3)
{
  char **result; // rax
  __int64 v5; // rax
  const char ***v6; // rbp
  const char ***v7; // r12
  const char **v8; // rbx
  const char *v9; // rdi
  const char ***v10; // r15
  const char *v11; // r14

  result = sub_767D90(a2, a3);
  if ( !result )
  {
    v5 = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)v5 )
      return nullptr;
    v6 = *(const char ****)(a1 + 16);
    if ( a3 )
    {
      v10 = &v6[v5];
      while ( 1 )
      {
        v8 = *v6;
        v11 = **v6;
        if ( v11 )
        {
          if ( a3 == strlen(**v6) && !memcmp(v11, a2, a3) )
            break;
        }
        if ( ++v6 == v10 )
          return nullptr;
      }
    }
    else
    {
      v7 = &v6[v5];
      while ( 1 )
      {
        v8 = *v6;
        v9 = **v6;
        if ( !v9 || !strlen(v9) )
          break;
        if ( ++v6 == v7 )
          return nullptr;
      }
    }
    return (char **)v8;
  }
  return result;
}

