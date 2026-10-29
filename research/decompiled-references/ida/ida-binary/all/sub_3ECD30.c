unsigned __int64 __fastcall sub_3ECD30(__int64 *a1, __int64 a2, char a3)
{
  const char *v4; // r8
  int v5; // edx
  const char *v6; // rcx
  int v7; // edx
  const char *v8; // rcx
  const char *v9; // r8
  __int64 tinfo_property4; // rax
  __int64 v12; // [rsp+0h] [rbp-50h] BYREF
  const char *v13; // [rsp+8h] [rbp-48h] BYREF
  __int128 v14; // [rsp+10h] [rbp-40h]
  unsigned __int64 v15; // [rsp+20h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v13 = nullptr;
  if ( (unsigned __int8)is_mapped(a2) )
  {
    if ( get_ea_name(&v13, a2, 21, 0) <= 0 )
      sub_3EB1A0((__int64 *)&v13, a2);
  }
  else if ( !(unsigned __int8)get_tid_name(&v13, a2) )
  {
    v12 = 0;
    if ( !(unsigned __int8)get_type_by_tid(&v12, a2) || get_tinfo_property4(v12, 300, 0, 0, 0, 0) == -1 )
    {
      clear_tinfo_t(&v12);
      sub_3EB1A0((__int64 *)&v13, a2);
    }
    else
    {
      tinfo_property4 = get_tinfo_property4(v12, 300, 0, 0, 0, 0);
      get_func_name(&v13, tinfo_property4);
      clear_tinfo_t(&v12);
    }
  }
  v4 = &s1;
  if ( (a3 & 2) != 0 )
  {
    v5 = 564;
    v6 = "to";
    if ( !(_QWORD)v14 )
      goto LABEL_5;
  }
  else
  {
    v5 = 1593;
    v6 = "from";
    if ( !(_QWORD)v14 )
      goto LABEL_5;
  }
  v4 = v13;
LABEL_5:
  sub_169A50(a1, (__int64)"@0:%d[]\nxrefs %s %s", v5, v6, v4);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, "@0:%d[]\nxrefs %s %s", v7, v8, v9);
  }
  return v15 - __readfsqword(0x28u);
}
