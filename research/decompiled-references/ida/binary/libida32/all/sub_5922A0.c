__int64 __fastcall sub_5922A0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // rbx

  v3 = a3;
  v4 = operator new(0x38u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
  *(_DWORD *)(v4 + 8) = v3;
  v6 = v4;
  *(_DWORD *)(v4 + 12) = -1;
  *(_QWORD *)(v4 + 32) = a2;
  *(__m128i *)(v4 + 16) = si128;
  *(_QWORD *)v4 = off_2B054E8;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(switch_dbctx(v3) + 1400) + 32LL;
  *(_QWORD *)(v6 + 48) = *(_QWORD *)(switch_dbctx(v3) + 1400) + 44LL;
  return v6;
}

