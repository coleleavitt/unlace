unsigned __int64 __fastcall sub_8C3410(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  size_t v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 i; // rbx
  _QWORD *v12; // r15
  size_t v13; // rax
  _BYTE v15[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _QWORD v16[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v16[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = *(const char **)a1;
  sub_62C910(a2, v4);
  v7 = pack_dq(v15, v16, *(_QWORD *)(a1 + 24) + 1LL, v5, v6) - (_QWORD)v15;
  if ( v7 )
    sub_8B3AA0(a2, v15, v7);
  sub_8B3AA0(a2, (const void *)(a1 + 32), 0x10u);
  v8 = *(_QWORD *)(a1 + 56);
  sub_407AD0(a2, v8);
  if ( v8 )
  {
    for ( i = 0; i != v8; ++i )
    {
      v12 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 24 * i);
      v13 = pack_dq(v15, v16, *v12 + 1LL, v9, v10) - (_QWORD)v15;
      if ( v13 )
        sub_8B3AA0(a2, v15, v13);
      sub_8B3AA0(a2, v12 + 1, 0x10u);
    }
  }
  return v16[0] - __readfsqword(0x28u);
}

