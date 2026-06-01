void __fastcall sub_F57210(__int64 *src, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  bool v4; // al
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 *i; // r15
  bool v8; // r14
  bool v9; // al
  bool v10; // r14
  __int64 *v11; // [rsp+8h] [rbp-40h]

  if ( src == a2 )
    return;
  v2 = src + 1;
  if ( a2 == src + 1 )
    return;
  v11 = &src[((unsigned __int64)((char *)(a2 - 2) - (char *)src) >> 3) + 2];
  do
  {
    while ( 1 )
    {
      v3 = *src;
      v4 = sub_F55F70(*v2, *src);
      v5 = *v2;
      if ( !v4 )
        break;
      if ( src != v2 )
        memmove(src + 1, src, (char *)v2 - (char *)src);
      *src = v5;
      if ( ++v2 == v11 )
        return;
    }
    v6 = *(v2 - 1);
    i = v2;
    if ( v6 == v5 )
    {
LABEL_15:
      *i = v5;
      goto LABEL_16;
    }
    for ( i = v2 - 1; ; --i )
    {
      v8 = sub_B744F0((_QWORD *)v5, v3);
      if ( v8 != sub_B744F0((_QWORD *)v6, v3) )
      {
        v9 = sub_B744F0((_QWORD *)v5, v3);
        goto LABEL_13;
      }
      v10 = sub_B74620((_QWORD *)v5, v3);
      if ( v10 != sub_B74620((_QWORD *)v6, v3) )
      {
        v9 = sub_B74620((_QWORD *)v5, v3);
        goto LABEL_13;
      }
      v9 = (*(_BYTE *)(v5 + 28) & 0x7F) == 36;
      if ( v9 == ((*(_BYTE *)(v6 + 28) & 0x7F) == 36) )
        break;
LABEL_13:
      if ( !v9 )
        break;
      v6 = *(i - 1);
      i[1] = *i;
      if ( v5 == v6 )
        goto LABEL_15;
    }
    i[1] = v5;
LABEL_16:
    ++v2;
  }
  while ( v2 != v11 );
}

