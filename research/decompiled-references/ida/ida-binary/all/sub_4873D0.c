__int64 __fastcall folder_data_t__::vfunc_6(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rax
  __int64 v6; // rsi

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
  if ( v4 == folder_data_t__::vfunc_5 )
  {
    v5 = a1[1] + 9 * a3;
    v6 = *(_QWORD *)v5;
    if ( *(_BYTE *)(v5 + 8) )
      return 0;
  }
  else
  {
    v6 = v4((__int64)a1, a3);
  }
  if ( v6 != -1 )
    return sub_4D8990(a2);
  return 0;
}
