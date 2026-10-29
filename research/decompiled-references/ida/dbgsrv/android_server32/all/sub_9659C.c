/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9659C
// Address: 0x0009659C

//----- (0009659C) --------------------------------------------------------
int __fastcall sub_9659C(int a1, int a2)
{
  char *v3; // r1
  char *v4; // r2

  v3 = "true";
  v4 = "";
  if ( !*(_BYTE *)(a1 + 8) )
  {
    v3 = "false";
    v4 = "";
  }
  return sub_93B8C(a2, v3, v4);
}
