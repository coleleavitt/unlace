/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000350D0
// Address: 0x00000001000350D0

//----- (00000001000350D0) ----------------------------------------------------
__int64 __fastcall sub_1000350D0(__int64 a1)
{
  _WORD *v1; // rax

  *(_QWORD *)(a1 + 8) = code_highlight_block;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 116) = xmmword_100090840;
  *(_OWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 176) = 0x2727222200000000LL;
  *(_QWORD *)a1 = &off_1000A8D68;
  *(_WORD *)(a1 + 184) = 9052;
  *(_BYTE *)(a1 + 112) = 0;
  v1 = qvector_reserve(a1 + 64, nullptr, 3u, 1u);
  *(_QWORD *)(a1 + 64) = v1;
  *(_QWORD *)(a1 + 72) = 3;
  *v1 = 12079;
  *(_BYTE *)(*(_QWORD *)(a1 + 64) + 2LL) = 0;
  sub_1000351E0(a1, "/*", "*/");
  sub_100035310((_QWORD *)a1, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 1);
  sub_100035310((_QWORD *)a1, "long|string|__int64|success|char|float|void", 2);
  return sub_100035310((_QWORD *)a1, "BADADDR|BADSEL|MAXADDR", 3);
}
// 100090840: using guessed type __int128 xmmword_100090840;
// 1000A8D68: using guessed type __int64 (__fastcall *off_1000A8D68)();
