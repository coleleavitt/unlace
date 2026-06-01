__int64 __fastcall clang_Cursor_getNumArguments(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int8 v9; // al
  unsigned int v10; // ecx
  unsigned __int16 v12; // ax

  if ( !(unsigned int)clang_isDeclaration(a7) || !a8 )
    goto LABEL_8;
  v9 = *(_BYTE *)(a8 + 28) & 0x7F;
  if ( v9 == 16 )
    return *(unsigned int *)(a8 + 104);
  if ( (unsigned int)v9 - 32 <= 5 )
    return sub_77F620(a8);
LABEL_8:
  if ( !(unsigned int)clang_isExpression(a7) )
    return (unsigned int)-1;
  if ( a7 - 40 <= 2 || !a9 || (v12 = *(_WORD *)a9 & 0x1FF, ((v12 + 509) & 0x1FFu) > 0x7F) )
    BUG();
  v10 = -1;
  if ( v12 <= 0x59u )
    return v10;
  if ( v12 <= 0x5Eu )
    return *(unsigned int *)(a9 + 16);
  if ( (unsigned int)v12 - 114 > 1 )
    return v10;
  return *(unsigned int *)(a9 + 32);
}

