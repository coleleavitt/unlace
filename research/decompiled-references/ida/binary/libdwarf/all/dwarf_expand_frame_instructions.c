__int64 __fastcall dwarf_expand_frame_instructions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  bool v6; // cf
  int v7; // edx

  if ( a1 )
  {
    if ( a4 && a5 )
    {
      v6 = __CFADD__(a2, a3);
      v7 = a2 + a3;
      if ( !v6 )
        return _dwarf_exec_frame_instr(
                 1,
                 0,
                 0,
                 0,
                 a2,
                 v7,
                 0,
                 a1,
                 *(Dwarf_Debug *)(a1 + 64),
                 *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8328LL),
                 0,
                 0,
                 a4,
                 a5,
                 a6);
      _dwarf_error(*(_QWORD *)(a1 + 64), a6, 340);
    }
    else
    {
      _dwarf_error_string(
        *(_QWORD *)(a1 + 64),
        a6,
        101,
        "DW_DLE_RET_OP_LIST_NULL: Calling dwarf_expand_frame_instructions without a non-NULL Dwarf_Frame_Instr_Head point"
        "er and count pointer seems wrong.");
    }
  }
  else
  {
    _dwarf_error(0, a6, 81);
  }
  return 1;
}

