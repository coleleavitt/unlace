__int64 __fastcall dwarf_get_fde_augmentation_data(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 )
  {
    _dwarf_error(0, a4, 92);
    return 1;
  }
  result = 0xFFFFFFFFLL;
  if ( !*(_DWORD *)(a1 + 120) )
    return result;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    _dwarf_error(0, a4, 94);
    return 1;
  }
  *a2 = *(_QWORD *)(a1 + 128);
  *a3 = *(_QWORD *)(a1 + 112);
  return 0;
}

