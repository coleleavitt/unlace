__int64 __fastcall sub_B99EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi

  v8 = *(__int64 **)(sub_B685F0(a1) + 18360);
  if ( !v8 )
    return 0;
  v9 = *v8;
  v10 = *(_QWORD *)(a1 + 72);
  if ( a4 )
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 80))(v8, v10, 0);
  else
    return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v9 + 88))(v8, v10, a2, a3);
}

