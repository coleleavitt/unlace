__int64 __fastcall sub_91680(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v4; // r12
  const char *v5; // rax
  const char *v6; // rbx
  const char *v7; // rdi
  unsigned int v8; // ebp

  if ( a3 == (__int16)0x8000 )
    return (unsigned int)-1;
  v4 = a3;
  v5 = sub_8E470(a2 + 8);
  v6 = v5;
  if ( !v5 )
  {
    return (unsigned int)-1;
  }
  else
  {
    v7 = s1;
    if ( *(_QWORD *)(a2 + 16) )
      v7 = *(const char **)(a2 + 8);
    v8 = 0;
    if ( v7 < v5 )
    {
      do
      {
        if ( !*v7 )
          break;
        ++v8;
        v7 = (const char *)tag_advance();
      }
      while ( v7 < v6 );
    }
    if ( a3 > 0 )
    {
      while ( *v6 )
      {
        ++v8;
        v6 = (const char *)tag_advance();
        if ( !--v4 )
          return v8;
      }
      v8 += v4;
    }
  }
  return v8;
}

