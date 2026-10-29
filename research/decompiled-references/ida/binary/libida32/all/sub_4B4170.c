__int64 __fastcall sub_4B4170(__int64 a1)
{
  __m128i *v1; // rdx
  __int64 result; // rax

  v1 = *(__m128i **)(a1 + 1528);
  result = *(_DWORD *)(a1 + 768) & 0xC0;
  switch ( (_DWORD)result )
  {
    case 0x40:
      v1[21] = _mm_load_si128((const __m128i *)off_2B03140);
      v1[22] = _mm_load_si128((const __m128i *)off_2B03150);
      v1[23] = _mm_load_si128((const __m128i *)off_2B03160);
      v1[24] = _mm_load_si128((const __m128i *)&off_2B03170);
      v1[25] = _mm_load_si128((const __m128i *)&off_2B03180);
      v1[26] = _mm_load_si128((const __m128i *)&unk_2B03190);
      v1[27] = _mm_load_si128((const __m128i *)off_2B031A0);
      v1[28] = _mm_load_si128((const __m128i *)off_2B031B0);
      v1[29] = _mm_load_si128((const __m128i *)&off_2B031C0);
      v1[30] = _mm_load_si128((const __m128i *)off_2B031D0);
      v1[31] = _mm_load_si128((const __m128i *)&off_2B031E0);
      break;
    case 0x80:
      v1[21] = _mm_load_si128((const __m128i *)off_2B03080);
      v1[22] = _mm_load_si128((const __m128i *)off_2B03090);
      v1[23] = _mm_load_si128((const __m128i *)off_2B030A0);
      v1[24] = _mm_load_si128((const __m128i *)&off_2B030B0);
      v1[25] = _mm_load_si128((const __m128i *)&off_2B030C0);
      v1[26] = _mm_load_si128((const __m128i *)&unk_2B030D0);
      v1[27] = _mm_load_si128((const __m128i *)off_2B030E0);
      v1[28] = _mm_load_si128((const __m128i *)off_2B030F0);
      v1[29] = _mm_load_si128((const __m128i *)&off_2B03100);
      v1[30] = _mm_load_si128((const __m128i *)off_2B03110);
      v1[31] = _mm_load_si128((const __m128i *)&off_2B03120);
      break;
    case 0:
      v1[21] = _mm_load_si128((const __m128i *)off_2B03200);
      v1[22] = _mm_load_si128((const __m128i *)off_2B03210);
      v1[23] = _mm_load_si128((const __m128i *)off_2B03220);
      v1[24] = _mm_load_si128((const __m128i *)&off_2B03230);
      v1[25] = _mm_load_si128((const __m128i *)&off_2B03240);
      v1[26] = _mm_load_si128((const __m128i *)&unk_2B03250);
      v1[27] = _mm_load_si128((const __m128i *)off_2B03260);
      v1[28] = _mm_load_si128((const __m128i *)off_2B03270);
      v1[29] = _mm_load_si128((const __m128i *)&off_2B03280);
      v1[30] = _mm_load_si128((const __m128i *)off_2B03290);
      v1[31] = _mm_load_si128((const __m128i *)&off_2B032A0);
      break;
  }
  return result;
}

