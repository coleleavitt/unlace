_BOOL8 __fastcall sub_19AFB0(__int64 a1)
{
  _BOOL4 v1; // r14d
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r12
  _QWORD *v5; // r13
  void (__fastcall *v6)(__int64, _QWORD *); // rax

  v1 = !(*(_BYTE *)(a1 + 116) & 1);
  if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
  {
    v2 = TProgram::application;
    v3 = TProgram::application + 136LL;
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 80LL))(TProgram::application + 136LL);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 16LL))(v4, v5);
    (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)(v2 + 136) + 112LL))(v3, a1, v5);
    v6 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 48LL);
    if ( (char *)v6 == (char *)&loc_1999A0 )
    {
      if ( v5 )
      {
        if ( v5[6] )
        {
          v5[7] = 0;
          qfree();
        }
        if ( v5[2] )
        {
          v5[3] = 0;
          qfree();
        }
        operator delete(v5, 0x120u);
      }
    }
    else
    {
      v6(v4, v5);
    }
  }
  return v1;
}

