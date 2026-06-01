__int64 __fastcall sub_C0580(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rdx

  if ( !a2[1] )
    return 0;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *(_QWORD *)(*a2 + 8 * v2++);
    v3 |= (unsigned __int8)sub_C0470((unsigned int *)(qword_252450 + 56 * v4));
  }
  while ( v2 < a2[1] );
  if ( v3 == 1 )
    *(_BYTE *)(a1 + 180) = 1;
  return v3;
}

