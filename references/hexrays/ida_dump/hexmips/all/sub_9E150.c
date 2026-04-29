char __fastcall sub_9E150(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  char result; // al
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  result = sub_11BB80(a1, v4, a3);
  if ( result )
    return v4[0] == a2;
  return result;
}
