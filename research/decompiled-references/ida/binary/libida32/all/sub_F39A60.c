__int64 __fastcall sub_F39A60(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // al
  char v9; // bl
  unsigned __int64 v10; // rax
  __int64 result; // rax

  v8 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = a1;
  v9 = v8 & 0x1F;
  *(_BYTE *)(a1 + 16) = 12;
  v10 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v10 = a3;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 8) = v10;
  *(_BYTE *)(a1 + 17) = v9 | *(_BYTE *)(a1 + 17) & 0xE0;
  *(_WORD *)(a1 + 17) &= 0xF81Fu;
  *(_BYTE *)(a1 + 18) = (a5 << 7) | (8 * (a8 & 0xF));
  result = 8 * a8;
  *(_BYTE *)(a1 + 19) = a6 & 1 | *(_BYTE *)(a1 + 19) & 0xFE;
  if ( 8 * a8 > 0 )
  {
    result = 0;
    do
    {
      *(_QWORD *)(a1 + 8 * result + 64) = *(_QWORD *)(a7 + 8 * result);
      ++result;
    }
    while ( ((8 * a8) >> 3) - result > 0 );
  }
  *(_QWORD *)(a1 + 40) = a1 + 64;
  *(_QWORD *)(a1 + 48) = a8;
  return result;
}

