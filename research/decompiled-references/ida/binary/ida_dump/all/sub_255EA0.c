__int64 __fastcall sub_255EA0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 (__fastcall ***v3)(); // rbx
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-68h] BYREF
  int v6; // [rsp+8h] [rbp-60h]
  __int64 v7; // [rsp+10h] [rbp-58h]
  __int128 v8; // [rsp+18h] [rbp-50h]
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v11 = a2;
  v6 = 0;
  v3 = &v5;
  v7 = 0;
  v9 = 0;
  v5 = (__int64 (__fastcall **)())&off_4DFAD8;
  v8 = 0;
  v10 = 0;
  v2 = sub_255A80((__int64 *)&v5, a1, 0);
  v5 = off_4DBCF8;
  LOBYTE(v3) = v2 != 0;
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return (unsigned int)v3;
}
