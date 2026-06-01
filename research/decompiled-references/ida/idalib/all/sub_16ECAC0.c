__int64 __fastcall sub_16ECAC0(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 result; // rax

  result = sub_16EC930((__int64)a1, a2, 1u, a3);
  if ( !(_BYTE)result )
    return sub_16CE840(a1, a2, a3);
  return result;
}
