__int64 __fastcall sub_A5CE20(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // r12
  __int64 v12; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v15[184]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = a2->m128i_i64[0];
  v4 = a2->m128i_i64[0];
  ptr[0] = v15;
  v4 &= 0xFFFFFFFFFFFFFFF8LL;
  ptr[1] = (void *)0x2000000000LL;
  v13 = a2->m128i_i64[1];
  sub_993300((__int64)ptr, v4);
  sub_993300((__int64)ptr, SHIDWORD(v4));
  sub_993300((__int64)ptr, (v3 >> 2) & 1);
  sub_EFEBC0(&v13, ptr);
  v12 = 0;
  v5 = sub_21FF620(a1 + 944, ptr, &v12, off_2B16EA0);
  if ( !v5 || (v6 = v5 - 16, v5 == 16) )
  {
    v9 = sub_A55760((__int64 *)(a1 + 2352), 24, 3u);
    v10 = _mm_loadu_si128(a2);
    *(_QWORD *)(v9 + 16) = 0;
    v11 = v9;
    *(__m128i *)v9 = v10;
    sub_21FF4D0(a1 + 944, v9 + 16, v12, off_2B16EA0);
    v6 = v11;
  }
  sub_EFEDC0(&v13, v6);
  v7 = v13;
  if ( ptr[0] != v15 )
    free(ptr[0]);
  return v7;
}

