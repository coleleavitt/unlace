__int64 __fastcall sub_4489A0(__int64 a1, int a2, int a3, int a4, int a5)
{
  if ( dword_65A800 )
  {
    sub_47D740((unsigned int)"TclInitSubsystems called while finalizing", a2, a3, a4, a5, dword_65A800);
    if ( dword_65A810 )
      return sub_479F40();
  }
  else if ( dword_65A810 )
  {
    return sub_479F40();
  }
  sub_4AE140();
  if ( !dword_65A810 )
  {
    sub_497370();
    sub_4AD3C0();
    sub_493B00();
    sub_47AA60();
    sub_45D430();
    sub_445AE0();
    nullsub_13();
    nullsub_7();
    dword_65A810 = 1;
  }
  sub_4AE160();
  return sub_479F40();
}

