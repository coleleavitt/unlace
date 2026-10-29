__int64 __fastcall clang_CompileCommand_getNumArgs(__int64 a1)
{
  if ( a1 )
    return (__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64)) >> 5;
  else
    return 0;
}

