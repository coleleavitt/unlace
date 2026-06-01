/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79D84
// Address: 0x00079D84

//----- (00079D84) --------------------------------------------------------
bool __fastcall sub_79D84(_BOOL4 result)
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
