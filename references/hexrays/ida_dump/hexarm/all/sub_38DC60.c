__int64 __fastcall sub_38DC60(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *(_DWORD *)a1 == 1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    result = 0;
    if ( *(_DWORD *)(v2 + 8) == 65 )
      return *(_QWORD *)(*(_QWORD *)(v2 + 24) + 432LL) + 104LL * *(int *)(v2 + 32);
  }
  else if ( *(_DWORD *)a1 == 2 )
  {
    return *(_QWORD *)(a1 + 8);
  }
  else
  {
    return 0;
  }
  return result;
}
