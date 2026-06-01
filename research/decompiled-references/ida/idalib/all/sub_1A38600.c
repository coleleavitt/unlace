_BOOL8 __fastcall sub_1A38600(int **a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  int v3; // eax

  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v2 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    v3 = **a1;
    if ( (a2 & 4) == 0 )
      break;
    if ( !v2 )
      return 1;
    if ( ((unsigned __int16)v3 & *(_WORD *)(*(_QWORD *)v2 + 30LL) & 0x3FFF) != 0
      && (unsigned __int8)sub_B72F20(*(_QWORD *)v2) )
    {
      return 0;
    }
    a2 = *(_QWORD *)(v2 + 8);
    if ( !a2 )
      return 1;
  }
  return ((unsigned __int16)v3 & *(_WORD *)(v2 + 30) & 0x3FFF) == 0 || !(unsigned __int8)sub_B72F20(v2);
}
