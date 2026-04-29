__int64 __fastcall sub_3E9F80(__int64 a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d

  if ( (unsigned int)Clp_initialPrimalSolve() )
  {
    if ( *(int *)(a1 + 168) < 0 )
      return 0;
    Clp_deleteRows();
    if ( (unsigned int)Clp_initialPrimalSolve() )
      return 0;
    if ( (get_aflags() & 0x2000000) != 0 )
      sub_32DD50(*(_QWORD *)(a1 + 184), *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL), 17, v2, v3, v4);
  }
  return 1;
}
