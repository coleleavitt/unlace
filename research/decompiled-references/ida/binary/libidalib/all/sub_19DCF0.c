__int64 __fastcall sub_19DCF0(const char *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  __int64 result; // rax

  if ( !TProgram::application )
    return 0;
  v1 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 32LL))(TProgram::application + 136LL);
  v2 = v1;
  if ( !v1 )
    return 0;
  result = sub_19BAE0(v1, a1);
  if ( !result )
    return sub_19DBA0(v2, a1);
  return result;
}

