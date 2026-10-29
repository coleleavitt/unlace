__int64 __fastcall sub_E14A0(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)a1 & 0xFFFFFEE7;
  if ( (a1 & 0xFFFFFEE7) != 0 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_E16D0(40055);
  }
  if ( !dword_2515A4 )
    return 0xFFFFFFFFLL;
  if ( byte_251536 )
  {
    sub_D3040(a1);
    byte_251536 = 0;
    return 0xFFFFFFFFLL;
  }
  if ( dword_2515A4 >= 0 )
  {
    if ( (*(_BYTE *)(dbg + 34LL) & 8) != 0 )
      JUMPOUT(0xCC8C0);
    free_debug_event();
    LODWORD(qword_251328) = -1;
    BYTE4(qword_251328) = 0;
    qword_251320 = 0xFFFFFFFFLL;
    sub_9E0A0();
    byte_251536 = 1;
    return 0xFFFFFFFFLL;
  }
  return result;
}

