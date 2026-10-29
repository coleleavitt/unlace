__int64 __fastcall sub_471910(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 result; // rax

  if ( !*(_QWORD *)(a3 + 16) )
    return 1;
  v4 = *a2;
  if ( *a2 >= a2[1] )
    return 0;
  while ( 1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, v4);
    if ( v5 )
    {
      if ( !*(_QWORD *)(a3 + 16) )
        std::__throw_bad_function_call();
      result = (*(__int64 (__fastcall **)(__int64, __int64))(a3 + 24))(a3, v5);
      if ( (_DWORD)result )
        break;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v4);
    if ( v4 >= a2[1] )
      return 0;
  }
  return result;
}

