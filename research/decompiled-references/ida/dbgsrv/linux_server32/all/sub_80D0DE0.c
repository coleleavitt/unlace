/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0DE0
// Address: 0x080D0DE0

//----- (080D0DE0) --------------------------------------------------------
bool __cdecl sub_80D0DE0(int a1)
{
  sem_t *v1; // eax

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 4) <= 1u )
    v1 = (sem_t *)(a1 + 12);
  else
    v1 = *(sem_t **)(a1 + 12);
  return sem_post(v1) == 0;
}
