/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42AF8
// Address: 0x00042AF8

//----- (00042AF8) --------------------------------------------------------
void __fastcall sub_42AF8(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  void *v4; // r0
  _DWORD *v5; // r5
  void *v6; // r0

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_42AF8(a1, v3[3]);
      v4 = (void *)v3[4];
      v5 = (_DWORD *)v3[2];
      if ( v4 )
      {
        v3[5] = 0;
        sub_77F70(v4);
      }
      v6 = v3;
      v3 = v5;
      sub_809EC(v6);
    }
    while ( v5 );
  }
}
