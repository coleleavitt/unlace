void __fastcall sub_3B7F00(void **a1)
{
  qfree(a1[2]);
  qfree(a1[3]);
  qfree(a1[4]);
  a1[4] = nullptr;
  *((_OWORD *)a1 + 1) = 0;
}
