__int64 __fastcall sub_56D920(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // rbx

  v4 = operator new(0x30u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
  *(_DWORD *)(v4 + 8) = a3;
  v6 = v4;
  *(_DWORD *)(v4 + 12) = -1;
  *(_QWORD *)(v4 + 32) = a2;
  *(__m128i *)(v4 + 16) = si128;
  *(_QWORD *)v4 = off_2B04B80;
  *(_QWORD *)(v4 + 40) = switch_dbctx(a3);
  return v6;
}

