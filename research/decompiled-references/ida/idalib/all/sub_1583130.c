void __fastcall sub_1583130(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        int a6,
        _BYTE *a7,
        __int64 a8)
{
  int v12; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-78h]
  __int64 *v15; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-60h]
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF

  sub_168B9B0(&v15, *(_QWORD *)(a1 + 8) + 8LL, 7541);
  sub_AEC220((unsigned __int8 **)&v15, a2, a3);
  sub_AEC220((unsigned __int8 **)&v15, a4, a5);
  sub_AEC220((unsigned __int8 **)&v15, a7, a8);
  v12 = a6;
  sub_1582CA0((__int64)&v13, (_BYTE **)&v15);
  if ( v15 && v16 )
    sub_1580C40(v16, (unsigned __int64)v15);
  v15 = &v17;
  v16 = 0x100000000LL;
  sub_1582A90(a1 + 16, (std::__detail::_List_node_base *)(a1 + 16), (__int64)&v12, (__int64)&v15);
  sub_CB7910((__int64)&v15);
  if ( v13 )
  {
    if ( v14 )
      sub_1580C40(v14, v13);
  }
}
