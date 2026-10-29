__int64 sub_CD140()
{
  _QWORD *v1; // rax

  if ( !dword_2515A4 || (*(_BYTE *)(dbg + 36LL) & 4) == 0 )
    return 0;
  v1 = (_QWORD *)operator new(0x10u);
  v1[1] = 0;
  *v1 = off_22F338;
  if ( (int)sub_CCEC0(v1) <= 0 )
    return 0;
  sub_CB4C0("Detaching...");
  return 1;
}

