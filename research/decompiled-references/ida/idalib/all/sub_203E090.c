__int64 __fastcall sub_203E090(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // al
  __int64 *v5; // rax
  __int64 v6; // r13
  size_t v7; // rax
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rbx
  size_t v11; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  char v14; // [rsp+8h] [rbp-40h]
  char *v15; // [rsp+10h] [rbp-38h]
  __int64 v16; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIGlobalVariableExpression(");
  v13 = a1;
  v15 = ", ";
  v4 = *(_BYTE *)(a2 - 16);
  v14 = 1;
  v16 = a3;
  if ( (v4 & 2) != 0 )
    v5 = *(__int64 **)(a2 - 32);
  else
    v5 = (__int64 *)(a2 - 8LL * ((v4 >> 2) & 0xF) - 16);
  v6 = *v5;
  v7 = j__strlen("var");
  sub_203A140((__int64)&v13, "var", v7, v6);
  v8 = *(_BYTE *)(a2 - 16);
  if ( (v8 & 2) != 0 )
    v9 = *(_QWORD *)(a2 - 32);
  else
    v9 = a2 - 8LL * ((v8 >> 2) & 0xF) - 16;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = j__strlen("expr");
  sub_203A140((__int64)&v13, "expr", v11, v10);
  return sub_995540(a1, ")");
}
