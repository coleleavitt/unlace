__int64 __fastcall sub_DB64E0(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD _0[7]; // [rsp+0h] [rbp+0h] BYREF
  int vars38; // [rsp+38h] [rbp+38h]
  __int64 vars40; // [rsp+40h] [rbp+40h] BYREF
  __int128 vars48; // [rsp+48h] [rbp+48h]
  int vars58; // [rsp+58h] [rbp+58h]
  __int64 vars60; // [rsp+60h] [rbp+60h]
  __int64 vars68; // [rsp+68h] [rbp+68h]
  __int64 vars70; // [rsp+70h] [rbp+70h]
  int vars78; // [rsp+78h] [rbp+78h]

  v1 = *a1;
  v2 = sub_E21760(*a1, 64);
  sub_E23260(_0);
  _0[6] = *(_QWORD *)(v2 + 48);
  vars38 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  v3 = *a1;
  vars48 = 0;
  vars40 = 0;
  vars58 = 1;
  vars68 = 0;
  vars60 = 0;
  vars70 = 0;
  vars78 = 0;
  v4 = sub_E216C0(v3, 64);
  sub_E23260(v4);
  *(_QWORD *)(v4 + 48) = vars70;
  *(_DWORD *)(v4 + 56) = vars78;
  sub_E232A0(&vars40);
  sub_E232A0(_0);
  return 1;
}
