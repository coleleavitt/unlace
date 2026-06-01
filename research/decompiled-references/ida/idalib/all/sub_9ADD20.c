void __fastcall sub_9ADD20(__int64 a1, __int64 a2)
{
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    sub_9ACCE0(a1, *(_QWORD *)(a2 + 16), a2);
  }
  else if ( ((((*(_WORD *)(a2 + 2) >> 3) & 0x3F) + 45) & 0x3Fu) <= 1 )
  {
    sub_9AD280(a1, a2);
  }
}
