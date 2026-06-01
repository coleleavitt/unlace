__int64 __fastcall clang_getCompletionChunkCompletionString(unsigned __int16 *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rsi

  if ( !a1 || a2 >= *a1 )
    return 0;
  result = 0;
  v3 = 8LL * a2;
  if ( *(_DWORD *)&a1[v3 + 16] == 2 )
    return *(_QWORD *)&a1[v3 + 20];
  return result;
}

