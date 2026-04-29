unsigned __int64 __fastcall sub_1107E0(__int64 a1)
{
  unsigned __int64 v1; // rcx
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __int128 v8; // [rsp+8h] [rbp-60h]
  int v9; // [rsp+18h] [rbp-50h]
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v12 = 0;
  v8 = 0;
  v11 = 0;
  sub_10FFB0(a1, (__int64)&v7, 10);
  sub_1103D0(a1, (__int64)&v10, 10);
  sub_10A8C0(*(_DWORD **)(a1 + 40), &v10, (__int64)&v7, v1, v2, v3);
  sub_10F420("du-ud chains", (__int64)&v10, (__int64)&v7, v4);
  sub_10FFB0(a1, (__int64)&v7, 12);
  sub_1103D0(a1, (__int64)&v10, 12);
  sub_10F420("stkvar du-ud", (__int64)&v10, (__int64)&v7, v5);
  sub_66C80((__int64)&v10);
  sub_66C80((__int64)&v7);
  return v13 - __readfsqword(0x28u);
}
