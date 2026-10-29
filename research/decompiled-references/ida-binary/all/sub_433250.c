bool __fastcall checkout_for_edit_action_t__::vfunc_1(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v3; // rax
  __int64 v4; // rsi
  int v5; // ecx

  v3 = (_DWORD *)*a2;
  v4 = *a2 + 48LL * a2[1];
  if ( v3 == (_DWORD *)v4 )
    return 0;
  while ( 1 )
  {
    v5 = v3[6];
    if ( (v5 & 0x20) != 0 )
      return 1;
    if ( (v5 & 8) != 0 && v3[7] == -1 )
      break;
    v3 += 12;
    if ( (_DWORD *)v4 == v3 )
      return 0;
  }
  if ( *(_DWORD *)(a3 + 8) != 69 )
    return 1;
  return *(_DWORD *)(*(_QWORD *)(a3 + 40) + 280LL) == v3[8];
}
