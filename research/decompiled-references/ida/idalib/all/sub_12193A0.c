__int64 __fastcall sub_12193A0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // r13
  __m128i *v8; // [rsp+0h] [rbp-68h]
  __int64 v9; // [rsp+8h] [rbp-60h]
  __m128i v10; // [rsp+10h] [rbp-58h] BYREF
  void *v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF

  sub_C05100((__int64)v11, "/../../../../sysroot", a3 + 64);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v11[1] <= 0xE )
    std::__throw_length_error("basic_string::append");
  v3 = (__m128i *)sub_9EE560(v11, "/../usr/include", 0xFu);
  v8 = &v10;
  if ( (__m128i *)v3->m128i_i64[0] == &v3[1] )
  {
    v10 = _mm_loadu_si128(v3 + 1);
  }
  else
  {
    v8 = (__m128i *)v3->m128i_i64[0];
    v10.m128i_i64[0] = v3[1].m128i_i64[0];
  }
  v4 = v3->m128i_i64[1];
  v3[1].m128i_i8[0] = 0;
  v9 = v4;
  v3->m128i_i64[0] = (__int64)v3[1].m128i_i64;
  v3->m128i_i64[1] = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v5 = (_QWORD *)operator new(0x20u);
  v6 = v5 + 4;
  *(_QWORD *)a1 = v5;
  *v5 = v5 + 2;
  *(_QWORD *)(a1 + 16) = v5 + 4;
  sub_1213B80(v5, v8, (__int64)v8->m128i_i64 + v9);
  *(_QWORD *)(a1 + 8) = v6;
  if ( v8 != &v10 )
    operator delete(v8);
  if ( v11[0] != &v12 )
    operator delete(v11[0]);
  return a1;
}
