/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493F08
// Address: 0x0000000000493F08

//----- (0000000000493F08) ----------------------------------------------------
bool __fastcall sub_493F08(__int64 a1)
{
  if ( !a1 )
    return 0;
  if ( *(_QWORD *)(a1 + 8) <= 1u )
    return sem_post((sem_t *)(a1 + 24)) == 0;
  return sem_post(*(sem_t **)(a1 + 24)) == 0;
}
