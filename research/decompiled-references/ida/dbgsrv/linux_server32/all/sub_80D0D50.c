/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0D50
// Address: 0x080D0D50

//----- (080D0D50) --------------------------------------------------------
int __cdecl sub_80D0D50(char *a1)
{
  void *v1; // eax

  if ( !a1 )
    return 0;
  if ( *((_DWORD *)a1 + 1) <= 1u )
  {
    if ( !sem_destroy((sem_t *)(a1 + 12)) )
      goto LABEL_5;
    return 0;
  }
  if ( sem_unlink(*(const char **)a1) )
    return 0;
  sem_close(*((sem_t **)a1 + 3));
LABEL_5:
  v1 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *((_DWORD *)a1 + 1) = 0;
    sub_80CF780(v1);
  }
  operator delete(a1, 0x1Cu);
  return 1;
}
