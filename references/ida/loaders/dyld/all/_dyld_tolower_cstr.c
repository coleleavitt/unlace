size_t __fastcall dyld_tolower_cstr(const char *a1, _BYTE *a2, unsigned __int64 a3)
{
  const char *v5; // x20
  size_t result; // x0
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x10
  _BYTE *v9; // x9
  int v10; // w12

  v5 = a1;
  result = _platform_strlen(a1);
  if ( result + 1 < a3 )
    v7 = result + 1;
  else
    v7 = a3;
  v8 = v7 - 1;
  v9 = &a2[v7 - 1];
  if ( !v7 )
    v9 = nullptr;
  if ( v7 >= 2 )
  {
    do
    {
      v10 = *(unsigned __int8 *)v5;
      if ( (unsigned int)(v10 - 65) <= 0x19 )
        LOBYTE(v10) = aAbcdefghijklmn[v10 - 65];
      *a2++ = v10;
      ++v5;
      --v8;
    }
    while ( v8 );
  }
  if ( v7 )
    *v9 = 0;
  return result;
}
