unsigned __int64 sub_166EA0()
{
  int v0; // ebp
  __int16 flags; // ax
  int not_tail; // edx
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  if ( !(unsigned __int8)sub_161360(0, &v4, (_DWORD *)&v4 + 1) )
  {
    v0 = qword_251700;
    if ( (_DWORD)qword_251700 == -1 )
      sub_92120((__int64)"Please select data to export");
    flags = get_flags_ex();
    not_tail = v0;
    if ( (flags & 0x600) == 0x200 )
      not_tail = prev_not_tail();
    LODWORD(v4) = not_tail;
    HIDWORD(v4) = get_item_end();
  }
  sub_1669E0((unsigned int *)&v4);
  return v5 - __readfsqword(0x28u);
}

