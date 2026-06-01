/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34EFC
// Address: 0x00034EFC

//----- (00034EFC) --------------------------------------------------------
void __fastcall sub_34EFC(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  void *v5; // r0

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_34EFC(a1, *(_DWORD *)(v3 + 12));
      v4 = *(_DWORD *)(v3 + 8);
      sub_34ED8(v3 + 20, *(_DWORD **)(v3 + 28));
      v5 = (void *)v3;
      v3 = v4;
      sub_80648(v5);
    }
    while ( v4 );
  }
}
