/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48EBF0
// Address: 0x000000000048EBF0

//----- (000000000048EBF0) ----------------------------------------------------
void __fastcall sub_48EBF0(__int64 a1)
{
  int v2; // w19
  void *v3; // x0

  if ( *(int *)(a1 + 8244) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(void **)(*(_QWORD *)(a1 + 8232) + 8LL * v2++);
      free(v3);
    }
    while ( *(_DWORD *)(a1 + 8244) > v2 );
  }
  free(*(void **)(a1 + 8232));
  *(_QWORD *)(a1 + 8232) = 0;
  *(_DWORD *)(a1 + 8244) = 0;
}
