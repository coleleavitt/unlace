unsigned __int64 __fastcall sub_7D1C0(__int64 a1, unsigned __int8 **a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __m128i v5; // xmm1
  __m128i v6; // xmm1
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r12
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_7D170(a1, (__int64)a2);
  if ( *a2 >= a2[1] )
    sub_79930(a1);
  *(_DWORD *)(a1 + 24) = unpack_dd();
  sub_7C3F0((__int64)&v15, a2);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v15;
  v15 = 0;
  v5 = _mm_loadu_si128(&v16);
  v16 = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v14 = v5;
    qfree();
    v6 = _mm_load_si128(&v14);
    v7 = v15;
    *(_QWORD *)(a1 + 32) = v4;
    *(__m128i *)(a1 + 40) = v6;
    if ( v7 )
    {
      v16.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v4;
    *(__m128i *)(a1 + 40) = v5;
  }
  sub_7C3F0((__int64)&v15, a2);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = v15;
  v15 = 0;
  v10 = _mm_loadu_si128(&v16);
  v16 = 0;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 64) = 0;
    v14 = v10;
    qfree();
    v11 = _mm_load_si128(&v14);
    v12 = v15;
    *(_QWORD *)(a1 + 56) = v9;
    *(__m128i *)(a1 + 64) = v11;
    if ( v12 )
    {
      v16.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v9;
    *(__m128i *)(a1 + 64) = v10;
  }
  sub_7C560(a2, a1 + 80, -1);
  *(_DWORD *)(a1 + 88) = sub_7BFC0(a2);
  *(_DWORD *)(a1 + 92) = sub_7BFC0(a2);
  *(_QWORD *)(a1 + 96) = sub_7BFE0((__int64)a2);
  return v17 - __readfsqword(0x28u);
}
