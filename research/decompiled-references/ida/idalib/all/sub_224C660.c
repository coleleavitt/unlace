void __fastcall sub_224C660(_BYTE *a1, __int64 a2, void (__fastcall *a3)(void **, __int64), __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  size_t v10; // rbx
  __m128i *v11; // rbx
  __int64 v13; // [rsp+0h] [rbp-108h]
  __int64 v14; // [rsp+8h] [rbp-100h]
  void *v15; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-F0h]
  __m128i v17; // [rsp+20h] [rbp-E8h] BYREF
  void *src; // [rsp+30h] [rbp-D8h] BYREF
  size_t n; // [rsp+38h] [rbp-D0h]
  _QWORD v20[2]; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v21; // [rsp+50h] [rbp-B8h] BYREF
  void *v22; // [rsp+60h] [rbp-A8h]
  __int64 v23; // [rsp+68h] [rbp-A0h]
  __m128i v24; // [rsp+70h] [rbp-98h] BYREF
  void *v25; // [rsp+80h] [rbp-88h]
  size_t v26; // [rsp+88h] [rbp-80h]
  __m128i v27; // [rsp+90h] [rbp-78h] BYREF
  void *v28; // [rsp+A0h] [rbp-68h]
  __int64 v29; // [rsp+A8h] [rbp-60h]
  __m128i v30; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C8h] [rbp-40h]

  v5 = *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 304);
  if ( v5 )
  {
    v15 = &v17;
    sub_224A880(&v15, a1, (__int64)&a1[a2]);
    v6 = *(unsigned int *)(v5 + 8);
    if ( (_DWORD)v6 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)v5 + 8 * v6 - 8);
      a3(&src, a4);
      v7 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&src);
      v8 = v14;
      v21 = (__m128i)v7;
      v22 = &v24;
      if ( v15 == &v17 )
      {
        v24 = _mm_load_si128(&v17);
      }
      else
      {
        v22 = v15;
        v24.m128i_i64[0] = v17.m128i_i64[0];
      }
      v9 = v16;
      v16 = 0;
      v17.m128i_i8[0] = 0;
      v10 = n;
      v23 = v9;
      v15 = &v17;
      v28 = &v30;
      v31 = 0;
      v25 = &v27;
      v26 = 0;
      v27.m128i_i8[0] = 0;
      v29 = 0;
      v30.m128i_i8[0] = 0;
      v32 = 1;
      if ( src == v20 )
      {
        if ( n )
        {
          if ( n == 1 )
          {
            v27.m128i_i8[0] = v20[0];
          }
          else
          {
            memcpy(&v27, src, n);
            v8 = v14;
          }
        }
        v26 = v10;
        v27.m128i_i8[v10] = 0;
      }
      else
      {
        v25 = src;
        v26 = n;
        v27.m128i_i64[0] = v20[0];
        src = v20;
      }
      n = 0;
      v11 = *(__m128i **)(v8 + 136);
      LOBYTE(v20[0]) = 0;
      if ( v11 == *(__m128i **)(v8 + 144) )
      {
        sub_224C2B0(v8 + 128, v11->m128i_i8, &v21);
        if ( v28 != &v30 )
          operator delete(v28);
        if ( v25 != &v27 )
          operator delete(v25);
      }
      else
      {
        v13 = v8;
        *v11 = v21;
        v11[1].m128i_i64[0] = (__int64)v11[2].m128i_i64;
        sub_224A7C0((__m128i *)v11[1].m128i_i64, v22, (__int64)v22 + v23);
        v11[3].m128i_i64[0] = (__int64)v11[4].m128i_i64;
        if ( v25 == &v27 )
        {
          v11[4] = _mm_load_si128(&v27);
        }
        else
        {
          v11[3].m128i_i64[0] = (__int64)v25;
          v11[4].m128i_i64[0] = v27.m128i_i64[0];
        }
        v11[3].m128i_i64[1] = v26;
        v25 = &v27;
        v11[5].m128i_i64[0] = (__int64)v11[6].m128i_i64;
        v26 = 0;
        v27.m128i_i8[0] = 0;
        if ( v28 == &v30 )
        {
          v11[6] = _mm_load_si128(&v30);
        }
        else
        {
          v11[5].m128i_i64[0] = (__int64)v28;
          v11[6].m128i_i64[0] = v30.m128i_i64[0];
        }
        v11[5].m128i_i64[1] = v29;
        v11[7].m128i_i32[0] = v31;
        v11[7].m128i_i32[2] = v32;
        *(_QWORD *)(v13 + 136) += 128LL;
      }
      if ( v22 != &v24 )
        operator delete(v22);
      if ( src != v20 )
        operator delete(src);
    }
    if ( v15 != &v17 )
      operator delete(v15);
  }
}
