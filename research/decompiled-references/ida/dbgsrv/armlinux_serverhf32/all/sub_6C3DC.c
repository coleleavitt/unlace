/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C3DC
// Address: 0x0006C3DC

//----- (0006C3DC) --------------------------------------------------------
int __fastcall sub_6C3DC(int a1)
{
  unsigned int v1; // r0
  unsigned int v2; // r0

  v1 = (a1 - 1) | ((unsigned int)(a1 - 1) >> 1) | (((a1 - 1) | ((unsigned int)(a1 - 1) >> 1)) >> 2);
  v2 = v1 | (v1 >> 4) | ((v1 | (v1 >> 4)) >> 8);
  return (v2 | HIWORD(v2)) + 1;
}
