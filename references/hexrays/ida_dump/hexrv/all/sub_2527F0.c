__int64 __fastcall sub_2527F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-68h] BYREF
  int v5; // [rsp+8h] [rbp-60h]
  __int64 v6; // [rsp+10h] [rbp-58h]
  __int128 v7; // [rsp+18h] [rbp-50h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-28h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v10 = a2;
  v7 = 0;
  v5 = 2;
  v6 = 0;
  v8 = 0;
  v4 = (__int64 (__fastcall **)())&off_4B27D8;
  v9 = 0;
  sub_250E80((__int64 *)&v4, a1 + 16, 0);
  v2 = v10;
  v4 = off_4AE778;
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v2;
}
