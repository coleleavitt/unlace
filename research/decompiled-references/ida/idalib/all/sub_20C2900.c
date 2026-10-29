char __fastcall sub_20C2900(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rbx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  result = byte_2CFE498;
  if ( !byte_2CFE498 )
  {
    v3 = qword_2CFE620;
    v4[0] = a1;
    v4[1] = a2;
    return sub_20C26E0(qword_2CFE618, qword_2CFE620, (__int64)v4) != v3;
  }
  return result;
}
