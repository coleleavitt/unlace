unsigned __int64 sub_38DD50()
{
  char *v0; // rax
  __int64 v1; // rdi
  __int64 v2; // r12
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  char *s; // [rsp+10h] [rbp-C8h]
  __int128 v9; // [rsp+18h] [rbp-C0h]
  char *tinfo_property; // [rsp+30h] [rbp-A8h]
  __int128 v11; // [rsp+38h] [rbp-A0h]
  __int64 v12; // [rsp+48h] [rbp-90h]
  __int64 v13; // [rsp+50h] [rbp-88h]
  __int64 v14; // [rsp+58h] [rbp-80h]
  __int128 v15; // [rsp+60h] [rbp-78h]
  __int64 v16; // [rsp+70h] [rbp-68h]
  __int128 v17; // [rsp+78h] [rbp-60h]
  char v18; // [rsp+88h] [rbp-50h]
  unsigned __int64 v19; // [rsp+98h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  s = nullptr;
  copy_tinfo_t();
  while ( (get_tinfo_property() & 0xF) == 0xA )
  {
    tinfo_property = (char *)get_tinfo_property();
    if ( !(unsigned int)lexcompare_tinfo() )
    {
      clear_tinfo_t();
      break;
    }
    v0 = s;
    s = tinfo_property;
    tinfo_property = v0;
    clear_tinfo_t();
  }
  copy_tinfo_t();
  clear_tinfo_t();
  v11 = 0;
  tinfo_property = nullptr;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 16;
  v15 = 0;
  v17 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    s = nullptr;
    v9 = 0;
    dump_func_type_data();
    cleanup_argloc();
    clear_tinfo_t();
    v1 = (__int64)tinfo_property;
    if ( tinfo_property )
    {
      v2 = v11;
      if ( (_QWORD)v11 )
      {
        v3 = 0;
        do
        {
          v4 = (_QWORD *)(v1 + 80 * v3);
          clear_tinfo_t();
          v5 = v4[5];
          if ( v5 )
          {
            v4[6] = 0;
            qfree(v5);
          }
          v6 = v4[2];
          if ( v6 )
          {
            v4[3] = 0;
            qfree(v6);
          }
          ++v3;
          cleanup_argloc();
          v1 = (__int64)tinfo_property;
        }
        while ( v2 != v3 );
      }
      *(_QWORD *)&v11 = 0;
      qfree(v1);
    }
  }
  else
  {
    cleanup_argloc();
    clear_tinfo_t();
  }
  return v19 - __readfsqword(0x28u);
}
