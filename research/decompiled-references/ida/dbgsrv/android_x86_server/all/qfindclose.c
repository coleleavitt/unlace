/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindclose
// Address: 0x000AE190

//----- (000AE190) --------------------------------------------------------
void __cdecl qfindclose(int a1)
{
  int v1; // edi

  if ( *(int *)(a1 + 8228) > 0 )
  {
    v1 = 0;
    do
      free(*(void **)(*(_DWORD *)(a1 + 8220) + 4 * v1++));
    while ( v1 < *(_DWORD *)(a1 + 8228) );
  }
  free(*(void **)(a1 + 8220));
  *(_DWORD *)(a1 + 8228) = 0;
  *(_DWORD *)(a1 + 8220) = 0;
}
