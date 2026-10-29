__int64 __fastcall sub_7BCA30(__int64 a1)
{
  unsigned __int64 v2; // rax
  char v3; // al
  unsigned __int64 v4; // rax

  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 120);
    if ( v4 )
    {
      if ( v4 <= 7 )
        goto LABEL_12;
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v4 = *(_QWORD *)(a1 + 120);
      if ( v4 <= 7 )
      {
LABEL_12:
        v2 = 0;
        goto LABEL_6;
      }
    }
    v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( a1 == *(_QWORD *)v2 )
      break;
LABEL_6:
    v3 = (*(_BYTE *)(v2 + 72) >> 3) & 3;
    if ( v3 == 1 || v3 != 2 && sub_7BC660(a1) )
    {
      a1 = sub_7BACE0(a1);
      if ( a1 )
        continue;
    }
    return 0;
  }
  if ( (*(_BYTE *)(v2 + 72) & 1) == 0 )
  {
    if ( (*(_BYTE *)(v2 + 72) & 4) != 0 )
      return a1;
    goto LABEL_6;
  }
  sub_7B7DB0(a1);
  v2 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v2 + 72) & 4) == 0 )
    goto LABEL_6;
  return a1;
}

