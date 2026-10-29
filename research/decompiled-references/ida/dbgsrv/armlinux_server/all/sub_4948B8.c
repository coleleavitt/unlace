/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4948B8
// Address: 0x00000000004948B8

//----- (00000000004948B8) ----------------------------------------------------
bool __fastcall sub_4948B8(__int64 a1)
{
  pthread_mutex_t *v2; // x20

  v2 = *(pthread_mutex_t **)(a1 + 56);
  sub_494720(v2);
  if ( *(_BYTE *)(a1 + 200) )
    pthread_kill(*(_QWORD *)(a1 + 64), 12);
  return sub_494760(v2);
}
