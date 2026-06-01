__int64 __fastcall clang_EvalResult_getAsLongLong(__int64 a1)
{
  if ( a1 )
    return *(_QWORD *)(a1 + 8);
  else
    return 0;
}

