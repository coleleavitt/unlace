__int64 __fastcall sub_154D360(__int64 a1)
{
  if ( !**(_QWORD **)a1 )
    return 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 368LL) = 1;
  return sub_1706320(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) + 656LL),
           **(_QWORD **)a1,
           **(_QWORD **)(a1 + 16),
           *(unsigned int *)(*(_QWORD *)(a1 + 16) + 8LL),
           **(unsigned int **)(a1 + 24));
}
