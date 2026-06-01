bool __fastcall sub_7ADFB0(__int64 a1)
{
  __int64 v2; // rsi

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x10) != 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 1) == 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x20) != 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v2 = *(_QWORD *)(a1 + 104);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 4) != 0 )
    goto LABEL_6;
  sub_6E77B0((unsigned __int64 *)(v2 + 96), v2);
  if ( (**(_BYTE **)(a1 + 128) & 4) == 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (**(_BYTE **)(a1 + 128) & 0x10) == 0 )
    {
      sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
      if ( (**(_BYTE **)(a1 + 128) & 0x20) == 0 )
      {
        sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
        v2 = *(_QWORD *)(a1 + 104);
        if ( ((**(_BYTE **)(a1 + 128) >> 1) & 0x3Fu) > 0x1F )
          goto LABEL_6;
        sub_6E77B0((unsigned __int64 *)(v2 + 96), v2);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 2) == 0 )
          return 0;
      }
    }
  }
  v2 = *(_QWORD *)(a1 + 104);
LABEL_6:
  sub_6E77B0((unsigned __int64 *)(v2 + 96), v2);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 6LL) & 0x40) != 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 4) == 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( *(char *)(*(_QWORD *)(a1 + 128) + 6LL) < 0 )
    return 0;
  if ( (unsigned __int8)sub_7A9860(a1) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 5LL) & 8) == 0 )
      return 0;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  return ((*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7) & 0x3Fu) > 0x1F;
}

