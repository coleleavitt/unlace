__int64 __fastcall sub_E2BD0(__int64 a1, __m128i a2)
{
  if ( *(_BYTE *)(a1 + 24) && !byte_2526BA && *((_DWORD *)qword_252758 + 22) != 8 )
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
    else if ( *((_DWORD *)qword_252758 + 22) == 2 )
    {
      dword_252754 = (unsigned __int8)sub_E0360(*(_DWORD *)(a1 + 28), a2);
      return 0;
    }
    if ( !under_debugger )
    {
      interr();
      return sub_E2CA0(40201);
    }
LABEL_14:
    BUG();
  }
  if ( dword_25274C )
    sub_D4570(a1);
  dword_252754 = -1;
  return 0;
}

