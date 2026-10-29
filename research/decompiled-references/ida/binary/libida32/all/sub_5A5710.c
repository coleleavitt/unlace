unsigned __int64 __fastcall sub_5A5710(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6)
{
  __int64 v6; // r10
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rbp
  bool v13; // al
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rbx
  _QWORD *v17; // r13
  _QWORD *v18; // r15
  int v19; // eax
  void (__fastcall *v20)(__int128 *, __int64, __int64); // rax
  __int64 v22; // rcx
  __int64 *v23; // [rsp+0h] [rbp-98h]
  __int64 v24; // [rsp+0h] [rbp-98h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+30h] [rbp-68h] BYREF
  __int128 v30; // [rsp+38h] [rbp-60h] BYREF
  __m128i v31; // [rsp+48h] [rbp-50h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v6 = a2;
  v7 = a1;
  v8 = a5;
  v9 = a3;
  v32 = __readfsqword(0x28u);
  v10 = a6;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v15 = a2;
  }
  else
  {
    v11 = a2;
    v23 = a6 + 1;
    v25 = (a3 - 1) / 2;
    while ( 1 )
    {
      v16 = 2 * (v11 + 1);
      v17 = (_QWORD *)(a1 + 32 * (v11 + 1));
      v18 = (_QWORD *)(a1 + 16 * (v16 - 1));
      if ( !a6[3] )
        std::__throw_bad_function_call();
      v19 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a6[4])(
              v23,
              *(_QWORD *)(*a6 + 24LL * *v17 + 16) + 32LL * v17[1],
              *(_QWORD *)(*a6 + 24LL * *v18 + 16) + 32LL * v18[1]);
      if ( v19 )
        v13 = v19 > 0;
      else
        v13 = *v17 == *v18 ? v18[1] < v17[1] : *v18 < *v17;
      v14 = v16 - v13;
      v15 = v14;
      *(__m128i *)(a1 + 16 * v11) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v14));
      if ( v14 >= v25 )
        break;
      v11 = v14;
    }
    v10 = a6;
    v6 = a2;
    v7 = a1;
    v9 = a3;
    v8 = a5;
  }
  if ( (v9 & 1) == 0 && (v9 - 2) / 2 == v15 )
  {
    v22 = 16 * v15;
    v15 = 2 * v15 + 1;
    *(__m128i *)(v7 + v22) = _mm_loadu_si128((const __m128i *)(v7 + 16 * v15));
  }
  v31 = 0u;
  v29 = *v10;
  v20 = (void (__fastcall *)(__int128 *, __int64, __int64))v10[3];
  v30 = 0;
  if ( v20 )
  {
    v24 = v6;
    v20(&v30, (__int64)(v10 + 1), 2);
    v6 = v24;
    v31 = _mm_loadu_si128((const __m128i *)(v10 + 3));
  }
  sub_5A55C0(v7, v15, v6, a4, v8, (__int64)&v29);
  if ( v31.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v31.m128i_i64[0])(&v30, &v30, 3);
  return v32 - __readfsqword(0x28u);
}

