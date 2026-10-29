void __fastcall sub_1246800(__int64 a1, __int64 a2, __int64 a3, __m128i si128, __m128i a5)
{
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rdi
  bool v11; // al
  _BYTE *v12; // rsi
  size_t v13; // r12
  size_t v14; // r9
  unsigned __int64 v15; // rdx
  __m128 *v16; // rax
  void *v17; // rdi
  size_t v18; // r15
  size_t v19; // r9
  unsigned __int64 v20; // rdx
  __m128 *v21; // rax
  size_t v22; // [rsp+8h] [rbp-100h]
  size_t v23; // [rsp+8h] [rbp-100h]
  void *v24; // [rsp+10h] [rbp-F8h] BYREF
  size_t v25; // [rsp+18h] [rbp-F0h]
  _QWORD v26[2]; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  void *v29; // [rsp+50h] [rbp-B8h] BYREF
  size_t v30; // [rsp+58h] [rbp-B0h]
  _QWORD v31[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int64 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  __int64 v35; // [rsp+A8h] [rbp-60h]
  __int64 v36; // [rsp+B0h] [rbp-58h]
  __int64 v37; // [rsp+C0h] [rbp-48h]

  v8 = *(_DWORD *)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(v9 + 496);
  v11 = v8 == 49 || (unsigned int)(v8 - 18) <= 7;
  if ( !v10 )
  {
    if ( v11 || *(_DWORD *)(a1 + 60) == 39 )
    {
      LOWORD(v37) = 257;
      LOWORD(v34) = 259;
      sub_1214670(a1, (__int64)&byte_22F0C30, 0, a2, a3, 0, si128, (int)"/usr/include/c++/v1", v32, v33, a5);
      return;
    }
LABEL_15:
    sub_1246300(&v27, a1, (_BYTE **)(v9 + 104), (__int64 *)(v9 + 344));
    LOWORD(v37) = 257;
    v29 = v31;
    sub_1244640(&v29, v27.m128i_i64[0], v27.m128i_i64[0] + v27.m128i_i64[1]);
    v18 = v30;
    if ( 0x7FFFFFFFFFFFFFFFLL - v30 > 0x16 )
    {
      v19 = v30 + 23;
      if ( v29 == v31 )
        v20 = 15;
      else
        v20 = v31[0];
      if ( v19 > v20 )
      {
        v23 = v30 + 23;
        sub_998B30((__int64)&v29, v30, 0, "/hexagon/include/c++/v1", 0x17u);
        v19 = v23;
      }
      else
      {
        v21 = (__m128 *)((char *)v29 + v30);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A9CF0);
        v21[1].m128_i32[0] = 724263727;
        v21[1].m128_i16[2] = 30255;
        v21[1].m128_i8[6] = 49;
        *v21 = (__m128)si128;
      }
      v30 = v19;
      *((_BYTE *)v29 + v18 + 23) = 0;
      LOWORD(v34) = 260;
      sub_1214670(a1, (__int64)&byte_22F0C30, 0, a2, a3, 0, si128, (int)&v29, v32, v33, a5);
      if ( v29 != v31 )
        operator delete(v29);
      v17 = (void *)v27.m128i_i64[0];
      if ( (__int64 *)v27.m128i_i64[0] == &v28 )
        return;
LABEL_9:
      operator delete(v17);
      return;
    }
LABEL_29:
    std::__throw_length_error("basic_string::append");
  }
  if ( !v11 && *(_DWORD *)(a1 + 60) != 39 )
    goto LABEL_15;
  v12 = *(_BYTE **)(v9 + 488);
  LOWORD(v34) = 257;
  v24 = v26;
  sub_1244640(&v24, v12, (__int64)&v12[v10]);
  v13 = v25;
  if ( 0x7FFFFFFFFFFFFFFFLL - v25 <= 0x12 )
    goto LABEL_29;
  v14 = v25 + 19;
  if ( v24 == v26 )
    v15 = 15;
  else
    v15 = v26[0];
  if ( v14 > v15 )
  {
    v22 = v25 + 19;
    sub_998B30((__int64)&v24, v25, 0, "/usr/include/c++/v1", 0x13u);
    v14 = v22;
  }
  else
  {
    v16 = (__m128 *)((char *)v24 + v25);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9D00);
    v16[1].m128_i16[0] = 30255;
    v16[1].m128_i8[2] = 49;
    *v16 = (__m128)si128;
  }
  v25 = v14;
  LOWORD(v37) = 260;
  *((_BYTE *)v24 + v13 + 19) = 0;
  sub_1214670(a1, (__int64)&byte_22F0C30, 0, a2, a3, 0, si128, (int)&v24, v35, v36, a5);
  v17 = v24;
  if ( v24 != v26 )
    goto LABEL_9;
}
