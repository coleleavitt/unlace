__int64 __fastcall sub_BEC8C0(__int64 a1, _QWORD **a2)
{
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-8h] BYREF
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
  v3 = &off_2BC1EC8;
  vars0 = 0;
  vars20 = 0;
  vars24 = 1;
  vars18 = 0;
  sub_2257B70(&v3, 0, 0, 0);
  (*(void (__fastcall **)(_QWORD, int *, _QWORD *, __int64))(*(_QWORD *)**a2 + 96LL))(**a2, &vars0, a2[1] + 2183, 1);
  v3 = &off_2BC1EC8;
  sub_2257A60(&vars0);
  return a1;
}

