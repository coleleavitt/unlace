void *__fastcall sub_8C6430(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  size_t v5; // rax
  const char *v6; // r12
  size_t v7; // rdx
  const char *v8; // rsi
  const char *v9; // rsi
  _BYTE v11[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v12[4]; // [rsp+18h] [rbp-20h] BYREF

  v12[0] = __readfsqword(0x28u);
  sub_407AD0(a2, *(_DWORD *)a1);
  sub_8B3140(a2, *(_BYTE *)(a1 + 4));
  v5 = pack_dq(v11, v12, *(_QWORD *)(a1 + 8), v3, v4) - (_QWORD)v11;
  if ( v5 )
    sub_8B3AA0(a2, v11, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 24) )
    v6 = *(const char **)(a1 + 16);
  if ( v6 )
  {
    v7 = strlen(v6) + 1;
  }
  else
  {
    v7 = 1;
    v6 = &byte_22CD811;
  }
  sub_8B3AA0(a2, v6, v7);
  v8 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v8 = *(const char **)(a1 + 40);
  sub_62C910(a2, v8);
  v9 = haystack;
  if ( *(_QWORD *)(a1 + 72) )
    v9 = *(const char **)(a1 + 64);
  return sub_62C910(a2, v9);
}

