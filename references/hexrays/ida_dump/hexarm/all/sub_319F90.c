__int64 __fastcall sub_319F90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // edx

  v3 = sub_319E10(a1, a3);
  if ( a2 )
  {
    *(_QWORD *)a2 = v3;
    *(_DWORD *)(a2 + 8) = v4;
  }
  return 1;
}
