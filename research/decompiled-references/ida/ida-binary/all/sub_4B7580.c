__int64 __fastcall sub_4B7580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rbp

  if ( !*(_BYTE *)(a1 + 16) )
    goto LABEL_11;
  if ( *(_DWORD *)a1 != 3 )
  {
    sub_4B56A0(a5, a1, a2, a3, a4);
LABEL_11:
    sub_4B56C0(a5, a1, a2, a3, a4);
    return sub_4B7620(a1);
  }
  v5 = *(__int64 **)(a1 + 8);
  v6 = v5[1];
  if ( !v6 )
    return 0;
  v7 = *v5;
  v8 = 0;
  while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "layout") )
  {
    ++v8;
    v7 += 40;
    if ( v6 == v8 )
      return 0;
  }
  return v7 + 24;
}
