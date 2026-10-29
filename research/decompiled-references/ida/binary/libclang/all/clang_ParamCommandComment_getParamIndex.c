__int64 __fastcall clang_ParamCommandComment_getParamIndex(__int64 a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 && *(_BYTE *)(a1 + 12) == 12 )
  {
    result = *(unsigned int *)(a1 + 40);
    if ( (unsigned int)result > 0xFFFFFFFD )
      return 0xFFFFFFFFLL;
  }
  return result;
}

