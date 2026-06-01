void __fastcall chooser_folder_data_t__::vfunc_11(_QWORD *a1, __int64 a2, __int64 a3, __int64 **a4)
{
  int v4; // eax

  v4 = *(_DWORD *)(*(_QWORD *)(a1[12] + 304LL) + 2376LL);
  if ( v4 == 1 )
  {
    chooser_flat_bucket_data_t__::vfunc_11(a1, a2, a3, a4);
  }
  else if ( v4 == 2 )
  {
    folder_data_t__::vfunc_11(a1, a2, a3, a4);
  }
}
