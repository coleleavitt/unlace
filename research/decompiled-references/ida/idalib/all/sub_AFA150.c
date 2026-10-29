__int64 __fastcall sub_AFA150(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_AF1C90(a1, a2, a3);
  if ( (_BYTE)result )
    return (unsigned int)sub_AF98E0(a1) ^ 1;
  return result;
}
