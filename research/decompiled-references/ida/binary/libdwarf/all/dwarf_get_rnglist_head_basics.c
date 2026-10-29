__int64 __fastcall dwarf_get_rnglist_head_basics(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        _DWORD *a13,
        _QWORD *a14,
        _DWORD *a15,
        _QWORD *a16,
        _DWORD *a17,
        _QWORD *a18,
        __int64 a19)
{
  _QWORD *v19; // rdx

  if ( a1 && *(_QWORD *)(a1 + 56) && *(_QWORD *)(a1 + 40) == 43981 )
  {
    *a2 = *(_QWORD *)(a1 + 24);
    *a3 = *(_QWORD *)(a1 + 72);
    *a4 = *(_QWORD *)(a1 + 80);
    *a5 = *(_QWORD *)(a1 + 32);
    *a6 = *(_QWORD *)(a1 + 88);
    *a7 = *(_QWORD *)(a1 + 96);
    *a8 = *(_DWORD *)(a1 + 104);
    v19 = *(_QWORD **)(a1 + 64);
    if ( v19 )
    {
      *a9 = v19[2];
      *a10 = v19[3];
      *a11 = v19[10];
      *a12 = v19[8];
    }
    *a13 = *(_DWORD *)(a1 + 108);
    *a14 = *(_QWORD *)(a1 + 112);
    *a15 = *(_DWORD *)(a1 + 120);
    *a16 = *(_QWORD *)(a1 + 128);
    *a17 = *(_DWORD *)(a1 + 136);
    *a18 = *(_QWORD *)(a1 + 144);
    return 0;
  }
  else
  {
    _dwarf_error_string(
      0,
      a19,
      81,
      "DW_DLE_DBG_NULL NULL or invalid Dwarf_Rnglists_Head argument passed to dwarf_get_rnglist_head_basics()");
    return 1;
  }
}

