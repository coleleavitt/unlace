char __fastcall sub_DFFEE0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 v3; // rax
  char result; // al
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // eax

  if ( *(_DWORD *)(a1 + 24) )
    return 1;
  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 40);
  if ( v1 && *(_DWORD *)(*(_QWORD *)(v1 + 32) + 24LL) != (_DWORD)v2 && (_DWORD)v2 )
  {
    v5 = sub_CDA220(a1);
    if ( *(_QWORD *)(v5 + 40) || !*(_BYTE *)(v5 + 60) )
      return (*(_BYTE *)(v1 + v2 + 28) & 2) != 0;
    goto LABEL_14;
  }
  if ( (_DWORD)v2 == 8 )
    return *(_DWORD *)(v1 + 40) == 0;
  v3 = sub_CDA220(a1);
  if ( *(_QWORD *)(v3 + 40) || !*(_BYTE *)(v3 + 60) )
  {
    result = 1;
    if ( !(_DWORD)v2 )
      return result;
    return (*(_BYTE *)(v1 + v2 + 28) & 2) != 0;
  }
  result = *(_BYTE *)(v1 + 24);
  if ( !result || (_DWORD)v2 )
  {
LABEL_14:
    v6 = v1 + v2 + 40;
    result = *(_BYTE *)(v6 + 24);
    if ( result )
    {
      result = *(_BYTE *)v6;
      if ( !*(_BYTE *)v6 )
      {
        v7 = sub_CDA8F0((unsigned int *)a1);
        return sub_CCBD60(*(_QWORD *)(v6 + 8), v7);
      }
    }
  }
  return result;
}

