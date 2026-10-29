unsigned __int64 __fastcall sub_4919F0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 *v4; // rbx
  __m128i v6; // xmm0
  _BYTE v7[16]; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v8; // [rsp+10h] [rbp-98h] BYREF
  __int128 v9; // [rsp+20h] [rbp-88h] BYREF
  __m128i v10; // [rsp+30h] [rbp-78h] BYREF
  __int128 v11; // [rsp+40h] [rbp-68h] BYREF
  __m128i v12; // [rsp+50h] [rbp-58h]
  unsigned __int64 v13; // [rsp+68h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( a2 - a1 <= 6784 )
  {
    sub_48B040((__int64)&v11, a3);
    sub_491370(a1, a2, (__int64)&v11);
    sub_374250((__int64)&v11);
  }
  else
  {
    sub_48B040((__int64)&v11, a3);
    v4 = (__int64 *)(a1 + 6784);
    sub_491370(a1, a1 + 6784, (__int64)&v11);
    sub_374250((__int64)&v11);
    sub_48B040((__int64)v7, a3);
    if ( a1 + 6784 != a2 )
    {
      do
      {
        v10 = 0u;
        v9 = 0;
        if ( v8.m128i_i64[0] )
        {
          ((void (__fastcall *)(__int128 *, _BYTE *, __int64))v8.m128i_i64[0])(&v9, v7, 2);
          v6 = _mm_load_si128(&v8);
          v12 = 0u;
          v10 = v6;
          v11 = 0;
          if ( v8.m128i_i64[0] )
          {
            ((void (__fastcall *)(__int128 *, __int128 *, __int64))v8.m128i_i64[0])(&v11, &v9, 2);
            v12 = _mm_load_si128(&v10);
          }
        }
        else
        {
          v12 = 0u;
          v11 = 0;
        }
        sub_491250(v4, (__int64)&v11);
        if ( v12.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v12.m128i_i64[0])(&v11, &v11, 3);
        if ( v10.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v10.m128i_i64[0])(&v9, &v9, 3);
        v4 += 53;
      }
      while ( (__int64 *)a2 != v4 );
    }
    sub_374250((__int64)v7);
  }
  return v13 - __readfsqword(0x28u);
}

