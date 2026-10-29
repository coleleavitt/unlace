/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_749E8
// Address: 0x000749E8

//----- (000749E8) --------------------------------------------------------
void __fastcall sub_749E8(void **a1)
{
  int v2; // r3
  FILE *v3; // r0

  if ( a1 )
  {
    v2 = (int)*a1;
    v3 = (FILE *)a1[2];
    if ( v2 <= 1 )
    {
      sub_77754(v3);
      sub_8121C(a1);
    }
    else
    {
      if ( v3 )
        (*(void (__fastcall **)(FILE *))(v3->_flags + 8))(v3);
      sub_77E08(a1[9]);
      sub_77E08(a1[8]);
      sub_8121C(a1);
    }
  }
}
