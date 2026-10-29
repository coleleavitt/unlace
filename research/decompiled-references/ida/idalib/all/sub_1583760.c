void __fastcall sub_1583760(_QWORD *a1, int a2, _BYTE *a3, signed __int64 a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-68h]
  int v10; // [rsp+18h] [rbp-60h]
  __int64 *v11; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF

  sub_168B9B0(&v11, a1[1] + 8LL, 7079);
  sub_AEC220((unsigned __int8 **)&v11, a3, a4);
  sub_1582CA0((__int64)&v8, (_BYTE **)&v11);
  if ( v11 && v12 )
    sub_1580C40(v12, (unsigned __int64)v11);
  v11 = &v13;
  v12 = 0x100000000LL;
  v6 = operator new(0x60u);
  *(_QWORD *)(v6 + 56) = 0x100000000LL;
  *(_DWORD *)(v6 + 16) = a2;
  *(_DWORD *)(v6 + 40) = v10;
  *(_QWORD *)(v6 + 32) = v9;
  v7 = v8;
  v8 = 0;
  *(_QWORD *)(v6 + 24) = v7;
  *(_QWORD *)(v6 + 48) = v6 + 64;
  if ( (_DWORD)v12 )
    sub_1582780(v6 + 48, (__int64)&v11);
  std::__detail::_List_node_base::_M_hook(
    (std::__detail::_List_node_base *)v6,
    (std::__detail::_List_node_base *)(a1 + 2));
  ++a1[4];
  sub_CB7910((__int64)&v11);
  if ( v8 )
  {
    if ( v9 )
      sub_1580C40(v9, v8);
  }
}
