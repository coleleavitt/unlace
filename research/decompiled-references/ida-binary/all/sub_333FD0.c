__int64 __fastcall sub_333FD0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 tinfo_size; // rbx
  int v4; // r12d
  char i; // al
  __int64 flags_by_size; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 tinfo_property; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  tinfo_property = 0;
  tinfo_property = get_tinfo_property(*a1, 289);
  v2 = tinfo_property;
  tinfo_size = (int)get_tinfo_size(0, tinfo_property, 0);
  v4 = 2;
  for ( i = get_tinfo_property(tinfo_property, 2); ; i = get_tinfo_property(tinfo_property, 2) )
  {
    if ( (i & 0xF) == 9 )
    {
      if ( tinfo_size == 4 )
      {
        flags_by_size = 2147484672LL;
        goto LABEL_7;
      }
      if ( tinfo_size == 8 )
      {
        flags_by_size = 2415920128LL;
        goto LABEL_7;
      }
      if ( tinfo_size == *(_QWORD *)(get_ph(v2, (_BYTE *)&dword_0 + 2) + 120) )
      {
        flags_by_size = 1073742848;
        goto LABEL_7;
      }
    }
    flags_by_size = get_flags_by_size(tinfo_size);
LABEL_7:
    v7 = getinf(19);
    v8 = sub_333830(flags_by_size, v7);
    v12[0] = 0;
    if ( v8 != flags_by_size )
    {
      LODWORD(tinfo_size) = get_tinfo_by_flags(v12, v8);
      if ( (_BYTE)tinfo_size )
      {
        if ( (unsigned int)lexcompare_tinfo(v12[0], tinfo_property, 0) )
          break;
      }
    }
    tinfo_size = 0;
    clear_tinfo_t(v12);
    if ( v4 == 1 )
      goto LABEL_13;
    v2 = tinfo_property;
    v4 = 1;
  }
  copy_tinfo_t(a1, v12, v9);
  clear_tinfo_t(v12);
LABEL_13:
  clear_tinfo_t(&tinfo_property);
  return (unsigned int)tinfo_size;
}
