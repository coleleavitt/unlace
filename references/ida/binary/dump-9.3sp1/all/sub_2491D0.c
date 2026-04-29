__int64 __fastcall sub_2491D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r12d
  unsigned int v5; // r12d
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // [rsp+Fh] [rbp-59h]

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v2 + 8) != 48 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v2 + 8) != 48 )
      v2 = 0;
  }
  v4 = sub_255000(*(unsigned int *)(a1 + 8), a2);
  if ( v4 != 1 )
  {
    copy_tinfo_t();
    copy_tinfo_t();
    v17 = (unsigned __int8)((get_tinfo_property() & 0xF) - 10);
    if ( (unsigned __int8)v17 <= 1u != (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 1u )
    {
      v5 = 0;
      if ( !v2 )
      {
        if ( (unsigned __int8)v17 > 1u )
          v2 = *(_QWORD *)(a1 + 24);
        else
          v2 = *(_QWORD *)(a1 + 32);
      }
      goto LABEL_7;
    }
    if ( (unsigned __int8)v17 > 1u )
    {
      if ( v4 )
      {
        v5 = sub_283210(a1, a2, v4, 0);
        goto LABEL_7;
      }
      goto LABEL_14;
    }
    get_tinfo_property();
    clear_tinfo_t();
    get_tinfo_property();
    clear_tinfo_t();
    if ( (get_tinfo_property() & 0xF) == 0xC || *(_DWORD *)(a1 + 8) == 36 && (get_tinfo_property() & 0x3F) == 1 )
      *(_QWORD *)(a1 + 24) = sub_244E70(*(_QWORD *)(a1 + 24), a2 + 200, v11, v12);
    if ( (get_tinfo_property() & 0xF) == 0xC || *(_DWORD *)(a1 + 8) == 36 && (get_tinfo_property() & 0x3F) == 1 )
    {
      v15 = sub_244E70(*(_QWORD *)(a1 + 32), a2 + 200, v13, v14);
      *(_QWORD *)(a1 + 32) = v15;
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 32);
    }
    v16 = sub_32A510(a2, *(_QWORD *)(a1 + 24) + 48LL, v15 + 48);
    if ( *(_DWORD *)(a1 + 8) == 36 )
    {
      if ( !v16 )
        goto LABEL_27;
    }
    else
    {
      if ( v2 )
      {
LABEL_14:
        v5 = 0;
LABEL_7:
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_8;
      }
      if ( v16 )
      {
LABEL_27:
        v2 = *(_QWORD *)(a1 + 24);
        v5 = 0;
        goto LABEL_7;
      }
    }
    v2 = *(_QWORD *)(a1 + 32);
    v5 = 0;
    goto LABEL_7;
  }
  v5 = sub_283210(a1, a2, 1, 0);
LABEL_8:
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v6 == v2 )
  {
    v8 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( v2 != v7 )
      goto LABEL_10;
  }
  if ( v8 )
  {
    v10 = sub_246B40(v2, a2, (_QWORD *)(v8 + 48));
    v7 = *(_QWORD *)(a1 + 32);
    v6 = *(_QWORD *)(a1 + 24);
    v5 |= v10;
  }
LABEL_10:
  if ( !sub_245650(a2, v6, v7, *(_DWORD *)(a1 + 8)) )
  {
    if ( !under_debugger )
      sub_383060(50401);
    BUG();
  }
  return v5;
}
