__int64 __fastcall sub_243190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, signed int a6, char a7)
{
  unsigned __int64 not_tail; // r12
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  char *v18; // rdi
  __int64 v19; // rdi
  char *v20; // [rsp+0h] [rbp-88h]
  int v21; // [rsp+0h] [rbp-88h]
  __int64 v23; // [rsp+28h] [rbp-60h] BYREF
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  not_tail = a4;
  v26 = __readfsqword(0x28u);
  sub_250A30(a3);
  if ( (get_flags_ex(a4, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(a4, 4, v12);
  *(_QWORD *)(a3 + 24) = not_tail;
  *(_DWORD *)(a3 + 8) = 64;
  while ( !(unsigned __int8)sub_37BE20(a1, not_tail, a3 + 48, 3) )
  {
    if ( *(_BYTE *)a5
      && (*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < not_tail || (unsigned __int8)is_mapped(not_tail) != 1 || a6 > 0) )
    {
      copy_tinfo_t(a3 + 48, a5);
      goto LABEL_9;
    }
    if ( a4 != not_tail || !(unsigned __int8)sub_EE500(a4) )
    {
      s1 = (char *)&dword_30;
      copy_tinfo_t(a3 + 48, &s1);
      clear_tinfo_t(&s1);
      goto LABEL_9;
    }
  }
  if ( a4 == not_tail && (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) == 0xC )
    sub_EE500(a4);
LABEL_9:
  v13 = *(_QWORD *)(a3 + 48);
  if ( !(_BYTE)v13 )
  {
    if ( !under_debugger )
      sub_37DDE0(50387);
    BUG();
  }
  if ( (get_tinfo_property(v13, 2) & 0xF) == 0xC
    && ((unsigned __int8)segtype(not_tail) == 1 || (get_tinfo_property(*a5, 2) & 0xF) == 0xA) )
  {
    sub_327290(&s1, *(_QWORD *)(a1 + 112), a3 + 48);
    copy_tinfo_t(a3 + 48, &s1);
    clear_tinfo_t(&s1);
  }
  if ( (unsigned __int8)sub_25CEA0(*(_QWORD *)(a1 + 112), not_tail, (a7 & 8) == 0) )
  {
    *(_DWORD *)(a3 + 56) |= 0x10u;
    if ( !(unsigned __int8)sub_25CC70(*(_QWORD *)(a1 + 112), not_tail, 0, 0) )
    {
      v23 = 0;
      copy_tinfo_t(&v23, a3 + 48);
      if ( (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) == 0xB )
      {
        s1 = nullptr;
        s1 = (char *)get_tinfo_property(v23, 289);
        copy_tinfo_t(&v23, &s1);
        clear_tinfo_t(&s1);
      }
      else if ( (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) == 0xA )
      {
        v19 = *(_QWORD *)(a3 + 48);
        s1 = nullptr;
        s1 = (char *)get_tinfo_property(v19, 9);
        copy_tinfo_t(&v23, &s1);
        clear_tinfo_t(&s1);
      }
      if ( (unsigned int)get_tinfo_size(0, v23, 0) - 1 > 1 )
      {
        s1 = nullptr;
        v25 = 0;
        if ( (v23 & 0x100) == 0 )
        {
LABEL_21:
          get_stock_tinfo(a3 + 48, 12, v15, v16);
LABEL_22:
          clear_tinfo_t(&v23);
          return sub_242AA0(a1, a2, a3, a4 - not_tail, a5, a6, a7);
        }
        if ( !get_tinfo_pdata(&s1, v23, 0) )
        {
          if ( s1 )
          {
            *(_QWORD *)&v25 = 0;
            qfree(s1);
          }
          goto LABEL_21;
        }
        if ( !(_QWORD)v25 )
        {
          if ( s1 )
            qfree(s1);
          goto LABEL_21;
        }
        v20 = s1;
        v17 = strcmp(s1, "wchar_t");
        v18 = v20;
        if ( v20 )
        {
          v21 = v17;
          *(_QWORD *)&v25 = 0;
          qfree(v18);
          v17 = v21;
        }
        if ( v17 )
          goto LABEL_21;
      }
      if ( (get_tinfo_property(*(_QWORD *)(a3 + 48), 2) & 0xF) != 0xB )
      {
        s1 = nullptr;
        *(_QWORD *)&v25 = 0;
        copy_tinfo_t(&s1, &v23);
        create_tinfo(a3 + 48, 11, 11, &s1);
        clear_tinfo_t(&s1);
      }
      goto LABEL_22;
    }
  }
  return sub_242AA0(a1, a2, a3, a4 - not_tail, a5, a6, a7);
}
