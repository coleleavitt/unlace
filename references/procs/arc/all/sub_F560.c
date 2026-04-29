__int64 __fastcall sub_F560(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE v5[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) == 16
    || (unsigned __int64)(netnode_altval(*(_QWORD *)(a1 + 120), *(_QWORD *)(a2 + 16), 371) - 1) <= 1
    || (get_flags_ex(*(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 4) & 0x10000) == 0 )
  {
    return 1;
  }
  else if ( !(unsigned __int8)is_call_insn(a2) )
  {
    a3 = xrefblk_t_first_from(v5, *(_QWORD *)(a2 + 16), 5);
    if ( (_BYTE)a3 )
    {
      while ( (unsigned __int8)(v5[17] - 18) > 1u )
      {
        if ( !(unsigned __int8)xrefblk_t_next_from(v5) )
          return 0;
      }
      if ( ((*(_QWORD *)(a2 + 24) & 0x600000FFFFLL) != 0x4000000012LL || *(_BYTE *)(a2 + 41) != 7)
        && *(_WORD *)(a2 + 24) > 4u )
      {
        LOBYTE(a3) = (*(_BYTE *)(a2 + 28) & 0x60) == 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return a3;
}
