void __fastcall sub_F507B0(__m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r8

  LOBYTE(v6) = a2;
  v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = v6 & 7;
  if ( (a1->m128i_i8[5] & 1) != 0 )
  {
    v6 = *(_QWORD *)(v7 + 8) | v8;
    v8 = v6 & 7;
    v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v9 = v6 & 8;
  if ( (_DWORD)v9 )
  {
    v8 |= *(_QWORD *)(v7 + 24);
    v7 = *(_QWORD *)v7;
  }
  if ( *(_BYTE *)(v7 + 16) == 46 )
  {
    a6 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
    v10 = a6 & 7;
    if ( (a6 & 8) != 0 && (a6 &= 0xFFFFFFFFFFFFFFF0LL, v10 |= *(_QWORD *)(a6 + 24), (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v8 &= ~(v10 & 7);
      if ( ((v8 >> 4) & 3) == ((v10 >> 4) & 3) )
        v8 &= 0xFFFFFFFFFFFFFFCFLL;
      if ( ((v8 >> 6) & 7) == ((v10 >> 6) & 7) )
        v8 &= 0xFFFFFFFFFFFFFE3FLL;
      if ( (unsigned int)v8 >> 9 == (unsigned int)v10 >> 9 )
        v8 &= 0xFFFFFFFF000001FFLL;
      v9 = HIDWORD(v10);
      a6 = HIDWORD(v8);
      if ( (_DWORD)v9 == HIDWORD(v8) )
        v8 = (unsigned int)v8;
    }
    else
    {
      v9 = ~v10;
      v8 &= v9;
    }
  }
  sub_F4E2A0(a1, v7, v8, a3, v9, a6);
}

