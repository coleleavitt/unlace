__int64 __fastcall clang_getChildDiagnostics(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0;
  result = a1 + 8;
  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
    return 0;
  return result;
}

