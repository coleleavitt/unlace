CoinWarmStartBasis *__fastcall ClpSimplex::getBasis(ClpSimplex *this)
{
  CoinWarmStartBasis *v2; // rbp
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // esi
  char v6; // cl
  char v7; // di
  int v8; // edx
  int v9; // eax
  __int64 v10; // rsi
  _BYTE *v11; // rdx
  char v12; // cl
  char v13; // r8
  __m128i si128; // [rsp+0h] [rbp-58h]
  int v16; // [rsp+10h] [rbp-48h]
  int v17; // [rsp+14h] [rbp-44h]
  __m128i v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+30h] [rbp-28h]
  int v20; // [rsp+34h] [rbp-24h]

  v2 = (CoinWarmStartBasis *)operator new(0x28u);
  CoinWarmStartBasis::CoinWarmStartBasis(v2);
  CoinWarmStartBasis::setSize(v2, *((_DWORD *)this + 27), *((_DWORD *)this + 26));
  v3 = *((_QWORD *)this + 33);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 26);
    v16 = 0;
    v17 = 2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_290880);
    if ( v4 > 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = (2 * v5) & 6;
        v7 = *(_BYTE *)(v3 + v5 + *((_DWORD *)this + 27));
        v8 = v5++ >> 2;
        *(_BYTE *)(*((_QWORD *)v2 + 4) + v8) = (si128.m128i_i8[4 * (v7 & 7)] << v6)
                                             | *(_BYTE *)(*((_QWORD *)v2 + 4) + v8) & ~(3 << v6);
        if ( *((_DWORD *)this + 26) <= v5 )
          break;
        v3 = *((_QWORD *)this + 33);
      }
    }
    v9 = *((_DWORD *)this + 27);
    v19 = 0;
    v20 = 3;
    v18 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
    if ( v9 > 0 )
    {
      v10 = 0;
      do
      {
        v11 = (_BYTE *)(*((_QWORD *)v2 + 3) + ((int)v10 >> 2));
        v12 = (2 * v10) & 6;
        v13 = *(_BYTE *)(*((_QWORD *)this + 33) + v10++);
        *v11 = (v18.m128i_i8[4 * (v13 & 7)] << v12) | *v11 & ~(3 << v12);
      }
      while ( *((_DWORD *)this + 27) > (int)v10 );
    }
  }
  return v2;
}

