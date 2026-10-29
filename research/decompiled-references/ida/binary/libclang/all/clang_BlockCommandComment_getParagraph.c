__int64 __fastcall clang_BlockCommandComment_getParagraph(__int64 a1)
{
  if ( a1 && (unsigned int)*(unsigned __int8 *)(a1 + 12) - 8 <= 4 )
    return *(_QWORD *)(a1 + 32);
  else
    return 0;
}

