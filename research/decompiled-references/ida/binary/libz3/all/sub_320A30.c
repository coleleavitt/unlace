__int64 __fastcall sub_320A30(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  __int64 v4; // r12
  void *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 856LL);
  if ( *a2 != result && result != a2[1] )
  {
    *(_QWORD *)(a1 + 24) = _mm_add_epi32(
                             _mm_loadl_epi64((const __m128i *)(a1 + 24)),
                             _mm_loadl_epi64((const __m128i *)&qword_18B5FE8)).m128i_u64[0];
    v3 = (_QWORD *)sub_186B270(0x18u);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = v3;
    v3[1] = *a2;
    v3[2] = a2[1];
    *v3 = 0x200000002LL;
    v6 = sub_2FF8B0(v4);
    v7 = sub_15EC240(*(_QWORD *)(v4 + 8), 2);
    sub_E5EBF0(v6, v7);
    return sub_186B220(v5);
  }
  return result;
}

