__int64 __fastcall sub_CDC320(__int64 a1, _QWORD *a2)
{
  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  *(_QWORD *)(a1 + 1240) = *a2;
  return sub_DFE230();
}

