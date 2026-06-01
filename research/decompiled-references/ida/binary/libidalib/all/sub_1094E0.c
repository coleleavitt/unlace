void __fastcall sub_1094E0(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 (__fastcall *v3)(__int64); // rdx
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rdi

  v1 = *a1;
  if ( *a1 && TProgram::application )
  {
    v3 = sub_1056C0;
    v4 = TProgram::application + 136LL;
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 80LL);
    if ( v5 == sub_1056C0 )
    {
      v6 = TProgram::application + 280LL;
LABEL_5:
      (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(__int64), __int64))(*(_QWORD *)v6 + 56LL))(
        v6,
        v1,
        v3,
        v4);
      return;
    }
    v6 = v5(TProgram::application + 136LL);
    if ( v6 )
    {
      v1 = *a1;
      goto LABEL_5;
    }
  }
}

