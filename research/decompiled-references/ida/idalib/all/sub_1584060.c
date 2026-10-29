void __fastcall sub_1584060(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        int a6,
        double a7,
        _BYTE *a8,
        __int64 a9)
{
  int v13; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-78h]
  _BYTE *v16; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-60h]

  sub_168B9B0(&v16, *(_QWORD *)(a1 + 16) + 8LL, 6486);
  sub_AEC220(&v16, a2, a3);
  sub_AEC220(&v16, a4, a5);
  sub_AEC220(&v16, a8, a9);
  v13 = a6;
  sub_1582CA0((__int64)&v14, &v16);
  if ( v16 && v17 )
    sub_1580C40(v17, (unsigned __int64)v16);
  sub_1583E80(&v16, a1, a7);
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v13, (__int64)&v16);
  sub_CB7910((__int64)&v16);
  if ( v14 )
  {
    if ( v15 )
      sub_1580C40(v15, v14);
  }
}
