/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64A8A
// Address: 0x00064A8A

//----- (00064A8A) --------------------------------------------------------
int __fastcall sub_64A8A(int a1, int a2, char *a3, void *a4)
{
  if ( a2 && !*(_BYTE *)(a2 + 36) )
    return sub_6D044(a1, a2);
  else
    return sub_6F27C(a1, a3, a4);
}
