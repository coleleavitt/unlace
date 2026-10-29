__int64 __fastcall sub_10CCE60(__int64 a1)
{
  __int64 (__fastcall **v2)(); // [rsp+0h] [rbp-8h] BYREF
  int vars0; // [rsp+8h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+10h] [rbp+8h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  char vars20; // [rsp+28h] [rbp+20h]
  int vars24; // [rsp+2Ch] [rbp+24h]
  __int64 vars28; // [rsp+30h] [rbp+28h]
  int *vars40; // [rsp+48h] [rbp+40h]

  vars40 = &vars0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  vars28 = a1;
  vars8 = 0;
  v2 = &off_2BEBE68;
  vars0 = 0;
  vars20 = 0;
  vars24 = 1;
  vars18 = 0;
  sub_227B8B0(&v2, 0, 0, 0);
  v2 = &off_2BEBE68;
  sub_227B7A0(&vars0);
  return a1;
}
