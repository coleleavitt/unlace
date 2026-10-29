__int64 __fastcall dwarf_prologue_end_etc(__int64 a1, _DWORD *a2, _DWORD *a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  if ( a1 )
  {
    *a2 = (*(_BYTE *)(a1 + 56) & 8) != 0;
    *a3 = (*(_BYTE *)(a1 + 56) & 0x10) != 0;
    *a4 = *(unsigned __int16 *)(a1 + 34);
    *a5 = *(_QWORD *)(a1 + 8);
    return 0;
  }
  else
  {
    _dwarf_error(0, a6, 59);
    return 1;
  }
}

