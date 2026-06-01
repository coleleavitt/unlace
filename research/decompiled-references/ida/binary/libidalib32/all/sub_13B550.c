bool sub_13B550()
{
  bool result; // al
  __int64 v1; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v2; // [rsp+8h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  result = !(unsigned __int8)sub_161360(0, &v1, (char *)&v1 + 4)
        && (qword_251710 & 0x600) == 0x400
        && (qword_251710 & 0xF0000000) == 0x60000000
        && (get_strid(), (unsigned int)get_tid_ordinal())
        && (unsigned int)sub_924A0(1u, (__int64)"The current item is a structure. Do you wish to edit its fields?") != 1;
  return result;
}

