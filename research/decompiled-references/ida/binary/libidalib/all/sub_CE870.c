__int64 sub_CE870()
{
  unsigned int v0; // ebx
  _QWORD *v2; // rax

  v0 = dword_252744;
  if ( dword_252744 )
  {
    byte_252748 = 0;
    return 1;
  }
  if ( dword_25274C <= 0 )
    return v0;
  if ( !qword_252278 )
  {
    v2 = (_QWORD *)operator new(0x10u);
    v2[1] = 0;
    *v2 = off_230368;
    if ( (int)sub_CE470(v2) <= 0 )
      return v0;
    sub_CCA40("Suspending...");
    return 1;
  }
  if ( (unsigned int)sub_92580(
                       1u,
                       (__int64)"HIDECANCEL\nIDA is already trying to suspend the process.\nDo you want to stop it?") != 1 )
    return 1;
  return sub_CE550();
}

