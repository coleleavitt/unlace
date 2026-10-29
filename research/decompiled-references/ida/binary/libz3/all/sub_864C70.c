__int64 __fastcall sub_864C70(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rsi
  _DWORD *v4; // rax

  v2 = *(__int64 **)(a2 + 8);
  v3 = *v2;
  if ( *(_WORD *)(*v2 + 4) )
    return 0;
  v4 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
  if ( !v4 || *(_DWORD *)(a1 + 112) != *v4 )
    return 0;
  if ( v4[1] == 2 )
    return sub_8602A0(a1, v3);
  if ( !v4[1] )
    return sub_864460(a1, v3);
  if ( v4[1] != 5 && v4[1] != 6 && v4[1] != 7 && v4[1] != 8 && v4[1] != 9 )
    return 0;
  return sub_8624A0(a1, v3);
}

