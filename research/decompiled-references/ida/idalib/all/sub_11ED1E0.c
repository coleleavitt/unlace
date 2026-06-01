_QWORD *__fastcall sub_11ED1E0(_QWORD *a1, _QWORD *a2, __int64 a3, _BYTE *a4, __int64 a5, int a6)
{
  _BYTE *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  char *v13; // rsi
  __int64 v14; // rax
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  __int64 v20; // rax
  char *v21; // [rsp+0h] [rbp-1F8h] BYREF
  __int16 v22; // [rsp+20h] [rbp-1D8h]
  char *v23; // [rsp+30h] [rbp-1C8h] BYREF
  __int16 v24; // [rsp+50h] [rbp-1A8h]
  _QWORD v25[4]; // [rsp+60h] [rbp-198h] BYREF
  __int16 v26; // [rsp+80h] [rbp-178h]
  _BYTE v27[32]; // [rsp+90h] [rbp-168h] BYREF
  __int16 v28; // [rsp+B0h] [rbp-148h]
  void *v29; // [rsp+C0h] [rbp-138h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-130h]
  _BYTE v31[72]; // [rsp+D8h] [rbp-120h] BYREF
  void *ptr; // [rsp+120h] [rbp-D8h] BYREF
  __m128i v33; // [rsp+128h] [rbp-D0h]
  _BYTE v34[192]; // [rsp+138h] [rbp-C0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v29 = v31;
  sub_A1FE50(&v29, "libclang_rt.", "");
  if ( a5 != 8 || *(_QWORD *)a4 != 0x736E69746C697562LL )
  {
    sub_A1FE50(&v29, a4, &a4[a5]);
    v20 = si128.m128i_i64[0];
    if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
    {
      sub_2236E10(&v29, v31, si128.m128i_i64[0] + 1, 1);
      v20 = si128.m128i_i64[0];
    }
    *((_BYTE *)v29 + v20) = 95;
    ++si128.m128i_i64[0];
  }
  v10 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a2 + 816LL))(a2, 0);
  sub_A1FE50(&v29, v10, &v10[v11]);
  v12 = 14;
  v13 = "_dynamic.dylib";
  if ( a6 != 2 )
  {
    v12 = 2;
    v13 = ".a";
  }
  sub_A1FE50(&v29, v13, &v13[v12]);
  v14 = a2[1];
  ptr = v34;
  v15 = *(_BYTE **)(v14 + 248);
  v16 = *(_QWORD *)(v14 + 256);
  v33 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_A1FE50(&ptr, v15, &v15[v16]);
  v28 = 257;
  v26 = 261;
  v25[0] = v29;
  v24 = 259;
  v25[1] = si128.m128i_i64[0];
  v23 = "darwin";
  v22 = 259;
  v21 = "lib";
  sub_228A3B0(&ptr, &v21, &v23, v25, v27);
  v17 = ptr;
  v18 = v33.m128i_i64[0];
  *a1 = a1 + 2;
  sub_11E46A0(a1, v17, (__int64)&v17[v18]);
  if ( ptr != v34 )
    free(ptr);
  if ( v29 != v31 )
    free(v29);
  return a1;
}
