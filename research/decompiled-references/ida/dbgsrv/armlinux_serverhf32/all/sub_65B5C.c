/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65B5C
// Address: 0x00065B5C

//----- (00065B5C) --------------------------------------------------------
void __fastcall sub_65B5C(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r5

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_65B5C(a1, v3[3]);
      v4 = (_DWORD *)v3[2];
      sub_80648(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
