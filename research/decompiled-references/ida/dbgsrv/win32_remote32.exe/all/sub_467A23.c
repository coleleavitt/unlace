/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467A23
// Address: 0x00467A23

//----- (00467A23) --------------------------------------------------------
char sub_467A23()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_4B7888;
  v1 = 0;
  while ( sub_467C68(v0, 0xFA0u, 0) )
  {
    ++dword_4B78A0;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x18 )
      return 1;
  }
  sub_467A5F();
  return 0;
}
// 4B78A0: using guessed type int dword_4B78A0;
