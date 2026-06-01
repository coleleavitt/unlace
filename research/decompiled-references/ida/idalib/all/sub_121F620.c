__int64 __fastcall sub_121F620(_QWORD *a1, _BYTE *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __m128i v9; // xmm0
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, void **); // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int8 v16; // [rsp+0h] [rbp-238h]
  unsigned __int8 v17; // [rsp+0h] [rbp-238h]
  __m128i v18; // [rsp+30h] [rbp-208h] BYREF
  __m128i v19; // [rsp+40h] [rbp-1F8h] BYREF
  void *v20[2]; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-1D8h] BYREF
  void *v22[2]; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v23; // [rsp+80h] [rbp-1B8h] BYREF
  unsigned __int8 v24; // [rsp+90h] [rbp-1A8h]
  _QWORD v25[4]; // [rsp+A0h] [rbp-198h] BYREF
  __int16 v26; // [rsp+C0h] [rbp-178h]
  _QWORD v27[4]; // [rsp+D0h] [rbp-168h] BYREF
  __int16 v28; // [rsp+F0h] [rbp-148h]
  _BYTE v29[32]; // [rsp+100h] [rbp-138h] BYREF
  __int16 v30; // [rsp+120h] [rbp-118h]
  void *v31; // [rsp+130h] [rbp-108h] BYREF
  __int64 v32; // [rsp+138h] [rbp-100h]
  __int16 v33; // [rsp+150h] [rbp-E8h]
  void *ptr; // [rsp+160h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+168h] [rbp-D0h]
  _BYTE v36[192]; // [rsp+178h] [rbp-C0h] BYREF

  (*(void (__fastcall **)(void **, _QWORD, _BYTE *, __int64))(*(_QWORD *)*a1 + 624LL))(v20, *a1, a2, a3);
  result = 0;
  if ( !v20[1] )
    goto LABEL_2;
  sub_1130D20((__int64)v22, (_DWORD *)*a1, a2, a3);
  result = v24;
  if ( v24 )
  {
    ptr = v36;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v18 = si128;
    v19.m128i_i64[0] = (__int64)v36;
    sub_A1FE50(&ptr, (_BYTE *)v22[0], (_BYTE *)v22[0] + (unsigned __int64)v22[1]);
    v25[0] = "c++";
    v26 = 259;
    v30 = 257;
    v33 = 257;
    v28 = 260;
    v27[0] = v20;
    sub_228A3B0(&ptr, v25, v27, v29, &v31);
    v12 = *(_QWORD *)(a1[1] + 8LL);
    v13 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 96LL);
    v33 = 261;
    v31 = ptr;
    v32 = si128.m128i_i64[0];
    result = v13(v12, &v31);
    v9 = _mm_load_si128(&v18);
    if ( (_BYTE)result )
    {
      v14 = a1[2];
      v15 = a1[3];
      v19 = v9;
      v18.m128i_i64[0] = (__int64)v36;
      v33 = 261;
      v31 = ptr;
      v32 = si128.m128i_i64[0];
      sub_112FA80(v14, v15, (__int64)&v31);
      v9 = _mm_load_si128(&v19);
      if ( ptr != (void *)v18.m128i_i64[0] )
      {
        v18 = v9;
        free(ptr);
        v9 = _mm_load_si128(&v18);
      }
    }
    else
    {
      if ( ptr != (void *)v19.m128i_i64[0] )
      {
        v19 = v9;
        v18.m128i_i8[0] = 0;
        free(ptr);
        v9 = _mm_load_si128(&v19);
        result = v18.m128i_u8[0];
      }
      if ( a4 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( a4 )
      goto LABEL_2;
    v9 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  }
  si128 = v9;
  ptr = v36;
  sub_A1FE50(&ptr, a2, &a2[a3]);
  v33 = 257;
  v30 = 257;
  v28 = 260;
  v26 = 259;
  v25[0] = "c++";
  v27[0] = v20;
  sub_228A3B0(&ptr, v25, v27, v29, &v31);
  v33 = 261;
  v10 = a1[3];
  v31 = ptr;
  v11 = a1[2];
  v32 = si128.m128i_i64[0];
  sub_112FA80(v11, v10, (__int64)&v31);
  if ( ptr != v36 )
    free(ptr);
  result = 1;
LABEL_11:
  if ( v24 && v22[0] != &v23 )
  {
    v17 = result;
    operator delete(v22[0]);
    result = v17;
  }
LABEL_2:
  if ( v20[0] != &v21 )
  {
    v16 = result;
    operator delete(v20[0]);
    return v16;
  }
  return result;
}
