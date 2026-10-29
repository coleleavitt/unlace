char *__fastcall irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_7(__int64 a1, const char *a2)
{
  int v3; // ebp
  void *v4; // rdi
  int v5; // eax
  char **v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  char i; // al
  char v11; // dl

  if ( a2 )
  {
    if ( *a2 )
    {
      v3 = strlen(a2 + 1) + 2;
      v4 = (void *)operator new[](v3);
      if ( v3 <= 0 )
        goto LABEL_5;
    }
    else
    {
      v3 = 1;
      v4 = (void *)operator new[](1u);
    }
    v4 = memcpy(v4, a2, (unsigned int)v3);
LABEL_5:
    v5 = *(_DWORD *)(a1 + 124);
    if ( v5 <= 0 )
    {
LABEL_14:
      if ( v4 )
        operator delete[](v4);
    }
    else
    {
      v6 = *(char ***)(a1 + 112);
      v7 = (__int64)&v6[4 * (unsigned int)(v5 - 1) + 4];
      while ( 1 )
      {
        v8 = 0;
        v9 = 0;
        for ( i = **v6; i; i = (*v6)[v9] )
        {
          v11 = *((_BYTE *)v4 + v8);
          if ( !v11 )
            break;
          if ( v11 != i )
            goto LABEL_13;
          v8 = ++v9;
        }
        if ( *((_DWORD *)v6 + 3) == v3 )
          break;
LABEL_13:
        v6 += 4;
        if ( (char **)v7 == v6 )
          goto LABEL_14;
      }
      if ( v4 )
        operator delete[](v4);
      if ( v6 )
        return v6[2];
    }
    return nullptr;
  }
  return nullptr;
}
