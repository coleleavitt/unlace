__int64 __fastcall sub_1C480(__int64 a1)
{
  __int64 eah; // rax
  _QWORD *v2; // rax
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  eah = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = eah;
  *(_QWORD *)a1 = &off_C75B8;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = off_C75E8;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_1B600((__int64 *)(a1 + 120), (__int64)"$ dwarf_dfr");
  *(_QWORD *)(a1 + 160) = 40;
  *(_QWORD *)(a1 + 216) = a1;
  *(_DWORD *)(a1 + 168) = 0x4000000;
  *(_QWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 296) = 917563;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 152) = off_C8788;
  *(__m128i *)(a1 + 176) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"DWARF", (__m128i)(unsigned __int64)"DWARF");
  *(_QWORD *)(a1 + 248) = a1 + 232;
  *(_QWORD *)(a1 + 256) = a1 + 232;
  v2 = (_QWORD *)(a1 + 328);
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 2728) != v2 );
  *(_OWORD *)(a1 + 2760) = 0;
  *(_QWORD *)(a1 + 2728) = &off_C7610;
  *(_QWORD *)(a1 + 2736) = 0;
  *(_QWORD *)(a1 + 2744) = a1;
  *(_QWORD *)(a1 + 2752) = 0;
  *(_QWORD *)(a1 + 2792) = 0;
  *(_WORD *)(a1 + 2800) = 0;
  *(_OWORD *)(a1 + 2776) = -1;
  result = callui(1097, a1 + 152);
  if ( (_BYTE)result )
    return hook_event_listener(0, a1 + 2728, a1, 0);
  return result;
}
