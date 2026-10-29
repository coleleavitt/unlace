/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D3C8
// Address: 0x000000000040D3C8

//----- (000000000040D3C8) ----------------------------------------------------
void __fastcall sub_40D3C8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // x19
  _QWORD *v4; // x20

  if ( a2 )
  {
    v2 = a2;
    do
    {
      sub_40D3C8(a1, v2[3]);
      v4 = (_QWORD *)v2[2];
      j__free_0(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}
