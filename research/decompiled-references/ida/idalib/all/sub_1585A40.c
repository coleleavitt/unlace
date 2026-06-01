void __fastcall sub_1585A40(
        __int64 a1,
        _BYTE *a2,
        signed __int64 a3,
        _BYTE *a4,
        signed __int64 a5,
        int a6,
        double a7,
        int a8,
        unsigned int a9,
        unsigned __int8 a10)
{
  __int64 v12; // rdx
  int v13; // ebp
  _BYTE *v16; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-C0h]
  int v18; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-98h]
  int v21; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-78h]
  _BYTE *v24; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-60h]

  v12 = 0;
  v13 = a8;
  if ( a9 <= 3 )
    v12 = dword_261B8A0[a9];
  if ( !a8 )
    v13 = *(_DWORD *)(a1 + 52);
  sub_168B9B0(&v24, *(_QWORD *)(a1 + 16) + 8LL, v12);
  sub_AEC220(&v24, a2, a3);
  sub_AEC220(&v24, a4, a5);
  sub_157E4A0(&v24, a10);
  v18 = v13;
  sub_1582CA0((__int64)&v19, &v24);
  if ( v24 && v25 )
    sub_1580C40(v25, (unsigned __int64)v24);
  if ( a6 )
  {
    sub_168B9B0(&v16, *(_QWORD *)(a1 + 16) + 8LL, 6070);
    sub_AEC220(&v16, a2, a3);
    v21 = a6;
    sub_1582CA0((__int64)&v22, &v16);
    sub_1584910((__int64)&v24, a1, (__int64)&v21, a7);
    if ( v22 && v23 )
      sub_1580C40(v23, v22);
    if ( v16 && v17 )
      sub_1580C40(v17, (unsigned __int64)v16);
  }
  else
  {
    sub_1583E80(&v24, a1, a7);
  }
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v18, (__int64)&v24);
  sub_CB7910((__int64)&v24);
  if ( v19 )
  {
    if ( v20 )
      sub_1580C40(v20, v19);
  }
}
