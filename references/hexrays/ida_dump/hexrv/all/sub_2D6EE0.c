unsigned __int64 __fastcall sub_2D6EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 *v9; // r15
  __int64 v11; // r14
  bool v12; // al
  __int64 v13; // rbx
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 v16; // r8
  _QWORD *v17; // r12
  int v18; // eax
  const __m128i *v20; // [rsp+8h] [rbp-A0h]
  __int64 v21; // [rsp+10h] [rbp-98h]
  const __m128i *v22; // [rsp+18h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v27[32]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v28 = __readfsqword(0x28u);
  v9 = (__int64 *)a6;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v13 = a2;
    v20 = (const __m128i *)(a6 + 8);
  }
  else
  {
    v11 = a2;
    v21 = (a3 - 1) / 2;
    v22 = (const __m128i *)(a6 + 8);
    while ( 1 )
    {
      v14 = 2 * (v11 + 1);
      v15 = (_QWORD *)(a1 + 32 * (v11 + 1));
      v16 = 16 * (v14 - 1);
      v17 = (_QWORD *)(a1 + v16);
      if ( !*(_QWORD *)(a6 + 24) )
        std::__throw_bad_function_call();
      v20 = v22;
      v18 = (*(__int64 (__fastcall **)(const __m128i *, __int64, __int64))(a6 + 32))(
              v22,
              *(_QWORD *)(*(_QWORD *)a6 + 24LL * *v15 + 16) + 200LL * v15[1],
              *(_QWORD *)(*(_QWORD *)a6 + 24LL * *(_QWORD *)(a1 + v16) + 16) + 200LL * *(_QWORD *)(a1 + v16 + 8));
      if ( v18 )
        v12 = v18 > 0;
      else
        v12 = *v15 == *v17 ? v17[1] < v15[1] : *v17 < *v15;
      v13 = v14 - v12;
      *(__m128i *)(a1 + 16 * v11) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v13));
      if ( v13 >= v21 )
        break;
      v11 = v14 - v12;
    }
    v6 = a1;
    v8 = a3;
    v9 = (__int64 *)a6;
    v7 = a2;
  }
  if ( (v8 & 1) == 0 && (v8 - 2) / 2 == v13 )
  {
    *(__m128i *)(v6 + 16 * v13) = _mm_loadu_si128((const __m128i *)(v6 + 16 * (2 * v13 + 1)));
    v13 = 2 * v13 + 1;
  }
  v26 = *v9;
  sub_2CB7A0((__int64)v27, v20);
  sub_2D6D80(v6, v13, v7, a4, a5, (__int64)&v26);
  sub_628D0((__int64)v27);
  return v28 - __readfsqword(0x28u);
}
