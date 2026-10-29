void __fastcall sub_18636C0(__int64 a1, unsigned __int64 a2)
{
  if ( ((*(_WORD *)a2 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x14 )
    sub_1E91960(a1, a2);
  else
    sub_1862750(a1, a2);
}
