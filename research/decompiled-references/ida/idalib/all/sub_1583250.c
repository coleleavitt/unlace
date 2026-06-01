void __fastcall sub_1583250(__int64 a1, _BYTE *a2, signed __int64 a3, _BYTE *a4, signed __int64 a5, int a6)
{
  int v10; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 *v13; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF

  sub_168B9B0(&v13, *(_QWORD *)(a1 + 8) + 8LL, 7542);
  sub_AEC220((unsigned __int8 **)&v13, a2, a3);
  sub_AEC220((unsigned __int8 **)&v13, a4, a5);
  v10 = a6;
  sub_1582CA0((__int64)&v11, (_BYTE **)&v13);
  if ( v13 && v14 )
    sub_1580C40(v14, (unsigned __int64)v13);
  v13 = &v15;
  v14 = 0x100000000LL;
  sub_1582A90(a1 + 16, (std::__detail::_List_node_base *)(a1 + 16), (__int64)&v10, (__int64)&v13);
  sub_CB7910((__int64)&v13);
  if ( v11 )
  {
    if ( v12 )
      sub_1580C40(v12, v11);
  }
}
