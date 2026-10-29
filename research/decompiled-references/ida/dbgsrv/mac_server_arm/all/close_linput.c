/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: close_linput
// Address: 0x000000010006C778

//----- (000000010006C778) ----------------------------------------------------
void __fastcall close_linput(void *a1)
{
  int v2; // w8
  FILE *v3; // x0

  if ( a1 )
  {
    v2 = *(_DWORD *)a1;
    v3 = *((FILE **)a1 + 1);
    if ( v2 < 2 )
    {
      qfclose(v3);
    }
    else
    {
      if ( v3 )
        (*((void (__fastcall **)(FILE *))v3->_p + 2))(v3);
      qfree(*((void **)a1 + 5));
      qfree(*((void **)a1 + 4));
    }
    operator delete(a1);
  }
}
