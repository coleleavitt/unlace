__int64 __fastcall sub_F8360(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int op_tinfo; // r12d
  __int64 v6; // rdi
  __int64 v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a3 - 56) > 1 )
  {
    if ( !under_debugger )
      sub_383060(52339);
    BUG();
  }
  op_tinfo = get_op_tinfo(a2, *(_QWORD *)(a3 + 24), 0);
  if ( (_BYTE)op_tinfo
    || (unsigned __int8)sub_E7130(a1, v7, a3, 0)
    && v7[0] != -1
    && (unsigned __int8)sub_3810A0(a1, v7[0], a2, 0)
    && (*(_DWORD *)a3 == 56 || (unsigned __int8)sub_334C10(a2, 0, 0)) )
  {
    if ( (get_tinfo_property(*a2, 2) & 0xF) == 0xA )
    {
      v6 = *a2;
      v7[0] = 0;
      v7[0] = get_tinfo_property(v6, 10);
      copy_tinfo_t(a2, v7);
      clear_tinfo_t(v7);
    }
    return 1;
  }
  return op_tinfo;
}
