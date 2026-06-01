__int64 __fastcall sub_105180(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a3 + 8);
  if ( (int)result <= 37 )
  {
    if ( (int)result > 35 )
      return result;
    return sub_19BFB0();
  }
  result = (unsigned int)(result - 41);
  if ( (unsigned int)result > 1 )
    return sub_19BFB0();
  return result;
}

