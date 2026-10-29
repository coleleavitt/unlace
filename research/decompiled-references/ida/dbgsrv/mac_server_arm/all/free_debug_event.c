/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: free_debug_event
// Address: 0x0000000100066170

//----- (0000000100066170) ----------------------------------------------------
void __fastcall free_debug_event(__int64 a1)
{
  unsigned int v2; // w8
  void *v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  void *v6; // x0

  v2 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v2 <= 0xB )
  {
    if ( ((1 << *(_BYTE *)(a1 + 20)) & 0x608) != 0 )
    {
      v4 = (_QWORD *)(a1 + 24);
      v3 = *(void **)(a1 + 24);
      if ( v3 )
      {
LABEL_7:
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v3);
        v5 = 40;
LABEL_8:
        *v4 = 0;
        *(_QWORD *)(a1 + v5) = 0;
      }
    }
    else if ( ((1 << *(_BYTE *)(a1 + 20)) & 0x902) != 0 )
    {
      v4 = (_QWORD *)(a1 + 24);
      v3 = *(void **)(a1 + 24);
      if ( v3 )
        goto LABEL_7;
    }
    else if ( v2 == 7 )
    {
      v4 = (_QWORD *)(a1 + 40);
      v6 = *(void **)(a1 + 40);
      if ( v6 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        qfree(v6);
        v5 = 56;
        goto LABEL_8;
      }
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
}
