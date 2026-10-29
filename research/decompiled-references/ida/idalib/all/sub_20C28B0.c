char __fastcall sub_20C28B0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rbx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  result = byte_2CFE558;
  if ( !byte_2CFE558 )
  {
    v3 = qword_2CFE720;
    v4[0] = a1;
    v4[1] = a2;
    return sub_20C26E0(qword_2CFE718, qword_2CFE720, (__int64)v4) != v3;
  }
  return result;
}
