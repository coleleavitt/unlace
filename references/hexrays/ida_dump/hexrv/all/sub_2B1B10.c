unsigned __int64 __fastcall sub_2B1B10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+10h] [rbp-28h]
  __int64 v7; // [rsp+18h] [rbp-20h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(_QWORD *)(a1 + 96);
    v5[1] = a2;
    v7 = a3;
    v6 = 102;
    v5[0] = &off_4B3AB8;
    sub_2B1600(v3, (__int64)v5, 0);
  }
  return v8 - __readfsqword(0x28u);
}
