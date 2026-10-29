__int64 sub_CE6F0()
{
  _QWORD *v1; // rax

  if ( !dword_25274C || (*(_BYTE *)(dbg + 36LL) & 4) == 0 )
    return 0;
  v1 = (_QWORD *)operator new(0x10u);
  v1[1] = 0;
  *v1 = off_2303B8;
  if ( (int)sub_CE470(v1) <= 0 )
    return 0;
  sub_CCA40("Detaching...");
  return 1;
}

