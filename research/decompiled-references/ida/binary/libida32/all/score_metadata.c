__int64 __fastcall score_metadata(_QWORD *a1)
{
  bool v1; // cc
  int v2; // eax
  _QWORD v4[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h]
  __int64 v6; // [rsp+18h] [rbp-40h]
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+30h] [rbp-28h]
  unsigned int v10; // [rsp+38h] [rbp-20h]
  unsigned __int64 v11; // [rsp+48h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v9 = 0;
  v7 = 0;
  v8 = 0;
  v4[1] = a1 + 4;
  v5 = a1[4];
  v6 = a1[5] + v5;
  v1 = a1[1] <= 1u;
  v4[0] = off_2B121D0;
  v2 = 500;
  if ( v1 )
    v2 = 0;
  v10 = v2;
  sub_7D8380((__int64)v4);
  return v10;
}

