/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindclose
// Address: 0x000000010006E0FC

//----- (000000010006E0FC) ----------------------------------------------------
void __fastcall qfindclose(__int64 a1)
{
  __int64 v2; // x20

  if ( *(int *)(a1 + 2100) >= 1 )
  {
    v2 = 0;
    do
      free(*(void **)(*(_QWORD *)(a1 + 2088) + 8 * v2++));
    while ( v2 < *(int *)(a1 + 2100) );
  }
  free(*(void **)(a1 + 2088));
  *(_DWORD *)(a1 + 2100) = 0;
  *(_QWORD *)(a1 + 2088) = 0;
}
