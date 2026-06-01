__int64 __fastcall chooser_folder_data_t__::vfunc_5(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 8) + 9 * a2;
  if ( *(_BYTE *)(v2 + 8) )
    return -1;
  else
    return sub_498880(*(_QWORD *)(a1 + 96), *(_QWORD *)v2, 0);
}
