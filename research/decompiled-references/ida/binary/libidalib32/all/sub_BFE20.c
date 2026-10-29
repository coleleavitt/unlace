__int64 __fastcall sub_BFE20(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdx

  if ( !a2[1] )
    return 0;
  v6 = 0;
  v7 = 0;
  do
  {
    v8 = *(_QWORD *)(*a2 + 8 * v6++);
    v7 |= (unsigned __int8)sub_BFD20((int *)(qword_2512E0 + 56 * v8), (__int64)a2, qword_2512E0, a4, a5, a6);
  }
  while ( v6 < a2[1] );
  if ( v7 == 1 )
    *(_BYTE *)(a1 + 180) = 1;
  return v7;
}

