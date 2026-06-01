bool __fastcall sub_1A424A0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 *v8; // rbp
  __int64 *v9; // rbx
  unsigned __int64 i; // rsi
  __int64 v12; // rsi
  unsigned __int8 v13; // al

  v7 = *(__int64 **)(a2 + 8);
  v8 = &v7[*(unsigned int *)(a2 + 16)];
  if ( v8 == v7 )
  {
LABEL_8:
    v13 = sub_B81B70(a3);
    if ( !v13 )
      goto LABEL_13;
    if ( v13 <= 3u )
      return 0;
    if ( v13 > 6u )
LABEL_13:
      BUG();
    return sub_B72C70(a3) == 0;
  }
  else
  {
    v9 = v7 + 1;
    for ( i = *v7 & 0xFFFFFFFFFFFFFFF8LL; (*(_BYTE *)(i + 8) & 6) != 0; i = v12 & 0xFFFFFFFFFFFFFFF8LL )
    {
      if ( sub_1A42350(a1, i, 0, a4, a5, a6) )
        break;
      if ( v8 == v9 )
        goto LABEL_8;
      v12 = *v9++;
    }
    return 1;
  }
}
