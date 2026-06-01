char __fastcall sub_15A0D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  int v5; // r12d
  __int64 v6; // r13
  __int64 v8; // rsi

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 480);
    if ( v2 )
    {
      a1 = *(_QWORD *)(a2 + 8);
      v3 = sub_1545C0(a1);
      if ( !v3 || (*(_BYTE *)(v3 + 584) & 4) != 0 )
        return 0;
      v4 = *(_QWORD *)(v3 + 480);
      if ( v4 )
        break;
    }
    sub_158B30(a1);
    if ( *(_BYTE *)a2 )
      return sub_13C2E0(a1);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 112LL))(v2);
  if ( v5 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4) )
    return 1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 120LL))(v2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
  if ( lookup_loc_converter2() || lookup_loc_converter() )
    return 1;
  idaplace_t__name();
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 120LL))(v4, v6);
  if ( !lookup_loc_converter2() && !lookup_loc_converter() )
    return 0;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 120LL))(v2, v8);
  idaplace_t__name();
  if ( lookup_loc_converter2() )
    return 1;
  return lookup_loc_converter() != 0;
}

