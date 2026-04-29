unsigned __int64 __fastcall sub_2F8C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // edx
  __int64 v9; // rax

  if ( !*(_QWORD *)(a5 + 16) )
    goto LABEL_14;
  v8 = (*(__int64 (__fastcall **)(__int64))(a5 + 24))(a5);
  v9 = *(_QWORD *)(a5 + 16);
  if ( v8 >= 0 )
  {
    if ( !v9 )
      goto LABEL_14;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a2, a4) >= 0 )
    {
      if ( *(_QWORD *)(a5 + 16) )
      {
        if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a3, a4) >= 0 )
          return sub_2F8A70(a1, a3);
        return sub_2F8A70(a1, a4);
      }
LABEL_14:
      std::__throw_bad_function_call();
    }
    return sub_2F8A70(a1, a2);
  }
  if ( !v9 )
    goto LABEL_14;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a3, a4) < 0 )
    return sub_2F8A70(a1, a3);
  if ( !*(_QWORD *)(a5 + 16) )
    goto LABEL_14;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a2, a4) >= 0 )
    return sub_2F8A70(a1, a2);
  return sub_2F8A70(a1, a4);
}
