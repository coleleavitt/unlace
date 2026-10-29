__int64 __fastcall clang_BlockCommandComment_getNumArgs(__int64 a1)
{
  if ( a1 && (unsigned int)*(unsigned __int8 *)(a1 + 12) - 8 <= 4 )
    return *(unsigned int *)(a1 + 24);
  else
    return 0;
}

