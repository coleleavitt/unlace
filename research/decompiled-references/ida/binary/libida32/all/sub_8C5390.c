unsigned __int64 __fastcall sub_8C5390(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // rsi
  const char *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  size_t v11; // rax
  _BYTE v13[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v14[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  v14[0] = __readfsqword(0x28u);
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
  v8 = haystack;
  if ( *(_QWORD *)(a1 + 80) )
    v8 = *(const char **)(a1 + 72);
  sub_62C910(a2, v8);
  v11 = pack_dq(v13, v14, *(_QWORD *)(a1 + 96), v9, v10) - (_QWORD)v13;
  if ( v11 )
    sub_8B3AA0(a2, v13, v11);
  return v14[0] - __readfsqword(0x28u);
}

