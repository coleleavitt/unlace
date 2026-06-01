__int64 __fastcall sub_42A4D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *current_config; // r12
  char v4; // al
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v8 = -1;
  if ( sub_3792E0(0x36u, &v8, a2) == 1 )
    return v8;
  current_config = (unsigned int *)get_current_config();
  v4 = netnode_charval(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 632) + 104LL), a2, 256);
  switch ( v4 )
  {
    case 2:
      result = current_config[93];
      v8 = current_config[93];
      break;
    case 3:
      result = current_config[94];
      v8 = current_config[94];
      break;
    case 1:
      result = current_config[92];
      v8 = current_config[92];
      break;
    default:
      result = v8;
      break;
  }
  if ( (_DWORD)result == -1 )
  {
    result = get_item_color(a2);
    v8 = result;
    if ( (_DWORD)result == -1 )
    {
      v5 = sub_3C76B0(a1, a2);
      if ( v5 )
      {
        result = *(unsigned int *)(v5 + 44);
        v8 = result;
      }
      else
      {
        result = v8;
      }
      if ( (_DWORD)result == -1 )
      {
        v6 = sub_5CAA10(a1);
        if ( v6 )
        {
          result = *(unsigned int *)(v6 + 64);
          v8 = result;
        }
        else
        {
          result = v8;
        }
        if ( (_DWORD)result == -1 )
        {
          v7 = sub_505D70(a1 + 1624, a2);
          if ( v7 )
            return *(unsigned int *)(v7 + 188);
          return v8;
        }
      }
    }
  }
  return result;
}
