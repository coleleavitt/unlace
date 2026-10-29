/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_post
// Address: 0x00000000000C6BE0

//----- (00000000000C6BE0) ----------------------------------------------------
bool __fastcall qsem_post(__int64 a1)
{
  bool v1; // cc
  sem_t *v2; // rdi

  if ( !a1 )
    return 0;
  v1 = *(_QWORD *)(a1 + 8) <= 1u;
  v2 = (sem_t *)(a1 + 24);
  if ( !v1 )
    v2 = (sem_t *)v2->__align;
  return sem_post(v2) == 0;
}
