__int64 __fastcall sub_1F5DB0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdi

  v3 = sub_17D870(a1);
  if ( !v3 )
    return 1;
  if ( *(_QWORD *)(v3 + 424) )
  {
    if ( *(_DWORD *)(v3 + 416) == 1 )
    {
      v7 = *(_QWORD *)(v3 + 888);
      if ( v7 )
      {
        sub_288950(v7, 1);
        return 1;
      }
    }
    return 1;
  }
  sub_1E69C0(a3, a1, a2, v4, v5);
  return sub_1F5E10();
}
