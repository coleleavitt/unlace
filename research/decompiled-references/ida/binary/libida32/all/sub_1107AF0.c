unsigned __int64 __fastcall sub_1107AF0(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rdx
  size_t v7; // rax
  unsigned int v8; // edx
  size_t v9; // rax

  if ( a3 == j__strlen("single") )
  {
    if ( !a3 || !memcmp(a2, "single", a3) )
    {
      v4 = *(_DWORD *)(a1 + 48);
      LODWORD(v5) = 0;
      if ( v4 <= 0x38 )
        return (0x180001800000006uLL >> v4) & 1;
      return (unsigned int)v5;
    }
    v9 = j__strlen("posix");
    LODWORD(v5) = 0;
    if ( a3 != v9 )
      return (unsigned int)v5;
  }
  else
  {
    v7 = j__strlen("posix");
    LODWORD(v5) = 0;
    if ( a3 != v7 )
      return (unsigned int)v5;
    LODWORD(v5) = 1;
    if ( !a3 )
      return (unsigned int)v5;
  }
  LOBYTE(v8) = memcmp(a2, "posix", a3) == 0;
  return v8;
}

