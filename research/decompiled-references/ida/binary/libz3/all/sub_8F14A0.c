__int64 __fastcall sub_8F14A0(const __m128i *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int32 v6; // edx
  int v7; // ebp
  unsigned int v8; // eax
  unsigned int *v9; // r12
  int v10; // ebp

  result = a1[591].m128i_u32[3];
  if ( (unsigned int)result >= a1[591].m128i_i32[2] )
  {
    v2 = a1[557].m128i_i64[1];
    v3 = v2 ? *(_DWORD *)(v2 - 4) : 0;
    if ( a1[558].m128i_i32[3] != v3
      && a1[559].m128i_i32[0] <= 0
      && ((v4 = a1[555].m128i_i64[1]) != 0 && *(_DWORD *)(v4 - 4)
       || (v5 = a1[556].m128i_i64[0]) != 0 && *(_DWORD *)(v5 - 4)) )
    {
      a1[559].m128i_i32[0] = 0;
      if ( v2 )
        v6 = *(_DWORD *)(v2 - 4);
      else
        v6 = 0;
      a1[558].m128i_i32[3] = v6;
      if ( (_DWORD)result )
      {
        v8 = result - 1;
        v9 = (unsigned int *)(a1[593].m128i_i64[0] + 12LL * v8);
        v10 = sub_8F0DC0((__int64)a1, &a1[555].m128i_i64[1], *(_DWORD *)(a1[592].m128i_i64[1] + 20LL * v8 + 8));
        result = v10 + (unsigned int)sub_8F0DC0((__int64)a1, a1[556].m128i_i64, *v9);
      }
      else
      {
        v7 = sub_8F0DC0((__int64)a1, &a1[555].m128i_i64[1], 0);
        result = v7 + (unsigned int)sub_8F0DC0((__int64)a1, a1[556].m128i_i64, 0);
      }
      a1[6].m128i_i64[0] = _mm_add_epi32(
                             _mm_loadl_epi64(a1 + 6),
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(1u), _mm_cvtsi32_si128(result))).m128i_u64[0];
    }
  }
  return result;
}

