__int64 __fastcall sub_158B7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __m128i v10; // xmm1
  __m128i si128; // xmm0
  __m128 v12; // rax
  _WORD *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // [rsp+10h] [rbp-198h]
  __m128i v25; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-F8h]
  __m128i v27; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD *v28; // [rsp+D0h] [rbp-D8h]
  __m128 v29; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD *v30; // [rsp+100h] [rbp-A8h]
  __m128i v31; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+118h] [rbp-90h]
  char v33; // [rsp+168h] [rbp-40h]
  unsigned int v34; // [rsp+170h] [rbp-38h]
  char v35; // [rsp+174h] [rbp-34h]

  v6 = a2;
  result = sub_C00A40(a2, a2, a3, a4, a5);
  if ( (int)result < 0 )
    return result;
  sub_EE9E50(&v29, a2);
  v10 = _mm_loadu_si128(&v31);
  si128 = _mm_load_si128((const __m128i *)&v29);
  v26 = v32;
  v24 = v32;
  v28 = v30;
  v12 = v29;
  v25 = v10;
  v27 = si128;
LABEL_3:
  if ( v10.m128i_i64[0] == v12.m128_u64[0] )
    goto LABEL_10;
  do
  {
    do
    {
      if ( (v12.m128_i8[8] & 3) != 0 )
      {
        v13 = *(_WORD **)sub_EF2B30((__int64)&v29);
        if ( !v13 )
          goto LABEL_7;
      }
      else
      {
        v13 = *(_WORD **)v12.m128_u64[0];
        if ( !*(_QWORD *)v12.m128_u64[0] )
          goto LABEL_17;
      }
      if ( ((*v13 + 509) & 0x1FFu) <= 0x7E )
      {
        result = sub_1580B50((unsigned __int64)v13, a2, v12.m128_i64[1], v8, v9);
        if ( (_BYTE)result )
          return result;
      }
LABEL_7:
      v12.m128_u64[1] = v29.m128_u64[1];
      if ( (v29.m128_i8[8] & 3) == 0 )
      {
        v12.m128_u64[0] = v29.m128_u64[0];
LABEL_17:
        v12.m128_u64[0] += 8LL;
        v29.m128_u64[0] = v12.m128_u64[0];
        goto LABEL_3;
      }
      if ( (v29.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        a2 = 1;
        sub_EF2750((unsigned __int64 *)&v29, 1);
        v12 = v29;
        goto LABEL_3;
      }
      sub_EF2960((__int64)&v29);
      v12 = v29;
    }
    while ( v10.m128i_i64[0] != v29.m128_u64[0] );
LABEL_10:
    ;
  }
  while ( v10.m128i_i64[1] != v12.m128_u64[1] );
  v14 = sub_EEC8C0(v6, a2, *(double *)si128.m128i_i64);
  v15 = *(_QWORD *)(a1 + 8) + 8LL;
  sub_168B9F0(&v29, v15, *(unsigned int *)(v6 + 4), 6677, 0);
  if ( v33 )
  {
    v27.m128i_i64[0] = v14;
    v27.m128i_i8[8] = 1;
    sub_AEC610(&v31.m128i_i64[1], v27.m128i_i64);
  }
  else if ( v35 )
  {
    v18 = sub_168B9E0(&v29);
    v21 = (__int64)v30;
    if ( v30 )
      v21 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))(*v30 + 32LL))(
              v30,
              v15,
              *v30,
              v17,
              v19,
              v20,
              v10.m128i_i64[0],
              v10.m128i_i64[1],
              v24);
    v25.m128i_i64[0] = v21;
    v22 = sub_1587BC0(v18, v25.m128i_i64, v16, v17, v19, v20);
    v23 = *v22 + 32LL * v34;
    v27.m128i_i64[0] = v14;
    v27.m128i_i8[8] = 1;
    sub_AEC610((__int64 *)(v23 + 8), v27.m128i_i64);
  }
  return sub_15F7200(&v29);
}
