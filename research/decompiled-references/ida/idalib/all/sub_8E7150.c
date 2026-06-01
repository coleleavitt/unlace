unsigned __int64 __fastcall sub_8E7150(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  size_t v5; // rax
  __int64 v6; // r14
  __int64 i; // rbx
  _QWORD *v8; // r15
  size_t v9; // rax
  _BYTE v11[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _QWORD v12[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v12[0] = __readfsqword(0x28u);
  v4 = haystack;
  if ( !v2 )
    v4 = *(const char **)a1;
  sub_649F10(a2, v4);
  v5 = pack_dq(v11, v12, *(_QWORD *)(a1 + 24) + 1LL) - (_QWORD)v11;
  if ( v5 )
    sub_8D77E0(a2, v11, v5);
  sub_8D77E0(a2, (const void *)(a1 + 32), 0x10u);
  v6 = *(_QWORD *)(a1 + 56);
  sub_3A0970(a2, v6);
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 24 * i);
      v9 = pack_dq(v11, v12, *v8 + 1LL) - (_QWORD)v11;
      if ( v9 )
        sub_8D77E0(a2, v11, v9);
      sub_8D77E0(a2, v8 + 1, 0x10u);
    }
  }
  return v12[0] - __readfsqword(0x28u);
}
