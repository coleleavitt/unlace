void __fastcall free_regvar(void **a1)
{
  if ( a1 )
  {
    qfree(a1[2]);
    qfree(a1[3]);
    qfree(a1[4]);
    a1[4] = nullptr;
    *((_OWORD *)a1 + 1) = 0;
  }
}
