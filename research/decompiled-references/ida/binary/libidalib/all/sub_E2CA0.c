__int64 __fastcall sub_E2CA0(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)a1 & 0xFFFFFEE7;
  if ( (a1 & 0xFFFFFEE7) != 0 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_E2ED0(40055);
  }
  if ( !dword_25274C )
    return 0xFFFFFFFFLL;
  if ( byte_2526BA )
  {
    sub_D4570(a1);
    byte_2526BA = 0;
    return 0xFFFFFFFFLL;
  }
  if ( dword_25274C >= 0 )
  {
    if ( (*(_BYTE *)(dbg + 34LL) & 8) != 0 )
      JUMPOUT(0xCDE30);
    free_debug_event();
    qword_2524A8 = -1;
    LOBYTE(qword_2524B0) = 0;
    qword_2524A0 = 0xFFFFFFFFLL;
    sub_9E1E0();
    byte_2526BA = 1;
    return 0xFFFFFFFFLL;
  }
  return result;
}

