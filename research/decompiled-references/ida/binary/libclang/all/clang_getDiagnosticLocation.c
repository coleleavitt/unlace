__int64 __fastcall clang_getDiagnosticLocation(__int64 a1, __int64 a2)
{
  if ( a2 )
    (*(void (**)(void))(*(_QWORD *)a2 + 24LL))();
  else
    clang_getNullLocation(a1);
  return a1;
}

