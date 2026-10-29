__int64 __fastcall sub_39C920(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 i; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 976))(a1, 89, 0);
  *(_QWORD *)(a1 + 632) = v2;
  if ( v2 )
    hook_event_listener(0, v2, a1 + 928, 0x8000);
  else
    append_notification_point(0, *(_QWORD *)(a1 + 976), 0);
  if ( sub_3792E0(0, a2) < 0 )
    sub_378C70((__int64)"Could not initialize the processor module.");
  v3 = sub_3792E0(0x62u);
  v4 = *(_DWORD *)(a1 + 996);
  *(_QWORD *)(a1 + 320) = v3;
  v5 = *(_DWORD *)(a1 + 1000);
  v6 = v5 - v4;
  if ( v5 != *(_DWORD *)(a1 + 1008) )
    ++v6;
  if ( v6 > 16 || !v6 )
    goto LABEL_26;
  v7 = *(int *)(a1 + 992);
  if ( v5 < v4 )
    v5 = v4;
  if ( (int)v7 <= v5 )
LABEL_26:
    sub_378C70((__int64)"ph.reg_last_sreg, ph.reg_first_sreg are wrong");
  if ( (_DWORD)v7 )
  {
    v9 = *(_QWORD *)(a1 + 984);
    if ( !v9 )
      sub_378C70((__int64)"ph.reg_names is nullptr");
    if ( (int)v7 > 0 )
    {
      for ( i = 0; i != v7; ++i )
      {
        if ( !*(_QWORD *)(v9 + 8 * i) )
          sub_378C70((__int64)"ph.reg_names[%d] is nullptr", i);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 944) - 1) > 0x3F )
    sub_378C70((__int64)"ph.cnbits is illegal");
  if ( (unsigned int)(*(_DWORD *)(a1 + 948) - 1) > 0x3F )
    sub_378C70((__int64)"ph.dnbits is illegal");
  if ( !*(_QWORD *)(a1 + 952) )
    sub_378C70((__int64)"ph.psnames is nullptr");
  if ( (*(_DWORD *)(a1 + 936) & 6) == 4 )
    sub_378C70((__int64)"PR_DEFSEG32 cannot be used without PR_USE32");
  result = *(_DWORD *)(a1 + 936) & 0x10002000;
  if ( (_DWORD)result == 0x10000000 )
    sub_378C70((__int64)"PR_DEFSEG64 cannot be used without PR_USE64");
  return result;
}
