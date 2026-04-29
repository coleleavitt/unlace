__int64 __fastcall sub_270060(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // r12
  unsigned __int64 v6; // r12
  unsigned int tinfo_property; // r14d
  unsigned int tinfo_size; // eax
  __int64 v10; // rsi

  v2 = *(unsigned __int8 *)(a1 + 136);
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 8);
  if ( (_BYTE)v2 )
  {
    if ( v4 != 37 )
      goto LABEL_7;
    v5 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v5 + 8) != 61 )
    {
      v5 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v5 + 8) != 61 )
        goto LABEL_22;
    }
    if ( *(_QWORD *)(a1 + 72) != sub_255DF0(*(__int64 **)(v5 + 24), (_QWORD *)(v5 + 48)) )
    {
      v4 = *(_DWORD *)(v5 + 8);
      v3 = v5;
LABEL_7:
      if ( v4 == 61 )
      {
        v6 = sub_255DF0(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48));
        tinfo_property = get_tinfo_property(*(_QWORD *)(v3 + 48), 3);
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v3 + 48), 0);
        sub_240DE0(
          v3,
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
          *(_QWORD *)(a1 + 64),
          v6 / *(_QWORD *)(a1 + 72),
          tinfo_size,
          tinfo_property);
        return v2;
      }
LABEL_22:
      sub_26A2C0();
    }
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 == v5 )
      v10 = *(_QWORD *)(v3 + 32);
    sub_255C10((__int64 *)v3, v10);
    if ( v5 )
    {
      sub_2559F0(v5);
      clear_tinfo_t(v5 + 48);
      j__qfree(v5);
    }
    return v2;
  }
  if ( v4 == 37 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) == 61 )
    {
      v3 = *(_QWORD *)(a2 + 24);
    }
    else
    {
      v3 = *(_QWORD *)(a2 + 32);
      if ( *(_DWORD *)(v3 + 8) != 61 )
        return v2;
    }
    if ( v3 )
      goto LABEL_16;
    return v2;
  }
  if ( !a2 || v4 != 61 )
    return v2;
LABEL_16:
  LOBYTE(v2) = (unsigned __int64)sub_255DF0(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48)) % *(_QWORD *)(a1 + 72) == 0;
  return v2;
}
