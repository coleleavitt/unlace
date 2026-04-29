__int64 __fastcall sub_279330(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( *(_DWORD *)(a2 + 8) == 48 )
    return 1;
  if ( (unsigned __int8)compare_tinfo(*(_QWORD *)(a2 + 48), *a3, 2)
    || *(_DWORD *)(a2 + 8) == 61 && !sub_24E6B0(*(__int64 **)(a2 + 24), (_QWORD *)(a2 + 48)) )
  {
    return 1;
  }
  return sub_2791A0(a1, a2, a3, 0);
}
