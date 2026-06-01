/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C53C
// Address: 0x0004C53C

//----- (0004C53C) --------------------------------------------------------
char *__fastcall sub_4C53C(char *a1, int a2, int a3)
{
  int v6; // r0

  v6 = off_D2D44(&GLOBAL_OFFSET_TABLE_);
  return sub_4C3E8(v6, a1, a2, a3, nullptr, 0);
}
// D2000: using guessed type Elf32_Dyn *GLOBAL_OFFSET_TABLE_;
// D2D44: using guessed type int (__fastcall *off_D2D44)(_DWORD);
