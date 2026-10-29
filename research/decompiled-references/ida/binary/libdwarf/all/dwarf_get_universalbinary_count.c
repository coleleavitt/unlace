__int64 __fastcall dwarf_get_universalbinary_count(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL || !*(_DWORD *)(a1 + 8352) )
    return 0xFFFFFFFFLL;
  if ( a2 )
    *a2 = *(unsigned int *)(a1 + 8356);
  if ( a3 )
    *a3 = *(unsigned int *)(a1 + 8352);
  return 0;
}

