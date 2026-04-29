unsigned __int64 __fastcall sub_362390(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-68h] BYREF
  int v4; // [rsp+8h] [rbp-60h]
  __int64 v5; // [rsp+10h] [rbp-58h]
  __int128 v6; // [rsp+18h] [rbp-50h]
  __int64 v7; // [rsp+28h] [rbp-40h]
  __int128 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a2 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    v6 = 0;
    v8 = 0;
    v9 = a1;
    *(_OWORD *)a1 = 0;
    v4 = 0;
    v5 = 0;
    v7 = 0;
    v3 = (__int64 (__fastcall **)())&off_4E0798;
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
  return v10 - __readfsqword(0x28u);
}
