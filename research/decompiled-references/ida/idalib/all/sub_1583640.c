void __fastcall sub_1583640(
        __int64 a1,
        int a2,
        _BYTE *a3,
        signed __int64 a4,
        _BYTE *a5,
        signed __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  int v12; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+30h] [rbp-78h]
  __int64 *v15; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-60h]
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF

  sub_168B9B0(&v15, *(_QWORD *)(a1 + 8) + 8LL, 7239);
  sub_AEC220((unsigned __int8 **)&v15, a3, a4);
  sub_AEC220((unsigned __int8 **)&v15, a5, a6);
  sub_AEC220((unsigned __int8 **)&v15, a7, a8);
  v12 = a2;
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
