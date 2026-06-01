unsigned __int64 __fastcall sub_7C5C50(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  sub_407AD0(a2, *(_DWORD *)(a1 + 16));
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v3 = *(const char **)(a1 + 24);
  sub_62C910(a2, v3);
  sub_7C2DA0(a1 + 48, a2);
  sub_7BE190(a2, *(_QWORD *)(a1 + 168), v4, v5, v6);
  return sub_7C5BF0(a1 + 176, a2);
}

