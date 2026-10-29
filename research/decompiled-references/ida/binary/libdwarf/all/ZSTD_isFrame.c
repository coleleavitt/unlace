_BOOL8 __fastcall ZSTD_isFrame(_DWORD *a1, unsigned __int64 a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a2 > 3 )
  {
    result = 1;
    if ( *a1 != -47205080 )
      return (*a1 & 0xFFFFFFF0) == 407710288;
  }
  return result;
}

