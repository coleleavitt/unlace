unsigned __int64 __fastcall sub_2DAF80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 *v9; // r15
  __int64 v11; // r14
  bool v12; // al
  __int64 v13; // r9
  __int64 v14; // r13
  _QWORD *v15; // rbp
  _QWORD *v16; // r12
  int v17; // eax
  __int64 v18; // rbp
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
    v18 = a2;
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
      v16 = (_QWORD *)(a1 + 16 * (v14 - 1));
      if ( !*(_QWORD *)(a6 + 24) )
        std::__throw_bad_function_call();
      v20 = v22;
      v17 = (*(__int64 (__fastcall **)(const __m128i *, __int64, __int64))(a6 + 32))(
              v22,
              *(_QWORD *)(*(_QWORD *)a6 + 24LL * *v15 + 16) + 272LL * v15[1],
              *(_QWORD *)(*(_QWORD *)a6 + 24LL * *v16 + 16) + 272LL * v16[1]);
      if ( v17 )
        v12 = v17 > 0;
      else
        v12 = *v15 == *v16 ? v16[1] < v15[1] : *v16 < *v15;
      v13 = v14 - v12;
      *(__m128i *)(a1 + 16 * v11) = _mm_loadu_si128((const __m128i *)(a1 + 16 * v13));
      if ( v13 >= v21 )
        break;
      v11 = v14 - v12;
    }
    v6 = a1;
    v7 = a2;
    v9 = (__int64 *)a6;
    v8 = a3;
    v18 = v13;
  }
  if ( (v8 & 1) == 0 && (v8 - 2) / 2 == v18 )
  {
    *(__m128i *)(v6 + 16 * v18) = _mm_loadu_si128((const __m128i *)(v6 + 16 * (2 * v18 + 1)));
    v18 = 2 * v18 + 1;
  }
  v26 = *v9;
  sub_2CE1F0((__int64)v27, v20);
  sub_2DAE30(v6, v18, v7, a4, a5, (__int64)&v26);
  sub_66C50((__int64)v27);
  return v28 - __readfsqword(0x28u);
}
