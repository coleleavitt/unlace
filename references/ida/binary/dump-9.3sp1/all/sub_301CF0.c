unsigned __int64 __fastcall sub_301CF0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  const __m128i *v6; // rbp
  void (__fastcall *v7)(__int128 *, const __m128i *, __int64); // rax
  __int64 v9; // [rsp+8h] [rbp-210h]
  __m128i v10[3]; // [rsp+10h] [rbp-208h] BYREF
  __int64 v11[12]; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v12; // [rsp+D0h] [rbp-148h]
  __m128i v13[3]; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v14; // [rsp+128h] [rbp-F0h]
  __int64 v15; // [rsp+130h] [rbp-E8h]
  __int64 v16; // [rsp+148h] [rbp-D0h]
  __int64 v17; // [rsp+150h] [rbp-C8h]
  __int64 v18; // [rsp+1A0h] [rbp-78h]
  __int128 v19; // [rsp+1B0h] [rbp-68h] BYREF
  __m128i v20; // [rsp+1C0h] [rbp-58h]
  unsigned __int64 v21; // [rsp+1D8h] [rbp-40h]

  v3 = a2 - a1;
  v21 = __readfsqword(0x28u);
  if ( v3 > 200 )
  {
    v9 = 0x8F5C28F5C28F5C29LL * (v3 >> 3);
    v5 = (v9 - 2) / 2;
    v6 = (const __m128i *)(a1 + 200 * v5);
    while ( 1 )
    {
      sub_2CE310(v10, v6);
      v20 = 0u;
      v10[0].m128i_i64[0] = (__int64)off_4E2D50;
      v12 = v6[12].m128i_i64[0];
      v7 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v19 = 0;
      if ( v7 )
      {
        v7(&v19, a3, 2);
        v20 = _mm_loadu_si128(a3 + 1);
      }
      sub_2CE310(v13, v10);
      v13[0].m128i_i64[0] = (__int64)off_4E2D50;
      v18 = v12;
      sub_3019B0(a1, v5, v9, v13, (__int64)&v19);
      v13[0].m128i_i64[0] = (__int64)&off_4E1528;
      cleanup_argloc();
      if ( v16 )
      {
        v17 = 0;
        qfree(v16);
      }
      clear_tinfo_t();
      if ( v14 )
      {
        v15 = 0;
        qfree(v14);
      }
      cleanup_argloc();
      cleanup_argloc();
      if ( v20.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v20.m128i_i64[0])(&v19, &v19, 3);
      v6 = (const __m128i *)((char *)v6 - 200);
      if ( !v5 )
        break;
      --v5;
      v10[0].m128i_i64[0] = (__int64)&off_4E1528;
      cleanup_argloc();
      sub_2B9980(v11);
      cleanup_argloc();
    }
    v10[0].m128i_i64[0] = (__int64)&off_4E1550;
    sub_2BA730(v10);
  }
  return v21 - __readfsqword(0x28u);
}
