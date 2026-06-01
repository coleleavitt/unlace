/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: close_linput
// Address: 0x00000000000B9B44

//----- (00000000000B9B44) ----------------------------------------------------
void __fastcall close_linput(void *a1)
{
  __int64 v2; // x0

  if ( a1 )
  {
    if ( *(int *)a1 < 2 )
    {
      qfclose(*((FILE **)a1 + 1));
    }
    else
    {
      v2 = *((_QWORD *)a1 + 1);
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      qfree(*((void **)a1 + 5));
      qfree(*((void **)a1 + 4));
    }
    operator delete(a1);
  }
}
