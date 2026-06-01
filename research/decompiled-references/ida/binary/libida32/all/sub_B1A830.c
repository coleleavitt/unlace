const char **__fastcall sub_B1A830(__int64 a1, const void *a2, size_t a3)
{
  int v3; // eax
  const char ***v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  const char **v8; // rbp
  const char *v9; // r12
  __int64 v10; // r12
  const char *v11; // rdi

  v3 = *(_DWORD *)(a1 + 24);
  if ( !v3 )
    return nullptr;
  v5 = *(const char ****)(a1 + 16);
  v6 = (unsigned int)(v3 - 1);
  if ( a3 )
  {
    v7 = (__int64)&v5[v6 + 1];
    while ( 1 )
    {
      v8 = *v5;
      v9 = **v5;
      if ( v9 )
      {
        if ( a3 == strlen(**v5) && !memcmp(v9, a2, a3) )
          break;
      }
      if ( ++v5 == (const char ***)v7 )
        return nullptr;
    }
  }
  else
  {
    v10 = (__int64)&v5[v6 + 1];
    while ( 1 )
    {
      v8 = *v5;
      v11 = **v5;
      if ( !v11 || !strlen(v11) )
        break;
      if ( ++v5 == (const char ***)v10 )
        return nullptr;
    }
  }
  return v8;
}

