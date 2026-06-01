__int64 __fastcall sub_19BCF0(__int64 (__fastcall ***a1)(_QWORD, _QWORD))
{
  _QWORD *v1; // rax

  if ( !TProgram::application )
    return 0;
  v1 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 32LL))(TProgram::application + 136LL);
  return sub_19B530(v1, a1);
}

