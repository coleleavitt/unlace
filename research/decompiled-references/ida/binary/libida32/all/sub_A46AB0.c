__int64 __fastcall sub_A46AB0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx
  unsigned __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v1 = sub_B68690(a1);
  v2 = *(__int64 **)v1;
  v3 = *(_QWORD *)v1 + 8LL * *(unsigned int *)(v1 + 8);
  if ( (unsigned __int64)v2 < v3 )
  {
    v7 = v2;
    while ( *(_WORD *)(*v7 + 36) != 376 )
    {
      if ( (__int64 *)v3 == ++v7 )
        return 0;
    }
    if ( (__int64 *)v3 != v7 )
      goto LABEL_14;
    return 0;
  }
  if ( v2 == (__int64 *)v3 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v3 + 36LL) != 376 )
  {
    v4 = (__int64 *)(v3 + 8);
    while ( v2 != v4 )
    {
      v5 = *v4++;
      if ( *(_WORD *)(v5 + 36) == 376 )
        goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  result = *v2;
  if ( *(_WORD *)(*v2 + 36) != 376 )
  {
    v8 = v2 + 1;
    do
      result = *v8++;
    while ( *(_WORD *)(result + 36) != 376 );
  }
  return result;
}

