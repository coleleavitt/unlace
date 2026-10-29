void __fastcall sub_11D4D20(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __m128i *v5; // rax
  void *v6; // rcx
  __m128i *v7; // rax
  void *v8; // rcx
  int v9; // [rsp+0h] [rbp-108h]
  __int64 v10; // [rsp+8h] [rbp-100h]
  void *v11[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-E8h] BYREF
  void *v13[2]; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v14; // [rsp+40h] [rbp-C8h] BYREF
  void *v15[2]; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  __int64 v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  __int64 v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 2392);
  LOWORD(v25) = 260;
  v9 = v4;
  v10 = *(_QWORD *)(a1 + 2400);
  v21 = a1 + 2584;
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a1 + 552LL))(v11, a1);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v11[1] <= 0xC )
    std::__throw_length_error("basic_string::append");
  v5 = (__m128i *)sub_9EE560(v11, "/include/c++/", 0xDu);
  v13[0] = &v14;
  if ( (__m128i *)v5->m128i_i64[0] == &v5[1] )
  {
    v14 = _mm_loadu_si128(v5 + 1);
  }
  else
  {
    v13[0] = (void *)v5->m128i_i64[0];
    v14.m128i_i64[0] = v5[1].m128i_i64[0];
  }
  v6 = (void *)v5->m128i_i64[1];
  v5[1].m128i_i8[0] = 0;
  v13[1] = v6;
  v5->m128i_i64[0] = (__int64)v5[1].m128i_i64;
  v5->m128i_i64[1] = 0;
  v7 = (__m128i *)sub_9EE560(v13, *(_BYTE **)(a1 + 2912), *(_QWORD *)(a1 + 2920));
  v15[0] = &v16;
  if ( (__m128i *)v7->m128i_i64[0] == &v7[1] )
  {
    v16 = _mm_loadu_si128(v7 + 1);
  }
  else
  {
    v15[0] = (void *)v7->m128i_i64[0];
    v16.m128i_i64[0] = v7[1].m128i_i64[0];
  }
  v8 = (void *)v7->m128i_i64[1];
  v7[1].m128i_i8[0] = 0;
  v15[1] = v8;
  v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
  v7->m128i_i64[1] = 0;
  LOWORD(v20) = 260;
  sub_1214670(a1, v9, v10, a2, a3, 0, (char)v15, v17, v18, v19, v20, v21, v22, v23, v24, v25);
  if ( v15[0] != &v16 )
    operator delete(v15[0]);
  if ( v13[0] != &v14 )
    operator delete(v13[0]);
  if ( v11[0] != &v12 )
    operator delete(v11[0]);
}
