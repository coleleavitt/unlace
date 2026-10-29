__int64 __fastcall sub_50DDC0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v6; // rbx
  __int64 v7; // rbp

  v4 = operator new(0x38u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
  *(_DWORD *)(v4 + 8) = a3;
  v6 = v4;
  *(_DWORD *)(v4 + 12) = -1;
  *(_QWORD *)(v4 + 32) = a2;
  *(__m128i *)(v4 + 16) = si128;
  *(_QWORD *)v4 = off_2B03C98;
  if ( a3 == -1 )
    v7 = 0;
  else
    v7 = *(_QWORD *)(switch_dbctx(a3) + 1592);
  if ( !*(_DWORD *)(v7 + 64) )
    *(_DWORD *)(v7 + 64) = sub_50CCA0((__int64 *)v7);
  *(_QWORD *)(v6 + 40) = *(_QWORD *)(v7 + 72);
  *(_DWORD *)(v6 + 48) = *(_DWORD *)(v7 + 80);
  return v6;
}

