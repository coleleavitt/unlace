/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_debug_event
// Address: 0x00000000000B5420

//----- (00000000000B5420) ----------------------------------------------------
void __fastcall free_debug_event(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // ecx
  void *v5; // rdi
  void *v6; // rdi

  v2 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v2 <= 0xB )
  {
    v3 = 1544;
    if ( _bittest(&v3, v2) )
    {
      v5 = *(void **)(a1 + 24);
      if ( v5 )
      {
LABEL_7:
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v5);
        *(_QWORD *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 40) = 0;
      }
    }
    else
    {
      v4 = 2306;
      if ( _bittest(&v4, v2) )
      {
        v5 = *(void **)(a1 + 24);
        if ( v5 )
          goto LABEL_7;
      }
      else if ( v2 == 7 )
      {
        v6 = *(void **)(a1 + 40);
        if ( v6 )
        {
          *(_QWORD *)(a1 + 48) = 0;
          qfree(v6);
          *(_QWORD *)(a1 + 40) = 0;
          *(_QWORD *)(a1 + 56) = 0;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
}
