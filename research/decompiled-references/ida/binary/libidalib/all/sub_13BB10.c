bool sub_13BB10()
{
  bool result; // al
  _BYTE v1[8]; // [rsp+8h] [rbp-20h] BYREF
  _BYTE v2[8]; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  result = !(unsigned __int8)sub_161C80(0, v1, v2)
        && (WORD4(xmmword_2528B0) & 0x600) == 0x400
        && (DWORD2(xmmword_2528B0) & 0xF0000000) == 0x60000000
        && (get_strid(), (unsigned int)get_tid_ordinal())
        && (unsigned int)sub_92580(1u, (__int64)"The current item is a structure. Do you wish to edit its fields?") != 1;
  return result;
}

