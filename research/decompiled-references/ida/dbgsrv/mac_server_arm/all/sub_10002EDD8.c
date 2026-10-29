/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002EDD8
// Address: 0x000000010002EDD8

//----- (000000010002EDD8) ----------------------------------------------------
__int64 __fastcall sub_10002EDD8(__int64 a1)
{
  _WORD *v2; // x0

  *(_OWORD *)(a1 + 16) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_OWORD *)(a1 + 48) = 0u;
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 80) = 0u;
  *(_OWORD *)(a1 + 96) = 0u;
  *(_OWORD *)(a1 + 116) = xmmword_1000763A0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)a1 = &off_10009A4C8;
  *(_QWORD *)(a1 + 8) = code_highlight_block;
  *(_DWORD *)(a1 + 180) = 656876066;
  *(_WORD *)(a1 + 184) = 9052;
  *(_BYTE *)(a1 + 112) = 0;
  v2 = qvector_reserve((_QWORD *)(a1 + 64), nullptr, 3u, 1u);
  *(_QWORD *)(a1 + 64) = v2;
  *(_QWORD *)(a1 + 72) = 3;
  *v2 = 12079;
  *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) = 0;
  sub_10002EEE0(a1, "/*", "*/");
  sub_10002F014(a1, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 1);
  sub_10002F014(a1, "long|string|__int64|success|char|float|void", 2);
  sub_10002F014(a1, "BADADDR|BADSEL|MAXADDR", 3);
  return a1;
}
// 1000300C8: using guessed type __int64 __fastcall code_highlight_block();
// 1000763A0: using guessed type __int128 xmmword_1000763A0;
// 10009A4C8: using guessed type __int64 (__fastcall *off_10009A4C8)(__int64);
