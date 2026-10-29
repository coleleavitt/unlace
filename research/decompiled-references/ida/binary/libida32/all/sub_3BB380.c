__int64 __fastcall sub_3BB380(__int64 a1, const char *a2, unsigned int a3)
{
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx

  if ( !*(_BYTE *)(a1 + 1000) )
    return 0;
  v6 = *(_QWORD *)(a1 + 1008);
  v7 = strcmp(a2, *(const char **)(*(_QWORD *)v6 + 409632LL));
  v8 = a3;
  v9 = v6;
  if ( !v7 )
    return sub_8968E0(v9, v8);
  v10 = *(_QWORD *)(a1 + 2320);
  if ( !strcmp(a2, *(const char **)(*(_QWORD *)v10 + 409632LL)) )
  {
    v8 = a3;
    v9 = v10;
    return sub_8968E0(v9, v8);
  }
  return 0;
}

