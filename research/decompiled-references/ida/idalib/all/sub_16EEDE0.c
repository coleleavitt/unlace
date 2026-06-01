__int64 __fastcall sub_16EEDE0(__int64 *a1, unsigned __int64 a2, unsigned int a3, int a4, double a5)
{
  __int64 result; // rax

  result = sub_16EC930((__int64)a1, a2, a3, a5);
  if ( !(_BYTE)result )
    return sub_16D58B0(a1, a2, a3, a4, a5);
  return result;
}
