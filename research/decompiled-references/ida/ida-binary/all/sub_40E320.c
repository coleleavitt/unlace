unsigned __int64 __fastcall sub_40E320(_QWORD *a1)
{
  int flags; // ebx
  __int64 v3; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v4; // [rsp+118h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  flags = get_flags_ex(*a1, 0);
  if ( (flags & 0x600) == 0x400 && get_opinfo(&v3, *a1, 0) && (flags & 0xF0000000) == 0x50000000 )
    sub_40E100(a1);
  return v4 - __readfsqword(0x28u);
}
