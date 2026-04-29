_QWORD *__fastcall sub_327610(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  char v8; // bp
  __int64 v9; // [rsp+8h] [rbp-80h] BYREF
  __int64 v10; // [rsp+10h] [rbp-78h] BYREF
  __int64 v11; // [rsp+18h] [rbp-70h] BYREF
  __int128 v12; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+38h] [rbp-50h]
  __int16 v15; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v4 = *a3;
  v16 = __readfsqword(0x28u);
  if ( (_BYTE)v4 && (get_tinfo_property(v4, 2) & 0xF) != 0xE )
  {
    v9 = 0;
    v11 = 0;
    v10 = 0;
    v12 = 0;
    copy_tinfo_t((char *)&v12 + 8, &v10);
    v13 = 0;
    copy_tinfo_t(&v13, &v11);
    v14 = 0;
    v15 = 0;
    clear_tinfo_t(&v10);
    clear_tinfo_t(&v11);
    copy_tinfo_t(&v12, a3);
    v8 = create_tinfo(&v9, 10, 10, &v12);
    clear_tinfo_t(&v13);
    clear_tinfo_t((char *)&v12 + 8);
    clear_tinfo_t(&v12);
    if ( !v8 )
    {
      if ( !under_debugger )
        sub_37E160(51632);
      BUG();
    }
    *a1 = 0;
    copy_tinfo_t(a1, &v9);
    clear_tinfo_t(&v9);
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 96);
    *a1 = 0;
    copy_tinfo_t(a1, v6 + 232);
  }
  return a1;
}
