__int64 __fastcall sub_104EA0(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( a2 || (result = *(_QWORD *)(a1 + 16)) == 0 )
  {
    if ( TProgram::application )
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(TProgram::application + 136LL) + 48LL))(
               TProgram::application + 136LL,
               a2);
    else
      return 0;
  }
  return result;
}

