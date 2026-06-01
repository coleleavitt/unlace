/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4881A0
// Address: 0x004881A0

//----- (004881A0) --------------------------------------------------------
char sub_4881A0()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  v0 = dword_4B69C8;
  sub_4562D0(dword_4B69C8);
  if ( dword_4B69C4 )
  {
    sub_402760("PDB: forcibly killing thread...\n");
    sub_456530((HANDLE *)dword_4B69C4);
    sub_4564E0((HANDLE *)dword_4B69C4);
    dword_4B69C4 = 0;
  }
  sub_4562F0(v0);
  sub_456330(hHandle);
  sub_456330(hSemaphore);
  return sub_4562A0(dword_4B69C8);
}
// 4B69C4: using guessed type int dword_4B69C4;
