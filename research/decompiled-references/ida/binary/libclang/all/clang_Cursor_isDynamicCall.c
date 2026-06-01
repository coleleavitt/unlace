__int64 __fastcall clang_Cursor_isDynamicCall(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbp
  unsigned int v11; // edx
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax

  if ( !(unsigned int)clang_isExpression(a7) )
    return 0;
  v10 = a9;
  if ( a7 - 40 <= 2 || !a9 )
    return 0;
  v11 = 0;
  v12 = *(_WORD *)a9 & 0x1FF;
  if ( ((v12 + 509) & 0x1FFu) > 0x7F )
    return v11;
  if ( v12 == 34 )
  {
    if ( *(_BYTE *)(a9 + 26) == 1 )
    {
      v13 = sub_8116F0(*(_QWORD *)(a9 + 40), a2, 0);
      v11 = 1;
      if ( (*(_WORD *)v13 & 0x1FF) == 0x22 )
      {
        if ( (*(_BYTE *)(v13 + 27) & 1) != 0 )
        {
          v14 = sub_7B6F20(*(_QWORD *)(v13 + 16), a2, 1);
        }
        else
        {
          v18 = sub_8C9100(v13);
          v14 = sub_C87900(v18);
        }
        return v14 != 1;
      }
    }
    return v11;
  }
  if ( v12 == 33 )
    return (*(_QWORD *)(a9 + 40) & 6LL) != 2;
  if ( v12 != 47 )
  {
    if ( ((v12 + 422) & 0x1FFu) > 4 )
      return v11;
    v10 = *(_QWORD *)(a9 + *(unsigned __int8 *)(a9 + 3));
    if ( !v10 )
      return v11;
    if ( (*(_WORD *)v10 & 0x1FF) != 0x2F )
      return 0;
  }
  v16 = *(_BYTE **)(v10 + 24);
  if ( !v16 )
    return 0;
  if ( (v16[28] & 0x7Fu) - 33 > 3 )
    return 0;
  v17 = (*(__int64 (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v16 + 32LL))(v16, a2, 0);
  if ( (*(_BYTE *)(v17 + 82) & 0xC) == 0 && !(unsigned int)sub_7A5910(v17) )
    return 0;
  if ( !a10 )
    BUG();
  v11 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a10 + 8) + 80LL) + 2160LL) + 12LL) & 0x10) == 0 )
    return (*(_BYTE *)(v10 + 2) & 0x10) == 0;
  return v11;
}

