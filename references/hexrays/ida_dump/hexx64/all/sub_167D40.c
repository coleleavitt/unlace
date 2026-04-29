__int64 __fastcall sub_167D40(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rax

  result = a1[1];
  v4 = *a1;
  if ( a1[2] < (unsigned __int64)(result + 1) )
  {
    v5 = qvector_reserve(a1, v4, result + 1, 4);
    *a1 = v5;
    v4 = v5;
    result = a1[1];
  }
  *(_DWORD *)(v4 + 4 * result) = a2;
  ++a1[1];
  return result;
}
