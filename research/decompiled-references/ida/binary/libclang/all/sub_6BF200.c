bool __fastcall sub_6BF200(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx

  v2 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v2 + 16LL) != 47 )
    return 0;
  v3 = sub_B14A40(*v2);
  if ( !v3 || (*(_BYTE *)(v3 + 29) & 1) == 0 )
    return 0;
  v5 = sub_79A2B0(v3);
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
  if ( v6 < v7 )
  {
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 316 )
    {
      v6 += 8LL;
      if ( v7 == v6 )
        return 0;
    }
    return v6 != v7;
  }
  if ( v6 != v7 )
  {
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 316 )
    {
      v7 += 8LL;
      if ( v6 == v7 )
        return 0;
    }
    return v6 != v7;
  }
  return 0;
}

