_QWORD *__fastcall sub_1091C0(__int64 *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 (__fastcall *v3)(__int64); // rdx
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  __int64 v7; // rax

  result = &TProgram::application;
  *a1 = 0;
  if ( TProgram::application )
  {
    v3 = sub_105420;
    v4 = TProgram::application + 136LL;
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 80LL);
    if ( v5 == sub_105420 )
    {
      v6 = TProgram::application + 280LL;
LABEL_4:
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(__int64), __int64))(*(_QWORD *)v6 + 40LL))(
             v6,
             a2,
             v3,
             v4);
      *a1 = v7;
      return (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, v7);
    }
    result = (_QWORD *)v5(TProgram::application + 136LL);
    v6 = (__int64)result;
    if ( result )
      goto LABEL_4;
  }
  return result;
}

