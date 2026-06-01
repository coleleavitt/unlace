unsigned __int64 __fastcall sub_4680A0(unsigned __int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rsi

  result = a1;
  if ( a3 < *(_QWORD *)(result + 48) )
  {
    result = *(_QWORD *)(result + 40);
    v5 = *(_QWORD *)(result + 8 * a3);
    if ( v5 )
      return sub_467B00(a2, v5, 0);
  }
  return result;
}
