unsigned __int64 __fastcall sub_7C2DA0(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  sub_62C910(a2, v3);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v4 = *(const char **)(a1 + 24);
  sub_62C910(a2, v4);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v5 = *(const char **)(a1 + 48);
  sub_62C910(a2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v6 = *(const char **)(a1 + 72);
  sub_62C910(a2, v6);
  sub_407AD0(a2, *(_DWORD *)(a1 + 96));
  sub_7BE190(a2, *(_QWORD *)(a1 + 104), v7, v8, v9);
  return sub_407AD0(a2, *(_DWORD *)(a1 + 112));
}

