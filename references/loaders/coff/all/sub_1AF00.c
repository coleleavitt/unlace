__int64 __fastcall sub_1AF00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  unsigned int v5; // r12d
  int v6; // eax

  v4 = *(_WORD *)(a3 + 12);
  if ( v4 == 12 )
  {
    if ( !(unsigned __int8)sub_1AAA0(a1, a2, 10, 18, 0) )
      return 0;
  }
  else
  {
    if ( v4 > 0xCu )
    {
      if ( v4 != 18 )
        goto LABEL_5;
      goto LABEL_11;
    }
    if ( v4 != 3 )
    {
      if ( v4 != 10 )
        goto LABEL_5;
LABEL_11:
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 40);
      *(_BYTE *)(a1 + 100) = (*(_BYTE *)(a2 + 4) & 2) != 0;
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 343LL) + *(_QWORD *)(a1 + 56);
  }
LABEL_5:
  v5 = sub_146A0((_QWORD *)a1, a2, a3);
  if ( !(_BYTE)v5 )
    return 0;
  v6 = *(unsigned __int16 *)(a3 + 12);
  if ( (_WORD)v6 == 3 )
  {
    append_cmt(*(_QWORD *)(a1 + 32), "gprel32", 0);
    v6 = *(unsigned __int16 *)(a3 + 12);
  }
  else if ( (unsigned __int16)(v6 - 7) <= 1u )
  {
    auto_mark_range(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 32) + 1LL, 20);
    v6 = *(unsigned __int16 *)(a3 + 12);
  }
  *(_DWORD *)(a1 + 96) = v6;
  return v5;
}
