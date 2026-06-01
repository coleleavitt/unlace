__int64 __fastcall sub_3AF1B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 tinfo_tid; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  const char *v7; // rax

  v2 = *(_QWORD *)(a1 + 208);
  tinfo_tid = get_tinfo_tid(v2 + 8, 0);
  v5 = *(_QWORD *)(v2 + 32);
  if ( v5 != -1 )
  {
    v6 = *(_QWORD *)(v2 + 8);
    if ( *(_BYTE *)(v2 + 31) == 45 )
      tinfo_tid = get_tinfo_property4(v6, 299, v5, 0, 0, 0);
    else
      tinfo_tid = get_tinfo_property4(v6, 297, v5, 0, 0, 0);
  }
  if ( tinfo_tid == -1 )
    return 0;
  v7 = (const char *)(*(_DWORD *)(a1 + 8) == 25 && (a2 & 2) != 0
                    ? sub_3ED8F0(*(_QWORD *)(a1 + 104), tinfo_tid)
                    : sub_3ED590(tinfo_tid, a2));
  if ( v7 == (const char *)-1LL )
    return 0;
  else
    return sub_3AEEE0(v7, a1, -1);
}
