__int64 __fastcall clang_InlineContentComment_hasTrailingNewline(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0;
  result = 0;
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 12) - 2 <= 3 )
    return *(_BYTE *)(a1 + 13) & 1;
  return result;
}

