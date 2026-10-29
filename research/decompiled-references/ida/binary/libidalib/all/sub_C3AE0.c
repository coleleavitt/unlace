__int64 __fastcall sub_C3AE0(__int64 a1)
{
  free_debug_event();
  *(_QWORD *)(a1 + 136) = -1;
  *(_BYTE *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 128) = 0xFFFFFFFFLL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 224LL))(TProgram::application + 136LL) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  sub_9E1E0();
  byte_2526BA = 1;
  *(_DWORD *)(a1 + 88) = 8;
  return 30;
}

