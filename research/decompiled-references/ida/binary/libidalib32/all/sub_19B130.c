__int64 __fastcall sub_19B130(unsigned __int16 a1)
{
  __int64 v2; // rdi

  if ( !TProgram::application )
    return 0;
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 32LL))(TProgram::application + 136LL);
  if ( v2 )
    return sub_19A8C0(v2, a1);
  else
    return 0;
}

