__int64 *__fastcall sub_28EA90(__int64 *a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 *result; // rax

  result = a2;
  if ( (unsigned __int64)a1[1] <= 1 )
  {
    if ( a3 )
      return (__int64 *)build_stkvar_name(a1, a3, a2);
    else
      return sub_169A50(a1, (__int64)"field_%a", a4);
  }
  return result;
}
