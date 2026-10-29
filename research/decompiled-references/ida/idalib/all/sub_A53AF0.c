__int64 __fastcall sub_A53AF0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-8h] BYREF
  int vars0; // [rsp+8h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+10h] [rbp+8h]
  __int64 vars18; // [rsp+20h] [rbp+18h]
  char vars20; // [rsp+28h] [rbp+20h]
  int vars24; // [rsp+2Ch] [rbp+24h]
  __int64 vars28; // [rsp+30h] [rbp+28h]
  int *vars48; // [rsp+50h] [rbp+48h]

  vars48 = &vars0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  vars28 = a1;
  vars8 = 0;
  v7 = &off_2BEBE68;
  vars0 = 0;
  vars20 = 0;
  vars24 = 1;
  vars18 = 0;
  sub_227B8B0(&v7, 0, 0, 0);
  sub_A51C30(a2, (char *)&vars0, a3 + 17464, a4, a3, 0.0);
  v7 = &off_2BEBE68;
  sub_227B7A0(&vars0);
  return a1;
}
