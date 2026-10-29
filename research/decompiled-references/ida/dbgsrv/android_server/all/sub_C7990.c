/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C7990
// Address: 0x00000000000C7990

//----- (00000000000C7990) ----------------------------------------------------
void __fastcall sub_C7990(__int64 a1)
{
  unsigned __int64 v2; // x20
  int v3; // w0
  int v4; // w0
  void *v5; // x0

  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v2);
      if ( v3 != -1 )
        close(v3);
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v2);
      if ( v4 != -1 )
        close(v4);
      ++v2;
    }
    while ( v2 < *(_QWORD *)(a1 + 8) );
  }
  qfree(*(void **)(a1 + 16));
  v5 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0;
  qfree(v5);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = 0;
}
