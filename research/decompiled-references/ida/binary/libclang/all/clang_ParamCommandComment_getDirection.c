__int64 __fastcall clang_ParamCommandComment_getDirection(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 0;
  if ( a1 && *(_BYTE *)(a1 + 12) == 12 )
  {
    result = 1;
    v2 = (*(_BYTE *)(a1 + 15) >> 5) & 3;
    if ( v2 != 1 )
      return 2 * (unsigned int)(v2 == 2);
  }
  return result;
}

