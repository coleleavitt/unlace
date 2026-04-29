_WORD *__fastcall sub_57E70(__int64 *a1)
{
  _WORD *v1; // rsi
  _WORD *result; // rax
  __int64 v3; // rax

  v1 = (_WORD *)*a1;
  if ( (unsigned __int64)a1[2] <= 2 )
  {
    v3 = qvector_reserve((__int64)a1, (__int64)v1, 3, 1);
    *a1 = v3;
    v1 = (_WORD *)v3;
  }
  a1[1] = 3;
  *v1 = 29477;
  result = (_WORD *)*a1;
  *(_BYTE *)(*a1 + 2) = 0;
  return result;
}
