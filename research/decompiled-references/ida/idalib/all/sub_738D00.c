__int64 __fastcall sub_738D00(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx

  result = a2 - a1[36].m128i_u16[6];
  if ( a1[34].m128i_i64[1] != result )
  {
    v3 = *(_QWORD *)(result + 32);
    if ( a1[34].m128i_i64[0] == result )
    {
      a1[34] = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(unsigned __int64)result);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(result + 24) + 32LL) = v3;
      *(_QWORD *)(v3 + 24) = *(_QWORD *)(result + 24);
      *(_QWORD *)(a1[34].m128i_i64[1] + 32) = result;
      *(_QWORD *)(result + 24) = a1[34].m128i_i64[1];
      *(_QWORD *)(a1[34].m128i_i64[0] + 24) = result;
      *(_QWORD *)(result + 32) = a1[34].m128i_i64[0];
      a1[34].m128i_i64[1] = result;
    }
  }
  v4 = *(_QWORD *)(result + 16);
  v5 = *(_QWORD *)(result + 8);
  v6 = *(_DWORD *)result & 0x3F;
  if ( v4 )
    *(_QWORD *)(v4 + 8) = v5;
  if ( v5 )
    *(_QWORD *)(v5 + 16) = v4;
  else
    a1[2].m128i_i64[*(_DWORD *)result & 0x3F] = v4;
  v7 = a1[2].m128i_i64[v6];
  *(_QWORD *)(result + 16) = v7;
  if ( v7 )
    *(_QWORD *)(v7 + 8) = result;
  *(_QWORD *)(result + 8) = 0;
  a1[2].m128i_i64[v6] = result;
  return result;
}
