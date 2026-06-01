/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE450
// Address: 0x080CE450

//----- (080CE450) --------------------------------------------------------
void __cdecl sub_80CE450(int a1)
{
  int v1; // esi
  void *v2; // [esp-10h] [ebp-1Ch]

  if ( *(int *)(a1 + 8228) > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *(void **)(*(_DWORD *)(a1 + 8220) + 4 * v1++);
      free(v2);
    }
    while ( v1 < *(_DWORD *)(a1 + 8228) );
  }
  free(*(void **)(a1 + 8220));
  *(_DWORD *)(a1 + 8228) = 0;
  *(_DWORD *)(a1 + 8220) = 0;
}
