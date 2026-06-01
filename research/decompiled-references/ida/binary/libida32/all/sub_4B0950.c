unsigned __int64 __fastcall sub_4B0950(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __m128i v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1480);
  if ( a3 )
  {
    *(_QWORD *)(v3 + 2336) = 0;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = v5 + *(unsigned int *)(a2 + 4);
    v7 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v6);
    *(_QWORD *)(v3 + 2336) = unpack_dq(&v7, v6);
  }
  return v8 - __readfsqword(0x28u);
}

