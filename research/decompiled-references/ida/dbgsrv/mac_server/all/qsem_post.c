/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_post
// Address: 0x000000010007EC10

//----- (000000010007EC10) ----------------------------------------------------
bool __fastcall qsem_post(__int64 a1)
{
  int v1; // eax

  if ( !a1 )
    return 0;
  if ( *(_QWORD *)(a1 + 8) > 1u )
    v1 = sem_post(*(sem_t **)(a1 + 24));
  else
    v1 = semaphore_signal(*(_DWORD *)(a1 + 24));
  return v1 == 0;
}
