__int64 __fastcall sub_254D40(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v8; // rsi
  int v9; // ebx

  v4 = a4;
  v5 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v5 <= 0x17 )
  {
    v6 = -12648455;
    if ( !_bittest64(&v6, v5) )
      return 1;
LABEL_6:
    v8 = (_QWORD *)(a2 + 48);
    if ( !a4 )
      v4 = v8;
    if ( (unsigned __int64)get_tinfo_size(0, *v4, 0) > 0xF )
    {
      v9 = 13;
      while ( (unsigned int)lexcompare_tinfo(*v4, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 8LL * v9 + 200), 0) )
      {
        if ( ++v9 == 22 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  if ( (unsigned int)(v5 - 70) <= 0xE )
    return 1;
  if ( (int)v5 <= 69 )
    goto LABEL_6;
  return 0;
}
