__int64 __fastcall sub_75D40(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  char *v4; // rax
  unsigned __int16 v6; // cx
  __int16 v7; // ax
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  bool v11; // al
  char byte; // r12
  int flags; // eax
  char v14; // al
  unsigned __int16 v16; // [rsp+Ch] [rbp-5DCh]
  __int128 v17; // [rsp+30h] [rbp-5B8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-5A8h]
  __int64 v19; // [rsp+48h] [rbp-5A0h]
  __int64 v20; // [rsp+50h] [rbp-598h]
  char v21; // [rsp+58h] [rbp-590h] BYREF
  char v22; // [rsp+59h] [rbp-58Fh]
  char v23; // [rsp+78h] [rbp-570h]
  char v24; // [rsp+198h] [rbp-450h] BYREF
  _WORD v25[3]; // [rsp+1A0h] [rbp-448h] BYREF
  unsigned __int64 v26; // [rsp+5A8h] [rbp-40h]

  v4 = &v21;
  v26 = __readfsqword(0x28u);
  v17 = -1;
  v18 = -1;
  v19 = 0;
  v20 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( &v24 != v4 );
  if ( !(unsigned int)decode_insn() )
    return 0;
  v6 = v19 - 1775;
  v7 = v19;
  if ( (unsigned __int16)(v19 - 1775) <= 1u )
  {
    if ( (unsigned int)decode_insn() )
    {
      v7 = v19;
      v6 = v19 - 1775;
      goto LABEL_6;
    }
    return 0;
  }
  if ( (_WORD)v19 == 46 )
  {
    v16 = v19 - 1775;
    v11 = sub_61E40((__int64)&v17);
    v6 = v16;
    if ( v11 && v18 + WORD1(v19) == *(_QWORD *)(a2 + 8) )
    {
      v14 = sub_61860(a1, &v17, (__int64)v25);
      v6 = v16;
      if ( v14 )
      {
        if ( v25[0] )
        {
          *(_QWORD *)(a2 + 48) = v25[0];
          update_func();
          if ( (get_aflags() & 0x800) == 0 )
            apply_named_type();
          set_name();
          return 0;
        }
      }
    }
    v7 = v19;
    if ( (_WORD)v19 != 88 )
      goto LABEL_7;
    goto LABEL_11;
  }
LABEL_6:
  if ( v7 != 88 )
  {
LABEL_7:
    if ( v7 == 86 && v22 == 7 )
    {
      byte = get_byte();
      if ( byte == -21 )
        return 0xFFFFFFFFLL;
      v10 = sub_7F350(a1, &v17, &v21);
      if ( v10 == -1 )
        return 0xFFFFFFFFLL;
      if ( *(char *)(a1 + 4453) < 0
        && (byte != -23
         || WORD1(v19) != 5
         || *((_QWORD *)&v17 + 1) <= 4u
         || (unsigned __int8)get_byte() != 0xE9
         || (unsigned __int8)get_byte() != 0xE9) )
      {
        flags = get_flags_ex();
        if ( ((~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0)
          && (unsigned __int8)segtype() != 1
          && ((int)decode_insn() <= 0 || (unsigned int)sub_37FE0(a1, (__int64)&v17, 1) != 100) )
        {
          return 0xFFFFFFFFLL;
        }
      }
      if ( a4 )
        *a4 = -1;
LABEL_17:
      *a3 = v10;
      return 1;
    }
    goto LABEL_8;
  }
LABEL_11:
  if ( v22 != 2 || v23 )
  {
LABEL_8:
    if ( a2 && v6 <= 1u && (*(_BYTE *)(a2 + 16) & 0x40) == 0 )
    {
      getseg();
      get_segm_name();
    }
    return 0;
  }
  v9 = sub_6DEB0(a1, (__int64)&v17, (__int64)&v21, (__int64)&v17, 0);
  v10 = v9;
  if ( v9 < *(_QWORD *)a2 || v9 >= *(_QWORD *)(a2 + 8) )
  {
    if ( a4 )
      *a4 = sub_7F350(a1, &v17, &v21);
    goto LABEL_17;
  }
  return 0xFFFFFFFFLL;
}
