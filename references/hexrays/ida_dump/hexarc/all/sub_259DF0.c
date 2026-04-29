unsigned __int64 __fastcall sub_259DF0(__int64 a1)
{
  __int64 (__fastcall **v2)(); // [rsp+0h] [rbp-68h] BYREF
  int v3; // [rsp+8h] [rbp-60h]
  __int64 v4; // [rsp+10h] [rbp-58h]
  __int128 v5; // [rsp+18h] [rbp-50h]
  __int64 v6; // [rsp+28h] [rbp-40h]
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v8 = a1;
  *(_QWORD *)(a1 + 168) = 0;
  v3 = 0;
  v4 = 0;
  v6 = 0;
  v2 = (__int64 (__fastcall **)())&off_4AC718;
  v5 = 0;
  v7 = 0;
  sub_24E700((__int64 *)&v2, a1 + 16, 0);
  v2 = off_4A8538;
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4);
  }
  return v9 - __readfsqword(0x28u);
}
