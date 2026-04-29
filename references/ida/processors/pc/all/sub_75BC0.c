__int64 __fastcall sub_75BC0(__int128 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  __int64 result; // rax
  unsigned __int16 v7; // cx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax

  result = *(unsigned __int8 *)(a2 + 1);
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 1:
      v7 = *(_WORD *)(a2 + 6);
      if ( v7 > 0x22u )
        goto LABEL_9;
      result = 1LL << v7;
      if ( ((1LL << v7) & 0x7A0000000LL) != 0 )
      {
        get_item_end();
        return split_sreg_range();
      }
      if ( (result & 0x41000010) == 0 )
      {
LABEL_9:
        *((_QWORD *)&a1 + 1) = v7;
        result = sub_85970(a1);
        v9 = result;
        if ( result )
        {
          v10 = *(_QWORD *)result;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            result = (*(__int64 (__fastcall **)(__int64, _QWORD))(v10 + 24))(v9, *(_QWORD *)a3);
          else
            result = (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 16))(v9, v8);
        }
      }
      break;
    case 2:
      if ( *(_BYTE *)(a2 + 32) )
        goto LABEL_5;
      if ( !a4 )
        goto LABEL_15;
      break;
    case 3:
    case 4:
LABEL_5:
      result = sub_74AA0(a1, (unsigned __int8 *)a2, 2, a5);
      break;
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0x10:
      return result;
    default:
      if ( under_debugger )
        BUG();
      *(_QWORD *)&a1 = 10116;
      interr();
LABEL_15:
      result = sub_6DA00(a1, *((__int64 *)&a1 + 1), a2);
      break;
  }
  return result;
}
