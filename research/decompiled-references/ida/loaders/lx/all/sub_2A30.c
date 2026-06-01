__int64 __fastcall sub_2A30(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edx
  __int64 v7; // rsi
  __m128i si128; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int16 v17; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v4 = sub_25C0(a3, &v17, nullptr);
  v5 = 0;
  if ( v4 != -1 )
  {
    if ( v17 == 22604 )
    {
      v7 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x16 )
      {
        v11 = qvector_reserve(a1, v7, 23, 1);
        *a1 = v11;
        v7 = v11;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_8D40);
      a1[1] = 23;
      *(__m128i *)v7 = si128;
      *(_QWORD *)(v7 + 14) = 0x29584C2820656C62LL;
      *(_BYTE *)(*a1 + 22) = 0;
      v9 = *a2;
      if ( (unsigned __int64)a2[2] <= 6 )
      {
        v10 = qvector_reserve(a2, v9, 7, 1);
        *a2 = v10;
        v9 = v10;
      }
      a2[1] = 7;
      *(_WORD *)(v9 + 4) = 25456;
      v5 = 32775;
      *(_DWORD *)v9 = 1635018093;
      *(_BYTE *)(*a2 + 6) = 0;
    }
    else if ( v17 == 17740 )
    {
      v12 = *a1;
      if ( (unsigned __int64)a1[2] <= 0x16 )
      {
        v15 = qvector_reserve(a1, v12, 23, 1);
        *a1 = v15;
        v12 = v15;
      }
      v13 = _mm_load_si128((const __m128i *)&xmmword_8D50);
      a1[1] = 23;
      *(__m128i *)v12 = v13;
      *(_QWORD *)(v12 + 14) = 0x29454C2820656C62LL;
      *(_BYTE *)(*a1 + 22) = 0;
      v14 = *a2;
      if ( (unsigned __int64)a2[2] <= 6 )
      {
        v16 = qvector_reserve(a2, v14, 7, 1);
        *a2 = v16;
        v14 = v16;
      }
      a2[1] = 7;
      v5 = 32776;
      *(_DWORD *)v14 = 1635018093;
      *(_WORD *)(v14 + 4) = 25456;
      *(_BYTE *)(*a2 + 6) = 0;
    }
  }
  return v5;
}

