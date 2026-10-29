/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: atomic_add_fetch_4
// Address: 0x00098FA8

//----- (00098FA8) --------------------------------------------------------
int __fastcall _atomic_add_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r6

  MEMORY[0xFFFF0FA0]();
  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  MEMORY[0xFFFF0FA0]();
  return v4;
}
