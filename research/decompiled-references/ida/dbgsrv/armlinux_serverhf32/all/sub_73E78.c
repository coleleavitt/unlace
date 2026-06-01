/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73E78
// Address: 0x00073E78

//----- (00073E78) --------------------------------------------------------
int *sub_73E78()
{
  int *v0; // r0

  v0 = sub_73D48();
  if ( *(_DWORD *)(*v0 + 4) )
    return *(int **)*v0;
  else
    return &dword_8DA5C;
}
// 8DA5C: using guessed type int dword_8DA5C;
