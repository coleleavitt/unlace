unsigned __int64 __fastcall sub_8C6170(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // rax
  _BYTE v12[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v13[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  v13[0] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)a1;
  if ( v2 )
  {
    v5 = strlen(v2) + 1;
  }
  else
  {
    v5 = 1;
    v2 = &byte_22CD811;
  }
  sub_8B3AA0(a2, v2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v6 = *(const char **)(a1 + 24);
  sub_62C910(a2, v6);
  v7 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v7 = *(const char **)(a1 + 48);
  sub_62C910(a2, v7);
  v10 = pack_dq(v12, v13, *(_QWORD *)(a1 + 72), v8, v9) - (_QWORD)v12;
  if ( v10 )
    sub_8B3AA0(a2, v12, v10);
  sub_407AD0(a2, *(_DWORD *)(a1 + 80));
  return sub_407AD0(a2, *(_DWORD *)(a1 + 84));
}

