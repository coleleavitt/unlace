double __fastcall clang_EvalResult_getAsDouble(__int64 a1)
{
  if ( a1 )
    return *(double *)(a1 + 8);
  else
    return 0.0;
}

