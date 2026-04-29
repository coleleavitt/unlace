__int64 __fastcall sub_277A60(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax

  if ( *(_DWORD *)(a2 + 8) != 81 )
    return 0;
  v3 = *(_DWORD **)(a2 + 24);
  if ( *v3 != *(_DWORD *)(a1 + 64) )
    return 0;
  *v3 = *(_DWORD *)(a1 + 68);
  return 0;
}
