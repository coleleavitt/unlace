/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35094
// Address: 0x00035094

//----- (00035094) --------------------------------------------------------
void __fastcall sub_35094(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  void *v5; // r0

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_35094(a1, *(_DWORD *)(v3 + 12));
      v4 = *(_DWORD *)(v3 + 8);
      sub_35070(v3 + 20, *(_DWORD **)(v3 + 28));
      v5 = (void *)v3;
      v3 = v4;
      sub_809EC(v5);
    }
    while ( v4 );
  }
}
