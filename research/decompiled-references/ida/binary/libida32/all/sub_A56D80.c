__int64 __fastcall sub_A56D80(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __m128i v19; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v22[168]; // [rsp+30h] [rbp-A8h] BYREF

  v19.m128i_i64[1] = a3;
  v19.m128i_i64[0] = a2;
  v4 = _mm_load_si128(&v19);
  ptr[0] = v22;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, (unsigned __int16)_mm_extract_epi16(v4, 2));
  sub_993300((__int64)ptr, (unsigned __int16)_mm_extract_epi16(v4, 3));
  sub_993300((__int64)ptr, a3);
  sub_993300((__int64)ptr, SHIDWORD(a3));
  v5 = sub_21FF620(a1 + 1264, ptr, &v20, &off_2B16E20);
  if ( !v5 || (v10 = v5 - 56, v5 == 56) )
  {
    v12 = *(_QWORD *)(a1 + 22744);
    v13 = *(_QWORD *)(v12 + 48);
    if ( v13 )
    {
      v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      v15 = v14;
    }
    else
    {
      v14 = sub_A56D30(a1, v12, v6, v7, v8, v9);
      v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v16 = sub_B806D0(a1, v15 | v14 & 7 | 1, v19.m128i_i64[0], v19.m128i_i64[1]);
    v17 = a1 + 1264;
    v10 = v16;
    v18 = v16 + 56;
    if ( !v16 )
      v18 = 0;
    sub_21FF4D0(v17, v18, v20, &off_2B16E20);
  }
  if ( ptr[0] != v22 )
    free(ptr[0]);
  return v10;
}

