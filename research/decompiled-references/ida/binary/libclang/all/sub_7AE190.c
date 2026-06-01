__int64 __fastcall sub_7AE190(__int64 a1)
{
  __int64 v2; // rax

  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) != 0 )
    goto LABEL_2;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (**(_BYTE **)(a1 + 128) & 1) == 0 )
  {
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    v2 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v2 + 9) & 1) == 0 && ((*(_BYTE *)(v2 + 10) & 0x20) == 0 || (unsigned __int8)sub_7A3430(a1)) )
      goto LABEL_2;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 3LL) & 8) == 0 )
    return 0;
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 9LL) & 1) == 0 )
  {
LABEL_2:
    sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
    return *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7;
  }
  return 0;
}

