__int64 __fastcall sub_A57B30(__int64 a1)
{
  unsigned __int8 v1; // al
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 34 <= 5 )
  {
    result = sub_B77A30();
    if ( result )
      return result;
    if ( (unsigned int)sub_B77D20(a1) == 1 )
    {
      result = sub_B77AF0(a1);
      if ( result )
        return result;
      result = sub_B77970(a1);
      if ( result )
        return result;
    }
    return a1;
  }
  if ( (unsigned int)v1 - 40 > 6 )
  {
    if ( (unsigned int)v1 - 59 > 2 )
    {
      if ( v1 != 62 )
        return a1;
      result = sub_B78820();
      if ( !result )
        return a1;
    }
    else
    {
      result = sub_B97230();
      if ( result )
        return result;
      if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 60 > 1 )
      {
        v6 = (_QWORD *)sub_B97210(a1);
        if ( v6 )
          return *v6 & 0xFFFFFFFFFFFFFFF8LL;
        return a1;
      }
      if ( (*(_BYTE *)(a1 + 180) & 7) != 1 )
        return a1;
      v4 = *(_QWORD *)(a1 + 152);
      v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      result = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v4 )
      {
        if ( (v4 & 4) != 0 )
        {
          result = 0;
          if ( v5 )
            return *v5 & 0xFFFFFFFFFFFFFFF8LL;
        }
      }
    }
  }
  else
  {
    if ( v1 == 43 )
      return a1;
    v3 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v3 = *(_QWORD *)v3;
    if ( ((*(_BYTE *)(v3 + 8) + 70) & 0x7Fu) > 3 )
      return a1;
    result = sub_B73FE0(a1);
    if ( !result )
      return a1;
  }
  return result;
}
