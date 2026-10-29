_BOOL8 __fastcall ZSTD_isSkippableFrame(_DWORD *a1, unsigned __int64 a2)
{
  _BOOL8 result; // rax

  result = 0;
  if ( a2 > 3 )
    return (*a1 & 0xFFFFFFF0) == 407710288;
  return result;
}

