void __fastcall sub_1585570(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        int a6,
        double a7,
        int a8,
        int a9,
        int a10)
{
  int v13; // ebp
  _BYTE *v15; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-C0h]
  int v17; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-98h]
  int v20; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-78h]
  _BYTE *v23; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-60h]

  v13 = a10;
  if ( !a10 )
    v13 = *(_DWORD *)(a1 + 48);
  sub_168B9B0(&v23, *(_QWORD *)(a1 + 16) + 8LL, 7488);
  sub_AEC220(&v23, a2, a3);
  sub_AEC220(&v23, a4, a5);
  sub_157E4A0(&v23, a8);
  sub_157E4A0(&v23, a6);
  v17 = v13;
  sub_1582CA0((__int64)&v18, &v23);
  if ( v23 && v24 )
    sub_1580C40(v24, (unsigned __int64)v23);
  if ( a9 )
  {
    sub_168B9B0(&v15, *(_QWORD *)(a1 + 16) + 8LL, 6070);
    sub_AEC220(&v15, a2, a3);
    v20 = a9;
    sub_1582CA0((__int64)&v21, &v15);
    sub_1584910((__int64)&v23, a1, (__int64)&v20, a7);
    if ( v21 && v22 )
      sub_1580C40(v22, v21);
    if ( v15 && v16 )
      sub_1580C40(v16, (unsigned __int64)v15);
  }
  else
  {
    sub_1583E80(&v23, a1, a7);
  }
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v17, (__int64)&v23);
  sub_CB7910((__int64)&v23);
  if ( v18 )
  {
    if ( v19 )
      sub_1580C40(v19, v18);
  }
}
