__int64 __fastcall sub_530A50(__int64 a1)
{
  __int64 result; // rax
  __m128i si128; // xmm1

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ui_action_t___vtable;
  result = (unsigned int)dword_8C3188;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDDE0);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_BYTE *)(a1 + 156) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  dword_8C3188 = result + 1;
  *(_DWORD *)(a1 + 160) = result;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(__m128i *)(a1 + 112) = si128;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  return result;
}
