__int64 __fastcall sub_6A7180(__int64 a1, __m128i *a2, _QWORD *a3)
{
  __int64 i; // rax
  __int64 v5; // rax
  __m128i si128; // xmm0
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  __m128i v10[3]; // [rsp+0h] [rbp-38h] BYREF

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x800000000LL;
  for ( i = a2->m128i_i64[1]; ; a2->m128i_i64[1] = i )
  {
    *a3 |= i;
    v8 = sub_B109D0(a2->m128i_i64[0]);
    if ( v8 == (a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) )
      break;
    v5 = *(unsigned int *)(a1 + 8);
    si128 = _mm_loadu_si128(a2);
    if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v5 + 1) )
    {
      v10[0] = si128;
      sub_25D6060(a1, a1 + 16, v5 + 1, 16);
      v5 = *(unsigned int *)(a1 + 8);
      si128 = _mm_load_si128(v10);
    }
    *(__m128i *)(*(_QWORD *)a1 + 16 * v5) = si128;
    v7 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    ++*(_DWORD *)(a1 + 8);
    i = v8 & 7;
    if ( (v8 & 8) != 0 )
    {
      i |= *(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL));
      v7 = (_QWORD *)*v7;
    }
    a2->m128i_i64[0] = (__int64)v7;
  }
  return a1;
}

