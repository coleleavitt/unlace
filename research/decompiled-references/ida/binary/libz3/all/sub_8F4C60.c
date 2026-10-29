__int64 __fastcall sub_8F4C60(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  unsigned int i; // ebp
  __int64 v6; // rdi
  char v7; // dl

  v3 = *(_QWORD *)(a1 + 8760);
  if ( !v3 )
    return 1;
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(v3 - 4) )
      goto LABEL_8;
    v6 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(a1 + 8632) == 1 && !*(_BYTE *)(v6 + 4) )
    {
      *(_DWORD *)(a1 + 10308) = 3;
      goto LABEL_8;
    }
    v7 = sub_18290A0(v6);
    v3 = *(_QWORD *)(a1 + 8760);
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 10308) = 3;
      if ( !v3 )
        return 1;
LABEL_8:
      *(_DWORD *)(v3 - 4) = 0;
      return 1;
    }
    sub_8F4690(
      a1,
      *(_QWORD **)(v3 + 24LL * i),
      *(_QWORD **)(v3 + 24LL * i + 8),
      *(_QWORD *)(v3 + 24LL * i + 16),
      a2,
      a3);
    v3 = *(_QWORD *)(a1 + 8760);
    if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
      break;
    if ( !v3 )
      return 1;
  }
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  return 0;
}

