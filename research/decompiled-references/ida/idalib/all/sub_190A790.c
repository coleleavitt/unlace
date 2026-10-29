__int64 __fastcall sub_190A790(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  __int64 v10; // rbx
  unsigned int v11; // r12d
  unsigned __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rax
  unsigned __int16 v15; // ax

  if ( a3 )
  {
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v13 = *(_QWORD **)(a2 + 8 * v10);
      v14 = *(_QWORD *)(v13[1] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v14 + 16) != 13 )
        goto LABEL_7;
      v15 = (*(_WORD *)(v14 + 18) >> 3) & 0x1FF;
      if ( v15 > 0x1F7u )
        break;
      if ( v15 < 0x1F5u && v15 != 499 )
        goto LABEL_7;
      v12 = sub_1907C70(a1, v13, a7, a8, a3, a4, a5, a6);
      if ( v12 == 1 )
      {
LABEL_12:
        ++v10;
        v11 = 1;
        if ( v10 == a3 )
          return v11;
      }
      else
      {
LABEL_6:
        *(_QWORD *)(a2 + 8 * v10) = v12 & 0xFFFFFFFFFFFFFFFELL;
LABEL_7:
        if ( ++v10 == a3 )
          return v11;
      }
    }
    if ( v15 == 504 )
      goto LABEL_7;
    v12 = sub_1907C70(a1, v13, a7, a8, a3, a4, a5, a6);
    if ( v12 == 1 )
      goto LABEL_12;
    goto LABEL_6;
  }
  return 0;
}
