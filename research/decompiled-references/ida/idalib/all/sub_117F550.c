void __fastcall sub_117F550(__int64 *a1, int a2, int a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  size_t v7; // r12
  unsigned __int64 v8; // rcx
  __m128i *v9; // rdi
  size_t v10; // rsi
  unsigned __int64 v11; // rax
  size_t v12; // r8
  size_t v13; // r13
  __int8 *v14; // rcx
  __int8 *v15; // rdi
  void *v16; // rax
  __m128i v17; // xmm0
  void *v20[2]; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v21; // [rsp+20h] [rbp-E8h] BYREF
  void *v22; // [rsp+30h] [rbp-D8h] BYREF
  size_t v23; // [rsp+38h] [rbp-D0h]
  __m128i v24; // [rsp+40h] [rbp-C8h] BYREF
  void *v25; // [rsp+50h] [rbp-B8h] BYREF
  size_t v26; // [rsp+58h] [rbp-B0h]
  __m128i v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h]
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  __int64 v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  __int64 v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]

  if ( *((_BYTE *)a1 + 5016) )
  {
    v4 = a1[299];
    v5 = a1[300];
    v28 = (__int64)(a1 + 323);
    v6 = *a1;
    LOWORD(v32) = 260;
    (*(void (__fastcall **)(void **, __int64 *))(v6 + 552))(&v25, a1);
    v7 = v26;
    if ( 0x7FFFFFFFFFFFFFFFLL - v26 <= 0xC )
      std::__throw_length_error("basic_string::append");
    if ( v25 == &v27 )
      v8 = 15;
    else
      v8 = v27.m128i_i64[0];
    if ( v26 + 13 > v8 )
      sub_998B30((__int64)&v25, v26, 0, "/include/c++/", 0xDu);
    else
      qmemcpy((char *)v25 + v26, "/include/c++/", 13);
    v26 = v7 + 13;
    *((_BYTE *)v25 + v7 + 13) = 0;
    v9 = (__m128i *)v25;
    v22 = &v24;
    if ( v25 == &v27 )
    {
      v10 = v26;
      v17 = _mm_load_si128(&v27);
      v9 = &v24;
      v26 = 0;
      v12 = a1[365];
      v27.m128i_i8[0] = 0;
      v11 = 15;
      v24 = v17;
      v14 = (__int8 *)a1[364];
      v23 = v10;
      v13 = v10 + v12;
    }
    else
    {
      v10 = v26;
      v11 = v27.m128i_i64[0];
      v22 = v25;
      v12 = a1[365];
      v27.m128i_i8[0] = 0;
      v23 = v26;
      v26 = 0;
      v13 = v12 + v23;
      v24.m128i_i64[0] = v11;
      if ( v25 == &v24 )
        v11 = 15;
      v25 = &v27;
      v14 = (__int8 *)a1[364];
    }
    if ( v13 > v11 )
    {
      sub_998B30((__int64)&v22, v10, 0, v14, v12);
      v9 = (__m128i *)v22;
    }
    else if ( v12 )
    {
      v15 = &v9->m128i_i8[v10];
      if ( v12 == 1 )
        *v15 = *v14;
      else
        memcpy(v15, v14, v12);
      v9 = (__m128i *)v22;
    }
    v23 = v13;
    v9->m128i_i8[v13] = 0;
    v20[0] = &v21;
    if ( v22 == &v24 )
    {
      v21 = _mm_load_si128(&v24);
    }
    else
    {
      v20[0] = v22;
      v21.m128i_i64[0] = v24.m128i_i64[0];
    }
    v16 = (void *)v23;
    v24.m128i_i8[0] = 0;
    v23 = 0;
    v20[1] = v16;
    v22 = &v24;
    LOWORD(v36) = 260;
    sub_1214670((_DWORD)a1, v4, v5, a2, a3, 0, (char)v20, v33, v34, v35, v36, v28, v29, v30, v31, v32);
    if ( v20[0] != &v21 )
      operator delete(v20[0]);
    if ( v22 != &v24 )
      operator delete(v22);
    if ( v25 != &v27 )
      operator delete(v25);
  }
}
