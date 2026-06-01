/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindclose
// Address: 0x00000000000C0B50

//----- (00000000000C0B50) ----------------------------------------------------
void __fastcall qfindclose(__int64 a1)
{
  __int64 v1; // rbx

  if ( *(int *)(a1 + 8244) > 0 )
  {
    v1 = 0;
    do
      free(*(void **)(*(_QWORD *)(a1 + 8232) + 8 * v1++));
    while ( v1 < *(int *)(a1 + 8244) );
  }
  free(*(void **)(a1 + 8232));
  *(_DWORD *)(a1 + 8244) = 0;
  *(_QWORD *)(a1 + 8232) = 0;
}
