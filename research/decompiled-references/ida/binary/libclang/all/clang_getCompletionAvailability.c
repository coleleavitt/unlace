__int64 __fastcall clang_getCompletionAvailability(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
    return *(_BYTE *)(a1 + 6) & 3;
  return result;
}

