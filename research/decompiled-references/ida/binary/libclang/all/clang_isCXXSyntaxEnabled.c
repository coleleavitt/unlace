_BOOL8 __fastcall clang_isCXXSyntaxEnabled(__int64 a1)
{
  if ( !a1 )
    BUG();
  return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + 2160LL) + 1LL) & 8) != 0;
}

