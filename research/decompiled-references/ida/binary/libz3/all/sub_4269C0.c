void __fastcall sub_4269C0(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i si128; // xmm2
  __m128i v7[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( a2 )
  {
    sub_1872CE0("");
    sub_1873130(107, 174);
  }
  v3 = *(_QWORD *)(a3 + 8);
  if ( v3 )
  {
    v7[0] = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
    sub_426580(a1, (_QWORD *)v3, 1);
    v4 = *(_QWORD *)(a1 + 16);
    if ( !v4 )
    {
      si128 = _mm_load_si128(v7);
      *(_QWORD *)(a1 + 16) = v3;
      *(__m128i *)(v3 + 24) = si128;
      return;
    }
    if ( *(_BYTE *)a1 )
    {
      if ( v3 == v4 )
      {
        *(__m128i *)(v3 + 24) = _mm_load_si128(v7);
        return;
      }
    }
    else
    {
      v4 = *(_QWORD *)(v4 + 24);
      if ( v3 == v4 )
      {
        *(__m128i *)(v3 + 24) = _mm_load_si128(v7);
        return;
      }
    }
    v5 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v3 + 24) = v5;
    *(_QWORD *)(v5 + 32) = v3;
    *(_QWORD *)(v4 + 24) = v3;
    *(_QWORD *)(v3 + 32) = v4;
  }
}

