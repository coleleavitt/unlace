__int64 __fastcall sub_16EF6C0(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned int a4, double a5)
{
  __int64 result; // rax

  result = sub_16EC5F0(a1, a2, a3, a5);
  if ( !(_BYTE)result )
    return sub_16EF380(a1, a2, a4, a5);
  return result;
}
