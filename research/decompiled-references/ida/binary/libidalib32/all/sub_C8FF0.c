__int64 sub_C8FF0()
{
  int v0; // ebx
  __int64 v2; // [rsp+0h] [rbp-58h] BYREF
  __int64 v3; // [rsp+8h] [rbp-50h]
  int v4; // [rsp+10h] [rbp-48h]
  int v5; // [rsp+18h] [rbp-40h]
  unsigned __int64 v6; // [rsp+38h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( byte_2515A8 )
  {
    return 0;
  }
  else if ( (*(_BYTE *)(dbg + 82LL) & 0x20) == 0
         || (v2 = 0,
             v5 = 6,
             v3 = 1018,
             v4 = dword_251408,
             v0 = sub_C8DE0((unsigned __int64 *)&qword_2512A0, (__int64)&v2),
             sub_C8970((__int64)&v2),
             v0 <= 0) )
  {
    v2 = 0;
    v3 = 1024;
    v4 = dword_251408;
    v0 = sub_C8DE0((unsigned __int64 *)&qword_2512A0, (__int64)&v2);
    sub_C8970((__int64)&v2);
  }
  return (unsigned int)v0;
}

