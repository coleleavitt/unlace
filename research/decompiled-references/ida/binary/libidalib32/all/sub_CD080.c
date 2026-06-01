bool sub_CD080()
{
  _QWORD *v1; // rax

  if ( dword_25159C )
  {
    byte_2515A0 = 0;
    return 1;
  }
  else if ( dword_2515A4 <= 0 )
  {
    return 0;
  }
  else if ( qword_251198 )
  {
    if ( (unsigned int)sub_924A0(
                         1u,
                         (__int64)"HIDECANCEL\nIDA is already trying to suspend the process.\nDo you want to stop it?") != 1 )
      return 1;
    return sub_CCFA0();
  }
  else
  {
    v1 = (_QWORD *)operator new(0x10u);
    v1[1] = 0;
    *v1 = off_22F2E8;
    if ( (int)sub_CCEC0(v1) > 0 )
    {
      sub_CB4C0("Suspending...");
      return 1;
    }
    return 0;
  }
}

