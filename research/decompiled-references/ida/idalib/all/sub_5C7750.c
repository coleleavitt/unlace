void __fastcall sub_5C7750(__int64 *a1)
{
  if ( (a1[2] & 1) == 0 && !sub_3792E0(0x3Au, a1) )
  {
    a1[2] |= 1uLL;
    update_func(a1);
    reanalyze_callers(*a1, 1);
    sub_39ADA0(0x2Bu, a1);
  }
}
