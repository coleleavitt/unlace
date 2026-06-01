unsigned __int64 __fastcall sub_7C2460(__int64 a1, __int64 *a2)
{
  size_t v3; // r12
  const void *v4; // r13
  const char *v5; // rsi
  const char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  sub_7C21B0(a1, a2);
  sub_407AD0(a2, *(_DWORD *)(a1 + 56));
  v3 = *(_QWORD *)(a1 + 72);
  v4 = *(const void **)(a1 + 64);
  if ( HIDWORD(v3) )
    sub_7B9A10();
  sub_407AD0(a2, v3);
  if ( v3 )
    sub_7BB300(a2, v4, v3);
  sub_407AD0(a2, *(_DWORD *)(a1 + 88));
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 104) )
    v5 = *(const char **)(a1 + 96);
  sub_62C910(a2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 128) )
    v6 = *(const char **)(a1 + 120);
  sub_62C910(a2, v6);
  sub_7BB300(a2, (const void *)(a1 + 144), 0x10u);
  return sub_7BE190(a2, *(_QWORD *)(a1 + 160) + 1LL, v7, v8, v9);
}

