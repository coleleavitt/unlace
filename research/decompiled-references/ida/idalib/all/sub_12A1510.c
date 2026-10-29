_QWORD *__fastcall sub_12A1510(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  _QWORD *v9; // rdx
  __m128i si128; // xmm0
  size_t v11; // r8
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 (__fastcall *v15)(__int64, void **); // rdx
  void *v16; // rdi
  _BYTE *v18; // rsi
  __int64 v19; // rdx
  size_t v20; // r15
  __m128i v21; // xmm0
  const void *v22; // rax
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64, void **); // rdx
  char v25; // al
  char *v26; // rdi
  char *v27; // rdi
  _BYTE *v28; // rsi
  __int64 v29; // rdx
  __m128i v33; // [rsp+20h] [rbp-1F8h] BYREF
  __m128i v34; // [rsp+30h] [rbp-1E8h] BYREF
  size_t n[2]; // [rsp+40h] [rbp-1D8h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-1C8h]
  void *src; // [rsp+58h] [rbp-1C0h]
  void *v38[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-1A8h] BYREF
  _QWORD v40[4]; // [rsp+80h] [rbp-198h] BYREF
  __int16 v41; // [rsp+A0h] [rbp-178h]
  _QWORD v42[4]; // [rsp+B0h] [rbp-168h] BYREF
  __int16 v43; // [rsp+D0h] [rbp-148h]
  _BYTE v44[32]; // [rsp+E0h] [rbp-138h] BYREF
  __int16 v45; // [rsp+100h] [rbp-118h]
  void *v46; // [rsp+110h] [rbp-108h] BYREF
  __int64 v47; // [rsp+118h] [rbp-100h]
  __int16 v48; // [rsp+130h] [rbp-E8h]
  void *ptr; // [rsp+140h] [rbp-D8h] BYREF
  __m128i v50; // [rsp+148h] [rbp-D0h]
  _BYTE v51[192]; // [rsp+158h] [rbp-C0h] BYREF

  v9 = (_QWORD *)a2[1];
  if ( a5 != 8 || *a4 != 0x736E69746C697562LL )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v34.m128i_i64[0] = (__int64)v44;
    v36 = v42;
    v33.m128i_i64[0] = (__int64)v40;
    goto LABEL_4;
  }
  v20 = v9[62];
  v21 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v22 = (const void *)v9[61];
  ptr = v51;
  v50 = v21;
  if ( v20 > 0x80 )
  {
    v34 = v21;
    v33.m128i_i64[0] = (__int64)v22;
    sub_2236E10(&ptr, v51, v20, 1);
    v22 = (const void *)v33.m128i_i64[0];
    v21 = _mm_load_si128(&v34);
    v27 = (char *)ptr + v50.m128i_i64[0];
    goto LABEL_24;
  }
  if ( v20 )
  {
    v27 = v51;
LABEL_24:
    v33 = v21;
    memcpy(v27, v22, v20);
    v20 += v50.m128i_i64[0];
    v21 = _mm_load_si128(&v33);
  }
  *(__m128i *)n = v21;
  v45 = 257;
  v43 = 257;
  v50.m128i_i64[0] = v20;
  v40[0] = "/usr/lib/libcompiler_rt.a";
  v48 = 257;
  v41 = 259;
  v34.m128i_i64[0] = (__int64)v44;
  v36 = v42;
  v33.m128i_i64[0] = (__int64)v40;
  sub_228A3B0(&ptr, v40, v42, v44, &v46);
  v23 = sub_112C5D0((__int64)a2);
  v24 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v23 + 96LL);
  v48 = 261;
  v46 = ptr;
  v47 = v50.m128i_i64[0];
  v25 = v24(v23, &v46);
  si128 = _mm_load_si128((const __m128i *)n);
  if ( v25 )
  {
    v28 = ptr;
    v29 = v50.m128i_i64[0];
    *a1 = a1 + 2;
    sub_12A1450(a1, v28, (__int64)&v28[v29]);
    v16 = ptr;
    if ( ptr == v51 )
      return a1;
    goto LABEL_11;
  }
  if ( ptr != v51 )
  {
    *(__m128i *)n = si128;
    free(ptr);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v9 = (_QWORD *)a2[1];
LABEL_4:
  v11 = v9[32];
  v12 = (void *)v9[31];
  v50 = si128;
  ptr = v51;
  if ( v11 > 0x80 )
  {
    src = v12;
    n[0] = v11;
    sub_2236E10(&ptr, v51, v11, 1);
    v11 = n[0];
    v12 = src;
    v26 = (char *)ptr + v50.m128i_i64[0];
  }
  else
  {
    if ( !v11 )
      goto LABEL_6;
    v26 = v51;
  }
  n[0] = v11;
  memcpy(v26, v12, v11);
  v11 = v50.m128i_i64[0] + n[0];
LABEL_6:
  v13 = *a2;
  v50.m128i_i64[0] = v11;
  LODWORD(n[0]) = a7;
  (*(void (__fastcall **)(void **, __int64 *, __int64, _QWORD *, __int64, _QWORD, _QWORD, _QWORD))(v13 + 32))(
    v38,
    a2,
    a3,
    a4,
    a5,
    a6,
    0,
    a7);
  v48 = 257;
  v45 = 257;
  v43 = 260;
  v41 = 259;
  v40[0] = "lib";
  v42[0] = v38;
  sub_228A3B0(&ptr, v33.m128i_i64[0], v36, v34.m128i_i64[0], &v46);
  v14 = sub_112C5D0((__int64)a2);
  v15 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v14 + 96LL);
  v46 = ptr;
  v48 = 261;
  v47 = v50.m128i_i64[0];
  if ( v15(v14, &v46) )
  {
    v18 = ptr;
    v19 = v50.m128i_i64[0];
    *a1 = a1 + 2;
    sub_12A1450(a1, v18, (__int64)&v18[v19]);
  }
  else
  {
    sub_1131650(a1, (__int64)a2, a3, (__int64)a4, a5, a6, n[0]);
  }
  if ( v38[0] != &v39 )
    operator delete(v38[0]);
  v16 = ptr;
  if ( ptr != v51 )
LABEL_11:
    free(v16);
  return a1;
}
