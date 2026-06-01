__int64 __fastcall sub_7BDED0(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bl
  char v5; // al
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a3;
  v5 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( v5 == 17 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( v6 )
    {
      if ( v6 <= 7 )
        goto LABEL_21;
    }
    else
    {
      sub_7BCDC0((unsigned __int64 *)(*(_QWORD *)(a1 + 48) + 88LL), *(_QWORD *)(a1 + 48));
      v6 = *(_QWORD *)(a1 + 56);
      if ( v6 <= 7 )
      {
LABEL_6:
        v5 = *(_BYTE *)(a1 + 8) & 0x7F;
        goto LABEL_7;
      }
    }
    v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v7 && (*(_BYTE *)(v7 + 8) & 6) != 0 )
      return 0;
    goto LABEL_6;
  }
LABEL_7:
  if ( v5 != 18 )
    goto LABEL_21;
  v8 = *(_QWORD *)(a1 + 72);
  if ( !v8 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 48) + 88LL), *(_QWORD *)(a1 + 48));
    v8 = *(_QWORD *)(a1 + 72);
    if ( v8 > 7 )
      goto LABEL_10;
LABEL_58:
    v10 = 0;
    goto LABEL_13;
  }
  if ( v8 <= 7 )
    goto LABEL_58;
LABEL_10:
  v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v9 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a1 - 48);
    v9 = *(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v10 = *(_QWORD *)(v9 + 56);
LABEL_13:
  v19[0] = v10;
  sub_7BC620(v19);
  v11 = v19[0];
  if ( v19[0] )
  {
LABEL_19:
    result = sub_7BDED0(v11 + 48, a2, a3);
    if ( result )
      return result;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v11 + 128);
      if ( !v11 )
        break;
      if ( *(char *)(v11 + 28) >= 0 )
      {
        v12 = *(_QWORD *)(v11 + 40);
        if ( ((v12 & 7) != 0 || v12 <= 7) && (*(_BYTE *)(v11 + 8) & 6) == 0 )
          goto LABEL_19;
      }
    }
  }
LABEL_21:
  v14 = sub_7A0650(a1, a2);
  if ( !v14 )
    return 0;
  if ( v4 )
  {
    if ( v4 == 2 )
    {
      while ( 1 )
      {
        v18 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v14 & 4) == 0 )
          break;
        if ( !v18 )
          goto LABEL_34;
        result = *(_QWORD *)v18;
        if ( (*(_BYTE *)(*(_QWORD *)v18 + 28LL) & 0x7F) == 0x49 && (*(_BYTE *)(result + 73) & 0x40) != 0 )
          return result;
        v14 = *(_QWORD *)(v18 + 8);
        if ( !v14 )
          return 0;
      }
      if ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0x49 && (*(_BYTE *)(v18 + 73) & 0x40) != 0 )
        return v14 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      while ( 1 )
      {
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        result = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v14 & 4) == 0 )
          break;
        if ( !v15 )
          goto LABEL_34;
        result = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 28LL) & 0x7F) == 0x49
          && (_BYTE)a3 == 1
          && (*(_WORD *)(result + 72) & 0x4000) == 0 )
        {
          return result;
        }
        v14 = *(_QWORD *)(v15 + 8);
        if ( !v14 )
          return 0;
      }
      if ( (*(_BYTE *)(v15 + 28) & 0x7F) == 0x49 && v4 == 1 )
      {
        if ( (*(_BYTE *)(result + 73) & 0x40) != 0 )
          return 0;
        return result;
      }
    }
    return 0;
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v14 & 4) == 0 )
      break;
    if ( !v17 )
LABEL_34:
      BUG();
    result = *(_QWORD *)v17;
    if ( (*(_BYTE *)(*(_QWORD *)v17 + 28LL) & 0x7F) == 0x49 )
    {
      if ( (*(_BYTE *)(result + 73) & 0x40) == 0 )
        return result;
      v16 = *(_QWORD *)v17;
    }
    v14 = *(_QWORD *)(v17 + 8);
    if ( !v14 )
      return v16;
  }
  result = v16;
  if ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x49 )
    return v14 & 0xFFFFFFFFFFFFFFF8LL;
  return result;
}

