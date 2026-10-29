__int64 __fastcall sub_6A68B0(__int64 a1)
{
  int v1; // eax
  char v2; // cl
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)(v1 - 32) <= 5 )
  {
    result = sub_780E20(a1);
    if ( result )
      return result;
    if ( (unsigned int)sub_781200(a1) == 1 )
    {
      result = sub_780F20(a1);
      if ( result )
        return result;
      result = sub_780C30(a1);
      if ( result )
        return result;
    }
    return a1;
  }
  if ( (unsigned int)(v1 - 38) > 6 )
  {
    if ( (unsigned int)(v1 - 57) > 2 )
    {
      if ( v2 != 60 )
        return a1;
      result = sub_7821A0();
      if ( !result )
        return a1;
    }
    else
    {
      result = sub_7A47A0(a1);
      if ( result )
        return result;
      if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 58 > 1 )
      {
        v7 = (_QWORD *)sub_7A46F0(a1);
        if ( v7 )
          return *v7 & 0xFFFFFFFFFFFFFFF8LL;
        return a1;
      }
      if ( (*(_BYTE *)(a1 + 180) & 7) != 1 )
        return a1;
      v5 = *(_QWORD *)(a1 + 152);
      if ( v5 )
      {
        v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v5 & 4) != 0 )
        {
          if ( v6 )
            return *v6 & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          return v5 & 0xFFFFFFFFFFFFFFF8LL;
        }
      }
    }
  }
  else
  {
    if ( v2 == 41 )
      return a1;
    v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v4 = *(_QWORD *)v4;
    if ( ((*(_BYTE *)(v4 + 8) + 72) & 0x7Fu) > 3 )
      return a1;
    result = sub_77CA50(a1);
    if ( !result )
      return a1;
  }
  return result;
}

