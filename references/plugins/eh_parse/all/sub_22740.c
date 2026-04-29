unsigned __int64 __fastcall sub_22740(__int64 a1, int a2)
{
  unsigned __int64 v2; // r13
  unsigned int v3; // ebp
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx

  v2 = *(unsigned int *)(a1 + 56);
  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 16LL) & (a2 - *(_DWORD *)(a1 + 32));
  if ( !*(_DWORD *)(a1 + 56) )
    return 0;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = v4 + ((v2 - v4) >> 1);
      if ( (unsigned int)get_dword(*(_QWORD *)(a1 + 40) + v5 * *(_QWORD *)(a1 + 24)) >= v3 )
        break;
      v4 = v5 + 1;
      if ( v5 + 1 >= v2 )
        return v4;
    }
    v2 = v4 + ((v2 - v4) >> 1);
  }
  while ( v4 < v5 );
  return v4;
}
