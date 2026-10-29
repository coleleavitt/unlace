__int64 __fastcall sub_92640(__int64 a1)
{
  if ( !a1 )
    return -1;
  if ( *(int *)a1 <= 1 )
    return sub_9F190(*(_QWORD *)(a1 + 8));
  return *(_QWORD *)(a1 + 16);
}

