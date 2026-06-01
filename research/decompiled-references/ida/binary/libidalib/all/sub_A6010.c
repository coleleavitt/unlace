__int64 sub_A6010()
{
  _QWORD v1[3]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v2; // [rsp+18h] [rbp-90h]
  __int128 v3; // [rsp+20h] [rbp-88h]
  __int64 v4; // [rsp+30h] [rbp-78h]
  __int128 v5; // [rsp+38h] [rbp-70h]
  __int64 v6; // [rsp+48h] [rbp-60h]
  __int128 v7; // [rsp+50h] [rbp-58h]
  __int64 v8; // [rsp+60h] [rbp-48h]
  __int128 v9; // [rsp+68h] [rbp-40h]
  __int64 eah; // [rsp+78h] [rbp-30h]
  int v11; // [rsp+80h] [rbp-28h]
  unsigned __int64 v12; // [rsp+88h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  LOBYTE(v1[0]) = 11;
  v1[1] = xmmword_251F20;
  v1[2] = -1;
  v2 = 0;
  v4 = 0;
  v6 = 0;
  v8 = 0;
  v3 = 0;
  v5 = 0;
  v7 = 0;
  v9 = 0;
  eah = get_eah();
  v11 = 0;
  sub_A5D50(v1);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return 1;
}

