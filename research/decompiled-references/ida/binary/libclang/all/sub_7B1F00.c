__int64 __fastcall sub_7B1F00(__int64 a1)
{
  __int64 v1; // rbp
  bool v2; // al
  unsigned __int64 v4; // rax
  char *v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax

  v1 = sub_798D60(a1);
  if ( *(char *)(v1 + 1) < 0 )
  {
    v4 = sub_7A4880(a1);
    if ( !v4 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0x10) == 0 || *(char *)(sub_798D60(a1) + 1) >= 0 )
        return 0;
      goto LABEL_4;
    }
    v2 = (*(_BYTE *)(v4 + 84) & 3) == 0;
  }
  else
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v2 = ((*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7) & 0x3Fu) <= 0x1F;
  }
  if ( v2 )
    return 0;
LABEL_4:
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(a1 + 73) >> 5 != 2 )
      return 0;
    if ( sub_7868A0(a1) )
    {
      v6 = sub_7868A0(a1);
      if ( !v6 )
        return 0;
LABEL_15:
      v7 = *(_QWORD *)(v6 + 48);
      if ( (v7 & 4) != 0
        || (v8 = v7 & 0xFFFFFFFFFFFFFFF0LL, (*(_BYTE *)(v8 + 8) & 4) != 0)
        || (v9 = *(_QWORD *)v8, v10 = sub_798D40(a1), !(unsigned __int8)sub_B19540(v9, v10)) )
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v6 + 8);
          v6 = v11 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v11 <= 7 )
            return 0;
          if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 <= 2 )
            goto LABEL_15;
        }
      }
    }
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v5 = *(char **)(a1 + 128);
  if ( *v5 < 0 || (v5[10] & 0x20) != 0 && (*(_BYTE *)(v1 + 1) & 0x40) != 0 )
    return 1;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 1) != 0
    || (unsigned __int8)sub_7A9790(a1) && (unsigned __int8)sub_7B1E10(a1) )
  {
    return 1;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) == 0 && !(unsigned __int8)sub_7A9790(a1) )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  return *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7;
}

