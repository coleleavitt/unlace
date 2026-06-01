unsigned __int64 __fastcall sub_595760(__int64 a1, __int64 a2, const __m128i *a3)
{
  void (__fastcall *v3)(__int128 *, const __m128i *, __int64); // rax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int128 *, const __m128i *, __int64); // rax
  __m128i v7; // xmm0
  __int128 v9; // [rsp+0h] [rbp-98h] BYREF
  __m128i v10; // [rsp+10h] [rbp-88h] BYREF
  __int128 v11; // [rsp+20h] [rbp-78h] BYREF
  __m128i v12; // [rsp+30h] [rbp-68h] BYREF
  __int128 v13; // [rsp+40h] [rbp-58h] BYREF
  __m128i v14; // [rsp+50h] [rbp-48h]
  unsigned __int64 v15; // [rsp+68h] [rbp-30h]

  v3 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0u;
  if ( a2 - a1 > 640 )
  {
    if ( v3 )
    {
      v3(&v13, a3, 2);
      v14 = _mm_loadu_si128(a3 + 1);
    }
    v5 = a1 + 640;
    sub_595460(a1, a1 + 640, (__int64)&v13);
    if ( v14.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v14.m128i_i64[0])(&v13, &v13, 3);
    v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
    v10 = 0u;
    v9 = 0;
    if ( v6 )
    {
      v6(&v9, a3, 2);
      v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v10 = _mm_loadu_si128(a3 + 1);
      if ( v5 == a2 )
      {
LABEL_23:
        if ( v6 )
          v6(&v9, (const __m128i *)&v9, 3);
        return v15 - __readfsqword(0x28u);
      }
    }
    else if ( v5 == a2 )
    {
      return v15 - __readfsqword(0x28u);
    }
    do
    {
      v12 = 0u;
      v11 = 0;
      if ( v6 )
      {
        v6(&v11, (const __m128i *)&v9, 2);
        v7 = _mm_load_si128(&v10);
        v14 = 0u;
        v12 = v7;
        v13 = 0;
        if ( v10.m128i_i64[0] )
        {
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v10.m128i_i64[0])(&v13, &v11, 2);
          v14 = _mm_load_si128(&v12);
        }
      }
      else
      {
        v14 = 0u;
        v13 = 0;
      }
      sub_595290(v5, (__int64)&v13);
      if ( v14.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v14.m128i_i64[0])(&v13, &v13, 3);
      if ( v12.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v12.m128i_i64[0])(&v11, &v11, 3);
      v5 += 40;
      v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))v10.m128i_i64[0];
    }
    while ( a2 != v5 );
    goto LABEL_23;
  }
  if ( v3 )
  {
    v3(&v13, a3, 2);
    v14 = _mm_loadu_si128(a3 + 1);
  }
  sub_595460(a1, a2, (__int64)&v13);
  if ( v14.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v14.m128i_i64[0])(&v13, &v13, 3);
  return v15 - __readfsqword(0x28u);
}

