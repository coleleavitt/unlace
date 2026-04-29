_QWORD *__fastcall sub_268B70(_QWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-68h] BYREF
  __int64 tinfo_property; // [rsp+8h] [rbp-60h] BYREF
  __int128 v5; // [rsp+10h] [rbp-58h] BYREF
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+28h] [rbp-40h]
  __int16 v8; // [rsp+2Ch] [rbp-3Ch]
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  *a1 = 0;
  copy_tinfo_t(a1, a2);
  tinfo_property = 0;
  v3 = 0;
  v5 = 0;
  copy_tinfo_t((char *)&v5 + 8, &v3);
  v6 = 0;
  copy_tinfo_t(&v6, &tinfo_property);
  v7 = 0;
  v8 = 0;
  clear_tinfo_t(&v3);
  clear_tinfo_t(&tinfo_property);
  if ( (unsigned __int8)get_tinfo_details(*a1, 10, &v5) && (get_tinfo_property(v5, 2) & 0xF) == 0xB )
  {
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(v5, 289);
    copy_tinfo_t(&v5, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
    create_tinfo(a1, 10, 10, &v5);
  }
  clear_tinfo_t(&v6);
  clear_tinfo_t((char *)&v5 + 8);
  clear_tinfo_t(&v5);
  return a1;
}
