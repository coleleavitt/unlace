/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84E74
// Address: 0x00084E74

//----- (00084E74) --------------------------------------------------------
void __fastcall sub_84E74(int a1)
{
  int v2; // r5
  unsigned int v3; // r6
  int v4; // r0
  int v5; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + v2);
      if ( v4 != -1 )
        close(v4);
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + v2);
      if ( v5 != -1 )
        close(v5);
      v2 += 4;
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 4) );
  }
  qfree(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  qfree(*(void **)(a1 + 12));
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
