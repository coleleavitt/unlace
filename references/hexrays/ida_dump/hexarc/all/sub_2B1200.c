__int64 __fastcall sub_2B1200(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  char v5; // [rsp+10h] [rbp-28h]
  __int64 v6; // [rsp+18h] [rbp-20h]
  __int64 v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 40);
  v7 = a2;
  v5 = 73;
  v6 = 0;
  v4[1] = v2;
  v4[0] = &off_4AD968;
  return sub_2AF070(a1, (__int64)v4, 0);
}
