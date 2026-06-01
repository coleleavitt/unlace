__int64 __fastcall sub_7379F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v14[41]; // [rsp+Fh] [rbp-29h] BYREF

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  sub_5FF0F0(a2, "__attribute__((diagnose_if");
  v14[0] = 0;
  sub_5FF0F0(a2, "(");
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_AE6C50(*(_QWORD *)(a1 + 40), a2, 0, a3, 0, 0, "\n", 1u);
  sub_5FF0F0(a2, &byte_3B9466E);
  sub_722380(a2, v14);
  v6 = sub_5FF0F0(a2, "\"");
  v7 = sub_722320(v6, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
  sub_5FF0F0(v7, "\"");
  sub_722380(a2, v14);
  v8 = "error";
  v9 = sub_5FF0F0(a2, "\"");
  if ( *(_DWORD *)(a1 + 64) )
    v8 = "warning";
  v10 = sub_5FF0F0(v9, v8);
  sub_5FF0F0(v10, "\"");
  sub_722380(a2, v14);
  v11 = sub_5FF0F0(a2, "\"");
  v12 = sub_722320(v11, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 68));
  sub_5FF0F0(v12, "\"");
  if ( !v14[0] )
    sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

