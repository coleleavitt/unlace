__int64 __fastcall sub_1B340(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // edx

  v4 = *(_WORD *)(a4 + 24);
  if ( v4 == 469 )
  {
LABEL_8:
    *(_QWORD *)(a2 + 8) = a4 + 40;
    *(_QWORD *)(a2 + 16) = a4 + 80;
    return 1;
  }
  if ( v4 > 0x1D5u )
  {
    v5 = 0;
    if ( v4 != 484 )
      return v5;
    goto LABEL_8;
  }
  v5 = 0;
  if ( (unsigned __int16)(v4 - 9) <= 5u )
  {
    *(_QWORD *)(a2 + 8) = a4 + 80;
    *(_QWORD *)(a2 + 16) = a4 + 40;
    return 1;
  }
  return v5;
}
