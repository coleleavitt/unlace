__int64 __fastcall sub_93510(__m128i *a1, __int64 a2)
{
  __int64 v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int i; // eax
  __int64 v10; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdi

  v4 = a2 + 24;
  v5 = (*(_DWORD *)(v4 - 8) >> 3) & 0x3F;
  v6 = 63 - v5;
  v7 = v4 + v5;
  *(_BYTE *)v7 = 0x80;
  v8 = v7 + 1;
  if ( 63 - v5 > 7 )
  {
    v12 = 55 - v5;
    if ( (unsigned int)v12 >= 8 )
    {
      *(_QWORD *)(v7 + 1) = 0;
      *(_QWORD *)(v8 + (unsigned int)v12 - 8) = 0;
      v13 = (v7 + 9) & 0xFFFFFFFFFFFFFFF8LL;
      v14 = (v8 - v13 + v12) & 0xFFFFFFF8;
      if ( v14 >= 8 )
      {
        v15 = v14 & 0xFFFFFFF8;
        v16 = 0;
        do
        {
          v17 = v16;
          v16 += 8;
          *(_QWORD *)(v13 + v17) = 0;
        }
        while ( v16 < v15 );
      }
    }
    else if ( ((55 - (_BYTE)v5) & 4) != 0 )
    {
      *(_DWORD *)(v7 + 1) = 0;
      *(_DWORD *)(v8 + v12 - 4) = 0;
    }
    else if ( (_DWORD)v12 )
    {
      *(_BYTE *)(v7 + 1) = 0;
      if ( ((55 - (_BYTE)v5) & 2) != 0 )
        *(_WORD *)(v8 + v12 - 2) = 0;
    }
  }
  else
  {
    if ( v6 )
    {
      for ( i = 0; i < v6; ++i )
      {
        v10 = i;
        *(_BYTE *)(v8 + v10) = 0;
      }
    }
    sub_92BE0((__m128i *)a2, (_DWORD *)v4);
    *(_OWORD *)(a2 + 24) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_OWORD *)(v4 + 16) = 0;
    *(_OWORD *)(v4 + 32) = 0;
  }
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 16);
  sub_92BE0((__m128i *)a2, (_DWORD *)v4);
  *a1 = _mm_loadu_si128((const __m128i *)a2);
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 80) = 0;
  memset(
    (void *)((a2 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a2 - (((_DWORD)a2 + 8) & 0xFFFFFFF8) + 88) >> 3));
  return 0;
}

