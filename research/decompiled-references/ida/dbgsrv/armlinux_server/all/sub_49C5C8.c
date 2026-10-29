/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C5C8
// Address: 0x000000000049C5C8

//----- (000000000049C5C8) ----------------------------------------------------
void __fastcall sub_49C5C8(__int64 a1)
{
  unsigned __int64 v2; // x19
  __int64 v3; // x21
  int v4; // w0
  int v5; // w0

  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = 0;
    do
    {
      v3 = 4 * v2;
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v2++);
      if ( v4 != -1 )
        j__close(v4);
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + v3);
      if ( v5 != -1 )
        j__close(v5);
    }
    while ( *(_QWORD *)(a1 + 8) > v2 );
  }
  j__free(*(void **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  j__free(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
}
