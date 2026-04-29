__int64 __fastcall sub_385E60(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  if ( *(_DWORD *)a1 == 1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    result = -1;
    if ( *(_DWORD *)(v2 + 8) == 64 )
      return *(_QWORD *)(v2 + 24);
  }
  else if ( *(_DWORD *)a1 == 3 )
  {
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 40LL);
  }
  else
  {
    return -1;
  }
  return result;
}
