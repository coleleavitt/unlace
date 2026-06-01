__int64 __fastcall clang_getDiagnosticRange(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a2 && a3 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a1, a2, a3);
    return a1;
  }
  else
  {
    clang_getNullRange(a1);
    return a1;
  }
}

