/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453A90
// Address: 0x00453A90

//----- (00453A90) --------------------------------------------------------
LPVOID __stdcall sub_453A90(char *a1)
{
  unsigned int v2; // kr00_4
  LPVOID v3; // eax
  LPVOID v4; // edi

  if ( !a1 )
    return nullptr;
  v2 = strlen(a1);
  v3 = sub_46D25F(v2 + 1);
  v4 = v3;
  if ( v3 )
  {
    sub_45ACB0((unsigned int)v3, a1, v2 + 1);
    return v4;
  }
  else
  {
    sub_45CC20(1);
    *sub_46B984() = 12;
    sub_45CC20(1);
    return nullptr;
  }
}
