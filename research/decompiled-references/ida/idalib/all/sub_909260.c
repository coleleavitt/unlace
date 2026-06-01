__m128i *__fastcall sub_909260(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int128 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ebp
  int v14; // r11d
  bool v15; // r11
  unsigned int v16; // r11d
  unsigned int v17; // r12d
  unsigned __int64 v18; // rdx
  int v19; // edx
  unsigned int v20; // esi
  unsigned int v21; // r11d
  __m128i v22; // xmm0
  unsigned int v23; // eax
  _BOOL4 v25; // edx
  unsigned int v26; // r11d
  unsigned int v27; // edx
  unsigned int v28; // ebp

  v10 = DWORD1(a7);
  v11 = a7;
  v12 = DWORD2(a7);
  v13 = HIDWORD(a7);
  if ( a4 == 1 )
  {
    v15 = 1;
    a3 = 0;
  }
  else
  {
    if ( a4 == 2 && a3 && a2 == -1 )
    {
      a2 = 513;
      if ( a3 > 0x40000000 )
      {
LABEL_16:
        if ( 1LL << v11 < a3 + a2 )
        {
          v18 = (1LL << v11) + a3;
          if ( v18 > 0x7FFFFFFF )
          {
            v21 = 32;
            v20 = 31;
          }
          else
          {
            _BitScanReverse((unsigned int *)&v18, v18 - 1);
            v19 = v18 ^ 0x1F;
            v20 = 32 - v19;
            v21 = 33 - v19;
          }
LABEL_27:
          v25 = a9 > 5;
          if ( DWORD2(a7) > v21 )
            v12 = v21;
          v26 = DWORD1(a7) - v25;
          v27 = v20 + v25;
          if ( v26 > v20 )
            v10 = v27;
          if ( v11 < 0xA )
            v11 = 10;
          if ( a4 != 2 )
            goto LABEL_23;
          goto LABEL_34;
        }
LABEL_26:
        v21 = v11 + 1;
        v20 = v11;
        goto LABEL_27;
      }
      v14 = 513;
      a2 = 513;
      goto LABEL_11;
    }
    v15 = a3 <= 0x40000000;
  }
  if ( a2 <= 0x40000000 && v15 )
  {
    v14 = a2;
LABEL_11:
    v16 = a3 + v14;
    v17 = 6;
    if ( v16 > 0x3F )
    {
      _BitScanReverse(&v16, v16 - 1);
      v17 = 32 - (v16 ^ 0x1F);
    }
    if ( (unsigned int)a7 > v17 )
      v11 = v17;
LABEL_15:
    if ( !a3 )
      goto LABEL_26;
    goto LABEL_16;
  }
  if ( a2 != -1 )
    goto LABEL_15;
  if ( (unsigned int)a7 < 0xA )
    v11 = 10;
  if ( a4 != 2 )
    goto LABEL_23;
LABEL_34:
  if ( a9 - 1 <= 1 )
  {
    if ( v12 > 0x18 )
      v12 = 24;
    if ( v10 > 0x18 )
      v10 = 24;
    goto LABEL_25;
  }
LABEL_23:
  if ( a5 <= 1 && a9 - 3 <= 2 )
  {
    if ( HIDWORD(a7) > 6 )
      v13 = 6;
    if ( v13 < 4 )
      v13 = 4;
    v28 = v13 + 24;
    if ( v12 > v28 )
      v12 = v28;
  }
LABEL_25:
  DWORD2(a7) = v12;
  *(_QWORD *)&a7 = __PAIR64__(v10, v11);
  v22 = _mm_loadu_si128((const __m128i *)&a7);
  a1[1].m128i_i64[0] = a8;
  v23 = a9;
  *a1 = v22;
  a1[1].m128i_i32[2] = v23;
  return a1;
}
