__int64 __fastcall sub_15D1970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r15
  __int64 v13; // rdi
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 24) )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v7);
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v13 + 216LL))(
               v13,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7);
    if ( (_BYTE)result )
      break;
    if ( *(unsigned int *)(a1 + 24) <= (unsigned __int64)++v7 )
      return 0;
  }
  return result;
}
