__int64 __fastcall dbgreg_place_t__::vfunc_20(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // r13
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // rcx
  __int64 v9; // r11
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // eax
  unsigned int v14; // r12d
  int v15; // eax
  _DWORD *v17; // rax
  unsigned __int64 v18; // r11

  v5 = *(_DWORD **)(a3 + 8);
  v6 = *(_DWORD *)(a2 + 12);
  if ( *(_DWORD *)(a1 + 12) >= v6 )
  {
    if ( *(_DWORD *)(a1 + 12) > v6 )
    {
LABEL_13:
      v14 = 1;
      goto LABEL_14;
    }
    v7 = *(_DWORD *)(a2 + 16);
    if ( *(_DWORD *)(a1 + 16) >= v7 )
    {
      if ( *(_DWORD *)(a1 + 16) <= v7 )
      {
        v8 = sub_1E0240(a3, *(_QWORD *)(a1 + 12));
        if ( v8 == v5 )
          goto LABEL_11;
        v10 = *(_DWORD *)(v9 + 20);
        v11 = v8[2];
        if ( v10 >= 0 )
          v10 /= (int)v8[11];
        v12 = v10 + v11;
        v13 = *(_DWORD *)(a2 + 20);
        if ( v13 >= 0 )
          v13 /= (int)v8[11];
        v14 = 0;
        if ( v13 + v11 != v12 )
        {
LABEL_11:
          v15 = *(_DWORD *)(a2 + 20);
          if ( *(_DWORD *)(v9 + 20) >= v15 )
            return *(_DWORD *)(v9 + 20) > v15;
          return 0xFFFFFFFFLL;
        }
        return v14;
      }
      goto LABEL_13;
    }
  }
  v14 = -1;
LABEL_14:
  sub_1E0240(a3, *(_QWORD *)(a1 + 12));
  v17 = sub_1E0240(a3, *(_QWORD *)(a2 + 12));
  if ( (_DWORD *)v18 == v5 )
  {
    if ( v17 == v5 )
      return v14;
    v14 = 1;
    if ( v5 >= v17 )
      return v14;
  }
  else if ( v18 >= (unsigned __int64)v17 )
  {
    return (unsigned __int64)v17 < v18;
  }
  return 0xFFFFFFFFLL;
}
