__int64 __fastcall MD5Final(__m128i *a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdi

  v4 = a2 + 24;
  v5 = (*(_DWORD *)(v4 - 8) >> 3) & 0x3F;
  v6 = 63 - v5;
  v7 = v4 + v5;
  *(_BYTE *)v7 = 0x80;
  v8 = v7 + 1;
  if ( (unsigned int)v6 > 7 )
  {
    v10 = 55 - v5;
    if ( (unsigned int)v10 >= 8 )
    {
      *(_QWORD *)(v7 + 1) = 0;
      *(_QWORD *)(v8 + (unsigned int)v10 - 8) = 0;
      v7 = (v7 + 9) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = ((_DWORD)v8 - (_DWORD)v7 + (_DWORD)v10) & 0xFFFFFFF8;
      if ( (unsigned int)v10 >= 8 )
      {
        v10 = (unsigned int)v10 & 0xFFFFFFF8;
        v12 = 0;
        do
        {
          v13 = v12;
          v12 += 8;
          *(_QWORD *)(v7 + v13) = 0;
        }
        while ( v12 < (unsigned int)v10 );
      }
    }
    else if ( ((55 - (_BYTE)v5) & 4) != 0 )
    {
      *(_DWORD *)(v7 + 1) = 0;
      *(_DWORD *)(v8 + v10 - 4) = 0;
    }
    else if ( (_DWORD)v10 )
    {
      *(_BYTE *)(v7 + 1) = 0;
      if ( ((55 - (_BYTE)v5) & 2) != 0 )
        *(_WORD *)(v8 + v10 - 2) = 0;
    }
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v9 = 0;
      do
      {
        v7 = v9++;
        *(_BYTE *)(v8 + v7) = 0;
      }
      while ( v9 < (unsigned int)v6 );
    }
    MD5Transform(a2, v4, v7, v6);
    *(_OWORD *)(a2 + 24) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_OWORD *)(v4 + 16) = 0;
    *(_OWORD *)(v4 + 32) = 0;
  }
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 16);
  MD5Transform(a2, v4, v7, v10);
  *a1 = _mm_loadu_si128((const __m128i *)a2);
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 80) = 0;
  memset(
    (void *)((a2 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 88) >> 3));
  return 0;
}

