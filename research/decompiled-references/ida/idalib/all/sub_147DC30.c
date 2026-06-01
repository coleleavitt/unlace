bool __fastcall sub_147DC30(__int64 a1, int a2)
{
  unsigned __int16 v2; // ax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rsi

  v2 = *(_WORD *)(a1 + 32);
  if ( v2 == 31 )
    return 1;
  if ( v2 > 0x1Fu )
  {
    if ( v2 != 140 )
    {
      if ( v2 > 0x8Cu )
      {
        if ( v2 != 416 && v2 != 418 && v2 != 189 )
          return (unsigned __int16)(v2 - 406) <= 8u;
      }
      else if ( v2 == 62 )
      {
        if ( a2 != 7 )
          return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0;
      }
      else if ( v2 != 72 && v2 != 56 )
      {
        return (unsigned __int16)(v2 - 406) <= 8u;
      }
    }
    return 1;
  }
  if ( v2 == 22 )
    return 1;
  if ( v2 > 0x16u )
  {
    if ( v2 != 27 )
    {
      if ( v2 >= 0x1Bu && v2 <= 0x1Du )
        return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0;
      return (unsigned __int16)(v2 - 406) <= 8u;
    }
    return 1;
  }
  if ( v2 != 5 )
  {
    if ( v2 == 20 )
    {
      if ( a2 == 7 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 56) + 1LL) & 0x10) != 0 )
        {
          v6 = *(_QWORD *)(v5 + 2944);
          if ( v6 >= *(unsigned int *)(v5 + 2912) )
            v7 = sub_14180A0(v5, 1u);
          else
            v7 = *(_QWORD *)(v5 + 2904) + 24 * v6;
          return *(_WORD *)(v7 + 16) == 20;
        }
      }
      return 0;
    }
    if ( v2 != 3 )
      return (unsigned __int16)(v2 - 406) <= 8u;
    return 1;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(v8 + 2944);
  if ( v9 >= *(unsigned int *)(v8 + 2912) )
    v10 = sub_14180A0(v8, 1u);
  else
    v10 = *(_QWORD *)(v8 + 2904) + 24 * v9;
  v11 = *(_WORD *)(v10 + 16);
  if ( v11 == 62 )
  {
    if ( a2 != 7 )
      return (a2 == 0) & (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 3);
    return 1;
  }
  if ( v11 > 0x3Eu )
  {
    if ( v11 == 72 )
      return 1;
    if ( v11 <= 0x48u )
    {
      if ( v11 <= 0x42u )
        return 1;
    }
    else if ( v11 == 158 || v11 == 189 || v11 == 126 )
    {
      return 1;
    }
    return (unsigned __int16)(*(_WORD *)(a1 + 32) - 406) <= 8u;
  }
  if ( v11 > 0x19u )
  {
    if ( v11 == 47 )
      return 1;
    return (unsigned __int16)(*(_WORD *)(a1 + 32) - 406) <= 8u;
  }
  if ( v11 >= 0x14u || v11 == 3 )
    return 1;
  if ( v11 != 5 )
    return (unsigned __int16)(*(_WORD *)(a1 + 32) - 406) <= 8u;
  v12 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v12 + 56) + 1LL) & 0x10) == 0 )
    return 0;
  v13 = *(_QWORD *)(v12 + 2944);
  if ( v13 >= *(unsigned int *)(v12 + 2912) )
    v14 = sub_14180A0(v12, 1u);
  else
    v14 = *(_QWORD *)(v12 + 2904) + 24 * v13;
  return (unsigned int)sub_14A7DC0(a1, v14) != 0;
}
