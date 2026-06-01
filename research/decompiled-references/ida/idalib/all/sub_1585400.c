void __fastcall sub_1585400(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        int a6,
        double a7,
        int a8)
{
  int v12; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-A0h] BYREF
  unsigned __int64 v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-78h]
  _BYTE *v18; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-60h]

  sub_168B9B0(&v18, *(_QWORD *)(a1 + 16) + 8LL, 7073);
  sub_AEC220(&v18, a2, a3);
  sub_AEC220(&v18, a4, a5);
  v12 = a6;
  sub_1582CA0((__int64)&v13, &v18);
  if ( v18 && v19 )
    sub_1580C40(v19, (unsigned __int64)v18);
  sub_168B9B0(&v18, *(_QWORD *)(a1 + 16) + 8LL, 6069);
  sub_AEC220(&v18, a2, a3);
  sub_AEC220(&v18, a4, a5);
  v15 = a8;
  sub_1582CA0((__int64)&v16, &v18);
  if ( v18 && v19 )
    sub_1580C40(v19, (unsigned __int64)v18);
  sub_1584910((__int64)&v18, a1, (__int64)&v15, a7);
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v12, (__int64)&v18);
  sub_CB7910((__int64)&v18);
  if ( v16 && v17 )
    sub_1580C40(v17, v16);
  if ( v13 )
  {
    if ( v14 )
      sub_1580C40(v14, v13);
  }
}
