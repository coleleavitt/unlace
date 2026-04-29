__int64 __fastcall sub_7980(_QWORD *a1, __int64 a2)
{
  int flags; // eax
  unsigned int type_by_tid; // ebx
  __int64 strid; // rax
  __int64 v6; // rdx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  flags = get_flags_ex(a2, 4);
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 && (strid = get_strid(a2), strid != -1) )
  {
    v7[0] = 0;
    type_by_tid = get_type_by_tid(v7, strid);
    if ( (_BYTE)type_by_tid && (get_tinfo_property(v7[0], 2) & 0x3F) == 0xD )
    {
      v6 = v7[0];
      v7[0] = *a1;
      *a1 = v6;
    }
    else
    {
      type_by_tid = 0;
    }
    clear_tinfo_t(v7);
  }
  else
  {
    return 0;
  }
  return type_by_tid;
}
