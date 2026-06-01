__int64 __fastcall sub_293E80(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // al
  unsigned __int64 tinfo_size; // r13
  __int64 v8; // rcx
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 51 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 48 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v4 + 8) != 52 )
    return 0;
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) != 57 )
    return 0;
  v5 = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
  if ( (unsigned int)(*(_DWORD *)(v5 + 8) - 2) <= 0xD && *(_QWORD *)(v5 + 24) == a2 )
    return 0;
  v10[0] = get_tinfo_property();
  if ( (unsigned __int8)get_tinfo_property()
    && (unsigned __int8)get_tinfo_property()
    && ((get_tinfo_property() & 0xF) == 9 || (get_tinfo_property() & 0xF) == 9) )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size < get_tinfo_size() )
    {
      if ( !under_debugger )
        sub_383060(52088);
      BUG();
    }
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
    sub_246640(a1[9], a2, (__int64)v10, v8);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v9 = v6;
  clear_tinfo_t();
  return v9;
}
