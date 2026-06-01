__int64 __fastcall sub_1E4C860(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 i; // rax
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 32);
  v2 = v1 + 8LL * *(unsigned int *)(a1 + 40);
  if ( v1 == v2 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)v1 + 8LL) & 7) != 2 )
  {
    for ( i = v1 + 8; ; i += 8 )
    {
      v4 = i;
      if ( v2 == i )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)v4 + 8LL) & 7) == 2 )
        return 1;
    }
    return 0;
  }
  return 1;
}
