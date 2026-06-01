char __fastcall sub_B5A1D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 *v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rcx
  char result; // al
  __int64 *v9; // rax

  v1 = sub_B685F0(a1);
  v2 = *(_QWORD *)(v1 + 2320);
  if ( (*(_BYTE *)(v2 + 60) & 0x10) == 0
    || (*(_BYTE *)(v2 + 89) & 0x40) != 0
    || (*(_BYTE *)(a1 + 96) & 5) != 1
    || (*(_BYTE *)(a1 + 29) & 1) == 0 )
  {
    return (unsigned int)sub_B5A010(a1, v1) != 0;
  }
  v3 = sub_B68690(a1);
  v4 = *(__int64 **)v3;
  v5 = *(_QWORD *)v3 + 8LL * *(unsigned int *)(v3 + 8);
  if ( *(_QWORD *)v3 < v5 )
  {
    v9 = *(__int64 **)v3;
    while ( *(_WORD *)(*v9 + 36) != 168 )
    {
      if ( (__int64 *)v5 == ++v9 )
        goto LABEL_11;
    }
    if ( (__int64 *)v5 == v9 )
      goto LABEL_11;
  }
  else
  {
    if ( v4 == (__int64 *)v5 )
    {
LABEL_11:
      v1 = sub_B685F0(a1);
      return (unsigned int)sub_B5A010(a1, v1) != 0;
    }
    if ( *(_WORD *)(*(_QWORD *)v5 + 36LL) != 168 )
    {
      v6 = (__int64 *)(v5 + 8);
      while ( v4 != v6 )
      {
        v7 = *v6++;
        if ( *(_WORD *)(v7 + 36) == 168 )
          goto LABEL_18;
      }
      goto LABEL_11;
    }
  }
LABEL_18:
  result = 1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5 )
    goto LABEL_11;
  return result;
}

