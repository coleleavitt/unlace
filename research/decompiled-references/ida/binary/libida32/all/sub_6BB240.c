__int64 __fastcall sub_6BB240(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdi
  char v7; // al
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  int v13; // ebx
  int v14; // eax

  v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v3;
  v7 = *(_BYTE *)(*(_QWORD *)v3 + 16LL);
  if ( v7 == 8 )
  {
    v8 = 16;
    do
    {
      v9 = sub_F468B0();
      switch ( ((*(_WORD *)(v9 + 18) >> 3) + 8131) & 0x1FFF )
      {
        case 0:
          v8 = 48;
          break;
        case 4:
          v8 = 112;
          break;
        case 0xC:
          v8 = 96;
          break;
        case 0x16:
          v8 = 80;
          break;
        case 0x19:
          v8 = 144;
          break;
        case 0x1B:
          v8 = 128;
          break;
        default:
          break;
      }
      v10 = *(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL;
      v6 = *(_QWORD *)v10;
      v7 = *(_BYTE *)(*(_QWORD *)v10 + 16LL);
    }
    while ( v7 == 8 );
  }
  else
  {
    v10 = v3;
    v8 = 16;
  }
  if ( (unsigned __int8)(v7 - 25) <= 1u && v6 )
  {
    v11 = *(_QWORD *)v10;
    if ( *(_BYTE *)(*(_QWORD *)v10 + 16LL) != 26 )
      goto LABEL_19;
    goto LABEL_9;
  }
  v6 = sub_F3F310();
  if ( !v6 )
    return v8;
  v11 = *(_QWORD *)v10;
  if ( *(_BYTE *)(*(_QWORD *)v10 + 16LL) == 26 )
  {
LABEL_9:
    if ( v11 && *(char *)(v11 + 19) < 0 )
      return 64;
  }
LABEL_19:
  if ( v8 == 16 )
  {
    v13 = (*(_WORD *)(v6 + 20) >> 2) & 0x3F;
    v14 = sub_A40930(a1[6], 0, a3, 0);
    switch ( v13 )
    {
      case 0:
        if ( v14 )
          goto LABEL_21;
        return v8;
      case 1:
        if ( v14 != 1 )
          return 80;
        return v8;
      case 2:
        if ( v14 != 2 )
          return 112;
        return v8;
      case 3:
        return 128;
      case 5:
        if ( v14 != 5 )
          return 96;
        return v8;
      case 14:
        if ( v14 != 14 )
          return 144;
        return v8;
      default:
        return v8;
    }
  }
  if ( v8 != 48 )
    return v8;
LABEL_21:
  if ( sub_5ED360(*(_QWORD **)(*a1 + 1480LL)) )
    return 48;
  if ( (a1[47] & 1) == 0 )
  {
    sub_6BAFF0(a1);
    a1[47] |= 1uLL;
  }
  return sub_5EE1D0(*(_QWORD **)(*a1 + 1480LL), 0x30u);
}

