__int64 __fastcall sub_8C6C10(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  size_t v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  size_t v10; // rax
  _BYTE v12[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v13[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v13[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = *(const char **)a1;
  sub_62C910(a2, v4);
  sub_8B3AA0(a2, (const void *)(a1 + 24), 0x10u);
  v7 = pack_dq(v12, v13, *(_QWORD *)(a1 + 40) + 1LL, v5, v6) - (_QWORD)v12;
  if ( v7 )
    sub_8B3AA0(a2, v12, v7);
  v10 = pack_dq(v12, v13, *(_QWORD *)(a1 + 48), v8, v9) - (_QWORD)v12;
  if ( v10 )
    sub_8B3AA0(a2, v12, v10);
  sub_407AD0(a2, *(_DWORD *)(a1 + 56));
  sub_407AD0(a2, *(_DWORD *)(a1 + 60));
  sub_407AD0(a2, *(_DWORD *)(a1 + 64));
  sub_407AD0(a2, *(_DWORD *)(a1 + 68));
  return sub_8B3140(a2, *(_BYTE *)(a1 + 72));
}

