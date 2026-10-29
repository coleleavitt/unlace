__int64 __fastcall dwarf_get_cie_augmentation_data(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_QWORD *)(a1 + 104) )
    {
      *a2 = *(_QWORD *)(a1 + 112);
      *a3 = *(_QWORD *)(a1 + 104);
      return 0;
    }
  }
  else
  {
    _dwarf_error(0, a4, 94);
    return 1;
  }
  return result;
}

