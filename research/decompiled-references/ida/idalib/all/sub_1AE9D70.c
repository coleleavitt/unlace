__int64 __fastcall sub_1AE9D70(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // rdx
  int *v5; // rdx
  int v6; // eax

  v4 = 8;
  if ( (((*(_WORD *)(a2 + 18) >> 3) + 74) & 0x1FFu) <= 0x31 )
    v4 = ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) + 74)) & 1) != 0 ? 12LL : 8LL;
  sub_1EA6140(a1, a2, v4, 4);
  v6 = *a3;
  *v5 = *a3;
  v5[1] = v6;
  if ( (((*(_WORD *)(a2 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
    && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) + 74)) & 1) != 0 )
  {
    v5[2] = a3[2];
  }
  return a2;
}
