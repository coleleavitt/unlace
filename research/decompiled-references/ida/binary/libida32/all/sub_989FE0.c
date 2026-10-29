void __fastcall sub_989FE0(__int64 a1, __int64 a2)
{
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    sub_988FA0(a1, *(_QWORD *)(a2 + 16), a2);
  }
  else if ( ((((*(_WORD *)(a2 + 2) >> 3) & 0x3F) + 45) & 0x3Fu) <= 1 )
  {
    sub_989540(a1, a2);
  }
}

