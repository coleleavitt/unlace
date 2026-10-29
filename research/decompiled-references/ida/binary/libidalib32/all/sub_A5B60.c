__int64 sub_A5B60()
{
  char v1[8]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i *v2; // [rsp+8h] [rbp-A0h]
  int v3; // [rsp+10h] [rbp-98h]
  __int64 v4; // [rsp+18h] [rbp-90h]
  __int128 v5; // [rsp+20h] [rbp-88h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int128 v7; // [rsp+38h] [rbp-70h]
  __int64 v8; // [rsp+48h] [rbp-60h]
  __int128 v9; // [rsp+50h] [rbp-58h]
  __int64 v10; // [rsp+60h] [rbp-48h]
  __int128 v11; // [rsp+68h] [rbp-40h]
  __int64 eah; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]
  unsigned __int64 v14; // [rsp+88h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v1[0] = 11;
  v2 = xmmword_250E60;
  v3 = -1;
  v4 = 0;
  v6 = 0;
  v8 = 0;
  v10 = 0;
  v5 = 0;
  v7 = 0;
  v9 = 0;
  v11 = 0;
  eah = get_eah();
  v13 = 0;
  sub_A58A0((__int64)v1);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
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
  return 1;
}

