void __fastcall sub_409130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
        {
LABEL_7:
          sub_408F40(a1, a3);
          return;
        }
        goto LABEL_13;
      }
LABEL_14:
      std::__throw_bad_function_call();
    }
    goto LABEL_12;
  }
  if ( !v9 )
    goto LABEL_14;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a3, a4) < 0 )
    goto LABEL_7;
  if ( !*(_QWORD *)(a5 + 16) )
    goto LABEL_14;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a2, a4) >= 0 )
  {
LABEL_12:
    sub_408F40(a1, a2);
    return;
  }
LABEL_13:
  sub_408F40(a1, a4);
}
