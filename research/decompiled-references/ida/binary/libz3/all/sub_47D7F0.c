__int64 __fastcall sub_47D7F0(_QWORD *a1, const __m128i *a2)
{
  __int64 v3; // rsi
  _QWORD *v5; // rdi
  __m128i v6; // xmm0
  __int64 result; // rax

  v3 = a2->m128i_i64[1];
  v5 = a1 + 1;
  *(v5 - 1) = v3;
  sub_16669D0(v5, v3);
  sub_16744A0(a1 + 3, *a1);
  *((_DWORD *)a1 + 12) = 0;
  v6 = _mm_loadu_si128(a2);
  *(__m128i *)(a1 + 7) = v6;
  if ( v6.m128i_i64[0] )
    ++*(_DWORD *)(v6.m128i_i64[0] + 8);
  a1[10] = 0;
  sub_4B0740(a1 + 11, *a1);
  *((_DWORD *)a1 + 36) = 10;
  result = sub_3D4AD0(a1[7]);
  *((_DWORD *)a1 + 18) = result;
  return result;
}

