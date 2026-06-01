_BYTE *__fastcall sub_22A8490(_BYTE *a1, _BYTE *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _BYTE *v4; // rcx
  char v5; // al
  char v6; // al
  char v7; // al
  _BYTE *result; // rax
  char v9; // al
  char v10; // dl
  char v11; // dl
  char v12; // dl

  v2 = a2 - a1;
  v3 = (a2 - a1) >> 2;
  if ( v3 > 0 )
  {
    v4 = &a1[4 * v3];
    while ( 1 )
    {
      v5 = *a1;
      if ( (unsigned __int8)(*a1 - 48) > 9u && (unsigned __int8)(v5 - 97) > 0x19u && v5 != 95 )
        return a1;
      v6 = a1[1];
      if ( (unsigned __int8)(v6 - 48) > 9u && (unsigned __int8)(v6 - 97) > 0x19u && v6 != 95 )
        return a1 + 1;
      v7 = a1[2];
      if ( (unsigned __int8)(v7 - 48) > 9u && (unsigned __int8)(v7 - 97) > 0x19u && v7 != 95 )
        return a1 + 2;
      v9 = a1[3];
      if ( (unsigned __int8)(v9 - 48) > 9u && (unsigned __int8)(v9 - 97) > 0x19u && v9 != 95 )
        return a1 + 3;
      a1 += 4;
      if ( v4 == a1 )
      {
        v2 = a2 - a1;
        break;
      }
    }
  }
  if ( v2 == 2 )
  {
LABEL_27:
    v11 = *a1;
    if ( (unsigned __int8)(*a1 - 48) > 9u && (unsigned __int8)(v11 - 97) > 0x19u )
    {
      result = a1;
      if ( v11 != 95 )
        return result;
    }
    ++a1;
    goto LABEL_31;
  }
  if ( v2 == 3 )
  {
    v10 = *a1;
    if ( (unsigned __int8)(*a1 - 48) > 9u && (unsigned __int8)(v10 - 97) > 0x19u )
    {
      result = a1;
      if ( v10 != 95 )
        return result;
    }
    ++a1;
    goto LABEL_27;
  }
  if ( v2 != 1 )
    return a2;
LABEL_31:
  v12 = *a1;
  result = a2;
  if ( (unsigned __int8)(*a1 - 48) > 9u )
  {
    if ( (unsigned __int8)(v12 - 97) > 0x19u && v12 != 95 )
      return a1;
    return a2;
  }
  return result;
}
