/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74B54
// Address: 0x00074B54

//----- (00074B54) --------------------------------------------------------
void __fastcall sub_74B54(void **a1)
{
  int v2; // r3
  FILE *v3; // r0

  if ( a1 )
  {
    v2 = (int)*a1;
    v3 = (FILE *)a1[2];
    if ( v2 <= 1 )
    {
      sub_778BC(v3);
      sub_808A0(a1);
    }
    else
    {
      if ( v3 )
        (*(void (__fastcall **)(FILE *))(v3->_flags + 8))(v3);
      sub_77F70(a1[9]);
      sub_77F70(a1[8]);
      sub_808A0(a1);
    }
  }
}
