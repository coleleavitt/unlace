__int64 __fastcall sub_3A5320(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(int *)(a2 + 8) > 69 )
    sub_265A20(a2, a1, a3);
  else
    sub_264360(a2, a1, a3);
  if ( *(_QWORD *)(a1 + 8) > 1u )
    tag_remove(a1, *(_QWORD *)a1, 0);
  return a1;
}
