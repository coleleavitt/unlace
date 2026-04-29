unsigned __int64 __fastcall sub_2B5CA0(unsigned __int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  _QWORD *v4; // rsi

  result = a1;
  v4 = *(_QWORD **)(result + 32);
  if ( v4 )
    return sub_2B58C0(a2, v4, nullptr);
  return result;
}
