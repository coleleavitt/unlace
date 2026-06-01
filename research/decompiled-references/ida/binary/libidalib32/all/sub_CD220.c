__int64 sub_CD220()
{
  unsigned int v0; // ebx
  _QWORD *v2; // rax

  v0 = dword_25159C;
  if ( dword_25159C )
  {
    byte_2515A0 = 0;
    return 1;
  }
  if ( dword_2515A4 <= 0 )
    return v0;
  if ( !qword_251198 )
  {
    v2 = (_QWORD *)operator new(0x10u);
    v2[1] = 0;
    *v2 = off_22F2E8;
    if ( (int)sub_CCEC0(v2) <= 0 )
      return v0;
    sub_CB4C0("Suspending...");
    return 1;
  }
  if ( (unsigned int)sub_924A0(
                       1u,
                       (__int64)"HIDECANCEL\nIDA is already trying to suspend the process.\nDo you want to stop it?") != 1 )
    return 1;
  return sub_CCFA0();
}

