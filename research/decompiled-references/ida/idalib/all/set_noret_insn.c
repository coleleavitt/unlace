__int64 __fastcall set_noret_insn(void *a1, char a2)
{
  __int64 (__fastcall **v2)(_QWORD, __int128 *, __int64); // r12
  int aflags; // eax
  unsigned int v4; // edx

  v2 = *(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64))(qword_2CCB598 + 1672);
  aflags = get_aflags(a1);
  v4 = 0;
  if ( a2 != ((aflags & 0x400000) != 0) )
  {
    if ( a2 )
      set_abits(a1, 0x400000);
    else
      clr_abits(a1, 0x400000);
    sub_5CCEB0(v2, (unsigned __int64)a1);
    return 1;
  }
  return v4;
}
