__int64 __fastcall sub_5BE0(__int64 a1, __int64 a2, unsigned __int16 a3, int a4)
{
  __int16 v5; // ax

  if ( a4 == -1 )
  {
    if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a1 + 16), 93) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_3;
LABEL_7:
    *(_BYTE *)(a2 + 1) = 1;
    *(_WORD *)(a2 + 6) = a3 + 24;
    *(_BYTE *)(a2 + 5) = 3;
    return 3;
  }
  if ( !a4 )
    goto LABEL_7;
LABEL_3:
  *(_BYTE *)(a2 + 1) = 1;
  v5 = (a3 >> 1) + 56;
  if ( (a3 & 1) != 0 )
    v5 = (a3 >> 1) + 64;
  *(_WORD *)(a2 + 6) = v5;
  *(_BYTE *)(a2 + 5) = 4;
  return 4;
}
