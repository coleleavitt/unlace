__int64 __fastcall sub_77E260(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax

  v1 = *(_BYTE *)(a1 + 29) & 1;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v5 = sub_79A2B0(a1);
    v6 = *(_QWORD *)v5;
    v7 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
    if ( v6 < v7 )
    {
      while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 311 )
      {
        v6 += 8LL;
        if ( v7 == v6 )
          goto LABEL_2;
      }
    }
    else
    {
      if ( v6 == v7 )
        goto LABEL_2;
      while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 311 )
      {
        v7 += 8LL;
        if ( v6 == v7 )
          goto LABEL_2;
      }
    }
    if ( v6 != v7 )
      return v1;
  }
LABEL_2:
  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v2 & 4) != 0 )
    v3 = *(_QWORD *)(v3 + 8);
  return sub_79BBC0(v3);
}

