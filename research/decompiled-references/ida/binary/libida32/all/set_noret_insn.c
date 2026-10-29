__int64 __fastcall set_noret_insn(__int64 a1, char a2)
{
  _QWORD *v2; // r12
  int aflags; // eax
  unsigned int v4; // edx

  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  aflags = get_aflags(a1);
  v4 = 0;
  if ( a2 != ((aflags & 0x400000) != 0) )
  {
    if ( a2 )
      set_abits((unsigned int)a1, &loc_400000);
    else
      clr_abits((unsigned int)a1, &loc_400000);
    sub_5B2020(v2, (unsigned int)a1);
    return 1;
  }
  return v4;
}

