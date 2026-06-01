unsigned __int64 __fastcall sub_3F40F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v11; // r14
  bool v12; // al
  __int64 v13; // rcx
  __int64 v14; // r13
  _QWORD *v15; // rbp
  _QWORD *v16; // r12
  int v17; // eax
  __int64 v18; // r12
  void (__fastcall *v19)(__int128 *, __int64, __int64); // rax
  __int64 v21; // rcx
  __int64 *v22; // [rsp+0h] [rbp-98h]
  __int64 v23; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+20h] [rbp-78h]
  __int64 v27; // [rsp+30h] [rbp-68h] BYREF
  __int128 v28; // [rsp+38h] [rbp-60h] BYREF
  __m128i v29; // [rsp+48h] [rbp-50h]
  unsigned __int64 v30; // [rsp+58h] [rbp-40h]

  v6 = a3;
  v7 = a3 - 1;
  v8 = a5;
  v9 = a2;
  v30 = __readfsqword(0x28u);
  if ( a2 >= v7 / 2 )
  {
    v18 = a2;
  }
  else
  {
    v11 = a2;
    v22 = a6 + 1;
    v25 = v6;
    v23 = v7 / 2;
    while ( 1 )
    {
      v14 = 2 * (v11 + 1);
      v15 = (_QWORD *)(a1 + 32 * (v11 + 1));
      v16 = (_QWORD *)(a1 + 16 * (v14 - 1));
      if ( !a6[3] )
        std::__throw_bad_function_call();
      v17 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a6[4])(
              v22,
              *(_QWORD *)(*a6 + 24LL * *v15 + 16) + 88LL * v15[1],
              *(_QWORD *)(*a6 + 24LL * *v16 + 16) + 88LL * v16[1]);
      if ( v17 )
        v12 = v17 > 0;
      else
        v12 = *v15 == *v16 ? v16[1] < v15[1] : *v16 < *v15;
      v13 = v14 - v12;
      *(__m128i *)(a1 + 16 * v11) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v13));
      if ( v13 >= v23 )
        break;
      v11 = v14 - v12;
    }
    v9 = a2;
    v6 = v25;
    v18 = v13;
    v8 = a5;
  }
  if ( (v6 & 1) == 0 && (v6 - 2) / 2 == v18 )
  {
    v21 = 16 * v18;
    v18 = 2 * v18 + 1;
    *(__m128i *)(a1 + v21) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v18));
  }
  v29 = 0u;
  v27 = *a6;
  v19 = (void (__fastcall *)(__int128 *, __int64, __int64))a6[3];
  v28 = 0;
  if ( v19 )
  {
    v19(&v28, (__int64)(a6 + 1), 2);
    v29 = _mm_loadu_si128((const __m128i *)(a6 + 3));
  }
  sub_3F3F90(a1, v18, v9, a4, v8, (__int64)&v27);
  if ( v29.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v29.m128i_i64[0])(&v28, &v28, 3);
  return v30 - __readfsqword(0x28u);
}

