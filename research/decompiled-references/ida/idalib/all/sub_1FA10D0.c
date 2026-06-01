__int64 __fastcall sub_1FA10D0(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __m128i v8; // [rsp+0h] [rbp-28h]
  __m128i v9; // [rsp+0h] [rbp-28h]

  if ( a2 == 6 )
  {
    v8 = _mm_loadu_si128((const __m128i *)(*a3 & 0xFFFFFFFFFFFFFFFCLL));
    sub_1F9A420((__int64 *)a1, v8.m128i_i64[0], v8.m128i_i64[1]);
    return sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)((*a3 & 0xFFFFFFFFFFFFFFFCLL) + 16), *(_QWORD *)(a1 + 16));
  }
  else if ( a2 <= 6 )
  {
    if ( a2 == 1 )
      return sub_1F9A760((__int64 *)a1, (__int64 *)(*a3 & 0xFFFFFFFFFFFFFFFCLL), (__int64)a3, a4, a5, a6);
  }
  else if ( a2 == 7 )
  {
    v9 = _mm_loadu_si128((const __m128i *)(*a3 & 0xFFFFFFFFFFFFFFFCLL));
    sub_1F9A420((__int64 *)a1, v9.m128i_i64[0], v9.m128i_i64[1]);
    sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)((*a3 & 0xFFFFFFFFFFFFFFFCLL) + 16), *(_QWORD *)(a1 + 16));
    return sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)((*a3 & 0xFFFFFFFFFFFFFFFCLL) + 20), *(_QWORD *)(a1 + 16));
  }
  else if ( a2 == 8 )
  {
    return sub_183F100(a1 + 24, *a3 & 0xFFFFFFFFFFFFFFFCLL);
  }
  return result;
}
