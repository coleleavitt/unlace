__int64 __fastcall sub_4861A0(_QWORD **a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rdi
  _QWORD *v7; // rax
  __m128i v9; // xmm2
  unsigned __int64 *v10; // r13
  unsigned __int64 i; // r14
  __int64 v12; // rax
  __m128i v13; // xmm3
  unsigned __int64 *v14; // r13
  unsigned __int64 j; // r14
  __int64 v16; // rax
  __m128i v17; // xmm5
  unsigned __int64 *v18; // rsi
  int v19; // ebp
  unsigned __int64 v20; // [rsp+0h] [rbp-80h]
  __m128i v21; // [rsp+8h] [rbp-78h] BYREF
  __int128 v22; // [rsp+18h] [rbp-68h] BYREF
  __m128i v23; // [rsp+28h] [rbp-58h]
  unsigned __int64 v24; // [rsp+40h] [rbp-40h]

  v4 = a2;
  v5 = *((int *)a1 + 2);
  v24 = __readfsqword(0x28u);
  v21 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2C3F0), (__m128i)(unsigned __int64)sub_47F1B0);
  switch_dbctx(v5);
  v7 = a1[5];
  v20 = v7[1];
  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 == 2 )
  {
    if ( a2 > v20 )
      v4 = v7[1];
LABEL_11:
    if ( !v4 )
      return -1;
    --v4;
    v9 = _mm_load_si128(&v21);
    v10 = (unsigned __int64 *)(*a1[5] + 16 * v4);
    v22 = 0;
    v23 = v9;
    if ( !sub_47FCA0 )
      return v4;
    for ( i = *v10; ; i = ((__int64 (__fastcall *)(_QWORD **, unsigned __int64))(*a1)[22])(a1, i) )
    {
      if ( i >= v10[1] )
      {
        if ( v23.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
        goto LABEL_11;
      }
      v12 = ((__int64 (__fastcall *)(_QWORD **, unsigned __int64))(*a1)[21])(a1, i);
      if ( v12 )
      {
        if ( !v23.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64))v23.m128i_i64[1])(&v22, v12) )
          break;
      }
    }
    if ( !v23.m128i_i64[0] )
      return v4;
    goto LABEL_31;
  }
  if ( a3 )
    return -1;
  if ( a2 >= v7[1] )
    goto LABEL_5;
  v17 = _mm_load_si128(&v21);
  v18 = (unsigned __int64 *)(*v7 + 16 * a2);
  v22 = 0;
  v23 = v17;
  v19 = sub_486110((__int64)a1, v18, (__int64)&v22);
  if ( v23.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
  if ( !v19 )
  {
LABEL_5:
    if ( v4 >= v20 )
      return -1;
    if ( ++v4 >= v20 )
      return -1;
    v13 = _mm_load_si128(&v21);
    v14 = (unsigned __int64 *)(*a1[5] + 16 * v4);
    v22 = 0;
    v23 = v13;
    if ( !sub_47FCA0 )
      return v4;
    for ( j = *v14; ; j = ((__int64 (__fastcall *)(_QWORD **, unsigned __int64))(*a1)[22])(a1, j) )
    {
      if ( j >= v14[1] )
      {
        if ( v23.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
        goto LABEL_5;
      }
      v16 = ((__int64 (__fastcall *)(_QWORD **, unsigned __int64))(*a1)[21])(a1, j);
      if ( v16 )
      {
        if ( !v23.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64))v23.m128i_i64[1])(&v22, v16) )
          break;
      }
    }
    if ( !v23.m128i_i64[0] )
      return v4;
LABEL_31:
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
  }
  return v4;
}
