__int64 __fastcall dwarf_merge_all_base_attrs_of_cu_die(__int64 a1, struct Dwarf_Debug_s *a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( !a2 || !*(_DWORD *)(a1 + 336) )
    return 0xFFFFFFFFLL;
  result = _dwarf_search_for_signature(a2);
  if ( (_DWORD)result != 1 )
  {
    if ( (_DWORD)result == -1 )
      return 0xFFFFFFFFLL;
    *(_DWORD *)(a1 + 344) = 4;
    *(_QWORD *)(a1 + 392) = 4;
    if ( (unsigned __int16)(*(_WORD *)(a1 + 18) - 4) <= 1u && !*(_DWORD *)(a1 + 552) )
    {
      *(_DWORD *)(a1 + 552) = 3760;
      *(_QWORD *)(a1 + 544) = 3760;
    }
    if ( !*(_DWORD *)(a1 + 464) )
    {
      *(_DWORD *)(a1 + 464) = 0;
      *(_QWORD *)(a1 + 472) = 0;
      *(_QWORD *)(a1 + 480) = 0;
      *(_QWORD *)(a1 + 496) = 0;
      *(_WORD *)(a1 + 504) = 16;
      *(_QWORD *)(a1 + 488) = 0;
    }
    if ( a3 )
      *a3 = 0;
    return 0;
  }
  return result;
}

