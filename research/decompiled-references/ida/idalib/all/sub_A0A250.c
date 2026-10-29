__int64 __fastcall sub_A0A250(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax

  sub_A09F20(a1, a2);
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72) & 1 | *(_BYTE *)(a1 + 72) & 0xFE;
  *(_WORD *)(a1 + 72) = *(_WORD *)(a2 + 72) & 0x1FE | *(_WORD *)(a1 + 72) & 0xFE01;
  *(_BYTE *)(a1 + 73) = *(_BYTE *)(a2 + 73) & 0xE | *(_BYTE *)(a1 + 73) & 0xF1;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 88) = a1 + 104;
  v2 = *(_QWORD *)(a2 + 88);
  if ( v2 == a2 + 104 )
  {
    *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
  }
  else
  {
    *(_QWORD *)(a1 + 88) = v2;
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  }
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 88) = a2 + 104;
  *(_QWORD *)(a2 + 96) = 0;
  *(_BYTE *)(a2 + 104) = 0;
  *(_QWORD *)(a1 + 120) = a1 + 136;
  v3 = *(_QWORD *)(a2 + 120);
  if ( v3 == a2 + 136 )
  {
    *(__m128i *)(a1 + 136) = _mm_loadu_si128((const __m128i *)(a2 + 136));
  }
  else
  {
    *(_QWORD *)(a1 + 120) = v3;
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  }
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  *(_BYTE *)(a2 + 136) = 0;
  *(_QWORD *)(a2 + 120) = a2 + 136;
  *(_QWORD *)(a2 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  v4 = *(_QWORD *)(a2 + 160);
  *(_QWORD *)(a2 + 152) = 0;
  v5 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = v4;
  v6 = *(_QWORD *)(a2 + 168);
  *(_QWORD *)(a2 + 160) = v5;
  result = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(a1 + 168) = v6;
  *(_QWORD *)(a2 + 168) = result;
  return result;
}
