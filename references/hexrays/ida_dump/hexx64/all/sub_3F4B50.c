__int64 __fastcall sub_3F4B50(__int64 a1)
{
  if ( (unsigned int)Clp_initialPrimalSolve(*(_QWORD *)(a1 + 176)) )
  {
    if ( *(int *)(a1 + 168) < 0 )
      return 0;
    Clp_deleteRows(*(_QWORD *)(a1 + 176), 1, a1 + 168);
    if ( (unsigned int)Clp_initialPrimalSolve(*(_QWORD *)(a1 + 176)) )
      return 0;
    if ( (get_aflags(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL)) & 0x2000000) != 0 )
      sub_3311F0(*(_QWORD **)(a1 + 184), *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL), 0x11u);
  }
  return 1;
}
