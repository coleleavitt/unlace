/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FE44
// Address: 0x0003FE44

//----- (0003FE44) --------------------------------------------------------
int __fastcall sub_3FE44(int a1)
{
  void **v2; // r6
  int v3; // r0
  size_t v4; // r5
  int v5; // r7
  void *v6; // r0

  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 4) = code_highlight_block;
  memset((void *)(a1 + 8), 0, 0x30u);
  *(_WORD *)(a1 + 104) = 9052;
  *(_BYTE *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 5;
  *(_DWORD *)(a1 + 68) = 4;
  *(_DWORD *)(a1 + 72) = 6;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)a1 = &off_D9BF8;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 656876066;
  v2 = (void **)(a1 + 32);
  v3 = _strlen_chk("//", 3);
  v4 = v3;
  if ( v3 )
  {
    v5 = v3 + 1;
    if ( *(_DWORD *)(a1 + 40) >= (unsigned int)(v3 + 1) )
    {
      v6 = *v2;
    }
    else
    {
      v6 = qvector_reserve(a1 + 32, *v2, v3 + 1, 1u);
      *v2 = v6;
    }
    *(_DWORD *)(a1 + 36) = v5;
    memmove(v6, "//", v4);
    *(_BYTE *)(*(_DWORD *)(a1 + 32) + v4) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 0;
  }
  sub_424F6((_DWORD *)a1, "/*", "*/");
  sub_42678(
    (_DWORD *)a1,
    "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw",
    (int *)((char *)&dword_0 + 1));
  sub_42678((_DWORD *)a1, "long|string|__int64|success|char|float|void", (int *)((char *)&dword_0 + 2));
  sub_42678((_DWORD *)a1, "BADADDR|BADSEL|MAXADDR", (int *)((char *)&dword_0 + 3));
  return a1;
}
// 0: using guessed type int dword_0;
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// 43016: using guessed type int code_highlight_block();
// D9BF8: using guessed type _UNKNOWN *off_D9BF8;
