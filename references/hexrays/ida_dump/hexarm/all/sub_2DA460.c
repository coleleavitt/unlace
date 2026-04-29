unsigned __int64 __fastcall sub_2DA460(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 *v9; // r14
  __int64 v10; // r15
  bool v12; // al
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 v15; // r13
  _QWORD *v16; // rbp
  _QWORD *v17; // r12
  int v18; // eax
  const __m128i *v20; // [rsp+8h] [rbp-A0h]
  __int64 v21; // [rsp+10h] [rbp-98h]
  const __m128i *v22; // [rsp+18h] [rbp-90h]
  __int64 v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v27[32]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v6 = a1;
  v7 = a3;
  v8 = (a3 - 1) / 2;
  v28 = __readfsqword(0x28u);
  v9 = (__int64 *)a6;
  if ( a2 >= v8 )
  {
    v14 = a2;
    v20 = (const __m128i *)(a6 + 8);
  }
  else
  {
    v25 = v7;
    v10 = a2;
    v21 = v8;
    v22 = (const __m128i *)(a6 + 8);
    while ( 1 )
    {
      v15 = 2 * (v10 + 1);
      v16 = (_QWORD *)(a1 + 32 * (v10 + 1));
      v17 = (_QWORD *)(a1 + 16 * (v15 - 1));
      if ( !*(_QWORD *)(a6 + 24) )
        std::__throw_bad_function_call();
      v20 = v22;
      v18 = (*(__int64 (__fastcall **)(const __m128i *, _QWORD, _QWORD))(a6 + 32))(
              v22,
              *(_QWORD *)(*(_QWORD *)a6 + 24LL * *v16 + 16) + (v16[1] << 6),
              *(_QWORD *)(*(_QWORD *)a6 + 24LL * *v17 + 16) + (v17[1] << 6));
      if ( v18 )
        v12 = v18 > 0;
      else
        v12 = *v16 == *v17 ? v17[1] < v16[1] : *v17 < *v16;
      v13 = v15 - v12;
      v14 = v13;
      *(__m128i *)(a1 + 16 * v10) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v13));
      if ( v13 >= v21 )
        break;
      v10 = v13;
    }
    v6 = a1;
    v9 = (__int64 *)a6;
    v7 = v25;
  }
  if ( (v7 & 1) == 0 && (v7 - 2) / 2 == v14 )
  {
    *(__m128i *)(v6 + 16 * v14) = _mm_loadu_si128((const __m128i *)(v6 + 16 * (2 * v14 + 1)));
    v14 = 2 * v14 + 1;
  }
  v26 = *v9;
  sub_2CE370((__int64)v27, v20);
  sub_2DA310(v6, v14, a2, a4, a5, (__int64)&v26);
  sub_66650((__int64)v27);
  return v28 - __readfsqword(0x28u);
}
