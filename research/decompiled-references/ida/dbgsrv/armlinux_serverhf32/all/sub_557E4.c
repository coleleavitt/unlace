/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_557E4
// Address: 0x000557E4

//----- (000557E4) --------------------------------------------------------
void __fastcall sub_557E4(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  void *v5; // r0
  void *v6; // r0

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_557E4(a1, v3[3]);
      v4 = (_DWORD *)v3[2];
      if ( (int)v3[6] >= -1 )
      {
        v5 = (void *)v3[8];
        if ( v5 )
        {
          v3[9] = 0;
          sub_77E08(v5);
        }
      }
      v6 = v3;
      v3 = v4;
      sub_80648(v6);
    }
    while ( v4 );
  }
}
