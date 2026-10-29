__int64 __fastcall sub_77CD80(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  int v4; // eax
  _BYTE *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 && (v2 & 4) != 0 && (v5 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
  {
    if ( (*v5 & 8) != 0 )
      return 0;
    if ( sub_76AB10(a1, a2) )
      return sub_B19900(*(_QWORD *)(a1 + 48));
  }
  else if ( sub_76AB10(a1, a2) )
  {
    return sub_B19900(*(_QWORD *)(a1 + 48));
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_6;
  v6 = sub_79A2B0(a1);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
  if ( v7 < v8 )
  {
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 265 )
    {
      v7 += 8LL;
      if ( v8 == v7 )
        goto LABEL_20;
    }
  }
  else
  {
    if ( v7 == v8 )
    {
LABEL_20:
      if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      {
        v9 = sub_79A2B0(a1);
        v10 = *(_QWORD *)v9;
        v11 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
        if ( v10 < v11 )
        {
          while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 121 )
          {
            v10 += 8LL;
            if ( v11 == v10 )
              goto LABEL_6;
          }
        }
        else
        {
          if ( v10 == v11 )
            goto LABEL_6;
          while ( *(_WORD *)(*(_QWORD *)v11 + 32LL) != 121 )
          {
            v11 += 8LL;
            if ( v10 == v11 )
              goto LABEL_6;
          }
        }
        if ( v10 != v11 )
          return sub_B19900(*(_QWORD *)(a1 + 48));
      }
LABEL_6:
      v4 = *(_BYTE *)(*(_QWORD *)(a2 + 2160) + 205LL) & 3;
      if ( v4 == 2 || v4 == 1 && !(unsigned int)sub_77B3E0(a1) )
        return 0;
      return sub_B19900(*(_QWORD *)(a1 + 48));
    }
    while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 265 )
    {
      v8 += 8LL;
      if ( v7 == v8 )
        goto LABEL_20;
    }
  }
  if ( v7 == v8 )
    goto LABEL_20;
  return 0;
}

