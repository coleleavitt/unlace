/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: close_linput
// Address: 0x00000000000BE750

//----- (00000000000BE750) ----------------------------------------------------
void __fastcall close_linput(void *ptr)
{
  __int64 v2; // rdi

  if ( ptr )
  {
    if ( *(int *)ptr < 2 )
    {
      qfclose(*((FILE **)ptr + 1));
    }
    else
    {
      v2 = *((_QWORD *)ptr + 1);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      qfree(*((void **)ptr + 5));
      qfree(*((void **)ptr + 4));
    }
    operator delete(ptr);
  }
}
