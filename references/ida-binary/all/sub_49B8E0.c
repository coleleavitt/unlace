__int64 __fastcall chooser_flat_bucket_data_t__::vfunc_6(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  __int64 v5; // rsi

  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 40LL);
  if ( v4 == chooser_flat_bucket_data_t__::vfunc_5 )
    v5 = *(_QWORD *)(a1[1] + 8 * a3);
  else
    v5 = v4((__int64)a1, a3);
  if ( v5 == -1 )
    return 0;
  else
    return sub_4D8990(a2);
}
