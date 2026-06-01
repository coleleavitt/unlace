__int64 __fastcall drawable_graph_t::calc_bounds(__int64 a1, __int64 a2, const __m128i *a3)
{
  __m128i *v3; // rax
  __int32 v5; // ecx
  __int32 v6; // ecx
  __int32 v7; // edx

  v3 = *(__m128i **)(a1 + 16);
  if ( !*(_BYTE *)(a1 + 24) )
  {
    *v3 = _mm_loadu_si128(a3);
    *(_BYTE *)(a1 + 24) = 1;
    return 0;
  }
  if ( v3->m128i_i32[0] > a3->m128i_i32[0] )
    v3->m128i_i32[0] = a3->m128i_i32[0];
  v5 = a3->m128i_i32[2];
  if ( v3->m128i_i32[2] < v5 )
    v3->m128i_i32[2] = v5;
  v6 = a3->m128i_i32[1];
  if ( v3->m128i_i32[1] > v6 )
    v3->m128i_i32[1] = v6;
  v7 = a3->m128i_i32[3];
  if ( v3->m128i_i32[3] >= v7 )
    return 0;
  v3->m128i_i32[3] = v7;
  return 0;
}
