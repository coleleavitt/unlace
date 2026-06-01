__int64 __fastcall sub_C9AF10(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 v17; // al
  __int64 v19; // rdx
  __int64 i; // rax

  v10 = 8 * a3 + 40;
  v11 = a3;
  v12 = a1[294];
  a1[304] += v10;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= (unsigned __int64)(v10 + v13) && v12 )
    a1[294] = v10 + v13;
  else
    v13 = sub_986170((__int64)(a1 + 294), v10, v10, 3, a5, a6);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x2A;
  if ( unk_2CD7484 )
    sub_EE9B50(42);
  *(_WORD *)(v13 + 1) &= 0xF801u;
  *(_QWORD *)(v13 + 8) = a4;
  *(_DWORD *)(v13 + 16) = v11;
  *(_QWORD *)(v13 + 20) = a6;
  *(_QWORD *)(v13 + 32) = a5;
  if ( v11 )
  {
    v14 = v11 - 1;
    if ( (a2 >= v13 + 56 || v13 + 40 >= a2 + 16) && v14 > 1 )
    {
      v15 = 0;
      do
      {
        *(__m128i *)(v13 + v15 + 40) = _mm_loadu_si128((const __m128i *)(a2 + v15));
        v15 += 16;
      }
      while ( v15 != 16LL * (v11 >> 1) );
      v16 = v11 & 0xFFFFFFFE;
      if ( v11 != (_DWORD)v16 )
        *(_QWORD *)(v13 + 8 * v16 + 40) = *(_QWORD *)(a2 + 8 * v16);
    }
    else
    {
      v19 = v14;
      for ( i = 0; ; ++i )
      {
        *(_QWORD *)(v13 + 8 * i + 40) = *(_QWORD *)(a2 + 8 * i);
        if ( v19 == i )
          break;
      }
    }
  }
  v17 = sub_B65BD0(v13);
  *(_BYTE *)(v13 + 1) = (v17 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v17 >> 2) & 7;
  return v13;
}
