__int64 __fastcall sub_2035BA0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // [rsp+0h] [rbp-8h] BYREF
  _QWORD vars0[2]; // [rsp+8h] [rbp+0h] BYREF
  int vars10; // [rsp+18h] [rbp+10h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  __int64 vars20; // [rsp+28h] [rbp+20h]
  int vars28; // [rsp+30h] [rbp+28h]
  __int64 vars30; // [rsp+38h] [rbp+30h]
  __int64 vars38; // [rsp+40h] [rbp+38h]
  int vars40; // [rsp+48h] [rbp+40h]
  __int64 vars48; // [rsp+50h] [rbp+48h]
  __int64 vars50; // [rsp+58h] [rbp+50h]
  int vars58; // [rsp+60h] [rbp+58h]
  __int128 vars60; // [rsp+68h] [rbp+60h]
  __int64 vars70; // [rsp+78h] [rbp+70h]
  char vars78; // [rsp+80h] [rbp+78h]
  __int64 vars80; // [rsp+88h] [rbp+80h]
  __int64 vars88; // [rsp+90h] [rbp+88h]
  int vars90; // [rsp+98h] [rbp+90h]
  __int128 vars98; // [rsp+A0h] [rbp+98h]
  __int64 varsA8; // [rsp+B0h] [rbp+A8h]
  _QWORD *varsC8; // [rsp+D0h] [rbp+C8h]

  varsC8 = vars0;
  vars60 = 0;
  v5 = 0;
  vars0[0] = 0;
  vars0[1] = 0;
  vars10 = 0;
  vars18 = 0;
  vars20 = 0;
  vars28 = 0;
  vars30 = 0;
  vars38 = 0;
  vars40 = 0;
  vars48 = 0;
  vars50 = 0;
  vars58 = 0;
  vars70 = 0;
  vars78 = 0;
  vars80 = 0;
  vars88 = 0;
  vars90 = 0;
  vars98 = 0;
  varsA8 = 0;
  sub_2034FF0((__int64)&v5, a1, a2);
  if ( !a3 && *(_BYTE *)(a1 + 8) == 15 && (*(_BYTE *)(a1 + 9) & 4) == 0 )
  {
    sub_995540(a2, " = type ");
    sub_2035730((__int64)vars0, a1, a2);
  }
  return sub_202ECB0((__int64)vars0);
}
