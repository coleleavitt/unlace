void __fastcall sub_1583FA0(__int64 a1, _BYTE *a2, signed __int64 a3, int a4, double a5)
{
  int v7; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-68h]
  _BYTE *v10; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-50h]

  sub_168B9B0(&v10, *(_QWORD *)(a1 + 16) + 8LL, 6487);
  sub_AEC220(&v10, a2, a3);
  v7 = a4;
  sub_1582CA0((__int64)&v8, &v10);
  if ( v10 && v11 )
    sub_1580C40(v11, (unsigned __int64)v10);
  sub_1583E80(&v10, a1, a5);
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v7, (__int64)&v10);
  sub_CB7910((__int64)&v10);
  if ( v8 )
  {
    if ( v9 )
      sub_1580C40(v9, v8);
  }
}
