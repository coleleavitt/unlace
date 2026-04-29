unsigned __int64 __fastcall sub_325E60(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 tinfo_size; // rax
  char v7; // bp
  __int64 abi_name; // rax
  char *v9; // r12
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  char *s1; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 112);
  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag(67, 16) )
    goto LABEL_6;
  v2 = *(_DWORD *)(v1 + 16);
  switch ( v2 )
  {
    case 72:
      goto LABEL_6;
    case 15:
      if ( (getinf(57) & 0xF) == 6 && !(unsigned __int8)getinf_flag(3, 4) )
        goto LABEL_15;
      goto LABEL_6;
    case 12:
      s1 = nullptr;
      v13 = 0;
      if ( (getinf(57) & 0xF) == 6 )
      {
        v7 = getinf_flag(3, 4);
        if ( !v7 )
        {
          abi_name = get_abi_name(&s1);
          v9 = s1;
          if ( !abi_name )
          {
            if ( s1 )
            {
              *(_QWORD *)&v13 = 0;
              qfree(s1);
            }
            goto LABEL_6;
          }
          if ( (_QWORD)v13 )
          {
            v7 = strcmp(s1, "eabi32") == 0;
            if ( !v9 )
              goto LABEL_36;
          }
          else if ( !s1 )
          {
            goto LABEL_6;
          }
          *(_QWORD *)&v13 = 0;
          qfree(v9);
LABEL_36:
          if ( !v7 )
            goto LABEL_6;
          goto LABEL_15;
        }
      }
LABEL_6:
      if ( (unsigned int)verify_tinfo(*(_QWORD *)(a1 + 248))
        || (get_tinfo_property(*(_QWORD *)(a1 + 248), 2) & 0xF) != 0xA
        && (tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 248), 0),
            v3 = *(int *)(*(_QWORD *)(a1 + 112) + 84LL),
            v3 != tinfo_size) )
      {
        s1 = nullptr;
        get_stock_tinfo(&s1, 8, v3, v4);
        save_tinfo(&s1, 0, 0, "va_list", 5);
        copy_tinfo_t(a1 + 248, &s1);
        if ( (unsigned int)verify_tinfo(*(_QWORD *)(a1 + 248)) )
        {
          if ( !under_debugger )
            sub_37E160(50072);
          BUG();
        }
        clear_tinfo_t(&s1);
      }
      return v14 - __readfsqword(0x28u);
  }
  if ( (getinf(57) & 0xF) != 6 || !(unsigned __int8)getinf_flag(3, 4) )
    goto LABEL_6;
LABEL_15:
  if ( (get_tinfo_property(*(_QWORD *)(a1 + 248), 2) & 0xF) != 0xB
    || (unsigned int)verify_tinfo(*(_QWORD *)(a1 + 248))
    || !get_tinfo_size(0, *(_QWORD *)(a1 + 248), 0) )
  {
    sub_325D80(&v10, (__int64)"__va_list_tag");
    lower_type(0, &v10, 0, 0);
    if ( (unsigned int)verify_tinfo(*(_QWORD *)(a1 + 248)) || !get_tinfo_size(0, *(_QWORD *)(a1 + 248), 0) )
    {
      v11 = 0;
      s1 = nullptr;
      *(_QWORD *)&v13 = 0x100000000LL;
      copy_tinfo_t(&s1, &v10);
      create_tinfo(&v11, 11, 11, &s1);
      clear_tinfo_t(&s1);
      save_tinfo(&v11, 0, 0, "va_list", 5);
      clear_tinfo_t(&v11);
    }
    if ( (get_tinfo_property(*(_QWORD *)(a1 + 248), 2) & 0xF) != 0xB )
    {
      copy_tinfo_t(a1 + 256, a1 + 248);
      s1 = nullptr;
      *(_QWORD *)&v13 = 0x100000000LL;
      copy_tinfo_t(&s1, &v10);
      create_tinfo(a1 + 248, 11, 11, &s1);
      clear_tinfo_t(&s1);
      save_tinfo(a1 + 248, 0, 0, "gcc_va_list", 5);
    }
    clear_tinfo_t(&v10);
  }
  return v14 - __readfsqword(0x28u);
}
