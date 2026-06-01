void __fastcall sub_1584B10(
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
        __int64 a11,
        _BYTE *a12,
        __int64 a13)
{
  __m128i v15; // xmm0
  __m128i v17; // [rsp+30h] [rbp-C8h] BYREF
  int v18; // [rsp+40h] [rbp-B8h]
  int v19; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-98h]
  int v22; // [rsp+70h] [rbp-88h] BYREF
  __m128i v23; // [rsp+78h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-70h]
  _BYTE *v25; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp-60h]

  sub_168B9B0(&v25, *(_QWORD *)(a1 + 16) + 8LL, 7489);
  sub_AEC220(&v25, a8, a9);
  sub_AEC220(&v25, a4, a5);
  sub_AEC220(&v25, a10, a11);
  sub_AEC220(&v25, a12, a13);
  v19 = a2;
  sub_1582CA0((__int64)&v20, &v25);
  if ( v25 && v26 )
    sub_1580C40(v26, (unsigned __int64)v25);
  if ( a3 )
  {
    sub_168B9B0(&v17, *(_QWORD *)(a1 + 16) + 8LL, 6078);
    v15 = _mm_load_si128(&v17);
    v22 = a3;
    v24 = v18;
    v23 = v15;
    v17.m128i_i64[0] = 0;
    sub_1584910((__int64)&v25, a1, (__int64)&v22, *(double *)v15.m128i_i64);
    if ( v23.m128i_i64[0] && v23.m128i_i64[1] )
      sub_1580C40(v23.m128i_u64[1], v23.m128i_u64[0]);
    if ( v17.m128i_i64[0] && v17.m128i_i64[1] )
      sub_1580C40(v17.m128i_u64[1], v17.m128i_u64[0]);
  }
  else
  {
    sub_1583E80(&v25, a1, a6);
  }
  sub_1582A90(a1 + 24, (std::__detail::_List_node_base *)(a1 + 24), (__int64)&v19, (__int64)&v25);
  sub_CB7910((__int64)&v25);
  if ( v20 )
  {
    if ( v21 )
      sub_1580C40(v21, v20);
  }
}
