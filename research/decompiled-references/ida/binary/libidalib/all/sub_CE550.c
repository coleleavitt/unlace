bool sub_CE550()
{
  _QWORD *v0; // rax

  if ( !dbg )
    return 0;
  if ( !dword_25274C )
    return 1;
  if ( (*(_BYTE *)(dbg + 33LL) & 1) != 0 )
  {
    v0 = (_QWORD *)operator new(0x10u);
    v0[1] = 0;
    *v0 = off_230390;
    return (int)sub_CE470(v0) > 0;
  }
  else if ( (int)sub_CDCF0((__int64)qword_252758, 3) <= 0 )
  {
    return 0;
  }
  else
  {
    dword_2526BC |= 2u;
    sub_CCA40("Exiting...");
    sub_B76F0(0);
    return 1;
  }
}

