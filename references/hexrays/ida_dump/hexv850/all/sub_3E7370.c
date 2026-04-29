char **__fastcall sub_3E7370(__int64 a1)
{
  unsigned __int16 v1; // di
  __int64 v2; // rax
  char **v3; // rsi
  char **v4; // rdx

  v1 = *(_WORD *)(a1 + 48);
  v2 = 28;
  v3 = &off_4C1980;
  while ( v2 > 0 )
  {
    while ( 1 )
    {
      v4 = &v3[2 * (v2 >> 1)];
      if ( *((_WORD *)v4 + 4) >= v1 )
        break;
      v3 = v4 + 2;
      v2 = v2 - 1 - (v2 >> 1);
      if ( v2 <= 0 )
        goto LABEL_5;
    }
    v2 >>= 1;
  }
LABEL_5:
  if ( v3 == (char **)&byte_4C1B40 || *((_WORD *)v3 + 4) != v1 )
    return nullptr;
  else
    return v3;
}
