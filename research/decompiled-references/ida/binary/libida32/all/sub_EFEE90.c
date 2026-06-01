unsigned __int64 __fastcall sub_EFEE90(__int64 *a1, char a2)
{
  __int64 i; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  char v8; // al

  for ( i = *a1; ; i = *(_QWORD *)(v6 + 16) )
  {
LABEL_2:
    if ( !i )
      return 0;
    while ( 1 )
    {
      v3 = (i >> 1) & 3;
      if ( ((i >> 1) & 3) != 0 )
        break;
      v4 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( (i & 0xFFFFFFFFFFFFFFF8LL) == 0 || (*(_BYTE *)(v4 + 28) & 0x7Fu) - 53 > 1 )
        goto LABEL_18;
      i = *(_QWORD *)(v4 + 64);
      if ( !i )
        return 0;
    }
    if ( v3 != 2 )
      break;
    v6 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v6 )
      return 0;
  }
  if ( v3 == 1 )
  {
    v7 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( (i & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return 0;
    v8 = *(_BYTE *)v7 & 7;
    if ( v8 == 3 )
      goto LABEL_15;
    if ( !a2 )
      return 0;
    if ( v8 == 2 )
    {
LABEL_15:
      i = *(_QWORD *)(v7 + 16);
      goto LABEL_2;
    }
  }
LABEL_18:
  result = 0;
  if ( (i & 6) == 0 )
    return i & 0xFFFFFFFFFFFFFFF8LL;
  return result;
}

