unsigned __int64 __fastcall sub_8C7080(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  size_t v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  size_t v12; // rax
  _BYTE v14[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v15[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v15[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = *(const char **)a1;
  sub_62C910(a2, v4);
  v5 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v5 = *(const char **)(a1 + 24);
  sub_62C910(a2, v5);
  v6 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v6 = *(const char **)(a1 + 48);
  sub_62C910(a2, v6);
  v9 = pack_dq(v14, v15, *(_QWORD *)(a1 + 72), v7, v8) - (_QWORD)v14;
  if ( v9 )
    sub_8B3AA0(a2, v14, v9);
  v12 = pack_dq(v14, v15, *(_QWORD *)(a1 + 80), v10, v11) - (_QWORD)v14;
  if ( v12 )
    sub_8B3AA0(a2, v14, v12);
  sub_407AD0(a2, *(unsigned __int8 *)(a1 + 88));
  return sub_407AD0(a2, *(unsigned __int8 *)(a1 + 89));
}

