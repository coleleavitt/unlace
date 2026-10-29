__int64 __fastcall sub_DDFF60(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdi

  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return 0;
  v3 = v2 + 8LL * *(unsigned int *)(v2 - 4);
  if ( v3 == v2 )
    return 0;
  v4 = *(_QWORD *)(a1 + 48);
  while ( 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 40LL);
    if ( v5 )
    {
      v6 = v5 + 8LL * *(unsigned int *)(v5 - 4);
      if ( v5 != v6 )
        break;
    }
LABEL_8:
    v4 += 8;
    if ( v3 == v4 )
      return 0;
  }
  while ( *(_DWORD *)(*(_QWORD *)v5 + 32LL) != 2 )
  {
    v5 += 8;
    if ( v6 == v5 )
      goto LABEL_8;
  }
  *a2 = *(_QWORD *)(*(_QWORD *)v5 + 48LL);
  return 1;
}

