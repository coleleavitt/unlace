__int64 __fastcall sub_26D610(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  int v4; // eax
  char tinfo_property; // al
  __int64 v6; // rax
  _QWORD *v8; // [rsp+0h] [rbp-28h]
  __int64 *v9; // [rsp+8h] [rbp-20h]

  v4 = *(_DWORD *)(a1 + 444);
  if ( !v4 )
    return 0;
  if ( (v4 & 2) != 0 )
    return 1;
  if ( *a2 )
  {
    v9 = a3;
    v8 = a4;
    tinfo_property = get_tinfo_property(*a4, 2);
    a4 = v8;
    a3 = v9;
    if ( (tinfo_property & 0x2F) == 0xD )
    {
      v6 = get_tinfo_property(*v8, 286);
      a4 = v8;
      a3 = v9;
      if ( !v6 )
        return 1;
    }
  }
  return sub_26D3F0(a1, a2, a3, a4);
}
