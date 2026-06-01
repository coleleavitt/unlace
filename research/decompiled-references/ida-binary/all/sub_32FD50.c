bool sub_32FD50()
{
  bool result; // al
  __int64 strid; // rax
  unsigned int tid_ordinal; // ebx
  int v3; // edx
  __int64 v4; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_1F09E0(0, &v4, v5) )
    return 0;
  if ( (WORD4(xmmword_8CC820) & 0x600) != 0x400 )
    return 0;
  if ( (DWORD2(xmmword_8CC820) & 0xF0000000) != 0x60000000 )
    return 0;
  strid = get_strid(xmmword_8CC810);
  tid_ordinal = get_tid_ordinal(strid);
  if ( !tid_ordinal )
    return 0;
  v3 = sub_1698A0(1, (int)"The current item is a structure. Do you wish to edit its fields?");
  result = 1;
  if ( v3 == 1 )
    return sub_3CE4E0(tid_ordinal, 0) != 0;
  return result;
}
