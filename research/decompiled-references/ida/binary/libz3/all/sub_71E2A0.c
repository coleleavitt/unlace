bool __fastcall sub_71E2A0(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rsi
  _DWORD *v6; // rdx
  __int64 v7; // rbx

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v4 = sub_15F0200(a1[3]);
  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_DWORD **)(v5 + 24);
  if ( !v6 || v4 != *v6 || v6[1] != 3 || a1[1] != *(_QWORD *)(a2 + 32) )
    return 0;
  v7 = a1[2];
  return v7 == sub_15FCC40(a1[3], v5);
}

