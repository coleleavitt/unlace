/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482C00
// Address: 0x0000000000482C00

//----- (0000000000482C00) ----------------------------------------------------
bool __fastcall sub_482C00(pthread_mutex_t *ptr)
{
  int v1; // ebp

  if ( !ptr )
    return 0;
  v1 = pthread_mutex_destroy(ptr);
  j__free(ptr);
  return v1 == 0;
}
