void __fastcall sub_1583550(__int64 a1, int a2, _BYTE *a3, signed __int64 a4, _BYTE *a5, signed __int64 a6)
{
  int v10; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 *v13; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF

  sub_168B9B0(&v13, *(_QWORD *)(a1 + 8) + 8LL, 7240);
  sub_AEC220((unsigned __int8 **)&v13, a3, a4);
  sub_AEC220((unsigned __int8 **)&v13, a5, a6);
  v10 = a2;
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
