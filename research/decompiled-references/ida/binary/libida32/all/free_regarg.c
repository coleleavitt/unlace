void __fastcall free_regarg(__int64 a1)
{
  if ( a1 )
  {
    qfree(*(void **)(a1 + 8));
    qfree(*(void **)(a1 + 16));
    *(_OWORD *)(a1 + 8) = 0;
  }
}

