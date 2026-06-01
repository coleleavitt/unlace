/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65CDC
// Address: 0x00065CDC

//----- (00065CDC) --------------------------------------------------------
void __fastcall sub_65CDC(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r5

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_65CDC(a1, v3[3]);
      v4 = (_DWORD *)v3[2];
      sub_809EC(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
