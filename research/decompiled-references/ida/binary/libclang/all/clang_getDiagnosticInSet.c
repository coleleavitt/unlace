__int64 __fastcall clang_getDiagnosticInSet(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  if ( !a1 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( a2 < (unsigned __int64)((*(_QWORD *)(a1 + 16) - v2) >> 3) )
    return *(_QWORD *)(v2 + 8LL * a2);
  return v3;
}

