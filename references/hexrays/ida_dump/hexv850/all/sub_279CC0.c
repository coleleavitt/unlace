__int64 __fastcall sub_279CC0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_DWORD *)(v2 + 8);
  if ( v3 == 48 )
  {
    if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v2 + 48), 3) == 1 )
      v2 = *(_QWORD *)(v2 + 24);
    v3 = *(_DWORD *)(v2 + 8);
  }
  if ( a2 != v3 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v4 = *(_DWORD *)(v2 + 8);
    if ( v4 == 48 )
    {
      if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v2 + 48), 3) == 1 )
        v2 = *(_QWORD *)(v2 + 24);
      v4 = *(_DWORD *)(v2 + 8);
    }
    if ( a2 != v4 )
      return 0;
  }
  return v2;
}
