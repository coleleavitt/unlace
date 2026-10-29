/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490098
// Address: 0x0000000000490098

//----- (0000000000490098) ----------------------------------------------------
__int64 __fastcall sub_490098(const char *a1, unsigned int a2, int a3)
{
  int v4; // w0
  unsigned int v5; // w19
  int v7; // w0

  v4 = open64(a1, 66, a2);
  v5 = v4;
  if ( v4 == -1 )
  {
    sub_4869C8(1);
  }
  else if ( (unsigned int)sub_48FDA8(v4, 66, a3) || (unsigned int)sub_48FF60(v5, 0) )
  {
    v7 = v5;
    v5 = -1;
    sub_48FF88(v7);
  }
  return v5;
}
