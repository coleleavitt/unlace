__int64 __fastcall sub_122410(__int64 a1)
{
  while ( 1 )
  {
    if ( !a1 )
      return 0;
    if ( *(char *)(a1 + 4) >= 0 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  return a1;
}
