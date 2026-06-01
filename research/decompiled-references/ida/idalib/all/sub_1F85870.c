__int64 __fastcall sub_1F85870(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rsi

  sub_1F85840((*a1)[1], **a1, *(_QWORD *)(a2 + 24), (_QWORD *)(*a1)[2], a5, a6);
  sub_9B9C90((*a1)[2], *(_BYTE *)(a2 + 21) & 1);
  sub_9B9C90((*a1)[2], (*(_BYTE *)(a2 + 21) & 0x38) != 0);
  v7 = *(unsigned __int16 *)(a2 + 20);
  LOWORD(v7) = (unsigned __int16)v7 >> 2;
  v8 = (v7 >> 9) & 7;
  v9 = (unsigned int)(v8 - 1);
  if ( !v8 )
    v9 = 0;
  sub_9B9C90((*a1)[2], v9);
  sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 20) >> 2) & 0x3F);
  sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 20) & 0x200) != 0);
  sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 20) & 0x400) != 0);
  sub_9B9C90((*a1)[2], (*(_WORD *)(a2 + 20) & 0x4000) != 0);
  return sub_9B9C90((*a1)[2], *(_WORD *)(a2 + 20) >> 15);
}
