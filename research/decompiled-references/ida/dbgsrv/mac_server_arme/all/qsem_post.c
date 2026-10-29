/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_post
// Address: 0x0000000100076698

//----- (0000000100076698) ----------------------------------------------------
bool __fastcall qsem_post(_BOOL8 result)
{
  int v1; // w0

  if ( result )
  {
    if ( *(_QWORD *)(result + 8) > 1u )
      v1 = sem_post(*(sem_t **)(result + 24));
    else
      v1 = semaphore_signal(*(_DWORD *)(result + 24));
    return v1 == 0;
  }
  return result;
}
