void __fastcall sub_1585720(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        int a6,
        double a7,
        int a8)
{
  int v8; // r15d
  _BYTE *v12; // [rsp+10h] [rbp-C8h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-C0h]
  int v14; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-98h]
  int v17; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-78h]
  _BYTE *v20; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-60h]

  v8 = a6;
  if ( !a6 )
    v8 = *(_DWORD *)(a1 + 48);
  sub_168B9B0(&v20, *(_QWORD *)(a1 + 16) + 8LL, 7487);
  sub_AEC220(&v20, a2, a3);
  sub_AEC220(&v20, a4, a5);
  v14 = v8;
  sub_1582CA0((__int64)&v15, &v20);
  if ( v20 && v21 )
    sub_1580C40(v21, (unsigned __int64)v20);
  if ( a8 )
  {
    sub_168B9B0(&v12, *(_QWORD *)(a1 + 16) + 8LL, 6436);
    sub_AEC220(&v12, a2, a3);
    v17 = a8;
    sub_1582CA0((__int64)&v18, &v12);
    sub_1584910((__int64)&v20, a1, (__int64)&v17, a7);
    if ( v18 && v19 )
      sub_1580C40(v19, v18);
    if ( v12 && v13 )
      sub_1580C40(v13, (unsigned __int64)v12);
  }
  else
  {
    sub_1583E80(&v20, a1, a7);
  }
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v14, (__int64)&v20);
  sub_CB7910((__int64)&v20);
  if ( v15 )
  {
    if ( v16 )
      sub_1580C40(v16, v15);
  }
}
