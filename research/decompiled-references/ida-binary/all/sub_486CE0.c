__int64 __fastcall folder_data_t__::vfunc_8(_QWORD *a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*a1 + 24LL);
  if ( (char *)v1 == (char *)folder_data_t__::vfunc_3 )
    return a1[2];
  else
    return v1();
}
