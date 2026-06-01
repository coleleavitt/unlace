__int64 __fastcall sub_AD6410(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_ACDF50(a1, a2, a3);
  if ( (_BYTE)result )
    return (unsigned int)sub_AD5BA0(a1) ^ 1;
  return result;
}

