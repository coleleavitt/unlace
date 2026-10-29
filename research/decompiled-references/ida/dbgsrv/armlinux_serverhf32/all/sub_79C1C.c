/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79C1C
// Address: 0x00079C1C

//----- (00079C1C) --------------------------------------------------------
bool __fastcall sub_79C1C(_BOOL4 result)
{
  sem_t *v1; // r0

  if ( result )
  {
    if ( *(_DWORD *)(result + 4) > 1u )
      v1 = *(sem_t **)(result + 12);
    else
      v1 = (sem_t *)(result + 12);
    return sem_post(v1) == 0;
  }
  return result;
}
