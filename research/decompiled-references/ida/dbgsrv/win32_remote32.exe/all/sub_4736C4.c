/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4736C4
// Address: 0x004736C4

//----- (004736C4) --------------------------------------------------------
int __usercall sub_4736C4@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v3; // ecx
  int v4; // eax

  if ( a3 == -2 )
  {
    *sub_46B971() = 0;
    *sub_46B984() = 9;
  }
  else
  {
    if ( a3 >= 0 && (unsigned int)a3 < dword_4B7D38[0] )
    {
      v3 = 56 * (a3 & 0x3F);
      v4 = (int)*(&dword_4B7B38 + (a3 >> 6));
      if ( (*(_BYTE *)(v4 + v3 + 40) & 1) != 0 )
        return *(_DWORD *)(v4 + v3 + 24);
    }
    *sub_46B971() = 0;
    *sub_46B984() = 9;
    sub_467EF4(a1, a2);
  }
  return -1;
}
// 4B7D38: using guessed type int dword_4B7D38[];
