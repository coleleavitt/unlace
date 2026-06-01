__int64 __fastcall sub_7BB000(__int64 a1)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  do
  {
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v2 = sub_79A2B0(a1);
      v3 = *v2;
      v4 = *v2 + 8LL * *((unsigned int *)v2 + 2);
      if ( *v2 < v4 )
      {
        while ( *(_WORD *)(*(_QWORD *)v3 + 32LL) != 305 )
        {
          v3 += 8LL;
          if ( v4 == v3 )
            goto LABEL_2;
        }
      }
      else
      {
        if ( v3 == v4 )
          goto LABEL_2;
        while ( *(_WORD *)(*(_QWORD *)v4 + 32LL) != 305 )
        {
          v4 += 8LL;
          if ( v3 == v4 )
            goto LABEL_2;
        }
      }
      if ( v3 != v4 )
        break;
    }
LABEL_2:
    a1 = sub_7BACE0(a1);
  }
  while ( a1 );
  return a1;
}

