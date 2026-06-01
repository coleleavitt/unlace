__int64 __fastcall clang_getCompletionNumFixIts(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( !a1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 1984);
  result = 0;
  if ( a2 < 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(a1 + 1992) - v2) >> 3) )
    return (__int64)(*(_QWORD *)(v2 + 24LL * a2 + 8) - *(_QWORD *)(v2 + 24LL * a2)) >> 6;
  return result;
}

