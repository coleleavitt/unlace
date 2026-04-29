unsigned __int64 __fastcall sub_2D9560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  const __m128i *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v9; // [rsp+0h] [rbp-178h]
  __m128i v10[3]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v11[12]; // [rsp+50h] [rbp-128h] BYREF
  char v12[48]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+E0h] [rbp-98h]
  _BYTE v14[16]; // [rsp+F0h] [rbp-88h] BYREF
  __m128i v15; // [rsp+100h] [rbp-78h] BYREF
  __int128 v16; // [rsp+110h] [rbp-68h] BYREF
  __m128i v17; // [rsp+120h] [rbp-58h]
  unsigned __int64 v18; // [rsp+138h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 200 )
  {
    v4 = a1 + 400;
    do
    {
      v5 = (const __m128i *)(v4 - 200);
      if ( !*(_QWORD *)(a3 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a3 + 24))(a3, v4 - 200, a1) >= 0 )
      {
        sub_2C9020((__int64)v14, (const __m128i *)a3);
        v17 = 0u;
        v16 = 0;
        if ( v15.m128i_i64[0] )
        {
          ((void (__fastcall *)(__int128 *, _BYTE *, __int64))v15.m128i_i64[0])(&v16, v14, 2);
          v17 = _mm_load_si128(&v15);
        }
        sub_2D9410((const __m128i *)(v4 - 200), (__int64)&v16);
        if ( v17.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v17.m128i_i64[0])(&v16, &v16, 3);
        if ( v15.m128i_i64[0] )
          ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v15.m128i_i64[0])(v14, v14, 3);
        v9 = v4;
      }
      else
      {
        sub_2C6F90(v10, (const __m128i *)(v4 - 200));
        v9 = v4;
        v10[0].m128i_i64[0] = (__int64)off_4AF528;
        v13 = *(_QWORD *)(v4 - 8);
        v6 = 0x8F5C28F5C28F5C29LL * (((__int64)v5->m128i_i64 - a1) >> 3);
        if ( (__int64)v5->m128i_i64 - a1 > 0 )
        {
          do
          {
            v7 = (__int64)v5;
            v5 = (const __m128i *)((char *)v5 - 200);
            sub_2ABBE0(v7, v5);
            *(_QWORD *)(v7 + 192) = *(_QWORD *)(v7 - 8);
            --v6;
          }
          while ( v6 );
        }
        sub_2ABBE0(a1, v10);
        *(_QWORD *)(a1 + 192) = v13;
        v10[0].m128i_i64[0] = (__int64)&off_4ADD28;
        cleanup_argloc(v12);
        sub_2B2600(v11);
        cleanup_argloc(&v10[0].m128i_u64[1]);
      }
      v4 += 200;
    }
    while ( v9 != a2 );
  }
  return v18 - __readfsqword(0x28u);
}
