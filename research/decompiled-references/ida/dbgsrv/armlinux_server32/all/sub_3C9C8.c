/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C9C8
// Address: 0x0003C9C8

//----- (0003C9C8) --------------------------------------------------------
int __fastcall sub_3C9C8(void **a1, char a2)
{
  int v3; // r5
  int v5; // r7
  unsigned int v6; // r6
  void *v7; // r1

  v3 = (int)a1[1];
  v5 = v3 - 1;
  v6 = v3 + 1;
  if ( !v3 )
  {
    v3 = 1;
    v6 = 2;
    v5 = 0;
  }
  v7 = *a1;
  if ( v6 > (unsigned int)a1[2] )
  {
    v7 = sub_78018((int)a1, v7, v6, 1u);
    *a1 = v7;
  }
  a1[1] = (void *)v6;
  *((_BYTE *)v7 + v5) = a2;
  *((_BYTE *)*a1 + v3) = 0;
  return 0;
}
