/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2AD40
// Address: 0x0002AD40

//----- (0002AD40) --------------------------------------------------------
int __cdecl sub_2AD40(int a1, int *a2)
{
  int v2; // esi

  v2 = sub_21B40(a1, a2, 0);
  if ( v2 == 1 )
  {
    v2 = -6;
    if ( !sub_8A0B0(a1, a2) )
    {
      sub_8A140(a1, (int)a2);
      return 1;
    }
  }
  return v2;
}
