/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73FE4
// Address: 0x00073FE4

//----- (00073FE4) --------------------------------------------------------
int *sub_73FE4()
{
  int *v0; // r0

  v0 = sub_73EB4();
  if ( *(_DWORD *)(*v0 + 4) )
    return *(int **)*v0;
  else
    return &dword_8DB98;
}
// 8DB98: using guessed type int dword_8DB98;
