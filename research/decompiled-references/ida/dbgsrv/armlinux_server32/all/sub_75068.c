/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75068
// Address: 0x00075068

//----- (00075068) --------------------------------------------------------
int __fastcall sub_75068(int a1, void *a2, signed int a3, int a4)
{
  size_t v7; // r0

  v7 = sub_74B94(a1, a2, a3);
  if ( v7 != a3 )
    return -1;
  if ( a4 )
    sub_794AC((int)a2, v7);
  return 0;
}
