/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C6BC
// Address: 0x0004C6BC

//----- (0004C6BC) --------------------------------------------------------
char *__fastcall sub_4C6BC(char *a1, int a2, int a3)
{
  int v6; // r0

  v6 = off_D3D64(&GLOBAL_OFFSET_TABLE_);
  return sub_4C568(v6, a1, a2, a3, nullptr, 0);
}
// D3000: using guessed type Elf32_Dyn *GLOBAL_OFFSET_TABLE_;
// D3D64: using guessed type int (__fastcall *off_D3D64)(_DWORD);
