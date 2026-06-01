__int64 __fastcall sub_7A9860(__int64 a1)
{
  _BYTE *v2; // rdx

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 0x10) != 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (**(_BYTE **)(a1 + 128) & 4) != 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (**(_BYTE **)(a1 + 128) & 0x10) != 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (**(_BYTE **)(a1 + 128) & 8) != 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  v2 = *(_BYTE **)(a1 + 128);
  if ( ((*v2 >> 1) & 0x3Fu) > 0x1F )
    return 0;
  if ( (v2[10] & 0x20) != 0 )
    return sub_7A3430(a1);
  return 1;
}

