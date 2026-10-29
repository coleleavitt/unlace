__int64 __fastcall sub_1991D0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( a2 > 0 )
  {
    v2 = *(_QWORD *)(a1 + 104);
    result = v2 | *(_QWORD *)(a1 + 96);
    if ( *(_OWORD *)(a1 + 96) != 0 )
    {
      result = TProgram::application;
      if ( TProgram::application )
        return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)(TProgram::application + 136LL)
                                                                            + 176LL))(
                 TProgram::application + 136LL,
                 *(_QWORD *)(a1 + 96),
                 v2,
                 1);
    }
  }
  return result;
}

