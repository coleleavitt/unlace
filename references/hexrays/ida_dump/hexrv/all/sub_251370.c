unsigned __int64 __fastcall sub_251370(__int64 a1)
{
  __int64 (__fastcall **v2)(); // [rsp+0h] [rbp-68h] BYREF
  int v3; // [rsp+8h] [rbp-60h]
  __int64 v4; // [rsp+10h] [rbp-58h]
  __int128 v5; // [rsp+18h] [rbp-50h]
  __int64 v6; // [rsp+28h] [rbp-40h]
  __int128 v7; // [rsp+30h] [rbp-38h]
  unsigned __int64 v8; // [rsp+48h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = 4;
  v4 = 0;
  v6 = 0;
  v2 = (__int64 (__fastcall **)())&off_4B2558;
  v5 = 0;
  v7 = 0;
  sub_250E80((__int64 *)&v2, a1 + 16, 0);
  v2 = off_4AE778;
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
  return v8 - __readfsqword(0x28u);
}
