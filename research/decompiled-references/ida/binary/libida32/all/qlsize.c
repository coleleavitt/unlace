__int64 __fastcall qlsize(__int64 a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return qfsize(*(_QWORD *)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}

