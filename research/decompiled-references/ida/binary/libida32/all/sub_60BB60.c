__int64 __fastcall sub_60BB60(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int i; // ebx

  v2 = netnode_supfirst(*a1, 65);
  if ( v2 != -1 )
  {
    for ( i = v2; i != -1; i = netnode_supnext(*a1, i, 65) )
      sub_60B910((__int64)a1, a2, i);
  }
  sub_514FD0(3, 0);
  return mark_builtin_widgets(2, 0, 1);
}

