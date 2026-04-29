__int64 __fastcall sub_3B6530(double a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 result; // rax

  v4 = (_QWORD *)sub_389B40(*(_QWORD *)(a3 + 32), a3 + 80, a1);
  result = 0;
  if ( v4 )
    return (unsigned __int8)sub_391C30(a3, v4);
  return result;
}
