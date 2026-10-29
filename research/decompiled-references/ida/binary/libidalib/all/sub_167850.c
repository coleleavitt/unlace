unsigned __int64 sub_167850()
{
  __int64 v0; // rbp
  __int16 flags; // ax
  __int64 not_tail; // rdx
  __int128 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  if ( !(unsigned __int8)sub_161C80(0, (__int64 *)&v4, (__int64 *)&v4 + 1) )
  {
    v0 = xmmword_2528A0;
    if ( (_QWORD)xmmword_2528A0 == -1 )
      sub_92200((__int64)"Please select data to export");
    flags = get_flags_ex();
    not_tail = v0;
    if ( (flags & 0x600) == 0x200 )
      not_tail = prev_not_tail();
    *(_QWORD *)&v4 = not_tail;
    *((_QWORD *)&v4 + 1) = get_item_end();
  }
  sub_167390((__int64)&v4);
  return v5 - __readfsqword(0x28u);
}

