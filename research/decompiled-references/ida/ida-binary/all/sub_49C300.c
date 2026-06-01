__int64 __fastcall chooser_folder_data_t__::vfunc_6(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rax
  __int64 v7; // rsi

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
  if ( v4 == chooser_folder_data_t__::vfunc_5 )
  {
    v5 = a1[1] + 9 * a3;
    if ( *(_BYTE *)(v5 + 8) )
      return 0;
    v7 = sub_498880(a1[12], *(_QWORD *)v5, 0);
  }
  else
  {
    v7 = v4((__int64)a1, a3);
  }
  if ( v7 == -1 )
    return 0;
  return sub_4D8990(a2);
}
