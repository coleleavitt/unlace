unsigned __int64 __fastcall sub_2FD470(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  const __m128i *v6; // rbp
  void (__fastcall *v7)(__int128 *, const __m128i *, __int64); // rax
  __int64 v9; // [rsp+8h] [rbp-210h]
  __m128i v10[3]; // [rsp+10h] [rbp-208h] BYREF
  __int64 v11[12]; // [rsp+40h] [rbp-1D8h] BYREF
  char v12[48]; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v13; // [rsp+D0h] [rbp-148h]
  __m128i v14[3]; // [rsp+E0h] [rbp-138h] BYREF
  char v15[24]; // [rsp+110h] [rbp-108h] BYREF
  __int64 v16; // [rsp+128h] [rbp-F0h]
  __int64 v17; // [rsp+130h] [rbp-E8h]
  char v18[8]; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+148h] [rbp-D0h]
  __int64 v20; // [rsp+150h] [rbp-C8h]
  char v21[48]; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+1A0h] [rbp-78h]
  __int128 v23; // [rsp+1B0h] [rbp-68h] BYREF
  __m128i v24; // [rsp+1C0h] [rbp-58h]
  unsigned __int64 v25; // [rsp+1D8h] [rbp-40h]

  v3 = a2 - a1;
  v25 = __readfsqword(0x28u);
  if ( v3 > 200 )
  {
    v9 = 0x8F5C28F5C28F5C29LL * (v3 >> 3);
    v5 = (v9 - 2) / 2;
    v6 = (const __m128i *)(a1 + 200 * v5);
    while ( 1 )
    {
      sub_2C9A90(v10, v6);
      v24 = 0u;
      v10[0].m128i_i64[0] = (__int64)off_4C3490;
      v13 = v6[12].m128i_i64[0];
      v7 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v23 = 0;
      if ( v7 )
      {
        v7(&v23, a3, 2);
        v24 = _mm_loadu_si128(a3 + 1);
      }
      sub_2C9A90(v14, v10);
      v14[0].m128i_i64[0] = (__int64)off_4C3490;
      v22 = v13;
      sub_2FD130(a1, v5, v9, v14, (__int64)&v23);
      v14[0].m128i_i64[0] = (__int64)&off_4C1C68;
      cleanup_argloc(v21);
      if ( v19 )
      {
        v20 = 0;
        qfree(v19);
      }
      clear_tinfo_t(v18);
      if ( v16 )
      {
        v17 = 0;
        qfree(v16);
      }
      cleanup_argloc(v15);
      cleanup_argloc(&v14[0].m128i_u64[1]);
      if ( v24.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v24.m128i_i64[0])(&v23, &v23, 3);
      v6 = (const __m128i *)((char *)v6 - 200);
      if ( !v5 )
        break;
      --v5;
      v10[0].m128i_i64[0] = (__int64)&off_4C1C68;
      cleanup_argloc(v12);
      sub_2B5100(v11);
      cleanup_argloc(&v10[0].m128i_u64[1]);
    }
    v10[0].m128i_i64[0] = (__int64)&off_4C1C90;
    sub_2B5EB0((__int64)v10);
  }
  return v25 - __readfsqword(0x28u);
}
