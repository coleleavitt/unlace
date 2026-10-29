void __fastcall sub_1246640(__int64 a1, __int64 a2, __int64 a3, __m128i si128, __m128i a5)
{
  size_t v6; // r14
  size_t v7; // r9
  unsigned __int64 v8; // rdx
  __m128 *v9; // rax
  size_t v10; // [rsp+8h] [rbp-E0h]
  __m128i v11; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-C8h] BYREF
  void *v13; // [rsp+30h] [rbp-B8h] BYREF
  size_t v14; // [rsp+38h] [rbp-B0h]
  _QWORD v15[3]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-90h]
  __int64 v17; // [rsp+60h] [rbp-88h]
  __int64 v18; // [rsp+70h] [rbp-78h]
  __int64 v19; // [rsp+A0h] [rbp-48h]

  sub_1246300(&v11, a1, (_BYTE **)(*(_QWORD *)(a1 + 8) + 104LL), (__int64 *)(*(_QWORD *)(a1 + 8) + 344LL));
  LOWORD(v19) = 257;
  v13 = v15;
  sub_1244640(&v13, v11.m128i_i64[0], v11.m128i_i64[0] + v11.m128i_i64[1]);
  v6 = v14;
  if ( 0x7FFFFFFFFFFFFFFFLL - v14 <= 0x13 )
    std::__throw_length_error("basic_string::append");
  v7 = v14 + 20;
  if ( v13 == v15 )
    v8 = 15;
  else
    v8 = v15[0];
  if ( v7 > v8 )
  {
    v10 = v14 + 20;
    sub_998B30((__int64)&v13, v14, 0, "/hexagon/include/c++", 0x14u);
    v7 = v10;
  }
  else
  {
    v9 = (__m128 *)((char *)v13 + v14);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9CF0);
    v9[1].m128_i32[0] = 724263727;
    *v9 = (__m128)si128;
  }
  v14 = v7;
  *((_BYTE *)v13 + v6 + 20) = 0;
  LOWORD(v18) = 260;
  sub_1214670(a1, (__int64)&byte_22F0C30, 0, a2, a3, 0, si128, (int)&v13, v16, v17, a5);
  if ( v13 != v15 )
    operator delete(v13);
  if ( (__int64 *)v11.m128i_i64[0] != &v12 )
    operator delete((void *)v11.m128i_i64[0]);
}
