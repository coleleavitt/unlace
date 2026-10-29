__int64 __fastcall sub_19BD80(__int64 a1)
{
  if ( TProgram::application )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(TProgram::application + 136LL) + 96LL))(
             TProgram::application + 136LL,
             a1);
  else
    return 0;
}

