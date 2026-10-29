__int64 sub_C8EF0()
{
  _QWORD v1[2]; // [rsp+0h] [rbp-58h] BYREF
  int v2; // [rsp+10h] [rbp-48h]
  unsigned __int64 v3; // [rsp+38h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  v1[0] = 0;
  v1[1] = 1208;
  v2 = dword_251408;
  sub_C8DE0((unsigned __int64 *)&qword_2512A0, (__int64)v1);
  sub_C8970((__int64)v1);
  return 1;
}

