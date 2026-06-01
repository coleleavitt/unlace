__int64 __fastcall sub_15ED1C0(__int64 a1, __int64 a2, int a3)
{
  __int16 v3; // cx
  __int16 v4; // ax
  __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  if ( a2 )
  {
    if ( (a3 & 1) != 0 )
      *(_OWORD *)(a1 + 40) = 0;
    else
      *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)(a2 + 40));
    v3 = 1;
    *(_WORD *)(a1 + 12) = *(_WORD *)(a2 + 12) + 1;
    v4 = *(_WORD *)(a2 + 18);
    *(_WORD *)(a1 + 20) = 0;
    *(_WORD *)(a1 + 18) = v4;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
    v5 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a1 + 32) = v5;
    if ( v5 )
      v3 = *(_WORD *)(v5 + 14);
    *(_WORD *)(a1 + 16) = v3;
    v6 = a3;
    v7 = *(_DWORD *)(a2 + 8);
    if ( (a3 & 0xDE1) == 0 )
    {
      v6 = a3 | v7 & 0x20000;
      *(_DWORD *)(a1 + 8) = v6;
      v7 = *(_DWORD *)(a2 + 8);
    }
    if ( (v7 & 0x4000000) != 0 )
    {
      v6 |= 0x4000000u;
      *(_DWORD *)(a1 + 8) = v6;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 12) = 0x100010000LL;
    *(_WORD *)(a1 + 20) = 0;
    LOBYTE(v6) = a3;
    *(_OWORD *)(a1 + 24) = 0;
    *(_OWORD *)(a1 + 40) = 0;
    *(_OWORD *)(a1 + 56) = 0;
  }
  if ( (a3 & 1) != 0 )
    *(_QWORD *)(a1 + 24) = a1;
  if ( (v6 & 0x21) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v9 = 1;
    if ( v8 )
      v9 = *(_WORD *)(v8 + 14);
    *(_WORD *)(a1 + 14) = v9;
    *(_QWORD *)(a1 + 32) = a1;
    *(_WORD *)(a1 + 16) = 1;
  }
  if ( (a3 & 2) != 0 )
    *(_QWORD *)(a1 + 40) = a1;
  if ( (a3 & 4) != 0 )
    *(_QWORD *)(a1 + 48) = a1;
  if ( (a3 & 0x40) != 0 )
    *(_QWORD *)(a1 + 56) = a1;
  if ( (a3 & 0x80u) != 0 )
    *(_QWORD *)(a1 + 64) = a1;
  result = a3 & 0x8000100;
  if ( (_DWORD)result == 256 )
    ++*(_WORD *)(a1 + 18);
  if ( (a3 & 8) != 0 )
  {
    *(_QWORD *)(a1 + 72) = a1;
    if ( (a3 & 0x100) == 0 )
    {
      if ( (a3 & 0x20) == 0 || (result = *(unsigned int *)(a2 + 8), (result & 0x20) == 0) && (_DWORD)result != 8 )
      {
        if ( (a3 & 0x40000) == 0 )
        {
          result = *(_QWORD *)(a1 + 32);
          if ( result )
          {
            ++*(_WORD *)(result + 14);
            ++*(_WORD *)(a1 + 16);
          }
        }
      }
    }
  }
  return result;
}
