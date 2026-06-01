int __fastcall sub_47DEF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  int result; // eax
  const char *v8; // rsi
  const char *v9; // rdi

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a3 + 8);
  if ( v4 < v5 )
    return -1;
  if ( v5 < v4 )
    return 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)*a1 + 40LL))(
             *a1,
             a2 + 64,
             *(unsigned int *)(a2 + 148),
             a3 + 64,
             *(unsigned int *)(a3 + 148));
  if ( !result )
  {
    v8 = haystack;
    if ( *(_QWORD *)(a3 + 24) )
      v8 = *(const char **)(a3 + 16);
    v9 = haystack;
    if ( *(_QWORD *)(a2 + 24) )
      v9 = *(const char **)(a2 + 16);
    return strcmp(v9, v8);
  }
  return result;
}

