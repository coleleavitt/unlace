/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B971
// Address: 0x0046B971

//----- (0046B971) --------------------------------------------------------
int *sub_46B971()
{
  char *v0; // eax

  v0 = (char *)sub_47841D();
  if ( v0 )
    return (int *)(v0 + 20);
  else
    return &dword_4B5F1C;
}
// 4B5F1C: using guessed type int dword_4B5F1C;
