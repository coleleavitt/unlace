__int64 __fastcall sub_C28F0(__int64 a1)
{
  free_debug_event();
  *(_DWORD *)(a1 + 128) = -1;
  *(_BYTE *)(a1 + 132) = 0;
  *(_QWORD *)(a1 + 120) = 0xFFFFFFFFLL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 224LL))(TProgram::application + 136LL) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  sub_9E0A0();
  byte_251536 = 1;
  *(_DWORD *)(a1 + 80) = 8;
  return 30;
}

