__int64 __fastcall sub_107870(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 ph; // rbx
  char v4; // dl
  __int64 current_config; // rax
  __int64 v6; // rdx

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(TProgram::application + 136LL) + 40LL))(
             TProgram::application + 136LL,
             a1,
             a2);
  if ( (int)result <= 3 )
  {
    ph = get_ph();
    v4 = netnode_inited();
    result = 5;
    if ( v4 )
    {
      if ( (*(_BYTE *)(ph + 12) & 0x20) != 0 )
      {
        current_config = get_current_config();
        if ( current_config )
        {
          v6 = *(_QWORD *)(current_config + 624);
          result = 2;
          if ( *(_QWORD *)(v6 + 16) <= 1u )
            return 6;
        }
        else
        {
          return 7;
        }
      }
    }
  }
  return result;
}

