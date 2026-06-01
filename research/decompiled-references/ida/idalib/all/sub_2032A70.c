__int64 (__fastcall **__fastcall sub_2032A70(__int64 a1, __int64 a2, char a3))()
{
  __int64 (__fastcall **result)(); // rax
  __m128 v4; // xmm0
  __m128i si128; // xmm0
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-10h] BYREF

  v6 = nullptr;
  result = &off_2BE5CE8;
  *(_QWORD *)a1 = &off_2BE5CE8;
  if ( a2 )
  {
    result = *(__int64 (__fastcall ***)())(a2 + 40);
    v6 = result;
  }
  v6 = (__int64 (__fastcall **)())a2;
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 25) = a3;
  v4 = _mm_loadh_ps((const double *)&v6);
  *(_QWORD *)(a1 + 48) = 0;
  *(__m128 *)(a1 + 8) = v4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(__m128i *)(a1 + 240) = si128;
  *(_DWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 296) = 0;
  *(__m128i *)(a1 + 304) = si128;
  *(_DWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(__m128i *)(a1 + 336) = si128;
  *(_DWORD *)(a1 + 352) = 0;
  return result;
}
