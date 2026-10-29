unsigned __int64 __fastcall sub_70EBE0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp

  v2 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v2 + 16LL) != 47 )
    return 0;
  v3 = sub_B14A40(*v2);
  if ( !v3 || (*(_BYTE *)(v3 + 29) & 1) == 0 )
    return 0;
  v4 = sub_79A2B0(v3);
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( v5 >= v6 )
  {
    if ( v5 == v6 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 245 )
    {
      v6 += 8LL;
      if ( v5 == v6 )
        return 0;
    }
    v7 = v5;
  }
  else
  {
    v7 = v5;
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 245 )
    {
      v7 += 8LL;
      if ( v6 == v7 )
        return 0;
    }
  }
  if ( v7 == v6 )
    return 0;
  while ( *(_WORD *)(*(_QWORD *)v5 + 32LL) != 245 )
    v5 += 8LL;
  v8 = *(unsigned int *)(*(_QWORD *)v5 + 36LL);
  return v8 / sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 18488) & 0xFFFFFFFFFFFFFFF0LL));
}

