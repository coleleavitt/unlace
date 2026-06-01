/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428E80
// Address: 0x0000000000428E80

//----- (0000000000428E80) ----------------------------------------------------
__int64 __fastcall sub_428E80(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __m128i *v8; // rsi
  __m128i si128; // xmm0
  __m128i *v10; // rax

  if ( *a3 > 0 && (v5 = a3[2]) != 0 )
  {
    v6 = a4 + *a3;
    if ( a4 < v5 )
    {
      return sub_428C40(a1, (void **)a2, v6);
    }
    else
    {
      sub_4172B0(a2, "bad offset %08x", v6);
      return 0;
    }
  }
  else
  {
    v8 = *(__m128i **)a2;
    if ( *(_QWORD *)(a2 + 16) <= 0x11u )
    {
      v10 = (__m128i *)sub_481540(a2, v8, 0x12u, 1u);
      *(_QWORD *)a2 = v10;
      v8 = v10;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_48F530);
    *(_QWORD *)(a2 + 8) = 18;
    v8[1].m128i_i8[0] = 125;
    *v8 = si128;
    *(_BYTE *)(*(_QWORD *)a2 + 17LL) = 0;
    return 0;
  }
}
// 48F530: using guessed type __int128 xmmword_48F530;
