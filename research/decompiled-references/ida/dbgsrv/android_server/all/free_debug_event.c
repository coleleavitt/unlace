/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_debug_event
// Address: 0x00000000000B0874

//----- (00000000000B0874) ----------------------------------------------------
void __fastcall free_debug_event(__int64 a1)
{
  unsigned int v2; // w8
  void *v3; // x0
  void *v4; // x0

  v2 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v2 <= 0xB )
  {
    if ( ((1 << *(_BYTE *)(a1 + 20)) & 0x608) != 0 )
    {
      v3 = *(void **)(a1 + 24);
      if ( v3 )
      {
LABEL_7:
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v3);
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 40) = 0;
      }
    }
    else if ( ((1 << *(_BYTE *)(a1 + 20)) & 0x902) != 0 )
    {
      v3 = *(void **)(a1 + 24);
      if ( v3 )
        goto LABEL_7;
    }
    else if ( v2 == 7 )
    {
      v4 = *(void **)(a1 + 40);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        qfree(v4);
        *(_QWORD *)(a1 + 40) = 0;
        *(_QWORD *)(a1 + 56) = 0;
      }
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
}
