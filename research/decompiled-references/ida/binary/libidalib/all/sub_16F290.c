__int64 __fastcall sub_16F290(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _DWORD *a5, __int64 a6)
{
  unsigned int disassembly; // r12d

  if ( (unsigned __int64)*(unsigned int *)(a1 + 12) >= *(_QWORD *)(a6 + 8) )
    return 0;
  disassembly = generate_disassembly();
  *a4 = calc_prefix_color();
  *a5 = calc_bg_color();
  return disassembly;
}

