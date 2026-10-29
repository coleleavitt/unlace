__int64 __fastcall sub_7BAF20(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  do
  {
    v2 = *(_BYTE *)(a1 + 29) & 1;
    if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
      goto LABEL_2;
    v3 = sub_79A2B0(a1);
    v4 = *v3;
    v5 = *v3 + 8LL * *((unsigned int *)v3 + 2);
    if ( *v3 < v5 )
    {
      while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 125 )
      {
        v4 += 8LL;
        if ( v5 == v4 )
          goto LABEL_2;
      }
    }
    else
    {
      if ( v4 == v5 )
        goto LABEL_2;
      while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 125 )
      {
        v5 += 8LL;
        if ( v4 == v5 )
          goto LABEL_2;
      }
    }
    if ( v4 != v5 )
      return v2;
LABEL_2:
    a1 = sub_7BACE0(a1);
  }
  while ( a1 );
  return 0;
}

