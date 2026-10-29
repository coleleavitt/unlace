__int64 __fastcall idaplace_t__generate(
        __int64 a1,
        __int64 a2,
        int *a3,
        _BYTE *a4,
        _DWORD *a5,
        __int64 a6,
        signed int a7)
{
  unsigned __int64 v9; // r12
  unsigned int disassembly; // ebx

  v9 = *(_QWORD *)(a1 + 16);
  disassembly = generate_disassembly(a2, a3, v9, a7, 0);
  *a4 = calc_prefix_color(v9);
  *a5 = calc_bg_color(v9);
  return disassembly;
}
