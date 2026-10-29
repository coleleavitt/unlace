/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7995C
// Address: 0x0007995C

//----- (0007995C) --------------------------------------------------------
_DWORD *sub_7995C(_DWORD *a1, char *a2, ...)
{
  va_list varg_r2; // [sp+18h] [bp+Ch] BYREF

  va_start(varg_r2, a2);
  return sub_7F3E0(a1, a2, (int)varg_r2);
}
