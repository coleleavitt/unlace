void __fastcall sub_1584460(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, double a6)
{
  int v8; // eax
  int v9; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-68h]
  _BYTE *v12; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-50h]

  sub_168B9B0(&v12, *(_QWORD *)(a1 + 16) + 8LL, 4 * (unsigned int)(a3 == 1) + 7549);
  sub_157E260(&v12, a2);
  v8 = sub_9C8F30(a4);
  sub_157E4A0(&v12, v8);
  v9 = a5;
  sub_1582CA0((__int64)&v10, &v12);
  if ( v12 && v13 )
    sub_1580C40(v13, (unsigned __int64)v12);
  sub_1583E80(&v12, a1, a6);
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v9, (__int64)&v12);
  sub_CB7910((__int64)&v12);
  if ( v10 )
  {
    if ( v11 )
      sub_1580C40(v11, v10);
  }
}
