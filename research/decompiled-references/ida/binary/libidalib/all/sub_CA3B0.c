__int64 sub_CA3B0()
{
  _QWORD v1[2]; // [rsp+0h] [rbp-58h] BYREF
  int v2; // [rsp+10h] [rbp-48h]
  unsigned __int64 v3; // [rsp+38h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  v1[0] = 0;
  v1[1] = 1208;
  v2 = dword_252588;
  sub_CA2A0((unsigned __int64 *)&qword_252410, (__int64)v1);
  sub_C9E30((__int64)v1);
  return 1;
}

