unsigned __int64 __fastcall sub_1503FC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // r8
  __m128i v9; // xmm0
  __int64 v10; // rax
  unsigned __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]
  __m128i v14; // [rsp+10h] [rbp-28h] BYREF
  __int64 v15; // [rsp+20h] [rbp-18h]

  v8 = *(unsigned int *)(a1 + 56);
  v9 = _mm_loadu_si128((const __m128i *)&a7);
  v15 = a8;
  v10 = *(_QWORD *)(a1 + 48);
  v14 = v9;
  result = sub_1B1EEE0(
             *(_QWORD *)(*(_QWORD *)(v10 + 96) + 760LL),
             *(_QWORD *)(*(_QWORD *)(v10 + 96) + 608LL),
             a2,
             &v14,
             v8);
  if ( result > 1 )
  {
    v12 = *(unsigned int *)(a1 + 8);
    result &= ~1uLL;
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v13 = result;
      sub_2237220(a1, a1 + 16, v12 + 1, 8);
      v12 = *(unsigned int *)(a1 + 8);
      result = v13;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v12) = result;
    ++*(_DWORD *)(a1 + 8);
  }
  return result;
}
