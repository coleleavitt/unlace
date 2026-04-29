unsigned __int64 __fastcall sub_3ADE50(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-68h] BYREF
  int v4; // [rsp+8h] [rbp-60h]
  __int64 v5; // [rsp+10h] [rbp-58h]
  __int128 v6; // [rsp+18h] [rbp-50h]
  __int64 v7; // [rsp+28h] [rbp-40h]
  __int128 v8; // [rsp+30h] [rbp-38h]
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = (__int64 (__fastcall **)())&off_4E1AD0;
    v4 = 2;
    v5 = 0;
    v7 = 0;
    v6 = 0;
    v8 = 0;
    sub_255E40((__int64 *)&v3, a2 + 16, 0);
    v3 = off_4D63B8;
    if ( v7 )
    {
      *(_QWORD *)&v8 = 0;
      qfree(v7);
    }
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v5);
    }
  }
  return v9 - __readfsqword(0x28u);
}
