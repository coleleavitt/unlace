unsigned __int64 __fastcall sub_8C6790(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  size_t v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  size_t v8; // rax
  const char *v9; // rsi
  const char *v10; // rsi
  _BYTE v12[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v13[6]; // [rsp+18h] [rbp-30h] BYREF

  v13[0] = __readfsqword(0x28u);
  sub_407AD0(a2, *(_DWORD *)a1);
  sub_407AD0(a2, *(_DWORD *)(a1 + 4));
  v5 = pack_dq(v12, v13, *(_QWORD *)(a1 + 8), v3, v4) - (_QWORD)v12;
  if ( v5 )
    sub_8B3AA0(a2, v12, v5);
  v8 = pack_dq(v12, v13, *(_QWORD *)(a1 + 16), v6, v7) - (_QWORD)v12;
  if ( v8 )
    sub_8B3AA0(a2, v12, v8);
  v9 = haystack;
  if ( *(_QWORD *)(a1 + 32) )
    v9 = *(const char **)(a1 + 24);
  sub_62C910(a2, v9);
  v10 = haystack;
  if ( *(_QWORD *)(a1 + 56) )
    v10 = *(const char **)(a1 + 48);
  sub_62C910(a2, v10);
  sub_407AD0(a2, *(_DWORD *)(a1 + 72));
  return sub_407AD0(a2, *(_DWORD *)(a1 + 76));
}

