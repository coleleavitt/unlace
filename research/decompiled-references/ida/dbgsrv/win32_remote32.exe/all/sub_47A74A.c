/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A74A
// Address: 0x0047A74A

//----- (0047A74A) --------------------------------------------------------
char sub_47A74A()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &CriticalSection;
  v1 = 0;
  while ( sub_47901F(v0, 0xFA0u, 0) )
  {
    ++dword_4B7EA0;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x150 )
      return 1;
  }
  sub_47A7A2();
  return 0;
}
// 4B7EA0: using guessed type int dword_4B7EA0;
