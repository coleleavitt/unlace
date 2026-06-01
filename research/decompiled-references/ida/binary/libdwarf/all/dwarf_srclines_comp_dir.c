__int64 __fastcall dwarf_srclines_comp_dir(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( a1 && *(_DWORD *)a1 == -804450031 )
  {
    *a2 = *(_QWORD *)(a1 + 280);
    return 0;
  }
  else
  {
    _dwarf_error(0, a3, 305);
    return 1;
  }
}

