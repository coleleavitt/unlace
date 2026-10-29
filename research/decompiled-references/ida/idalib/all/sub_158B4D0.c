__int64 __fastcall sub_158B4D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r14
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __m128i v11; // xmm1
  __m128i si128; // xmm0
  __m128 v13; // rax
  _WORD *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // [rsp+10h] [rbp-1A8h]
  __m128i v26; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-108h]
  __m128i v28; // [rsp+C0h] [rbp-F8h] BYREF
  _QWORD *v29; // [rsp+D0h] [rbp-E8h]
  __m128 v30; // [rsp+F0h] [rbp-C8h] BYREF
  _QWORD *v31; // [rsp+100h] [rbp-B8h]
  __m128i v32; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+118h] [rbp-A0h]
  char v34; // [rsp+168h] [rbp-50h]
  unsigned int v35; // [rsp+170h] [rbp-48h]
  char v36; // [rsp+174h] [rbp-44h]

  v5 = a3;
  v7 = a2;
  result = sub_C00A40(a2, a2, a3, a4, a5);
  if ( (int)result < 0 )
    return result;
  sub_EE9E50(&v30, a2);
  v11 = _mm_loadu_si128(&v32);
  si128 = _mm_load_si128((const __m128i *)&v30);
  v27 = v33;
  v25 = v33;
  v29 = v31;
  v13 = v30;
  v26 = v11;
  v28 = si128;
LABEL_3:
  if ( v11.m128i_i64[0] == v13.m128_u64[0] )
    goto LABEL_10;
  do
  {
    do
    {
      if ( (v13.m128_i8[8] & 3) != 0 )
      {
        v14 = *(_WORD **)sub_EF2B30((__int64)&v30);
        if ( !v14 )
          goto LABEL_7;
      }
      else
      {
        v14 = *(_WORD **)v13.m128_u64[0];
        if ( !*(_QWORD *)v13.m128_u64[0] )
          goto LABEL_17;
      }
      if ( ((*v14 + 509) & 0x1FFu) <= 0x7E )
      {
        result = sub_1580B50((unsigned __int64)v14, a2, v13.m128_i64[1], v9, v10);
        if ( (_BYTE)result )
          return result;
      }
LABEL_7:
      v13.m128_u64[1] = v30.m128_u64[1];
      if ( (v30.m128_i8[8] & 3) == 0 )
      {
        v13.m128_u64[0] = v30.m128_u64[0];
LABEL_17:
        v13.m128_u64[0] += 8LL;
        v30.m128_u64[0] = v13.m128_u64[0];
        goto LABEL_3;
      }
      if ( (v30.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        a2 = 1;
        sub_EF2750((unsigned __int64 *)&v30, 1);
        v13 = v30;
        goto LABEL_3;
      }
      sub_EF2960((__int64)&v30);
      v13 = v30;
    }
    while ( v11.m128i_i64[0] != v30.m128_u64[0] );
LABEL_10:
    ;
  }
  while ( v11.m128i_i64[1] != v13.m128_u64[1] );
  v15 = sub_EEC8C0(v7, a2, *(double *)si128.m128i_i64);
  v16 = *(_QWORD *)(a1 + 8) + 8LL;
  sub_168B9F0(&v30, v16, *(unsigned int *)(v7 + 4), (unsigned int)(v5 != 0) + 7422, 0);
  if ( v34 )
  {
    v28.m128i_i64[0] = v15;
    v28.m128i_i8[8] = 1;
    sub_AEC610(&v32.m128i_i64[1], v28.m128i_i64);
  }
  else if ( v36 )
  {
    v19 = sub_168B9E0(&v30);
    v22 = (__int64)v31;
    if ( v31 )
      v22 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))(*v31 + 32LL))(
              v31,
              v16,
              *v31,
              v18,
              v20,
              v21,
              v11.m128i_i64[0],
              v11.m128i_i64[1],
              v25);
    v26.m128i_i64[0] = v22;
    v23 = sub_1587BC0(v19, v26.m128i_i64, v17, v18, v20, v21);
    v24 = *v23 + 32LL * v35;
    v28.m128i_i64[0] = v15;
    v28.m128i_i8[8] = 1;
    sub_AEC610((__int64 *)(v24 + 8), v28.m128i_i64);
  }
  return sub_15F7200(&v30);
}
