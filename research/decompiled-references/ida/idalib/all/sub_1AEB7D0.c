__int64 __fastcall sub_1AEB7D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rsi
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 *i; // rdx
  __int64 *v12; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( *(int *)(a1 + 12) <= 0 )
    return 1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v4 + 20) )
    goto LABEL_12;
  v5 = *(__int64 **)v4;
  v6 = *(unsigned int *)(v4 + 12);
  v7 = (__int64 *)(*(_QWORD *)v4 + 8 * v6);
  if ( *(__int64 **)v4 != v7 )
  {
    v8 = *(__int64 **)v4;
    if ( v2 == *v5 )
      goto LABEL_11;
    do
    {
      if ( v7 == ++v8 )
        break;
    }
    while ( v2 != *v8 );
  }
  if ( (unsigned int)v6 < *(_DWORD *)(v4 + 8) )
  {
    *(_DWORD *)(v4 + 12) = v6 + 1;
    *v7 = v2;
    v5 = *(__int64 **)v4;
    v8 = (__int64 *)(*(_QWORD *)v4 + 8 * v6);
  }
  else
  {
LABEL_12:
    v10 = sub_2236760(v4, v2);
    v5 = *(__int64 **)v4;
    v8 = (__int64 *)v10;
    if ( !*(_BYTE *)(v4 + 20) )
    {
      v9 = &v5[*(unsigned int *)(v4 + 8)];
      goto LABEL_14;
    }
  }
LABEL_11:
  v9 = &v5[*(unsigned int *)(v4 + 12)];
LABEL_14:
  if ( v9 == v8 || (unsigned __int64)*v8 < 0xFFFFFFFFFFFFFFFELL )
    return 1;
  for ( i = v8 + 1; ; ++i )
  {
    v12 = i;
    if ( v9 == i )
      break;
    if ( (unsigned __int64)*v12 < 0xFFFFFFFFFFFFFFFELL )
      return 1;
  }
  return 1;
}
