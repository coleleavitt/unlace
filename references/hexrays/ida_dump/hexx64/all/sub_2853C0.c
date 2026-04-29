__int64 __fastcall sub_2853C0(__int64 a1, int a2, int a3)
{
  int v3; // eax
  __int64 (__fastcall ***v4)(); // rbx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-68h] BYREF
  int v7; // [rsp+8h] [rbp-60h]
  __int64 v8; // [rsp+10h] [rbp-58h]
  __int128 v9; // [rsp+18h] [rbp-50h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v12 = a3;
  v4 = &v6;
  v13 = a2;
  v7 = 0;
  v8 = 0;
  v10 = 0;
  v6 = (__int64 (__fastcall **)())&off_4E0B38;
  v9 = 0;
  v11 = 0;
  v3 = sub_255A80((__int64 *)&v6, a1, 0);
  v6 = off_4DBCF8;
  LOBYTE(v4) = v3 != 0;
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return (unsigned int)v4;
}
