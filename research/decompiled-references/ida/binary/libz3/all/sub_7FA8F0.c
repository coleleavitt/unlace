_BOOL8 __fastcall sub_7FA8F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  if ( a1[10] == v2 )
    return 1;
  if ( a1[5] == v2 )
    return 1;
  if ( a1[6] == v2 )
    return 1;
  if ( v2 == a1[7] )
    return 1;
  if ( v2 == a1[8] )
    return 1;
  return v2 == a1[9];
}

