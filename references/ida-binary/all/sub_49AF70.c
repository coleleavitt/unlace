__int64 __fastcall chooser_folder_data_t__::vfunc_8(_QWORD *a1)
{
  if ( (*(_BYTE *)(a1[12] + 120LL) & 1) != 0 )
    return a1[10];
  else
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
}
