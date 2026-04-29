unsigned __int64 __fastcall sub_7430(__int64 a1, __int64 type_ordinal)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 word; // bx
  __int64 v5; // r8
  __int64 v6; // r9
  __int16 v7; // bp
  __int64 v8; // rbx
  __int16 v10; // ax
  void *v11; // rsi
  void *v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !qword_B488 )
  {
    qword_B488 = get_named_type_tid("_stub_descr");
    if ( qword_B488 == -1 )
    {
      v13 = 0;
      v12 = nullptr;
      sub_7370(
        (__int64 *)&v12,
        (__int64)"struct %s\n"
                 "{\n"
                 "  char int_code[2] __tabform(,8);     ///< Overlay manager interrupt\n"
                 "  __int16 memswap;                    ///< Runtime memory swap address\n"
                 "  __int32 fileoff;                    ///< Offset in the file to the code\n"
                 "  __int16 codesize;                   ///< Code size\n"
                 "  __int16 relsize;                    ///< Relocation area size\n"
                 "  __int16 nentries __udec;            ///< Number of overlay entries\n"
                 "  __int16 prevstub __segm;            ///< Previous stub\n"
                 "  char workarea[%d] __tabform(,8);\n"
                 "};",
        "_stub_descr",
        16);
      v11 = &unk_8C30;
      if ( (_QWORD)v13 )
        v11 = v12;
      parse_decls(0, v11, sub_31F0, 1024);
      type_ordinal = (unsigned int)get_type_ordinal(0, "_stub_descr");
      set_type_choosable(0, type_ordinal, 0);
      qword_B488 = get_named_type_tid("_stub_descr");
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(v12);
      }
    }
  }
  word = get_word(a1 + 14);
  if ( word )
  {
    v10 = getinf(12, type_ordinal, v2, v3, v5, v6);
    put_word(a1 + 14, (unsigned __int16)(word + v10));
  }
  v7 = get_word(a1 + 12);
  if ( qword_B488 != -1 )
  {
    del_items(a1, 1, 32, 0);
    create_data(a1, 1610612736, 32, qword_B488);
  }
  if ( v7 )
  {
    v8 = a1 + 32;
    do
    {
      auto_mark_range(v8, v8 + 1, 20);
      auto_mark_range(v8, v8 + 1, 30);
      v8 += 5;
      sub_3490();
    }
    while ( v8 != a1 + 5LL * (unsigned __int16)(v7 - 1) + 37 );
  }
  return v14 - __readfsqword(0x28u);
}
