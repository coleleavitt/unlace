/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: close_linput
// Address: 0x0007B752

//----- (0007B752) --------------------------------------------------------
void __fastcall close_linput(void *a1)
{
  int v2; // r0

  if ( a1 )
  {
    if ( *(int *)a1 < 2 )
    {
      qfclose(*((FILE **)a1 + 2));
    }
    else
    {
      v2 = *((_DWORD *)a1 + 2);
      if ( v2 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      qfree(*((void **)a1 + 9));
      qfree(*((void **)a1 + 8));
    }
    operator delete(a1);
  }
}
