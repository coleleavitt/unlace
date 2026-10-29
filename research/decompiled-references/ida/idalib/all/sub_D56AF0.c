__int64 __fastcall sub_D56AF0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v11; // rax
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int64 v14; // rdx
  __m128i v15; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+10h] [rbp-B8h]
  __int64 v17; // [rsp+18h] [rbp-B0h]
  __m128i v18; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v19; // [rsp+30h] [rbp-98h] BYREF
  __m128i v20; // [rsp+40h] [rbp-88h] BYREF
  __m128i v21; // [rsp+50h] [rbp-78h] BYREF
  __m128i v22; // [rsp+60h] [rbp-68h] BYREF
  void *v23; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+78h] [rbp-50h]
  void *v25; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+88h] [rbp-40h]
  void *v27; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+98h] [rbp-30h]

  v3 = a1[22];
  v15 = _mm_loadu_si128((const __m128i *)sub_E21760(v3, 16));
  sub_E21790(v3, 16);
  v4 = a1[22];
  v18 = _mm_load_si128(&v15);
  v15 = _mm_loadu_si128((const __m128i *)sub_E21760(v4, 16));
  sub_E21790(v4, 16);
  v19 = _mm_load_si128(&v15);
  v7 = sub_D56800((__int64)a1, a2, v19.m128i_i64, v18.m128i_i64);
  if ( (_BYTE)v7 )
  {
    v20.m128i_i64[0] = 0;
    v20.m128i_i32[2] = 0;
    v11 = sub_D44EB0(a1, v19.m128i_u32[2], v5, v6, v8, v9);
    v12 = _mm_load_si128(&v19);
    v13 = _mm_load_si128(&v18);
    v17 = v14;
    v16 = v11;
    v20.m128i_i64[0] = v11;
    v21 = v12;
    v20.m128i_i32[2] = v14;
    v22 = v13;
    sub_D4B720((__int64)&v25, v21.m128i_i64);
    sub_D4B720((__int64)&v27, v22.m128i_i64);
    sub_2207BA0(&v23);
    sub_D0C590((void **)&v20, (__int64)&v23);
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v20);
  }
  return v7;
}
