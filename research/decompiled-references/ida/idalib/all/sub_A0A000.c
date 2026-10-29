__int64 __fastcall sub_A0A000(__int64 a1, __int64 a2)
{
  char v2; // dl
  char v3; // al
  char v4; // al
  char v5; // al
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx

  *(_QWORD *)a1 = a1 + 16;
  if ( *(_QWORD *)a2 == a2 + 16 )
  {
    *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(a2 + 16));
  }
  else
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  }
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v2 = *(_BYTE *)(a2 + 32);
  *(_QWORD *)a2 = a2 + 16;
  *(_QWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 16) = 0;
  v3 = v2 & 1 | *(_BYTE *)(a1 + 32) & 0xFE;
  *(_BYTE *)(a1 + 32) = v3;
  v4 = *(_BYTE *)(a2 + 32) & 2 | v3 & 0xFD;
  *(_BYTE *)(a1 + 32) = v4;
  v5 = *(_BYTE *)(a2 + 32) & 4 | v4 & 0xFB;
  *(_BYTE *)(a1 + 32) = v5;
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32) & 8 | v5 & 0xF7;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v6 = *(_QWORD *)(a2 + 40);
  result = a2 + 56;
  if ( v6 == a2 + 56 )
  {
    *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
  }
  else
  {
    *(_QWORD *)(a1 + 40) = v6;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = result;
  *(_QWORD *)(a2 + 48) = 0;
  *(_BYTE *)(a2 + 56) = 0;
  *(_BYTE *)(a1 + 104) = 0;
  if ( *(_BYTE *)(a2 + 104) )
  {
    *(_QWORD *)(a1 + 72) = a1 + 88;
    v8 = *(_QWORD *)(a2 + 72);
    result = a2 + 88;
    if ( v8 == a2 + 88 )
    {
      *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
    }
    else
    {
      *(_QWORD *)(a1 + 72) = v8;
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
    }
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a2 + 72) = result;
    *(_QWORD *)(a2 + 80) = 0;
    *(_BYTE *)(a2 + 88) = 0;
    *(_BYTE *)(a1 + 104) = 1;
  }
  *(_BYTE *)(a1 + 144) = 0;
  if ( *(_BYTE *)(a2 + 144) )
  {
    *(_QWORD *)(a1 + 112) = a1 + 128;
    v9 = *(_QWORD *)(a2 + 112);
    result = a2 + 128;
    if ( v9 == a2 + 128 )
    {
      *(__m128i *)(a1 + 128) = _mm_loadu_si128((const __m128i *)(a2 + 128));
    }
    else
    {
      *(_QWORD *)(a1 + 112) = v9;
      *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
    }
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 120);
    *(_QWORD *)(a2 + 112) = result;
    *(_QWORD *)(a2 + 120) = 0;
    *(_BYTE *)(a2 + 128) = 0;
    *(_BYTE *)(a1 + 144) = 1;
  }
  return result;
}
