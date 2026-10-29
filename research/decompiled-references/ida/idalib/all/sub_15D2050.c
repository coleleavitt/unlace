__int64 __fastcall sub_15D2050(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax

  v3 = *(unsigned int *)(a1 + 24);
  if ( !*(_DWORD *)(a1 + 24) )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v6);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 400LL))(v7, a2, a3);
    if ( (_BYTE)result )
      break;
    if ( v3 == ++v6 )
      return 0;
  }
  return result;
}
