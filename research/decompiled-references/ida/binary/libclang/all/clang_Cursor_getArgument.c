__int64 __fastcall clang_Cursor_getArgument(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int8 v10; // al
  unsigned __int16 v11; // dx
  __int64 v13; // r12
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rsi

  if ( (unsigned int)clang_isDeclaration(a7) && a8 )
  {
    v10 = *(_BYTE *)(a8 + 28) & 0x7F;
    if ( v10 == 16 )
    {
      if ( a2 >= *(_DWORD *)(a8 + 104) )
        goto LABEL_5;
      v14 = *(_QWORD *)(*(_QWORD *)(a8 + 96) + 8LL * a2);
LABEL_18:
      v15 = sub_132CA50(v14);
      *(_DWORD *)a1 = v15;
      if ( (unsigned int)(v15 - 16) <= 1 )
      {
        *(_DWORD *)(a1 + 4) = -1;
        *(_QWORD *)(a1 + 8) = v14;
        *(_QWORD *)(a1 + 16) = 1;
        *(_QWORD *)(a1 + 24) = a10;
        return a1;
      }
      *(_DWORD *)(a1 + 4) = 0;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = 1;
      *(_QWORD *)(a1 + 24) = a10;
      return a1;
    }
    if ( (unsigned int)v10 - 32 <= 5 && a2 < (unsigned int)sub_77F620(a8) )
    {
      v13 = *(_QWORD *)(a8 + 120);
      sub_77F620(a8);
      v14 = *(_QWORD *)(v13 + 8LL * a2);
      goto LABEL_18;
    }
  }
LABEL_5:
  if ( !(unsigned int)clang_isExpression(a7) )
    goto LABEL_12;
  if ( a7 - 40 <= 2 || !a9 || (v11 = *(_WORD *)a9 & 0x1FF, ((v11 + 509) & 0x1FFu) > 0x7F) )
    BUG();
  if ( v11 <= 0x59u )
    goto LABEL_12;
  if ( v11 > 0x5Eu )
  {
    if ( v11 == 114 )
    {
      if ( a2 >= *(_DWORD *)(a9 + 32) )
        goto LABEL_12;
      v16 = a9 + 40;
    }
    else
    {
      if ( v11 != 115 || a2 >= *(_DWORD *)(a9 + 32) )
        goto LABEL_12;
      v16 = a9 + 48;
    }
    v17 = *(_QWORD *)(v16 + 8LL * a2);
  }
  else
  {
    if ( a2 >= *(_DWORD *)(a9 + 16) )
    {
LABEL_12:
      clang_getNullCursor(a1);
      return a1;
    }
    v17 = *(_QWORD *)(8LL * a2 + 8LL * ((*(_BYTE *)(a9 + 2) & 8) != 0) + 8 + a9 + *(unsigned __int8 *)(a9 + 3));
  }
  sub_639270(a1, v17, a8, a10, 0);
  return a1;
}

