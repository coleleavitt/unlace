unsigned __int64 __fastcall sub_2B1CF0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  _QWORD v6[2]; // [rsp+0h] [rbp-38h] BYREF
  char v7; // [rsp+10h] [rbp-28h]
  _QWORD *v8; // [rsp+18h] [rbp-20h]
  __int64 v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( a4 )
      a2 = *a4;
    v4 = *(_QWORD *)(a1 + 96);
    v6[1] = a2;
    v9 = a3;
    v7 = 108;
    v6[0] = &off_4C1768;
    v8 = a4;
    sub_2B1980(v4, (__int64)v6, 0);
  }
  return v10 - __readfsqword(0x28u);
}
