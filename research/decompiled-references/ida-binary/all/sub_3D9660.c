__int64 __fastcall watchplace_t__::vfunc_11(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        _DWORD *a5,
        _QWORD *a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rax
  __int64 v11; // r13
  unsigned int disassembly; // r12d

  v7 = *(unsigned int *)(a1 + 12);
  if ( v7 >= a6[1] )
    return 0;
  v11 = *(_QWORD *)(*a6 + 8 * v7);
  disassembly = generate_disassembly(a2, a3, v11, a7, 1);
  *a4 = calc_prefix_color(v11);
  *a5 = calc_bg_color(v11);
  return disassembly;
}
