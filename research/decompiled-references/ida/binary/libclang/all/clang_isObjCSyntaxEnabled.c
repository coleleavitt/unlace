_BOOL8 __fastcall clang_isObjCSyntaxEnabled(__int64 a1)
{
  if ( !a1 )
    BUG();
  return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + 2160LL) + 2LL) & 4) != 0;
}

