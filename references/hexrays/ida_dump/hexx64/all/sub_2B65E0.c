__int64 __fastcall sub_2B65E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  _QWORD v5[2]; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+10h] [rbp-28h]
  _QWORD *v7; // [rsp+18h] [rbp-20h]
  __int64 v8; // [rsp+20h] [rbp-18h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  if ( a3 )
    a2 = *a3;
  v3 = *(_QWORD *)(a1 + 96);
  v5[1] = a2;
  v7 = a3;
  v6 = 108;
  v5[0] = &off_4E1028;
  v8 = 0;
  return sub_2B63F0(v3, (__int64)v5, 0);
}
