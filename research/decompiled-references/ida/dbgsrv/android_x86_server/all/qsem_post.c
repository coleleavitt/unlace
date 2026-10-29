/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_post
// Address: 0x000B4D10

//----- (000B4D10) --------------------------------------------------------
bool __cdecl qsem_post(int a1)
{
  sem_t *v1; // eax

  if ( !a1 )
    return 0;
  v1 = (sem_t *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 4) > 1u )
    v1 = (sem_t *)v1->__align;
  return sem_post(v1) == 0;
}
