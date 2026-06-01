/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_932A0
// Address: 0x000932A0

//----- (000932A0) --------------------------------------------------------
int __cdecl sub_932A0(void *ptr)
{
  qsem_wait(*((_DWORD *)ptr + 2), -1);
  sub_93310(*(_DWORD *)ptr, *((int **)ptr + 1));
  if ( ptr )
  {
    *(_DWORD *)ptr = 0;
    *((_DWORD *)ptr + 1) = 0;
    qsem_free(*((char **)ptr + 2));
    operator delete(ptr);
  }
  return 0;
}
