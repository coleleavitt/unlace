__int64 __fastcall clang_HTMLStartTag_getNumAttrs(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 4 )
      return *(unsigned int *)(a1 + 48);
  }
  return result;
}

