__int64 __fastcall sub_15D12C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 24) )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v3);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, a2);
    if ( result )
      break;
    if ( *(unsigned int *)(a1 + 24) <= (unsigned __int64)++v3 )
      return 0;
  }
  return result;
}
