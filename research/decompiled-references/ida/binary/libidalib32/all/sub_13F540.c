bool __fastcall sub_13F540(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 v3; // rdx
  int v4; // eax

  if ( *(_QWORD *)(a1 + 320) )
  {
    if ( under_debugger )
      BUG();
    interr();
    if ( v2 )
    {
      LOBYTE(v4) = a2 == 0xE900000000000000LL;
    }
    else
    {
      v3 = *(_QWORD *)(a2 + 8);
      LOBYTE(v4) = 1;
      if ( (v3 & 1) != 0 )
      {
        if ( dword_2515A4 <= 0 || (LOBYTE(v4) = 0, (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
        {
          LOBYTE(v4) = 1;
          if ( (v3 & 2) != 0 )
            return !sub_CACE0();
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 320) = a2;
    LOBYTE(v4) = send_request_to_main_thread(nullptr);
  }
  return v4;
}

