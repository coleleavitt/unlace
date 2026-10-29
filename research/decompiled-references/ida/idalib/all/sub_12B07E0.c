void __fastcall sub_12B07E0(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128i a5)
{
  __int64 v5; // r15
  __int64 v6; // r14
  _BYTE *v7; // rsi
  __int64 v8; // rdx
  __m128i *v9; // rax
  void *v10; // rcx
  __m128i *v11; // rax
  void *v12; // rcx
  void *v15[2]; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v16; // [rsp+20h] [rbp-E8h] BYREF
  void *v17[2]; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v18; // [rsp+40h] [rbp-C8h] BYREF
  void *v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h]
  _BYTE v21[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  __int64 v26; // [rsp+C0h] [rbp-48h]

  if ( *(_BYTE *)(a1 + 2384) )
  {
    v5 = *(_QWORD *)(a1 + 2392);
    v6 = *(_QWORD *)(a1 + 2400);
    v7 = *(_BYTE **)(a1 + 2488);
    v22 = a1 + 2584;
    v8 = *(_QWORD *)(a1 + 2496);
    LOWORD(v23) = 260;
    v19 = v21;
    if ( v7 )
    {
      sub_12AF1C0(&v19, v7, (__int64)&v7[v8]);
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v20) <= 0xF )
        std::__throw_length_error("basic_string::append");
    }
    else
    {
      v20 = 0;
      v21[0] = 0;
    }
    v9 = (__m128i *)sub_9EE560(&v19, "/../include/c++/", 0x10u);
    v17[0] = &v18;
    if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
    {
      a4 = _mm_loadu_si128(v9 + 1);
      v18 = a4;
    }
    else
    {
      v17[0] = (void *)v9->m128i_i64[0];
      v18.m128i_i64[0] = v9[1].m128i_i64[0];
    }
    v10 = (void *)v9->m128i_i64[1];
    v9[1].m128i_i8[0] = 0;
    v17[1] = v10;
    v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
    v9->m128i_i64[1] = 0;
    v11 = (__m128i *)sub_9EE560(v17, *(_BYTE **)(a1 + 2912), *(_QWORD *)(a1 + 2920));
    v15[0] = &v16;
    if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
    {
      a5 = _mm_loadu_si128(v11 + 1);
      v16 = a5;
    }
    else
    {
      v15[0] = (void *)v11->m128i_i64[0];
      v16.m128i_i64[0] = v11[1].m128i_i64[0];
    }
    v12 = (void *)v11->m128i_i64[1];
    v11[1].m128i_i8[0] = 0;
    v15[1] = v12;
    v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
    v11->m128i_i64[1] = 0;
    LOWORD(v26) = 260;
    sub_1214670(a1, v5, v6, a2, a3, 0, a4, (int)v15, v24, v25, a5);
    if ( v15[0] != &v16 )
      operator delete(v15[0]);
    if ( v17[0] != &v18 )
      operator delete(v17[0]);
    if ( v19 != v21 )
      operator delete(v19);
  }
}
