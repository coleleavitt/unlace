/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4943D8
// Address: 0x00000000004943D8

//----- (00000000004943D8) ----------------------------------------------------
bool __fastcall sub_4943D8(pthread_mutex_t *a1)
{
  int v2; // w20

  if ( !a1 )
    return 0;
  v2 = pthread_mutex_destroy(a1);
  j__free(a1);
  return v2 == 0;
}
