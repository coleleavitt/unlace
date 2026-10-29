unsigned __int64 __fastcall sub_5BFEB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6)
{
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rbp
  bool v11; // al
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r14
  _QWORD *v15; // r12
  _QWORD *v16; // r15
  int v17; // eax
  void (__fastcall *v18)(__int128 *, __int64, __int64); // rax
  __int64 v20; // rcx
  __int64 *v21; // [rsp+0h] [rbp-98h]
  __int64 v22; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  __int128 v26; // [rsp+38h] [rbp-60h] BYREF
  __m128i v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v6 = a1;
  v8 = a3 - 1;
  v9 = a2;
  v28 = __readfsqword(0x28u);
  if ( a2 >= v8 / 2 )
  {
    v13 = a2;
  }
  else
  {
    v21 = a6 + 1;
    v22 = v8 / 2;
    while ( 1 )
    {
      v14 = 2 * (v9 + 1);
      v15 = (_QWORD *)(a1 + 32 * (v9 + 1));
      v16 = (_QWORD *)(a1 + 16 * (v14 - 1));
      if ( !a6[3] )
        std::__throw_bad_function_call();
      v17 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a6[4])(
              v21,
              *(_QWORD *)(*a6 + 24LL * *v15 + 16) + 40LL * v15[1],
              *(_QWORD *)(*a6 + 24LL * *v16 + 16) + 40LL * v16[1]);
      if ( v17 )
        v11 = v17 > 0;
      else
        v11 = *v15 == *v16 ? v16[1] < v15[1] : *v16 < *v15;
      v12 = v14 - v11;
      v13 = v12;
      *(__m128i *)(a1 + 16 * v9) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v12));
      if ( v12 >= v22 )
        break;
      v9 = v12;
    }
    v6 = a1;
    v9 = a2;
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v13 )
  {
    v20 = 16 * v13;
    v13 = 2 * v13 + 1;
    *(__m128i *)(v6 + v20) = _mm_loadu_si128((const __m128i *)(v6 + 16 * v13));
  }
  v27 = 0u;
  v25 = *a6;
  v18 = (void (__fastcall *)(__int128 *, __int64, __int64))a6[3];
  v26 = 0;
  if ( v18 )
  {
    v18(&v26, (__int64)(a6 + 1), 2);
    v27 = _mm_loadu_si128((const __m128i *)(a6 + 3));
  }
  sub_5BFD60(v6, v13, v9, a4, a5, (__int64)&v25);
  if ( v27.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v27.m128i_i64[0])(&v26, &v26, 3);
  return v28 - __readfsqword(0x28u);
}
