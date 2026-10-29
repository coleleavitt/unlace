unsigned __int64 __fastcall sub_1107E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+8h] [rbp-60h]
  int v21; // [rsp+18h] [rbp-50h]
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __int128 v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+38h] [rbp-30h]
  unsigned __int64 v25; // [rsp+48h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v24 = 0;
  v20 = 0;
  v23 = 0;
  sub_10FFB0(a1, (__int64)&v19, 10, a4, a5, a6);
  sub_1103D0(a1, (__int64)&v22, 10, v6, v7, v8);
  sub_10A8C0(*(_DWORD **)(a1 + 40), &v22, (__int64)&v19, v9, v10, v11);
  sub_10F420("du-ud chains", (__int64)&v22, (__int64)&v19);
  sub_10FFB0(a1, (__int64)&v19, 12, v12, v13, v14);
  sub_1103D0(a1, (__int64)&v22, 12, v15, v16, v17);
  sub_10F420("stkvar du-ud", (__int64)&v22, (__int64)&v19);
  sub_66C80(&v22);
  sub_66C80(&v19);
  return v25 - __readfsqword(0x28u);
}
