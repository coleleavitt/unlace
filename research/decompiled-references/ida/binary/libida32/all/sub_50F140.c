unsigned __int64 __fastcall sub_50F140(const __m128i *a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 i; // r13
  __int64 v9; // rcx
  __int64 v10; // r8
  void (__fastcall *v11)(__int128 *, __int64, __int64); // rax
  __m128i v12; // xmm0
  __int64 v13; // rcx
  __int64 v14; // r8
  void (__fastcall *v15)(__int128 *, __int64, __int64); // rax
  __int64 v17; // [rsp+0h] [rbp-88h]
  __int64 v18; // [rsp+0h] [rbp-88h]
  __int64 v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+8h] [rbp-80h]
  __int64 v21; // [rsp+10h] [rbp-78h]
  __int128 v22; // [rsp+20h] [rbp-68h] BYREF
  __m128i v23; // [rsp+30h] [rbp-58h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v5 = (char *)a2 - (char *)a1;
  v6 = a2;
  v24 = __readfsqword(0x28u);
  if ( (char *)a2 - (char *)a1 > 16 )
  {
    v21 = v5 >> 4;
    for ( i = ((v5 >> 4) - 2) / 2; ; --i )
    {
      v23 = 0u;
      v22 = 0;
      v9 = a1[i].m128i_i64[0];
      v10 = a1[i].m128i_i64[1];
      v11 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
      if ( v11 )
      {
        v19 = a1[i].m128i_i64[1];
        v17 = a1[i].m128i_i64[0];
        v11(&v22, a4, 2);
        v10 = v19;
        v9 = v17;
        v23 = _mm_loadu_si128((const __m128i *)(a4 + 16));
      }
      sub_50EE80((__int64)a1, i, v21, v9, v10, (__int64)&v22);
      if ( v23.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    do
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a4 + 16) )
          std::__throw_bad_function_call();
        if ( (*(int (__fastcall **)(__int64, __int64 *, const __m128i *))(a4 + 24))(a4, v6, a1) < 0 )
        {
          v12 = _mm_loadu_si128(a1);
          v13 = *v6;
          v23.m128i_i64[0] = 0;
          v14 = v6[1];
          v22 = 0;
          *(__m128i *)v6 = v12;
          v15 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
          v23.m128i_i64[1] = 0;
          if ( v15 )
          {
            v20 = v14;
            v18 = v13;
            v15(&v22, a4, 2);
            v14 = v20;
            v13 = v18;
            v23 = _mm_loadu_si128((const __m128i *)(a4 + 16));
          }
          sub_50EE80((__int64)a1, 0, ((char *)a2 - (char *)a1) >> 4, v13, v14, (__int64)&v22);
          if ( v23.m128i_i64[0] )
            break;
        }
        v6 += 2;
        if ( (unsigned __int64)v6 >= a3 )
          return v24 - __readfsqword(0x28u);
      }
      v6 += 2;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
    }
    while ( (unsigned __int64)v6 < a3 );
  }
  return v24 - __readfsqword(0x28u);
}

