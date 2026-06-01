bool __fastcall sub_53BE90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rax
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  char v14; // al
  unsigned int v15; // [rsp+0h] [rbp-2Ch]

  if ( *(_QWORD *)a3 != *(_QWORD *)a4 )
    return 0;
  if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a4 + 8) )
    return 0;
  v8 = *(_QWORD *)(a3 + 24);
  if ( *(_QWORD *)(a4 + 24) )
  {
    v11 = *(const char **)(a4 + 16);
    v12 = haystack;
    if ( !v8 )
      goto LABEL_8;
    goto LABEL_15;
  }
  v11 = haystack;
  if ( v8 )
  {
LABEL_15:
    v12 = *(const char **)(a3 + 16);
LABEL_8:
    v15 = a5;
    v13 = strcmp(v12, v11);
    a5 = v15;
    if ( v13 )
      return 0;
  }
  if ( (a5 & 0x100) != 0 )
    v14 = sub_538360(a1, a2, *(_QWORD *)(a3 + 64), *(_QWORD *)(a4 + 64), a5);
  else
    v14 = compare_tinfo(*(_QWORD *)(a3 + 64), *(_QWORD *)(a4 + 64), a5);
  if ( v14 && *(_BYTE *)(a3 + 120) == *(_BYTE *)(a4 + 120) )
    return *(_QWORD *)(a3 + 112) == *(_QWORD *)(a4 + 112);
  return 0;
}

