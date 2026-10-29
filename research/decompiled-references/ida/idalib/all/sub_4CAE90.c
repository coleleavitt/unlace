__int64 __fastcall sub_4CAE90(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1720);
  result = *(_DWORD *)(a1 + 936) & 0xC0;
  switch ( (_DWORD)result )
  {
    case 0x40:
      *(__m128i *)(v1 + 344) = _mm_load_si128((const __m128i *)off_2B2D100);
      *(__m128i *)(v1 + 360) = _mm_load_si128((const __m128i *)off_2B2D110);
      *(__m128i *)(v1 + 376) = _mm_load_si128((const __m128i *)off_2B2D120);
      *(__m128i *)(v1 + 392) = _mm_load_si128((const __m128i *)&off_2B2D130);
      *(__m128i *)(v1 + 408) = _mm_load_si128((const __m128i *)&off_2B2D140);
      *(__m128i *)(v1 + 424) = _mm_load_si128((const __m128i *)&unk_2B2D150);
      *(__m128i *)(v1 + 440) = _mm_load_si128((const __m128i *)off_2B2D160);
      *(__m128i *)(v1 + 456) = _mm_load_si128((const __m128i *)off_2B2D170);
      *(__m128i *)(v1 + 472) = _mm_load_si128((const __m128i *)&off_2B2D180);
      *(__m128i *)(v1 + 488) = _mm_load_si128((const __m128i *)off_2B2D190);
      *(__m128i *)(v1 + 504) = _mm_load_si128((const __m128i *)&off_2B2D1A0);
      break;
    case 0x80:
      *(__m128i *)(v1 + 344) = _mm_load_si128((const __m128i *)off_2B2D040);
      *(__m128i *)(v1 + 360) = _mm_load_si128((const __m128i *)off_2B2D050);
      *(__m128i *)(v1 + 376) = _mm_load_si128((const __m128i *)off_2B2D060);
      *(__m128i *)(v1 + 392) = _mm_load_si128((const __m128i *)&off_2B2D070);
      *(__m128i *)(v1 + 408) = _mm_load_si128((const __m128i *)&off_2B2D080);
      *(__m128i *)(v1 + 424) = _mm_load_si128((const __m128i *)&unk_2B2D090);
      *(__m128i *)(v1 + 440) = _mm_load_si128((const __m128i *)off_2B2D0A0);
      *(__m128i *)(v1 + 456) = _mm_load_si128((const __m128i *)off_2B2D0B0);
      *(__m128i *)(v1 + 472) = _mm_load_si128((const __m128i *)&off_2B2D0C0);
      *(__m128i *)(v1 + 488) = _mm_load_si128((const __m128i *)off_2B2D0D0);
      *(__m128i *)(v1 + 504) = _mm_load_si128((const __m128i *)&off_2B2D0E0);
      break;
    case 0:
      *(__m128i *)(v1 + 344) = _mm_load_si128((const __m128i *)off_2B2D1C0);
      *(__m128i *)(v1 + 360) = _mm_load_si128((const __m128i *)off_2B2D1D0);
      *(__m128i *)(v1 + 376) = _mm_load_si128((const __m128i *)off_2B2D1E0);
      *(__m128i *)(v1 + 392) = _mm_load_si128((const __m128i *)&off_2B2D1F0);
      *(__m128i *)(v1 + 408) = _mm_load_si128((const __m128i *)&off_2B2D200);
      *(__m128i *)(v1 + 424) = _mm_load_si128((const __m128i *)&unk_2B2D210);
      *(__m128i *)(v1 + 440) = _mm_load_si128((const __m128i *)off_2B2D220);
      *(__m128i *)(v1 + 456) = _mm_load_si128((const __m128i *)off_2B2D230);
      *(__m128i *)(v1 + 472) = _mm_load_si128((const __m128i *)&off_2B2D240);
      *(__m128i *)(v1 + 488) = _mm_load_si128((const __m128i *)off_2B2D250);
      *(__m128i *)(v1 + 504) = _mm_load_si128((const __m128i *)&off_2B2D260);
      break;
  }
  return result;
}
