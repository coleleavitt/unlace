/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425FC0
// Address: 0x00425FC0

//----- (00425FC0) --------------------------------------------------------
int __thiscall sub_425FC0(int this)
{
  int v2; // edi
  void **v3; // eax
  void **v4; // edi
  _WORD *v5; // eax
  int v6; // edi

  *(_DWORD *)(this + 4) = sub_439A50;
  v2 = this + 32;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 48) = 0;
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 60) = 0;
  *(_DWORD *)(this + 64) = 5;
  *(_DWORD *)(this + 68) = 4;
  *(_DWORD *)(this + 72) = 6;
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)this = &off_48BF60;
  *(_DWORD *)(this + 100) = 656876066;
  *(_WORD *)(this + 104) = 9052;
  *(_BYTE *)(this + 56) = 0;
  if ( *(_DWORD *)(this + 40) < 3u )
    *(_DWORD *)v2 = sub_453B00(this + 32, *(void **)v2, 3u, 1u);
  *(_DWORD *)(v2 + 4) = 3;
  strcpy(*(char **)v2, "//");
  v3 = (void **)sub_428570((_DWORD *)(this + 44));
  v4 = v3;
  if ( (unsigned int)v3[2] < 3 )
    *v3 = sub_453B00((int)v3, *v3, 3u, 1u);
  v4[1] = (void *)3;
  *(_WORD *)*v4 = 10799;
  v5 = *v4;
  v6 = (int)(v4 + 3);
  *((_BYTE *)v5 + 2) = 0;
  if ( *(_DWORD *)(v6 + 8) < 3u )
    *(_DWORD *)v6 = sub_453B00(v6, *(void **)v6, 3u, 1u);
  *(_DWORD *)(v6 + 4) = 3;
  strcpy(*(char **)v6, "*/");
  sub_426720(
    (_DWORD *)this,
    "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw",
    (const char **)1);
  sub_426720((_DWORD *)this, "long|string|__int64|success|char|float|void", (const char **)2);
  sub_426720((_DWORD *)this, "BADADDR|BADSEL|MAXADDR", (const char **)3);
  return this;
}
// 48BF60: using guessed type _UNKNOWN *off_48BF60;
