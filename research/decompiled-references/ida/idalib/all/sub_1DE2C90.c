void __fastcall sub_1DE2C90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned __int32 v10; // eax
  __int64 v11; // r9
  char v12; // r13
  unsigned __int32 v13; // [rsp+Ch] [rbp-12Ch]
  char v14; // [rsp+1Fh] [rbp-119h] BYREF
  __int64 v15[2]; // [rsp+20h] [rbp-118h] BYREF
  _OWORD v16[3]; // [rsp+30h] [rbp-108h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v18[32]; // [rsp+70h] [rbp-C8h] BYREF
  __m128 v19; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-98h]
  __m128i v21; // [rsp+A8h] [rbp-90h] BYREF
  __m128i v22; // [rsp+B8h] [rbp-80h] BYREF
  __m128i v23; // [rsp+C8h] [rbp-70h] BYREF

  sub_A5E110(&v19, a3);
  v5 = *(_QWORD *)(a2 + 56);
  v6 = (__m128)_mm_loadu_si128(&v21);
  v7 = (__m128)_mm_loadu_si128(&v22);
  ptr[0] = v18;
  ptr[1] = (void *)0x400000000LL;
  v8 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  v16[0] = v6;
  v16[1] = v7;
  v16[2] = _mm_loadu_si128(&v23);
  if ( (v5 & 4) != 0 )
    v8 = (__int64 *)v8[4];
  v9 = *v8;
  v15[1] = (__int64)(v8 + 1);
  v15[0] = v9;
  v10 = sub_F6CE20(v15);
  v21.m128i_i64[1] = a4;
  v14 = 0;
  v19 = (__m128)(unsigned __int64)a1;
  v20 = 0;
  v21.m128i_i32[0] = 0;
  v22.m128i_i32[0] = v10;
  v22.m128i_i64[1] = 0;
  v23.m128i_i16[0] = 1;
  v23.m128i_i8[2] = 0;
  if ( LODWORD(v16[0]) == 10 )
  {
    v13 = v10;
    sub_F5C850((__int64)v16);
    v14 = 1;
    v10 = v13;
  }
  v12 = sub_1DE2580((__int64 *)&v19, v10, v16, (__int64 *)ptr, &v14, v11, v6, v7);
  operator delete(v19.m128_u64[1], 16LL * v21.m128i_u32[0], 8);
  if ( v12 )
    LODWORD(v16[0]) = 0;
  sub_18B3150(a1, a2, v16);
  if ( ptr[0] != v18 )
    free(ptr[0]);
}
