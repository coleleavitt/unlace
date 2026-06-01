__int64 __fastcall sub_E13D0(__int64 a1, __m128 a2)
{
  if ( *(_BYTE *)(a1 + 24) && !byte_251536 && *((_DWORD *)qword_2515B0 + 20) != 8 )
  {
    copy_debug_event();
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(TProgram::application + 136LL) + 224LL))(
           TProgram::application + 136LL,
           a1 + 32) )
    {
      if ( under_debugger )
        goto LABEL_14;
      interr();
    }
    else if ( *((_DWORD *)qword_2515B0 + 20) == 2 )
    {
      dword_2515AC = (unsigned __int8)sub_DECE0(*(_DWORD *)(a1 + 28), a2);
      return 0;
    }
    if ( !under_debugger )
    {
      interr();
      return sub_E14A0(40201);
    }
LABEL_14:
    BUG();
  }
  if ( dword_2515A4 )
    sub_D3040(a1);
  dword_2515AC = -1;
  return 0;
}

