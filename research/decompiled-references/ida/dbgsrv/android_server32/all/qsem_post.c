/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_post
// Address: 0x000811B0

//----- (000811B0) --------------------------------------------------------
bool __fastcall qsem_post(int a1)
{
  int v1; // r1
  unsigned int v2; // r1
  sem_t *v3; // r0

  v1 = 0;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 4);
    v3 = (sem_t *)(a1 + 12);
    if ( v2 > 1 )
      v3 = (sem_t *)v3->__align;
    return sem_post(v3) == 0;
  }
  return v1;
}
