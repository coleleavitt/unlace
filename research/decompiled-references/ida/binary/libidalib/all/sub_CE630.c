bool sub_CE630()
{
  _QWORD *v1; // rax

  if ( dword_252744 )
  {
    byte_252748 = 0;
    return 1;
  }
  else if ( dword_25274C <= 0 )
  {
    return 0;
  }
  else if ( qword_252278 )
  {
    if ( (unsigned int)sub_92580(
                         1u,
                         (__int64)"HIDECANCEL\nIDA is already trying to suspend the process.\nDo you want to stop it?") != 1 )
      return 1;
    return sub_CE550();
  }
  else
  {
    v1 = (_QWORD *)operator new(0x10u);
    v1[1] = 0;
    *v1 = off_230368;
    if ( (int)sub_CE470(v1) > 0 )
    {
      sub_CCA40("Suspending...");
      return 1;
    }
    return 0;
  }
}

