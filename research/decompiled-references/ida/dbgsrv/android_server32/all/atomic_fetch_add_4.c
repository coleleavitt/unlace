/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: atomic_fetch_add_4
// Address: 0x00098F80

//----- (00098F80) --------------------------------------------------------
int __fastcall _atomic_fetch_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  MEMORY[0xFFFF0FA0]();
  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  MEMORY[0xFFFF0FA0]();
  return v4;
}
