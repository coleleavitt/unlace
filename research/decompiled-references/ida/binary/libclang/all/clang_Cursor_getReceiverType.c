__int64 __fastcall clang_Cursor_getReceiverType(
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
  __int64 v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !(unsigned int)clang_isExpression(a7)
    || (v11 = a9, a7 - 40 <= 2)
    || !a9
    || (v12 = *(_WORD *)a9 & 0x1FF, ((v12 + 509) & 0x1FFu) > 0x7F) )
  {
    BUG();
  }
  if ( v12 == 34 )
  {
    v13 = sub_8C9110(a9);
    sub_690DD0(a1, v13, a10);
    return a1;
  }
  if ( v12 == 33 )
  {
    if ( !a10 )
      BUG();
    v15 = sub_8C8410(a9, *(_QWORD *)(*(_QWORD *)(a10 + 8) + 80LL));
    sub_690DD0(a1, v15, a10);
    return a1;
  }
  else
  {
    if ( v12 == 47
      || ((v12 + 422) & 0x1FFu) <= 4
      && (v11 = *(_QWORD *)(a9 + *(unsigned __int8 *)(a9 + 3))) != 0
      && (*(_WORD *)v11 & 0x1FF) == 0x2F )
    {
      v16 = *(_QWORD *)(v11 + 24);
      if ( v16 )
      {
        if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 33 <= 3 )
        {
          v17 = sub_80F040(*(_QWORD *)(v11 + 16));
          sub_690DD0(a1, *(_QWORD *)(v17 + 8), a10);
          return a1;
        }
      }
    }
    sub_690DD0(a1, 0, a10);
    return a1;
  }
}

