__int64 __fastcall sub_A7B0(_DWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r13
  __int64 dword; // r13
  __int64 qword; // r14
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbp
  char v10; // r12

  if ( a3[1] != 3 )
    return 0;
  if ( a3[3] != 3 * *(unsigned __int8 *)(*(_QWORD *)a1 + 565LL) )
    return 0;
  v4 = *a3;
  if ( !*(_QWORD *)(*a3 + 24LL)
    || strcmp(*(const char **)(v4 + 16), "array")
    || !*(_QWORD *)(v4 + 168)
    || strcmp(*(const char **)(v4 + 160), "len")
    || !*(_QWORD *)(v4 + 312)
    || strcmp(*(const char **)(v4 + 304), "cap")
    || (get_tinfo_property() & 0xF) != 0xA )
  {
    return 0;
  }
  get_tinfo_property();
  if ( a1[2] != (unsigned int)get_tinfo_property() )
  {
    clear_tinfo_t();
    return 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 565LL) == 4 )
    dword = (unsigned int)get_dword();
  else
    dword = get_qword();
  if ( *(_BYTE *)(*(_QWORD *)a1 + 565LL) == 4 )
    qword = (unsigned int)get_dword();
  else
    qword = get_qword();
  if ( *(_BYTE *)(*(_QWORD *)a1 + 565LL) == 4 )
    v7 = (unsigned int)get_dword();
  else
    v7 = get_qword();
  if ( qword == v7 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 360LL);
    if ( (unsigned __int8)is_mapped() )
    {
      if ( !__CFADD__(v8 * qword, dword) )
      {
        v9 = *(_QWORD *)a1;
        get_tinfo_tid();
        if ( *(_BYTE *)(v9 + 565) == 4 )
          get_dword();
        else
          get_qword();
        v10 = is_mapped();
        create_data();
        if ( v10 )
          sub_7D60();
      }
    }
  }
  clear_tinfo_t();
  return 1;
}
