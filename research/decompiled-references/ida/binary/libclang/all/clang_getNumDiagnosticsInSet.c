__int64 __fastcall clang_getNumDiagnosticsInSet(__int64 a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 )
    return (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 3;
  return result;
}

