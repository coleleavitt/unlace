__int64 __fastcall clang_EvalResult_getAsInt(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 8);
  else
    return 0;
}

