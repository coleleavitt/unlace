/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_458240
// Address: 0x00458240

//----- (00458240) --------------------------------------------------------
int __cdecl sub_458240(const char *a1, const char *a2)
{
  UINT *v2; // esi

  v2 = (UINT *)sub_46C90D(1u, 0x50u);
  if ( v2 )
  {
    *sub_46B984() = 0;
    if ( sub_458A70(a2, v2 + 4) && sub_458A70(a1, v2 + 12) )
    {
      v2[1] = (UINT)sub_4085E0;
      v2[2] = (UINT)sub_459800;
      v2[3] = (UINT)sub_46B984;
      *v2 = (UINT)v2;
      return (int)v2;
    }
    sub_46C918(v2);
  }
  return -1;
}
