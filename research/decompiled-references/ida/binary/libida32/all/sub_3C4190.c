_DWORD *__fastcall sub_3C4190(__int64 *a1, _DWORD *a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax

  if ( !a2 )
  {
    if ( !under_debugger )
      interr(74);
    BUG();
  }
  if ( a3 == -1 )
    return nullptr;
  if ( (a5 & 0x600) == 0x400 )
  {
    v9 = (unsigned int)a5 & 0xF0000000;
    switch ( v9 )
    {
      case 1610612736LL:
        v11 = sub_3C3F20(a1, a3);
        *a2 = v11;
        if ( v11 != -1 )
          return a2;
        return nullptr;
      case 1342177280LL:
        *a2 = sub_3BDDB0(a1, a3);
        return a2;
      case 3489660928LL:
LABEL_5:
        if ( (int)sub_3E33B0(a1, a2, a3) > 0 )
          return a2;
        return nullptr;
    }
  }
  if ( (unsigned __int8)is_custfmt(a5, a4) )
    goto LABEL_5;
  if ( (unsigned __int8)is_enum(a5, a4) )
  {
    v10 = sub_400BA0(a1, a2 + 1, a3, a4, 0);
    *a2 = v10;
    if ( v10 != -1 )
      return a2;
    return nullptr;
  }
  else
  {
    if ( (unsigned __int8)is_off(a5, a4) )
    {
      if ( (unsigned __int8)sub_4CAB10(a1, a2, a3, a4) )
        return a2;
      return nullptr;
    }
    if ( (unsigned __int8)is_stroff(a5, a4) )
    {
      v12 = sub_3C3B30(a1, a2 + 1, a2 + 33, a3, a4);
      *a2 = v12;
      if ( v12 )
        return a2;
      return nullptr;
    }
    else
    {
      *a2 = -1;
      return nullptr;
    }
  }
}

