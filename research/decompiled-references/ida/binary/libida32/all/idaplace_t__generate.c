__int64 __fastcall idaplace_t__generate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v9; // r12d
  unsigned int disassembly; // ebx

  v9 = *(_DWORD *)(a1 + 12);
  disassembly = generate_disassembly(a2, a3, v9, a7, 0);
  *a4 = calc_prefix_color(v9);
  *a5 = calc_bg_color(v9);
  return disassembly;
}

