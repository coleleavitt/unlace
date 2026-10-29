__int64 __fastcall sub_199470(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 (__fastcall *v4)(__int64, _QWORD); // rax
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rdi
  __int64 result; // rax

  v4 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 112LL);
  if ( (char *)v4 == (char *)&loc_198BF0 )
  {
    v5 = TProgram::application;
    if ( TProgram::application )
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 48LL))(TProgram::application + 136LL);
  }
  else
  {
    v5 = v4(a1, a3);
  }
  *(_QWORD *)a2 = v5;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 56LL))(TProgram::application + 136LL);
  v7 = *(_QWORD *)a2;
  *(_DWORD *)(a2 + 8) = v6;
  result = sub_17F270(v7);
  *(_QWORD *)(a2 + 232) = result;
  return result;
}

