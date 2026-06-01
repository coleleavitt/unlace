_BOOL8 sub_E5500()
{
  _BOOL8 result; // rax
  int v1; // ebx
  _QWORD v2[2]; // [rsp+0h] [rbp-58h] BYREF
  int v3; // [rsp+10h] [rbp-48h]
  int v4; // [rsp+18h] [rbp-40h]
  unsigned __int64 v5; // [rsp+38h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( sub_E5310() )
    return 1;
  result = 0;
  if ( !byte_2515A8 )
  {
    v2[0] = 0;
    v2[1] = 1022;
    v4 = qword_251700;
    v3 = dword_251408;
    v1 = sub_C8DE0((unsigned __int64 *)&qword_2512A0, (__int64)v2);
    sub_C8970((__int64)v2);
    return v1 > 0;
  }
  return result;
}

