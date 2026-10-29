__int64 __fastcall sub_1AB40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  char *v4; // rdi
  char v5; // al
  unsigned __int8 v6; // al
  __int64 i; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
    return 0;
  v4 = *(char **)(a1 + 24);
  v5 = *v4;
  *(_QWORD *)(a1 + 32) = v2 - 1;
  *(_QWORD *)(a1 + 24) = v4 + 1;
  v6 = v5 - 48;
  if ( v6 > 9u )
    return 0;
  *a2 = (char)v6;
  for ( i = *(_QWORD *)(a1 + 32); i; *(_QWORD *)(a1 + 32) = i )
  {
    if ( (unsigned __int8)(**(_BYTE **)(a1 + 24) - 48) > 9u )
      break;
    *a2 = (char)(**(_BYTE **)(a1 + 24) - 48) + 10LL * *a2;
    v8 = *(_QWORD *)(a1 + 32);
    if ( !v8 )
      break;
    i = v8 - 1;
    ++*(_QWORD *)(a1 + 24);
  }
  return 1;
}

