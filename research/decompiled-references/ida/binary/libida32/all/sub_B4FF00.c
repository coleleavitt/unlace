bool __fastcall sub_B4FF00(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  if ( sub_990BA0(a1) )
    return 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v4 = sub_B68690(a1);
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
    if ( *(_QWORD *)v4 >= v6 )
    {
      if ( v5 != v6 )
      {
        while ( *(_WORD *)(*(_QWORD *)v6 + 36LL) != 272 )
        {
          v6 += 8LL;
          if ( v5 == v6 )
            goto LABEL_10;
        }
        return 1;
      }
    }
    else
    {
      v7 = *(_QWORD *)v4;
      while ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 272 )
      {
        v7 += 8;
        if ( v6 == v7 )
          goto LABEL_10;
      }
      if ( v6 != v7 )
        return 1;
    }
LABEL_10:
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v8 = sub_B68690(a1);
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
      if ( *(_QWORD *)v8 >= v10 )
      {
        if ( v9 != v10 )
        {
          while ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 129 )
          {
            v10 += 8LL;
            if ( v9 == v10 )
              goto LABEL_3;
          }
          return 0;
        }
      }
      else
      {
        v11 = *(_QWORD *)v8;
        while ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 129 )
        {
          v11 += 8;
          if ( v10 == v11 )
            goto LABEL_3;
        }
        if ( v10 != v11 )
          return 0;
      }
    }
  }
LABEL_3:
  v2 = *(_BYTE *)(*(_QWORD *)(a2 + 2320) + 213LL) & 3;
  if ( v2 == 2 )
    return 1;
  if ( v2 != 1 )
    return 0;
  return (unsigned int)sub_B4F630(a1) == 0;
}

