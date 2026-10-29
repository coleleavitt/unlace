__int64 __fastcall sub_738140(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  void *v8; // rdi
  __int64 v9; // rbp
  const void *v10; // rsi
  _BYTE v12[41]; // [rsp+Fh] [rbp-29h] BYREF

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "__attribute__((enable_if");
  v12[0] = 0;
  sub_5FF0F0(a2, "(");
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_722380(a2, v12);
  v6 = sub_5FF0F0(a2, "\"");
  v7 = *(unsigned int *)(a1 + 48);
  v8 = *(void **)(v6 + 32);
  v9 = v6;
  v10 = *(const void **)(a1 + 56);
  if ( *(_QWORD *)(v6 + 24) - (_QWORD)v8 < v7 )
  {
    v9 = sub_26240F0(v6, v10, *(unsigned int *)(a1 + 48));
  }
  else if ( *(_DWORD *)(a1 + 48) )
  {
    memcpy(v8, v10, *(unsigned int *)(a1 + 48));
    *(_QWORD *)(v9 + 32) += v7;
  }
  sub_5FF0F0(v9, "\"");
  if ( !v12[0] )
    sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

