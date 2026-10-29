__int64 __fastcall clang_getDiagnosticOption(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v3; // rdx

  if ( a2 )
  {
    *a2 = sub_690460(a3);
    a2[1] = v3;
  }
  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 40LL))(a1, a2);
  else
    return sub_690460(a3);
}

