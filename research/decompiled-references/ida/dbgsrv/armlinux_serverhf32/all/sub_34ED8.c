/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34ED8
// Address: 0x00034ED8

//----- (00034ED8) --------------------------------------------------------
void __fastcall sub_34ED8(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r5

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_34ED8(a1, v3[3]);
      v4 = (_DWORD *)v3[2];
      sub_80648(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
