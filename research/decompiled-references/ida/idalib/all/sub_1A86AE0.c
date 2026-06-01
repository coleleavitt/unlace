__int64 __fastcall sub_1A86AE0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax

  v2 = *(_WORD *)(*(_QWORD *)(a2 + 72) + 8LL);
  if ( v2 <= 0xCCu )
  {
    if ( v2 < 0xCBu )
    {
      if ( v2 == 60 || v2 >= 0x3Cu && (unsigned __int16)(v2 - 64) <= 1u )
        return 1;
LABEL_12:
      BUG();
    }
    return 0;
  }
  if ( v2 < 0xCEu )
    goto LABEL_12;
  if ( v2 <= 0xD0u )
    return 0;
  if ( (unsigned __int16)(v2 - 246) > 5u )
    goto LABEL_12;
  return 2;
}
