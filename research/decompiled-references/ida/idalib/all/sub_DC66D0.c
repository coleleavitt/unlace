__int64 __fastcall sub_DC66D0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-78h] BYREF
  int v8; // [rsp+18h] [rbp-60h]
  __int64 v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h]
  int v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+58h] [rbp-20h]

  v1 = *a1;
  sub_E21760(*a1, 48);
  sub_E23260(v7);
  sub_E21790(v1, 48);
  v2 = *a1;
  if ( v8 == 1 )
  {
    v6 = sub_CFE390((__int64)v7);
    v3 = v10 + v7[0] * v6;
  }
  else
  {
    v3 = v9 + v7[0];
  }
  v11 = 0;
  v12 = 0;
  v13 = 1;
  v15 = v3;
  v14 = 0;
  v4 = sub_E216C0(v2, 48);
  sub_E23260(v4);
  sub_E232A0(&v11);
  sub_E232A0(v7);
  return 1;
}
