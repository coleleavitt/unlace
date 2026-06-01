__int64 __fastcall sub_416A80(__int64 a1, unsigned int a2)
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
  if ( sub_375980(0x36u, &v8, a2) == 1 )
    return v8;
  current_config = (unsigned int *)get_current_config();
  v4 = netnode_charval(*(unsigned int *)(*(_QWORD *)(qword_2CA1698 + 544) + 104LL), a2, 256);
  switch ( v4 )
  {
    case 2:
      result = current_config[91];
      v8 = current_config[91];
      break;
    case 3:
      result = current_config[92];
      v8 = current_config[92];
      break;
    case 1:
      result = current_config[90];
      v8 = current_config[90];
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
      v5 = sub_3C25A0(a1, a2);
      if ( v5 )
      {
        result = *(unsigned int *)(v5 + 36);
        v8 = result;
      }
      else
      {
        result = v8;
      }
      if ( (_DWORD)result == -1 )
      {
        v6 = sub_5AFCE0(a1);
        if ( v6 )
        {
          result = *(unsigned int *)(v6 + 36);
          v8 = result;
        }
        else
        {
          result = v8;
        }
        if ( (_DWORD)result == -1 )
        {
          v7 = sub_4EE820(a1 + 1552, a2);
          if ( v7 )
            return *(unsigned int *)(v7 + 100);
          return v8;
        }
      }
    }
  }
  return result;
}

