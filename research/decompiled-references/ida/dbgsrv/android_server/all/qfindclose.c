/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindclose
// Address: 0x00000000000BBE9C

//----- (00000000000BBE9C) ----------------------------------------------------
void __fastcall qfindclose(__int64 a1)
{
  __int64 v2; // x20

  if ( *(int *)(a1 + 8244) >= 1 )
  {
    v2 = 0;
    do
      free(*(void **)(*(_QWORD *)(a1 + 8232) + 8 * v2++));
    while ( v2 < *(int *)(a1 + 8244) );
  }
  free(*(void **)(a1 + 8232));
  *(_DWORD *)(a1 + 8244) = 0;
  *(_QWORD *)(a1 + 8232) = 0;
}
