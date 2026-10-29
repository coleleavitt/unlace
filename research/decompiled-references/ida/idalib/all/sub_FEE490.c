char __fastcall sub_FEE490(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( a1 == a2 )
    return 1;
  if ( a2 == -4096 || a1 == -4096 || a1 == -8192 || a2 == -8192 )
    return 0;
  do
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( !v3 )
    {
      a1 = 0;
      break;
    }
    a1 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  }
  while ( (v3 & 4) != 0 && a1 );
  while ( 1 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( !v4 )
      break;
    a2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v4 & 4) == 0 || !a2 )
      return a1 == a2;
  }
  a2 = 0;
  return a1 == a2;
}
