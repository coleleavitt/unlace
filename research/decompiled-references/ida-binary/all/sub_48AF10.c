__int64 __fastcall sub_48AF10(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax

  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    return *(unsigned int *)(a2 + 80);
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v3 == folder_data_t__::vfunc_3 )
    return *(_QWORD *)(a2 + 16);
  else
    return v3(a2);
}
