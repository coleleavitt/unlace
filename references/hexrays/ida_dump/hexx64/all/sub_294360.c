__int64 __fastcall sub_294360(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbp

  v1 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v1 + 8) != 58 )
    return 0;
  v3 = *(_QWORD *)(v1 + 32);
  if ( *(_DWORD *)(v3 + 8) != 61 )
    return 0;
  if ( sub_255A30(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48))
    || (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 48LL), 2) & 0xF) == 0xB )
  {
    return 0;
  }
  v5 = *(__int64 **)(a1 + 24);
  *(_DWORD *)(a1 + 8) = 60;
  v6 = v5[4];
  if ( v6 )
  {
    sub_255630(v5[4]);
    clear_tinfo_t(v6 + 48);
    j__qfree(v6);
    v5 = *(__int64 **)(a1 + 24);
  }
  sub_255850(v5, v5[3]);
  return 1;
}
