bool __fastcall sub_B04760(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4)
{
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // eax

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8848LL) + a4) )
  {
    sub_1872CE0("");
    sub_1873130(114, 345);
  }
  v5 = *(_QWORD *)(a1 + 8);
  if ( *a3 )
  {
    if ( v5 )
      v6 = *(_DWORD *)(v5 - 4);
    else
      v6 = 0;
    v7 = v6 - *(_DWORD *)(*a3 - 4LL);
    return *(_DWORD *)(a1 + 16) >= v7;
  }
  if ( !v5 )
  {
    v7 = 0;
    return *(_DWORD *)(a1 + 16) >= v7;
  }
  return *(_DWORD *)(a1 + 16) >= *(_DWORD *)(v5 - 4);
}

