/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_519E0
// Address: 0x000519E0

//----- (000519E0) --------------------------------------------------------
unsigned int __cdecl sub_519E0(int a1)
{
  size_t v1; // esi
  void **v2; // eax
  size_t v3; // ecx
  void *v4; // eax

  *(_DWORD *)(a1 + 4) = code_highlight_block;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 64) = 5;
  *(_DWORD *)(a1 + 68) = 4;
  *(_DWORD *)(a1 + 72) = 6;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)a1 = &off_137F98;
  *(_WORD *)(a1 + 100) = 8738;
  *(_BYTE *)(a1 + 102) = 39;
  *(_WORD *)(a1 + 103) = 23591;
  *(_BYTE *)(a1 + 105) = 35;
  *(_BYTE *)(a1 + 56) = 0;
  v1 = __strlen_chk("//", 3);
  if ( v1 )
  {
    v2 = (void **)(a1 + 32);
    v3 = v1 + 1;
    if ( *(_DWORD *)(a1 + 40) >= v1 + 1 )
    {
      v4 = *v2;
    }
    else
    {
      v4 = qvector_reserve(a1 + 32, *v2, v1 + 1, 1u);
      *(_DWORD *)(a1 + 32) = v4;
      v3 = v1 + 1;
    }
    *(_DWORD *)(a1 + 36) = v3;
    memmove(v4, "//", v1);
    *(_BYTE *)(*(_DWORD *)(a1 + 32) + v1) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 0;
  }
  sub_55CF0((_DWORD *)a1, "/*", "*/");
  sub_55FE0(a1, "auto|static|extern|for|if|else|while|do|break|continue|return|try|catch|throw", 1);
  sub_55FE0(a1, "long|string|__int64|success|char|float|void", 2);
  return sub_55FE0(a1, "BADADDR|BADSEL|MAXADDR", 3);
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 137F98: using guessed type int (__cdecl *off_137F98)(int);
