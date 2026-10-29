__int64 __fastcall sub_FE870(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  v2 = a2[2];
  if ( v2 != 28 && v2 != 34 )
    return 6;
  if ( *(_BYTE *)(*(_QWORD *)a2 + 1248LL) )
    return 7;
  if ( (unsigned __int8)sub_15F1A0() )
    return 3;
  return 7;
}

