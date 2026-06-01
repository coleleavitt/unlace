__int64 __fastcall sub_98DE00(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rsi
  _DWORD *v6; // rdx
  int v7; // edx

  v2 = *(_QWORD *)(a1 + 616);
  v3 = 0;
  if ( !v2 )
    return v3;
  if ( !*(_DWORD *)(v2 - 4) )
    return v3;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * a2) + 8LL) + 56LL);
  if ( !v4 )
    return v3;
  v5 = v4 + 8LL * *(unsigned int *)(v4 - 4);
  if ( v5 == v4 )
    return v3;
  do
  {
    while ( 1 )
    {
      v6 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)v4 + 16LL) + 24LL);
      if ( !v6 || *v6 != *(_DWORD *)(a1 + 8) )
        goto LABEL_6;
      v7 = v6[1];
      if ( v7 > 11 )
        break;
      if ( v7 > 9 )
        return 1;
LABEL_6:
      v4 += 8;
      if ( v5 == v4 )
        return 0;
    }
    if ( (unsigned int)(v7 - 15) <= 1 )
      return 1;
    v4 += 8;
  }
  while ( v5 != v4 );
  return 0;
}

