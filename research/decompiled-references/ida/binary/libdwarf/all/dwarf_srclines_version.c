__int64 __fastcall dwarf_srclines_version(__int64 a1, _QWORD *a2, _BYTE *a3, __int64 a4)
{
  if ( a1 && *(_DWORD *)a1 == -804450031 )
  {
    *a2 = *(unsigned __int16 *)(a1 + 24);
    *a3 = *(_BYTE *)(a1 + 296);
    return 0;
  }
  else
  {
    _dwarf_error(0, a4, 305);
    return 1;
  }
}

