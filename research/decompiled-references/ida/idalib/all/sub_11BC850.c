__int64 __fastcall sub_11BC850(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // r9
  __int64 result; // rax

  v2 = sub_11BC650(a1, 1u);
  result = sub_21B79D0(a1, 1811, v2 == 0 ? 1811 : 10, 1407, v2, v3);
  if ( (_BYTE)result )
    return sub_10DC5D0(a2, (__int64)"-vectorize-slp");
  return result;
}
