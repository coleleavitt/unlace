void __fastcall sub_19B5B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  void (__fastcall *v7)(__int64, _QWORD *); // rax

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 80LL))(TProgram::application + 136LL);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 16LL))(v5, v6);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, a2, v6, a4, 0);
  v7 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL);
  if ( (char *)v7 == (char *)&loc_198DA0 )
  {
    if ( v6 )
    {
      if ( v6[6] )
      {
        v6[7] = 0;
        qfree();
      }
      if ( v6[2] )
      {
        v6[3] = 0;
        qfree();
      }
      operator delete(v6, 0x118u);
    }
  }
  else
  {
    v7(v5, v6);
  }
}

