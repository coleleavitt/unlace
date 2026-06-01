void __fastcall sub_11EE280(__int64 a1, __int64 *a2, __int64 *a3)
{
  __m128i si128; // xmm0
  _QWORD v5[4]; // [rsp+30h] [rbp-378h] BYREF
  __int16 v6; // [rsp+50h] [rbp-358h]
  _QWORD v7[4]; // [rsp+60h] [rbp-348h] BYREF
  __int16 v8; // [rsp+80h] [rbp-328h]
  _QWORD v9[4]; // [rsp+90h] [rbp-318h] BYREF
  __int16 v10; // [rsp+B0h] [rbp-2F8h]
  __int64 v11[4]; // [rsp+C0h] [rbp-2E8h] BYREF
  void *v12; // [rsp+E0h] [rbp-2C8h]
  __int64 v13; // [rsp+E8h] [rbp-2C0h]
  void *v14; // [rsp+F0h] [rbp-2B8h] BYREF
  __int64 v15; // [rsp+F8h] [rbp-2B0h]
  __int64 v16; // [rsp+108h] [rbp-2A0h] BYREF
  void *v17; // [rsp+190h] [rbp-218h] BYREF
  __m128i v18; // [rsp+198h] [rbp-210h]
  _BYTE v19[136]; // [rsp+1A8h] [rbp-200h] BYREF
  void *v20; // [rsp+230h] [rbp-178h] BYREF
  __m128i v21; // [rsp+238h] [rbp-170h]
  _BYTE v22[136]; // [rsp+248h] [rbp-160h] BYREF
  void *ptr; // [rsp+2D0h] [rbp-D8h] BYREF
  __m128i v24; // [rsp+2D8h] [rbp-D0h]
  _BYTE v25[192]; // [rsp+2E8h] [rbp-C0h] BYREF

  sub_11EDE80(a1, (__int64)a2, (__int64)a3);
  if ( sub_10DE660((__int64)a2, 0xBEDu, 0xBEFu) )
    return;
  sub_11EDD40((__int64)&v14, a1, (__int64)a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v17 = v19;
  v18 = si128;
  if ( v15 )
  {
    sub_9C3DB0(&v17, (const void **)&v14);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v20 = v22;
    v21 = si128;
    if ( v15 )
    {
      sub_9C3DB0(&v20, (const void **)&v14);
      ptr = v25;
      v24 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v15 )
        sub_9C3DB0(&ptr, (const void **)&v14);
      goto LABEL_6;
    }
  }
  else
  {
    v21 = si128;
    v20 = v22;
  }
  v24 = si128;
  ptr = v25;
LABEL_6:
  LOWORD(v12) = 257;
  v10 = 259;
  v6 = 259;
  v8 = 259;
  v9[0] = "Frameworks";
  v5[0] = "System";
  v7[0] = "Library";
  sub_228A3B0(&v17, v5, v7, v9, v11);
  LOWORD(v12) = 257;
  v9[0] = "SubFrameworks";
  v5[0] = "System";
  v10 = 259;
  v6 = 259;
  v8 = 259;
  v7[0] = "Library";
  sub_228A3B0(&v20, v5, v7, v9, v11);
  v5[0] = "Library";
  v10 = 257;
  v8 = 259;
  LOWORD(v12) = 257;
  v7[0] = "Frameworks";
  v6 = 259;
  sub_228A3B0(&ptr, v5, v7, v9, v11);
  v11[0] = (__int64)v17;
  v11[1] = v18.m128i_i64[0];
  v11[2] = (__int64)v20;
  v11[3] = v21.m128i_i64[0];
  v12 = ptr;
  v13 = v24.m128i_i64[0];
  sub_112D5F0(a2, a3, v11, 3);
  if ( ptr != v25 )
    free(ptr);
  if ( v20 != v22 )
    free(v20);
  if ( v17 != v19 )
    free(v17);
  if ( v14 != &v16 )
    free(v14);
}
