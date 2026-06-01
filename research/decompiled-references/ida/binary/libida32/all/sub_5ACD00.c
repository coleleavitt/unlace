void __fastcall sub_5ACD00(unsigned int *a1)
{
  if ( (a1[2] & 1) == 0 && !sub_375980(0x3Au, a1) )
  {
    *((_QWORD *)a1 + 1) |= 1uLL;
    update_func(a1);
    reanalyze_callers(*a1, 1);
    sub_396090(0x2Bu, a1);
  }
}

