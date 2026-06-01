void __fastcall sub_1585DC0(
        __int64 a1,
        int a2,
        int a3,
        _BYTE *a4,
        signed __int64 a5,
        double a6,
        __int64 a7,
        _BYTE *a8,
        __int64 a9,
        _BYTE *a10,
        __int64 a11)
{
  __m128i v13; // xmm0
  __m128i v15; // [rsp+20h] [rbp-C8h] BYREF
  int v16; // [rsp+30h] [rbp-B8h]
  int v17; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-98h]
  int v20; // [rsp+60h] [rbp-88h] BYREF
  __m128i v21; // [rsp+68h] [rbp-80h]
  int v22; // [rsp+78h] [rbp-70h]
  _BYTE *v23; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-60h]

  sub_168B9B0(&v23, *(_QWORD *)(a1 + 16) + 8LL, 6878);
  sub_AEC220(&v23, a8, a9);
  sub_AEC220(&v23, a4, a5);
  sub_AEC220(&v23, a10, a11);
  v17 = a2;
  sub_1582CA0((__int64)&v18, &v23);
  if ( v23 && v24 )
    sub_1580C40(v24, (unsigned __int64)v23);
  if ( a3 )
  {
    sub_168B9B0(&v15, *(_QWORD *)(a1 + 16) + 8LL, 6078);
    v13 = _mm_load_si128(&v15);
    v20 = a3;
    v22 = v16;
    v21 = v13;
    v15.m128i_i64[0] = 0;
    sub_1584910((__int64)&v23, a1, (__int64)&v20, *(double *)v13.m128i_i64);
    if ( v21.m128i_i64[0] && v21.m128i_i64[1] )
      sub_1580C40(v21.m128i_u64[1], v21.m128i_u64[0]);
    if ( v15.m128i_i64[0] && v15.m128i_i64[1] )
      sub_1580C40(v15.m128i_u64[1], v15.m128i_u64[0]);
  }
  else
  {
    sub_1583E80(&v23, a1, a6);
  }
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v17, (__int64)&v23);
  sub_CB7910((__int64)&v23);
  if ( v18 )
  {
    if ( v19 )
      sub_1580C40(v19, v18);
  }
}
