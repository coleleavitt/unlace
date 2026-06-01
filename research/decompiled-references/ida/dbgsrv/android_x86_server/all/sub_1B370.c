/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B370
// Address: 0x0001B370

//----- (0001B370) --------------------------------------------------------
char __cdecl sub_1B370(int a1)
{
  if ( *(_DWORD *)(a1 + 196) )
  {
    sub_1BDA0((int *)(a1 + 196), 0);
    qfree(*(void **)(a1 + 196));
    *(_DWORD *)(a1 + 196) = 0;
    *(_DWORD *)(a1 + 204) = 0;
  }
  return 1;
}
