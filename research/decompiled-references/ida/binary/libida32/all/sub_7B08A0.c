__int64 __fastcall sub_7B08A0(__int64 a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax

  v5 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)a2 = 1;
  v6 = v5 + 16;
  if ( v5 >= 0xFFFFFFFFFFFFFFF0LL )
  {
    v6 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 24) < v6 )
    {
      v9 = qvector_reserve(a2 + 8, v7, v5 + 16, 1);
      *(_QWORD *)(a2 + 8) = v9;
      memset((void *)(v9 + *(_QWORD *)(a2 + 16)), 0, v6 - *(_QWORD *)(a2 + 16));
    }
    else
    {
      memset((void *)(v7 + v5), 0, 0x10u);
    }
  }
  *(_QWORD *)(a2 + 16) = v6;
  result = *(_QWORD *)(a2 + 8);
  *(__m128i *)(result + v5) = _mm_loadu_si128(a3);
  return result;
}

