__int64 __fastcall sub_397C40(__int64 a1, __int64 a2)
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

  v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 808))(a1, 89, 0);
  *(_QWORD *)(a1 + 544) = v2;
  if ( v2 )
    hook_event_listener(0, v2, a1 + 760, 0x8000);
  else
    append_notification_point(0, *(_QWORD *)(a1 + 808), 0);
  if ( sub_375980(0, a2) < 0 )
    sub_375320((__int64)"Could not initialize the processor module.");
  v3 = sub_375980(0x62u);
  v4 = *(_DWORD *)(a1 + 828);
  *(_QWORD *)(a1 + 320) = v3;
  v5 = *(_DWORD *)(a1 + 832);
  v6 = v5 - v4;
  if ( v5 != *(_DWORD *)(a1 + 840) )
    ++v6;
  if ( v6 > 16 || !v6 )
    goto LABEL_26;
  v7 = *(int *)(a1 + 824);
  if ( v5 < v4 )
    v5 = v4;
  if ( (int)v7 <= v5 )
LABEL_26:
    sub_375320((__int64)"ph.reg_last_sreg, ph.reg_first_sreg are wrong");
  if ( (_DWORD)v7 )
  {
    v9 = *(_QWORD *)(a1 + 816);
    if ( !v9 )
      sub_375320((__int64)"ph.reg_names is nullptr");
    if ( (int)v7 > 0 )
    {
      for ( i = 0; i != v7; ++i )
      {
        if ( !*(_QWORD *)(v9 + 8 * i) )
          sub_375320((__int64)"ph.reg_names[%d] is nullptr", i);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 776) - 1) > 0x1F )
    sub_375320((__int64)"ph.cnbits is illegal");
  if ( (unsigned int)(*(_DWORD *)(a1 + 780) - 1) > 0x1F )
    sub_375320((__int64)"ph.dnbits is illegal");
  if ( !*(_QWORD *)(a1 + 784) )
    sub_375320((__int64)"ph.psnames is nullptr");
  if ( (*(_DWORD *)(a1 + 768) & 6) == 4 )
    sub_375320((__int64)"PR_DEFSEG32 cannot be used without PR_USE32");
  result = *(_DWORD *)(a1 + 768) & 0x10002000;
  if ( (_DWORD)result == 0x10000000 )
    sub_375320((__int64)"PR_DEFSEG64 cannot be used without PR_USE64");
  return result;
}

