__int64 __fastcall sub_105590(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 ph; // rbp
  __int64 current_config; // rax
  __int64 v7; // rdx

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(TProgram::application + 136LL) + 40LL))(
             TProgram::application + 136LL,
             a1,
             a2);
  if ( (int)result <= 3 )
  {
    ph = get_ph();
    if ( (unsigned __int8)netnode_inited() && (*(_BYTE *)(ph + 12) & 0x20) != 0 )
    {
      if ( (a3 & 0xC) == 0 )
      {
LABEL_6:
        result = 2;
        if ( (a3 & 1) == 0 )
          return (a3 & 2) == 0 ? 3 : 1;
        return result;
      }
      current_config = get_current_config();
      if ( !current_config )
        return 7;
      v7 = *(_QWORD *)(current_config + 632);
      if ( (a3 & 4) != 0 )
        v7 = *(_QWORD *)(current_config + 624);
      if ( *(_QWORD *)(v7 + 16) > 1u )
        goto LABEL_6;
      result = 6;
      if ( (a3 & 1) != 0 )
        return result;
      if ( (a3 & 2) == 0 )
        return 7;
    }
    return 5;
  }
  return result;
}

