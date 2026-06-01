/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF7E0
// Address: 0x00000000000BF7E0

//----- (00000000000BF7E0) ----------------------------------------------------
void __fastcall sub_BF7E0(char *ptr)
{
  FILE *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)ptr = &off_150688;
  v2 = *((FILE **)ptr + 4);
  if ( v2 )
    qfclose(v2);
  *(_OWORD *)(ptr + 24) = 0;
  v3 = *((void **)ptr + 6);
  if ( v3 )
  {
    *((_QWORD *)ptr + 7) = 0;
    qfree(v3);
  }
  operator delete(ptr);
}
// 150688: using guessed type _UNKNOWN *off_150688;
