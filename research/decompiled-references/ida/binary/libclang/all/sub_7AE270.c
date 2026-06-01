__int64 __fastcall sub_7AE270(__int64 a1)
{
  _BYTE *v2; // rax

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 8) != 0 )
    return 1;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (**(_BYTE **)(a1 + 128) & 1) != 0
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104)),
        v2 = *(_BYTE **)(a1 + 128),
        (v2[9] & 1) != 0)
    || (v2[10] & 0x20) != 0
    && ((v2[104] & 0x18) != 0
     || (*((_DWORD *)v2 + 26) & 0xFFFE0) != 0
     || *(char *)(*(_QWORD *)(sub_798D40(a1) + 2160) + 1LL) >= 0) )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 8) == 0 )
      return 0;
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) != 0 )
      return 0;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 8LL) & 4) == 0 )
    return 0;
  if ( *(_BYTE *)(a1 + 73) >> 5 != 2 )
    return 1;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( *(char *)(*(_QWORD *)(a1 + 128) + 2LL) < 0 )
    return 1;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 2LL) & 0x10) == 0 )
    return 1;
  return *(_BYTE *)(sub_798D60(a1) + 1) >> 7;
}

