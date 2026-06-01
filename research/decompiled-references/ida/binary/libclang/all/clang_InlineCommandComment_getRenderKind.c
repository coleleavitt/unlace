__int64 __fastcall clang_InlineCommandComment_getRenderKind(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 12) == 3 )
      return ((__int64 (*)(void))((char *)dword_3C89F7C + dword_3C89F7C[(*(_BYTE *)(a1 + 13) >> 1) & 7]))();
  }
  return result;
}

