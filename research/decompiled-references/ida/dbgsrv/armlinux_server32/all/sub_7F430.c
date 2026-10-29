/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F430
// Address: 0x0007F430

//----- (0007F430) --------------------------------------------------------
void __fastcall sub_7F430(int a1)
{
  unsigned int v2; // r4
  int v3; // r6
  int v4; // r0
  int v5; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = 0;
    do
    {
      v3 = 4 * v2;
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v2++);
      if ( v4 != -1 )
        j_j_close(v4);
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + v3);
      if ( v5 != -1 )
        j_j_close(v5);
    }
    while ( *(_DWORD *)(a1 + 4) > v2 );
  }
  sub_77F70(*(void **)(a1 + 8));
  *(_DWORD *)(a1 + 8) = 0;
  sub_77F70(*(void **)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = 0;
}
