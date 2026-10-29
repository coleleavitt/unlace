bool sub_CCFA0()
{
  _QWORD *v0; // rax

  if ( !dbg )
    return 0;
  if ( !dword_2515A4 )
    return 1;
  if ( (*(_BYTE *)(dbg + 33LL) & 1) != 0 )
  {
    v0 = (_QWORD *)operator new(0x10u);
    v0[1] = 0;
    *v0 = off_22F310;
    return (int)sub_CCEC0(v0) > 0;
  }
  else if ( (int)sub_CC780((__int64)qword_2515B0, 3) <= 0 )
  {
    return 0;
  }
  else
  {
    dword_251538 |= 2u;
    sub_CB4C0("Exiting...");
    sub_B7090(0);
    return 1;
  }
}

