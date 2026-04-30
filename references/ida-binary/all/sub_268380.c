__int64 __fastcall sub_268380(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rbp

  if ( !*(_BYTE *)(a1 + 16) )
    goto LABEL_12;
  if ( *(_DWORD *)a1 != 3 )
  {
    sub_264A80(a5, a1, a2, a3, a4);
LABEL_12:
    if ( under_debugger )
      BUG();
    interr(40615, a2, a3, a4, a5);
    return sub_268430();
  }
  v5 = *(__int64 **)(a1 + 8);
  v6 = v5[1];
  if ( !v6 )
    return 0;
  v7 = *v5;
  v8 = 0;
  while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "inf") )
  {
    ++v8;
    v7 += 40;
    if ( v6 == v8 )
      return 0;
  }
  if ( *(_DWORD *)(v7 + 24) == 3 )
    return *(_QWORD *)(v7 + 32);
  else
    return 0;
}
