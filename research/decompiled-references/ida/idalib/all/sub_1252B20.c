unsigned __int64 __fastcall sub_1252B20(__int64 a1, __m128i *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __m128i si128; // xmm1
  __m128i v6; // xmm0
  __m128i *v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __m128i v11[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+28h] [rbp-60h]
  __m128i v14[5]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a2[1].m128i_i64[0];
  v4 = a2[1].m128i_i64[1];
  a2[1].m128i_i64[0] = 0;
  si128 = _mm_load_si128(v14);
  v6 = _mm_loadu_si128(a2);
  a2[1].m128i_i64[1] = 0;
  *a2 = si128;
  v11[0].m128i_i32[0] = 11;
  v11[0].m128i_i64[1] = -1;
  v14[0] = v6;
  v11[1] = v6;
  v12 = v3;
  v13 = v4;
  sub_124FC70(v14, v11);
  v7 = *(__m128i **)(a1 + 64);
  if ( v7 == *(__m128i **)(a1 + 72) )
  {
    sub_1252750(a1 + 56, *(const __m128i **)(a1 + 64), v14);
    v8 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    sub_124FC70(v7, v14);
    v8 = *(_QWORD *)(a1 + 64) + 48LL;
    *(_QWORD *)(a1 + 64) = v8;
  }
  v9 = 0xAAAAAAAAAAAAAAABLL * ((v8 - *(_QWORD *)(a1 + 56)) >> 4);
  if ( v9 > 0x186A0 )
    abort();
  sub_124FBE0((__int64)v14);
  sub_124FBE0((__int64)v11);
  return v9 - 1;
}
