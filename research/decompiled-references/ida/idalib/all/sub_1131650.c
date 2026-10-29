_QWORD *__fastcall sub_1131650(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  __int64 v8; // r9
  __int64 v9; // r15
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int8 (__fastcall *v13)(__int64, void **); // rax
  _BYTE *v14; // rdi
  _QWORD *v15; // r12
  __int64 v16; // rdi
  unsigned __int8 (__fastcall *v17)(__int64, void **); // rax
  _BYTE *v18; // rsi
  size_t v19; // rdx
  void *v20; // rdi
  size_t v22; // r8
  void *v23; // rax
  size_t v24; // rdx
  _BYTE *v25; // rsi
  size_t v26; // rdx
  _BYTE *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // [rsp+18h] [rbp-2A0h]
  size_t v31; // [rsp+30h] [rbp-288h]
  size_t v32; // [rsp+30h] [rbp-288h]
  void *v37[2]; // [rsp+60h] [rbp-258h] BYREF
  __int64 v38; // [rsp+70h] [rbp-248h] BYREF
  _QWORD v39[4]; // [rsp+80h] [rbp-238h] BYREF
  __int16 v40; // [rsp+A0h] [rbp-218h]
  _BYTE v41[32]; // [rsp+B0h] [rbp-208h] BYREF
  __int16 v42; // [rsp+D0h] [rbp-1E8h]
  _BYTE v43[32]; // [rsp+E0h] [rbp-1D8h] BYREF
  __int16 v44; // [rsp+100h] [rbp-1B8h]
  void *v45; // [rsp+110h] [rbp-1A8h] BYREF
  size_t v46; // [rsp+118h] [rbp-1A0h]
  __int64 v47; // [rsp+120h] [rbp-198h] BYREF
  __int16 v48; // [rsp+130h] [rbp-188h]
  void *dest; // [rsp+140h] [rbp-178h] BYREF
  __m128i si128; // [rsp+148h] [rbp-170h]
  _BYTE v51[136]; // [rsp+158h] [rbp-160h] BYREF
  void *ptr; // [rsp+1E0h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+1E8h] [rbp-D0h] BYREF
  _BYTE v54[192]; // [rsp+1F8h] [rbp-C0h] BYREF

  (*(void (__fastcall **)(void **))(*(_QWORD *)a2 + 32LL))(v37);
  v8 = *(_QWORD *)(a2 + 96);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  dest = v51;
  v29 = v8 + 32LL * *(unsigned int *)(a2 + 104);
  if ( v29 != v8 )
  {
    v9 = v8;
    while ( 1 )
    {
      v10 = *(_BYTE **)v9;
      v11 = *(_QWORD *)(v9 + 8);
      ptr = v54;
      *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_A1FE50(&ptr, v10, &v10[v11]);
      v40 = 260;
      v48 = 257;
      v44 = 257;
      v42 = 257;
      v39[0] = v37;
      sub_228A3B0(&ptr, v39, v41, v43, &v45);
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
      v13 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 96LL);
      v48 = 261;
      v45 = ptr;
      v46 = n[0];
      if ( v13(v12, &v45) )
      {
        v25 = ptr;
        v26 = n[0];
        *a1 = a1 + 2;
        sub_112B570(a1, v25, (__int64)&v25[v26]);
        v20 = ptr;
        if ( ptr == v54 )
          goto LABEL_17;
LABEL_16:
        free(v20);
        goto LABEL_17;
      }
      if ( !si128.m128i_i64[0] )
      {
        v22 = n[0];
        if ( n[0] )
          break;
      }
      v14 = ptr;
LABEL_6:
      if ( v14 == v54 )
      {
        v9 += 32;
        if ( v29 == v9 )
          goto LABEL_8;
      }
      else
      {
        free(v14);
        v9 += 32;
        if ( v29 == v9 )
          goto LABEL_8;
      }
    }
    if ( n[0] > si128.m128i_i64[1] )
    {
      v32 = n[0];
      sub_2236E10(&dest, v51, n[0], 1);
      v24 = n[0];
      v22 = v32;
      v14 = ptr;
      if ( !n[0] )
        goto LABEL_28;
      v23 = dest;
    }
    else
    {
      v23 = dest;
      v14 = ptr;
      v24 = n[0];
    }
    v31 = v22;
    memcpy(v23, v14, v24);
    v14 = ptr;
    v22 = v31;
LABEL_28:
    si128.m128i_i64[0] = v22;
    goto LABEL_6;
  }
LABEL_8:
  (*(void (__fastcall **)(void **, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 32LL))(
    &ptr,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7 ^ 1u,
    a7);
  sub_A0AAD0((__int64)v37, &ptr);
  if ( ptr != &n[1] )
    operator delete(ptr);
  (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)a2 + 296LL))(&v45, a2);
  ptr = v54;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  sub_A1FE50(&ptr, v45, (_BYTE *)v45 + v46);
  if ( v45 != &v47 )
    operator delete(v45);
  v48 = 257;
  v44 = 257;
  v42 = 257;
  v40 = 260;
  v39[0] = v37;
  sub_228A3B0(&ptr, v39, v41, v43, &v45);
  v15 = a1 + 2;
  if ( si128.m128i_i64[0]
    && (v16 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
        v17 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 96LL),
        v48 = 261,
        v45 = ptr,
        v46 = n[0],
        !v17(v16, &v45)) )
  {
    v27 = dest;
    v28 = si128.m128i_i64[0];
    *a1 = v15;
    sub_112B570(a1, v27, (__int64)&v27[v28]);
  }
  else
  {
    v18 = ptr;
    v19 = n[0];
    *a1 = v15;
    sub_112B570(a1, v18, (__int64)&v18[v19]);
  }
  v20 = ptr;
  if ( ptr != v54 )
    goto LABEL_16;
LABEL_17:
  if ( dest != v51 )
    free(dest);
  if ( v37[0] != &v38 )
    operator delete(v37[0]);
  return a1;
}
