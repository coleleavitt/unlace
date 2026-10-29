__int64 __fastcall sub_102FE40(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  __int64 v4; // rax
  bool v5; // zf
  __m128i si128; // xmm0
  __m128i v7; // xmm0
  int v8; // eax
  int v9; // eax

  if ( sub_990D60(a2, "o32") )
  {
    if ( sub_990D60(a2, "n32") )
    {
      v2 = sub_990D60(a2, "n64");
      result = 0;
      if ( !v2 )
      {
        *(_WORD *)(a1 + 24) = -32640;
        *(_QWORD *)(a1 + 112) = sub_21D5380();
        v8 = *(_DWORD *)(a1 + 260);
        if ( v8 == 3 )
        {
          *(_WORD *)(a1 + 24) = 16448;
          *(_QWORD *)(a1 + 112) = sub_21D5370();
          v9 = 7;
          *(_WORD *)(a1 + 286) = 16448;
          *(_WORD *)(a1 + 62) = 128;
        }
        else
        {
          *(_WORD *)(a1 + 286) = 16448;
          *(_WORD *)(a1 + 62) = 128;
          v9 = 2 * (v8 == 12) + 7;
        }
        *(_DWORD *)(a1 + 168) = v9;
        *(_DWORD *)(a1 + 140) = v9;
        *(_WORD *)(a1 + 30) = 16448;
        *(_QWORD *)(a1 + 144) = 0x700000007LL;
        *(_WORD *)(a1 + 8) = 16448;
        *(_DWORD *)(a1 + 136) = 8;
        sub_9CAB60(a1 + 568, a2);
        return 1;
      }
    }
    else
    {
      *(_WORD *)(a1 + 24) = -32640;
      v4 = sub_21D5380();
      v5 = *(_DWORD *)(a1 + 260) == 3;
      *(_QWORD *)(a1 + 112) = v4;
      if ( v5 )
      {
        *(_WORD *)(a1 + 24) = 16448;
        *(_QWORD *)(a1 + 112) = sub_21D5370();
      }
      *(_DWORD *)(a1 + 168) = 9;
      *(_WORD *)(a1 + 62) = 128;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385550);
      *(_WORD *)(a1 + 30) = 8224;
      *(_WORD *)(a1 + 8) = 8224;
      *(_WORD *)(a1 + 286) = 16448;
      *(__m128i *)(a1 + 136) = si128;
      sub_9CAB60(a1 + 568, a2);
      return 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 168) = 9;
    *(_QWORD *)(a1 + 112) = sub_21D5370();
    v7 = _mm_load_si128((const __m128i *)&xmmword_2385550);
    *(_WORD *)(a1 + 24) = 16448;
    *(_WORD *)(a1 + 8) = 8224;
    *(_WORD *)(a1 + 62) = 64;
    *(_WORD *)(a1 + 30) = 8224;
    *(_WORD *)(a1 + 286) = 8224;
    *(__m128i *)(a1 + 136) = v7;
    sub_9CAB60(a1 + 568, a2);
    return 1;
  }
  return result;
}

