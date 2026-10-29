/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6F1C0
// Address: 0x0006F1C0

//----- (0006F1C0) --------------------------------------------------------
void __fastcall sub_6F1C0(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r5

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_6F1C0(a1, v3[3]);
      v4 = (_DWORD *)v3[2];
      sub_809EC(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
