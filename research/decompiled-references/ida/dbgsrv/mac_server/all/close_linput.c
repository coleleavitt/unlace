/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: close_linput
// Address: 0x000000010007A240

//----- (000000010007A240) ----------------------------------------------------
void __fastcall close_linput(void *__p)
{
  bool v2; // cc
  FILE *v3; // rdi

  if ( __p )
  {
    v2 = *(_DWORD *)__p < 2;
    v3 = *((FILE **)__p + 1);
    if ( v2 )
    {
      qfclose(v3);
    }
    else
    {
      if ( v3 )
        (*((void (__fastcall **)(FILE *))v3->_p + 2))(v3);
      qfree(*((void **)__p + 5));
      qfree(*((void **)__p + 4));
    }
    operator delete(__p);
  }
}
