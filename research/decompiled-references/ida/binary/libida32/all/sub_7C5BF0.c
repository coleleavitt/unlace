unsigned __int64 __fastcall sub_7C5BF0(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  sub_62C910(a2, v3);
  v4 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v4 = *(const char **)(a1 + 24);
  sub_62C910(a2, v4);
  sub_7BE190(a2, *(_QWORD *)(a1 + 48), v5, v6, v7);
  return sub_7BE190(a2, *(_QWORD *)(a1 + 56), v8, v9, v10);
}

