void __fastcall sub_1485110(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  while ( 1 )
  {
    if ( (a2 & 4) != 0 && ((unsigned __int16)(*(_WORD *)(a1 + 32) - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0)) )
    {
      sub_14AB020(a1, a3);
      if ( (a2 & 1) == 0 || *(_WORD *)(a1 + 32) != 189 )
        goto LABEL_9;
      goto LABEL_18;
    }
    if ( (a2 & 1) == 0 || *(_WORD *)(a1 + 32) != 189 )
      break;
LABEL_18:
    sub_1490230(a1, a3, a4, 0);
LABEL_9:
    if ( (a2 & 2) != 0 && *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 3LL) < 0 && *(_WORD *)(a1 + 32) == 320 )
LABEL_12:
      sub_1484740(a1, a3);
  }
  if ( (a2 & 2) != 0 && *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 3LL) < 0 && *(_WORD *)(a1 + 32) == 320 )
    goto LABEL_12;
}
