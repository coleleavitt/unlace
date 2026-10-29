__int64 __fastcall sub_2C450(
        Dwarf_Debug a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        int a7,
        __int64 **a8,
        __int16 a9,
        __int64 a10)
{
  __int64 alloc; // rax
  __int64 v14; // rax
  void *v17; // [rsp+8h] [rbp-40h]

  alloc = _dwarf_get_alloc(a1, (unsigned __int8)a7, 1);
  if ( alloc )
  {
    ++*a5;
    *(_QWORD *)(alloc + 16) = a2;
    *(_QWORD *)alloc = a3;
    *(_WORD *)(alloc + 24) = (unsigned __int8)a7;
    *(_QWORD *)(alloc + 8) = a4;
    *(_WORD *)(alloc + 26) = a9;
    v17 = (void *)alloc;
    v14 = _dwarf_get_alloc(a1, 31, 1);
    if ( v14 )
    {
      *(_QWORD *)v14 = v17;
      *(_DWORD *)(v14 + 8) = a7;
      **a8 = v14;
      *a8 = (__int64 *)(v14 + 16);
      *a6 = 1;
      return 0;
    }
    dwarf_dealloc(a1, v17, *(unsigned int *)(a2 + 4));
    _dwarf_error_string(a1, a10, 62, "DW_DLE_ALLOC_FAIL: allocating a Dwarf_Chain internal structure.");
  }
  else
  {
    _dwarf_error_string(a1, a10, 62, "DW_DLE_ALLOC_FAIL: Allocating Dwarf_Global");
  }
  return 1;
}

