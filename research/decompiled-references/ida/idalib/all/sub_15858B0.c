void __fastcall sub_15858B0(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        int a6,
        double a7,
        int a8)
{
  int v10; // ebp
  _BYTE *v13; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-C0h]
  int v15; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-98h]
  int v18; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-78h]
  _BYTE *v21; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-60h]

  v10 = a8;
  if ( !a8 )
    v10 = *(_DWORD *)(a1 + 48);
  sub_168B9B0(&v21, *(_QWORD *)(a1 + 16) + 8LL, 6858);
  sub_AEC220(&v21, a2, a3);
  sub_AEC220(&v21, a4, a5);
  v15 = v10;
  sub_1582CA0((__int64)&v16, &v21);
  if ( v21 && v22 )
    sub_1580C40(v22, (unsigned __int64)v21);
  if ( a6 )
  {
    sub_168B9B0(&v13, *(_QWORD *)(a1 + 16) + 8LL, 6070);
    sub_AEC220(&v13, a2, a3);
    v18 = a6;
    sub_1582CA0((__int64)&v19, &v13);
    sub_1584910((__int64)&v21, a1, (__int64)&v18, a7);
    if ( v19 && v20 )
      sub_1580C40(v20, v19);
    if ( v13 && v14 )
      sub_1580C40(v14, (unsigned __int64)v13);
  }
  else
  {
    sub_1583E80(&v21, a1, a7);
  }
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v15, (__int64)&v21);
  sub_CB7910((__int64)&v21);
  if ( v16 )
  {
    if ( v17 )
      sub_1580C40(v17, v16);
  }
}
