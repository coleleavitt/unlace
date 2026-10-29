/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18CDC
// Address: 0x00018CDC

//----- (00018CDC) --------------------------------------------------------
void __fastcall sub_18CDC(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r5

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_18CDC(a1, v3[3]);
      v4 = (_DWORD *)v3[2];
      sub_809EC(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
