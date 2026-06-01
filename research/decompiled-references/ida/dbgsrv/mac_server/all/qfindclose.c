/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindclose
// Address: 0x000000010007B970

//----- (000000010007B970) ----------------------------------------------------
void __fastcall qfindclose(__int64 a1)
{
  __int64 v1; // r14

  if ( *(int *)(a1 + 2100) > 0 )
  {
    v1 = 0;
    do
      free(*(void **)(*(_QWORD *)(a1 + 2088) + 8 * v1++));
    while ( v1 < *(int *)(a1 + 2100) );
  }
  free(*(void **)(a1 + 2088));
  *(_DWORD *)(a1 + 2100) = 0;
  *(_QWORD *)(a1 + 2088) = 0;
}
