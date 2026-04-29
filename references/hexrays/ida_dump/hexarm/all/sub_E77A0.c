__int64 __fastcall sub_E77A0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int strlit; // ebx
  char v5; // bp
  __int16 flags; // ax
  __int64 tinfo_pdata; // rax
  char *v8; // rbp
  __int64 tinfo_property; // [rsp+8h] [rbp-50h] BYREF
  char *s1; // [rsp+10h] [rbp-48h] BYREF
  __int128 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v2 = is_spec_ea(a1);
  if ( (_BYTE)v2 )
    return 0;
  strlit = v2;
  tinfo_property = get_tinfo_property(*a2, 9);
  v5 = 0;
  if ( (get_tinfo_property(tinfo_property, 2) & 0x1F) != 0x12 )
  {
    s1 = nullptr;
    v11 = 0;
    if ( (tinfo_property & 0x100) == 0 )
      goto LABEL_12;
    tinfo_pdata = get_tinfo_pdata(&s1, tinfo_property, 0);
    v8 = s1;
    if ( !tinfo_pdata || !(_QWORD)v11 || strcmp(s1, "wchar16_t") && strcmp(v8, "wchar32_t") && strcmp(v8, "wchar_t") )
    {
      if ( v8 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(v8);
      }
      goto LABEL_12;
    }
    if ( get_tinfo_size(0, tinfo_property, 0) == 2 )
    {
      if ( s1 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(s1);
      }
      v5 = 1;
    }
    else
    {
      if ( s1 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(s1);
      }
      v5 = 2;
    }
  }
  flags = get_flags_ex(a1, 4);
  if ( (flags & 0x600) != 0 )
  {
    if ( (flags & 0xC000) == 0x4000 )
    {
LABEL_10:
      clear_tinfo_t(&tinfo_property);
      return strlit;
    }
    s1 = nullptr;
    if ( !(unsigned __int8)get_tinfo(&s1, a1) || !(unsigned __int8)compare_tinfo(tinfo_property, s1, 1) )
    {
      clear_tinfo_t(&s1);
      goto LABEL_10;
    }
    clear_tinfo_t(&s1);
  }
  strlit = create_strlit(a1, 0, (unsigned int)v5);
  if ( (_BYTE)strlit )
  {
    if ( (get_tinfo_property(tinfo_property, 2) & 0x40) != 0 )
    {
      s1 = nullptr;
      *(_QWORD *)&v11 = 0;
      copy_tinfo_t(&s1, &tinfo_property);
      create_tinfo(&tinfo_property, 11, 11, &s1);
      clear_tinfo_t(&s1);
      set_tinfo(a1, &tinfo_property);
    }
    goto LABEL_10;
  }
LABEL_12:
  clear_tinfo_t(&tinfo_property);
  return 0;
}
