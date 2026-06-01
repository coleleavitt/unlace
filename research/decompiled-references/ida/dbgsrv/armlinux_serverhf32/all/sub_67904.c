/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67904
// Address: 0x00067904

//----- (00067904) --------------------------------------------------------
void __fastcall sub_67904(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r5

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_67904(a1, v3[3]);
      v4 = (_DWORD *)v3[2];
      sub_80648(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
