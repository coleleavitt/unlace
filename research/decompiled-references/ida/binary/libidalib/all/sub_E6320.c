_BOOL8 sub_E6320()
{
  _BOOL8 result; // rax
  int v1; // ebx
  _QWORD v2[2]; // [rsp+0h] [rbp-58h] BYREF
  int v3; // [rsp+10h] [rbp-48h]
  __int64 v4; // [rsp+18h] [rbp-40h]
  unsigned __int64 v5; // [rsp+38h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( sub_E6130() )
    return 1;
  result = 0;
  if ( !byte_252750 )
  {
    v2[0] = 0;
    v2[1] = 1022;
    v4 = xmmword_2528A0;
    v3 = dword_252588;
    v1 = sub_CA2A0((unsigned __int64 *)&qword_252410, (__int64)v2);
    sub_C9E30((__int64)v2);
    return v1 > 0;
  }
  return result;
}

