const char *__fastcall sub_1BDA0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  char *v5; // rsi
  char v6; // di
  int v7; // ecx
  const char *result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
    goto LABEL_9;
  v5 = *(char **)(a1 + 24);
  v6 = *v5;
  if ( *v5 == 97 )
  {
    *(_QWORD *)(a1 + 24) = v5 + 1;
    *(_QWORD *)(a1 + 32) = v2 - 1;
    if ( a2 == 2 )
      return "@autoreleased";
    return nullptr;
  }
  switch ( v6 )
  {
    case 'd':
      *(_QWORD *)(a1 + 32) = v2 - 1;
      *(_QWORD *)(a1 + 24) = v5 + 1;
      result = "@unowned";
      if ( (unsigned int)(a2 - 1) >= 2 )
        return "@callee_unowned";
      break;
    case 'D':
      *(_QWORD *)(a1 + 24) = v5 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      if ( a2 == 2 )
        return "@unowned_inner_pointer";
      return nullptr;
    case 'g':
      *(_QWORD *)(a1 + 32) = v2 - 1;
      *(_QWORD *)(a1 + 24) = v5 + 1;
      result = "@guaranteed";
      if ( a2 == 1 )
        return result;
      if ( a2 != 2 )
        return "@callee_guaranteed";
      return nullptr;
    case 'e':
      *(_QWORD *)(a1 + 24) = v5 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      if ( a2 == 1 )
        return "@deallocating";
      return nullptr;
    case 'i':
      *(_QWORD *)(a1 + 32) = v2 - 1;
      *(_QWORD *)(a1 + 24) = v5 + 1;
      result = (const char *)&unk_385C4;
      if ( a2 != 1 )
      {
        result = "@out";
        if ( a2 != 2 )
          return nullptr;
      }
      break;
    case 'l':
      *(_QWORD *)(a1 + 24) = v5 + 1;
      *(_QWORD *)(a1 + 32) = v2 - 1;
      if ( a2 == 1 )
        return "@inout";
      return nullptr;
    default:
LABEL_9:
      if ( !(unsigned __int8)sub_1AB00((_QWORD *)(a1 + 24), 111) )
        return nullptr;
      result = "@owned";
      if ( (unsigned int)(v7 - 1) >= 2 )
        return "@callee_owned";
      return result;
  }
  return result;
}

