/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79D3C
// Address: 0x00079D3C

//----- (00079D3C) --------------------------------------------------------
int __fastcall sub_79D3C(int a1)
{
  char *v3; // r0

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 4) <= 1u )
  {
    if ( sem_destroy((sem_t *)(a1 + 12)) )
      return 0;
  }
  else
  {
    if ( sem_unlink(*(const char **)a1) )
      return 0;
    sem_close(*(sem_t **)(a1 + 12));
  }
  v3 = *(char **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77F70(v3);
  }
  sub_808A0((void *)a1);
  return 1;
}
