__int64 __fastcall sub_CA5A0(__int64 a1, const __m128i *a2)
{
  __m128i *v2; // rax
  __m128i *v3; // rbx
  __int64 result; // rax

  if ( !dbg )
    return 0;
  v2 = (__m128i *)operator new(0x38u);
  v2->m128i_i32[2] = 0;
  v3 = v2;
  sub_C9FA0(v2, a2);
  if ( *(_QWORD *)(a1 + 8) )
  {
    **(_QWORD **)(a1 + 16) = v3;
    result = 1;
    *(_QWORD *)(a1 + 16) = v3;
  }
  else
  {
    *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
    return 1;
  }
  return result;
}

