/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75EF0
// Address: 0x00075EF0

//----- (00075EF0) --------------------------------------------------------
void __cdecl sub_75EF0(int a1, unsigned int a2)
{
  int prime; // eax
  int v3; // edx
  unsigned int v4; // esi
  unsigned int v5; // edi
  float v6; // xmm0_4
  unsigned int v7; // eax
  unsigned int v8; // ecx
  bool v9; // [esp+14h] [ebp-28h]
  float v10; // [esp+20h] [ebp-1Ch]

  prime = a2;
  v3 = a1;
  v4 = 2;
  if ( a2 != 1 )
  {
    if ( (a2 & (a2 - 1)) != 0 )
    {
      prime = std::__next_prime(a2);
      v3 = a1;
    }
    v4 = prime;
  }
  v5 = *(_DWORD *)(v3 + 4);
  if ( v4 > v5 )
    goto LABEL_6;
  if ( v4 < v5 )
  {
    v9 = v5 >= 3 && (v5 & (v5 - 1)) == 0;
    v6 = COERCE_DOUBLE(*(unsigned int *)(v3 + 12) | 0x4330000000000000LL) - 4.503599627370496e15;
    v10 = ceilf(v6 / *(float *)(v3 + 16));
    v7 = (__int64)v10;
    if ( v9 )
    {
      v3 = a1;
      if ( v7 >= 2 )
      {
        _BitScanReverse(&v8, v7 - 1);
        v7 = 1 << ((v8 ^ 0xE0) + 33);
      }
    }
    else
    {
      v7 = std::__next_prime((__int64)v10);
      v3 = a1;
    }
    if ( v4 < v7 )
      v4 = v7;
    if ( v4 < v5 )
LABEL_6:
      sub_75FF0((_DWORD *)v3, v4);
  }
}
