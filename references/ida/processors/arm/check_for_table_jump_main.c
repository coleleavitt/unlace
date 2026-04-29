__int64 __fastcall sub_732C0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(); // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_WORD *)(a1 + 32);
  v6[1] = __readfsqword(0x28u);
  if ( v2 > 0x2Eu )
  {
    if ( v2 <= 0x113u )
    {
      if ( v2 > 0x111u )
        return check_for_table_jump(a2, a1 + 8, off_A4520, 3, sub_6B8A0, "tb");
    }
    else if ( v2 == 470 )
    {
LABEL_6:
      if ( (unsigned __int8)check_for_table_jump(a2, a1 + 8, off_A4540, 3, sub_6B8A0, "ptn2") )
      {
        trim_jtable(a2, *(_QWORD *)(a1 + 24), 1);
        sub_6B6C0(*(_QWORD *)(a2 + 8));
        return 1;
      }
    }
    return 0;
  }
  if ( v2 <= 3u )
    return 0;
  switch ( v2 )
  {
    case 4u:
      if ( (unsigned __int8)check_for_table_jump(a2, a1 + 8, off_A4520, 3, sub_6B8A0, "tb") )
        return 1;
      goto LABEL_9;
    case 0xEu:
      v4 = a1 + 8;
      v6[0] = sub_6FF70;
      if ( (unsigned __int8)check_for_table_jump(a2, a1 + 8, v6, 1, 0, 0) )
        return 1;
      if ( (unsigned __int8)check_for_table_jump(a2, v4, off_A4560, 3, sub_6B8A0, "ptn1") )
        return 1;
      v6[0] = sub_6FE40;
      if ( (unsigned __int8)check_for_table_jump(a2, v4, v6, 1, 0, 0) )
        return 1;
      v5 = sub_701D0;
      goto LABEL_19;
    case 0x17u:
      v4 = a1 + 8;
      v6[0] = sub_701D0;
      if ( (unsigned __int8)check_for_table_jump(a2, a1 + 8, v6, 1, 0, 0) )
        return 1;
      v5 = sub_700A0;
LABEL_19:
      v6[0] = v5;
      result = check_for_table_jump(a2, v4, v6, 1, 0, 0);
      break;
    case 0x1Fu:
      result = check_for_table_jump(a2, a1 + 8, off_A4620, 2, 0, "ldrpc");
      break;
    case 0x29u:
      goto LABEL_6;
    case 0x2Eu:
LABEL_9:
      result = sub_72B30(*(_QWORD *)a1, a2, a1 + 8);
      break;
    default:
      return 0;
  }
  return result;
}
