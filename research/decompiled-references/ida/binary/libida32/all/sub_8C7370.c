unsigned __int64 __fastcall sub_8C7370(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // r12
  size_t v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // rax
  _BYTE v14[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v15[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  v15[0] = __readfsqword(0x28u);
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
  v6 = v2;
  v7 = haystack;
  sub_8B3AA0(a2, v6, v5);
  if ( *(_QWORD *)(a1 + 32) )
    v7 = *(const char **)(a1 + 24);
  if ( v7 )
  {
    v8 = strlen(v7) + 1;
  }
  else
  {
    v8 = 1;
    v7 = &byte_22CD811;
  }
  sub_8B3AA0(a2, v7, v8);
  v9 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v9 = *(const char **)(a1 + 48);
  sub_62C910(a2, v9);
  v12 = pack_dq(v14, v15, *(_QWORD *)(a1 + 72), v10, v11) - (_QWORD)v14;
  if ( v12 )
    sub_8B3AA0(a2, v14, v12);
  return v15[0] - __readfsqword(0x28u);
}

