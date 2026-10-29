/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_post
// Address: 0x00000000000C1F20

//----- (00000000000C1F20) ----------------------------------------------------
bool __fastcall qsem_post(_BOOL8 result)
{
  unsigned __int64 v1; // x8
  sem_t *v2; // x0

  if ( result )
  {
    v1 = *(_QWORD *)(result + 8);
    v2 = (sem_t *)(result + 24);
    if ( v1 > 1 )
      v2 = (sem_t *)v2->__align;
    return sem_post(v2) == 0;
  }
  return result;
}
