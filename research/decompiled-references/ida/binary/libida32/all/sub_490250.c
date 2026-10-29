unsigned __int64 __fastcall sub_490250(
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
  __int64 v9; // rdx
  __int64 *v10; // r15
  __int64 v12; // r14
  bool v13; // al
  __int64 v14; // rbx
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  _QWORD *v17; // r12
  int v18; // eax
  const __m128i *v20; // [rsp+8h] [rbp-A0h]
  __int64 v21; // [rsp+10h] [rbp-98h]
  const __m128i *v22; // [rsp+18h] [rbp-90h]
  __int64 v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v27[16]; // [rsp+48h] [rbp-60h] BYREF
  void (__fastcall *v28)(_BYTE *, _BYTE *, __int64); // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = a3 - 1;
  v29 = __readfsqword(0x28u);
  v10 = (__int64 *)a6;
  if ( a2 >= v9 / 2 )
  {
    v14 = a2;
    v20 = (const __m128i *)(a6 + 8);
  }
  else
  {
    v25 = v8;
    v12 = a2;
    v21 = v9 / 2;
    v22 = (const __m128i *)(a6 + 8);
    while ( 1 )
    {
      v15 = 2 * (v12 + 1);
      v16 = (_QWORD *)(a1 + 32 * (v12 + 1));
      v17 = (_QWORD *)(a1 + 16 * (v15 - 1));
      if ( !*(_QWORD *)(a6 + 24) )
        std::__throw_bad_function_call();
      v20 = v22;
      v18 = (*(__int64 (__fastcall **)(const __m128i *, __int64, __int64))(a6 + 32))(
              v22,
              *(_QWORD *)(*(_QWORD *)a6 + 24LL * *v16 + 16) + 424LL * v16[1],
              *(_QWORD *)(*(_QWORD *)a6 + 24LL * *v17 + 16) + 424LL * v17[1]);
      if ( v18 )
        v13 = v18 > 0;
      else
        v13 = *v16 == *v17 ? v17[1] < v16[1] : *v17 < *v16;
      v14 = v15 - v13;
      *(__m128i *)(a1 + 16 * v12) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v14));
      if ( v14 >= v21 )
        break;
      v12 = v15 - v13;
    }
    v6 = a1;
    v8 = v25;
    v10 = (__int64 *)a6;
    v7 = a2;
  }
  if ( (v8 & 1) == 0 && (v8 - 2) / 2 == v14 )
  {
    *(__m128i *)(v6 + 16 * v14) = _mm_loadu_si128((const __m128i *)(v6 + 16 * (2 * v14 + 1)));
    v14 = 2 * v14 + 1;
  }
  v26 = *v10;
  sub_48B040((__int64)v27, v20);
  sub_490100(v6, v14, v7, a4, a5, (__int64)&v26);
  if ( v28 )
    v28(v27, v27, 3);
  return v29 - __readfsqword(0x28u);
}

