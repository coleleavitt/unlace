__int64 __fastcall sub_AFA170(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_AEDD20(a1, a2, a3);
  if ( (_BYTE)result )
    return (unsigned int)sub_AF98E0(a1) ^ 1;
  return result;
}
