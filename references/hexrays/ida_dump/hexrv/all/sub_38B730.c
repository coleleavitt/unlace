__int64 __fastcall sub_38B730(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  *(_OWORD *)(a1 + 16) = 0;
  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = 0;
  if ( v2 == -1 )
  {
    result = get_func(v3);
    *(_QWORD *)a1 = result;
  }
  else
  {
    v4 = qvector_reserve(a1 + 8, 0, 1, 16);
    v5 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v4;
    *(__m128i *)(v4 + 16 * v5) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v2);
    ++*(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = 0;
    return 0;
  }
  return result;
}
