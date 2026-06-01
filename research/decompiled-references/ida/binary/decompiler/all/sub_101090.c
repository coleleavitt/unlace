__int64 __fastcall sub_101090(__int64 a1)
{
  if ( *(_BYTE *)a1 == 1 )
    return 1;
  if ( *(_BYTE *)a1 == 5 )
    return sub_100F40(**(_QWORD ***)(a1 + 8), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), 1u);
  return 0;
}
