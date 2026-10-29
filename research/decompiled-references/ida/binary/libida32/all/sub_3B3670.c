void __fastcall sub_3B3670(void **a1)
{
  qfree(a1[1]);
  qfree(a1[2]);
  qfree(a1[3]);
  a1[3] = nullptr;
  *(_OWORD *)(a1 + 1) = 0;
}

