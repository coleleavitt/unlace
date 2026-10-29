__int64 __fastcall sub_4719A0(_QWORD **a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rdi
  __int64 *v7; // rax
  __m128i v9; // xmm2
  __int64 v10; // rax
  unsigned int *v11; // r13
  unsigned int i; // r14d
  __int64 v13; // rax
  __m128i v14; // xmm3
  __int64 v15; // rax
  unsigned int *v16; // r13
  unsigned int j; // r14d
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm5
  int v21; // ebp
  unsigned __int64 v22; // [rsp+0h] [rbp-80h]
  __m128i v23; // [rsp+8h] [rbp-78h] BYREF
  __int128 v24; // [rsp+18h] [rbp-68h] BYREF
  __m128i v25; // [rsp+28h] [rbp-58h]
  unsigned __int64 v26; // [rsp+40h] [rbp-40h]

  v4 = a2;
  v5 = *((int *)a1 + 2);
  v26 = __readfsqword(0x28u);
  v23 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B02430), (__m128i)(unsigned __int64)sub_46AC60);
  switch_dbctx(v5);
  v7 = a1[5];
  v22 = v7[1];
  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 == 2 )
  {
    if ( a2 > v22 )
      v4 = v7[1];
LABEL_11:
    if ( !v4 )
      return -1;
    v9 = _mm_load_si128(&v23);
    --v4;
    v10 = *a1[5];
    v24 = 0;
    v25 = v9;
    v11 = (unsigned int *)(v10 + 8 * v4);
    if ( !sub_46B6F0 )
      return v4;
    for ( i = *v11; ; i = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[22])(a1, i) )
    {
      if ( i >= v11[1] )
      {
        if ( v25.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
        goto LABEL_11;
      }
      v13 = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[21])(a1, i);
      if ( v13 )
      {
        if ( !v25.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64))v25.m128i_i64[1])(&v24, v13) )
          break;
      }
    }
    if ( !v25.m128i_i64[0] )
      return v4;
    goto LABEL_31;
  }
  if ( a3 )
    return -1;
  if ( a2 >= v7[1]
    || (v19 = *v7,
        v20 = _mm_load_si128(&v23),
        v24 = 0,
        v25 = v20,
        v21 = sub_471910((__int64)a1, (unsigned int *)(v19 + 8 * a2), (__int64)&v24),
        sub_374250((__int64)&v24),
        !v21) )
  {
LABEL_5:
    if ( v4 >= v22 )
      return -1;
    if ( ++v4 >= v22 )
      return -1;
    v14 = _mm_load_si128(&v23);
    v15 = *a1[5];
    v24 = 0;
    v25 = v14;
    v16 = (unsigned int *)(v15 + 8 * v4);
    if ( !sub_46B6F0 )
      return v4;
    for ( j = *v16; ; j = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[22])(a1, j) )
    {
      if ( j >= v16[1] )
      {
        if ( v25.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
        goto LABEL_5;
      }
      v18 = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*a1)[21])(a1, j);
      if ( v18 )
      {
        if ( !v25.m128i_i64[0] )
          std::__throw_bad_function_call();
        if ( ((unsigned int (__fastcall *)(__int128 *, __int64))v25.m128i_i64[1])(&v24, v18) )
          break;
      }
    }
    if ( !v25.m128i_i64[0] )
      return v4;
LABEL_31:
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
  }
  return v4;
}

